using AutoMapper;
using BLL.DTOs;
using DAL.EF.Tables;
using System;
using System.Collections.Generic;
using System.Text;

namespace BLL
{
    internal class MapperConfig
    {
        static MapperConfiguration config = new MapperConfiguration(cfg =>
        {
            cfg.CreateMap<Student, StudentDTO>().ReverseMap();
        });
        public static Mapper GetMapper()
        {
            return new Mapper(config);
        }
    }
}
