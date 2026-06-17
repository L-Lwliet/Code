using System;
using System.Collections.Generic;

namespace DAL.EF.Tables;

public partial class AuditLog
{
    public int LogId { get; set; }

    public int UserId { get; set; }

    public string Action { get; set; } = null!;

    public string TableName { get; set; } = null!;

    public DateTime ActionTime { get; set; }

    public virtual User User { get; set; } = null!;
}
