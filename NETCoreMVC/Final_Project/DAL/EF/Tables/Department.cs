using System;
using System.Collections.Generic;

namespace DAL.EF.Tables;

public partial class Department
{
    public int DeptId { get; set; }

    public string DeptName { get; set; } = null!;

    public string Description { get; set; } = null!;

    public virtual ICollection<Doctor> Doctors { get; set; } = new List<Doctor>();
}
