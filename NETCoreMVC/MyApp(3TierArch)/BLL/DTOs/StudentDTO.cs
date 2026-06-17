using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Text;

namespace BLL.DTOs
{
    public class StudentDTO
    {
        public int Id {  get; set; }
        [Required]
        public string Name { get; set; }
        public int DeptId { get; set; }
        //[Required]
        //public double Cgpa { get; set; }

    }
}
