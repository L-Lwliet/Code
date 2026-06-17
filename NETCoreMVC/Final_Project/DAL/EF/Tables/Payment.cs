using System;
using System.Collections.Generic;

namespace DAL.EF.Tables;

public partial class Payment
{
    public int PaymentId { get; set; }

    public int BillId { get; set; }

    public decimal Amount { get; set; }

    public string PaymentMethod { get; set; } = null!;

    public DateTime PaymentDate { get; set; }

    public virtual Bill Bill { get; set; } = null!;
}
