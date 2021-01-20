using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace OOP_laba10_cs
{
    class Date
    {
        private int year;
        private int month;
        private int day;

        public Date()
        {
            day = 31;
            month = 12;
            year = 2020;
        }
        public Date(int year)
        {
            this.year = year;
            month = 12;
            day = 31;
        }
        public Date(int day, int month, int year)
        {
            this.day = day;
            this.month = month;
            this.year = year;
        }
        public int Day
        {
            get
            {
                return day;
            }
            set
            {
                if (value > 31 || value <= 0)
                    Console.WriteLine("Введено недопустимое значение. Убедитесь, что число от 1 до 31");
                else
                    day = value;
            }
        }
        public int Read_Int()
        {
            int n = Convert.ToInt32(Console.ReadLine());
            return n;
        }
        public void Display()
        {
            Console.WriteLine($"Number:: {day} ");
            Console.WriteLine($"Month: {month} ");
            Console.WriteLine($"Year: {year} ");
        }

        public int Add(Date a, Date b)
        {
            Date c = new Date();
            c.year = a.year + b.year;
            return c.year;
        }

        public void output_date_postavk()
        {
            Console.WriteLine($"{day} {month} {year}");
        }
    }
}
