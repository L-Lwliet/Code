using BLL.Services;
using Microsoft.AspNetCore.Mvc;

namespace MyApp.Controllers
{
    public class StudentController : Controller
    {
        StudentService service;
        public StudentController(StudentService service)
        {
            this.service = service;
        }

        public IActionResult Index()
        {
            var data = service.Get();
            return View(data);
        }
    }
}
