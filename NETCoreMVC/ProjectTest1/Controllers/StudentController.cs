using Microsoft.AspNetCore.Mvc;
using System.Net.Cache;
using ProjectTest1.Models;

namespace ProjectTest1.Controllers
{
    public class StudentController : Controller
    {
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
        public IActionResult Create(Student student)
        {
            return RedirectToAction("Success");
        }

        public IActionResult Details()
        {
            var student = new Student { Id = 1, Name = "Tawfique", Age = 25 };
            return View(student);
        }
    }
}
