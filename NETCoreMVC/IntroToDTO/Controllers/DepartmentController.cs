using IntroToDTO.DTOs;
using IntroToDTO.EF;
using IntroToDTO.EF.Tables;
using Microsoft.AspNetCore.Mvc;

namespace IntroToDTO.Controllers
{
    public class DepartmentController : Controller
    {
        SchoolDbContext db;
        
        public DepartmentController(SchoolDbContext db)
        {
            this.db = db;
        }
        public IActionResult Index()
        {
            return View();
        }

        [HttpGet]
        public IActionResult Create()
        {
            return View();
        }

        [HttpPost]
        public IActionResult Create(DepartmentDTO d)
        {
            if (ModelState.IsValid)
            {
                var dept = new Department()
                {
                    Name = d.Name,
                };

                db.Departments.Add(dept);
                db.SaveChanges();
                return RedirectToAction("Index");
            }

            return View(d);
        }
    }
}
