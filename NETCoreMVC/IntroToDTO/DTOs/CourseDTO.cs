using System.ComponentModel.DataAnnotations;

namespace IntroToDTO.DTOs
{
    public class CourseDTO
    {
        public int Id { get; set; }
        [StringLength(50)]
        [Required]
        public string Name { get; set; }
        [Required]
        public int Did {  get; set; }
    }
}
