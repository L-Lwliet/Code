using System.ComponentModel.DataAnnotations;

namespace IntroToDTO.DTOs
{
    public class DepartmentDTO
    {
        public int Id { get; set; }
        [StringLength(50)]
        [Required]
        public string Name { get; set; }
    }
}
