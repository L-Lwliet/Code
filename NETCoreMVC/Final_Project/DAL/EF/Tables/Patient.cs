using System;
using System.Collections.Generic;

namespace DAL.EF.Tables;

public partial class Patient
{
    public int PatientId { get; set; }

    public int UserId { get; set; }

    public DateOnly DateOfBirth { get; set; }

    public string Gender { get; set; } = null!;

    public string? BloodGroup { get; set; }

    public string Address { get; set; } = null!;

    public string EmergencyContact { get; set; } = null!;

    public virtual ICollection<Appointment> Appointments { get; set; } = new List<Appointment>();

    public virtual ICollection<Bill> Bills { get; set; } = new List<Bill>();

    public virtual ICollection<Prescription> Prescriptions { get; set; } = new List<Prescription>();

    public virtual User User { get; set; } = null!;
}
