using System;
using System.Collections.Generic;

namespace DAL.EF.Tables;

public partial class Bill
{
    public int BillId { get; set; }

    public int AppointmentId { get; set; }

    public int PatientId { get; set; }

    public decimal TotalAmount { get; set; }

    public decimal PaidAmount { get; set; }

    public decimal DueAmount { get; set; }

    public string PaymentStatus { get; set; } = null!;

    public DateTime CreatedAt { get; set; }

    public virtual Appointment Appointment { get; set; } = null!;

    public virtual Patient Patient { get; set; } = null!;

    public virtual ICollection<Payment> Payments { get; set; } = new List<Payment>();
}
