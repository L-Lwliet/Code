using AutoMapper;
using BLL.DTOs;
using DAL.EF.Tables;
using DAL.Repository;
using Microsoft.Identity.Client;
using System;
using System.Collections.Generic;
using System.Text;

namespace BLL.Services
{
    public class StudentService
    {
        StudentRepo repo;
        Mapper mapper;

        public StudentService(StudentRepo repo)
        {
            this.repo = repo;
            mapper = MapperConfig.GetMapper();
        }

        public List<StudentDTO> Get()
        {
            var data = repo.Get();
            var ret = mapper.Map<List<StudentDTO>>(data);
            return ret;
        }

        public bool Create(StudentDTO student)
        {
            var u = mapper.Map<Student>(student);
            var rs = repo
        }

    }
}
