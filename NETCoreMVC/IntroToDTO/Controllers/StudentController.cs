using IntroToDTO.DTOs;
using IntroToDTO.EF;
using IntroToDTO.EF.Tables;
using Microsoft.AspNetCore.Mvc;

namespace IntroToDTO.Controllers
{
    public class StudentController : Controller
    {
        SchoolDbContext db;
        public StudentController(SchoolDbContext db)
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
            var depts = db.Departments.ToList();
            ViewBag.Departments = depts;
            return View();
        }

        [HttpPost]
        public IActionResult Create(StudentDTO s)
        {
            if (ModelState.IsValid)
            {
                var st = new Student()
                {
                    Name = s.Name,
                    DeptId = s.DeptId
                };
                db.Students.Add(st);
                db.SaveChanges();
                return RedirectToAction("Index");
            }
            return View(s);
        }
        
    }
}
