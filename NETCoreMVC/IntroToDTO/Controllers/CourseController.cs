using IntroToDTO.DTOs;
using IntroToDTO.EF;
using IntroToDTO.EF.Tables;
using Microsoft.AspNetCore.Mvc;
using Microsoft.Identity.Client;

namespace IntroToDTO.Controllers
{
    public class CourseController : Controller
    {
        SchoolDbContext db;
        
        public CourseController(SchoolDbContext db)
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
        public IActionResult Create(CourseDTO d)
        {
            if (ModelState.IsValid)
            {
                var course = new Course() { Name = d.Name};
                db.Courses.Add(course);
                db.SaveChanges();
                return RedirectToAction("Index");
            }
            return View(d);
        }
    }
}
