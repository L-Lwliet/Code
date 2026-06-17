using System;
using System.Collections.Generic;

namespace DAL.EF.Tables;

public partial class PrescriptionItem
{
    public int PrescriptionItemId { get; set; }

    public int PrescriptionId { get; set; }

    public string MedicineName { get; set; } = null!;

    public string Dosage { get; set; } = null!;

    public string Duration { get; set; } = null!;

    public string? Instructions { get; set; }

    public virtual Prescription Prescription { get; set; } = null!;
}
