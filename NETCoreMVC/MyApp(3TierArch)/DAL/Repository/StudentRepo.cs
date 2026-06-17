using DAL.EF;
using DAL.EF.Tables;
using System;
using System.Collections.Generic;
using System.Text;

namespace DAL.Repository
{
    public class StudentRepo
    {
        SchoolDbContext db;
        public StudentRepo(SchoolDbContext db)
        {
            this.db = db;
        }

        public List<Student> Get()
        {
            return db.Students.ToList();
        }

        public bool create(Student student) {
            db.Students.Add(student);
            return db.SaveChanges() > 0;
        }
    }
}
