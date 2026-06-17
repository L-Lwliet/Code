using System;
using System.Collections.Generic;

namespace DAL.EF.Tables;

public partial class Doctor
{
    public int DoctorId { get; set; }

    public int UserId { get; set; }

    public int DeptId { get; set; }

    public string Specialization { get; set; } = null!;

    public decimal ConsultationFee { get; set; }

    public int ExperienceYears { get; set; }

    public TimeOnly AvailableFrom { get; set; }

    public TimeOnly AvailableTo { get; set; }

    public virtual ICollection<Appointment> Appointments { get; set; } = new List<Appointment>();

    public virtual Department Dept { get; set; } = null!;

    public virtual ICollection<Prescription> Prescriptions { get; set; } = new List<Prescription>();

    public virtual User User { get; set; } = null!;
}
