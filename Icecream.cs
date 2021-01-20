using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace OOP_laba10_cs
{
    class Icecream
    {
        private static int id_gener = 1;
        private int id;
        private String name;
        private String country;
        private int massa;
        private int milk;
        private int expiration_date;
        private int chocolate;
        private Date date_post;
        public String Name
        {
            get
            {
                return name;
            }
            set
            {
                name = value;
            }
        }
        public String Country
        {
            get
            {
                return country;
            }
            set
            {
                country = value;
            }
        }

        public int Massa
        {
            get
            {
                return massa;
            }
            set
            {
                massa = value;
            }
        }

        public int Milk
        {
            get
            {
                return milk;
            }
            set
            {
                milk = value;
            }
        }
        public int Expiration_date
        {
            get
            {
                return expiration_date;
            }
            set
            {
                expiration_date = value;
            }
        }
        public int Chocolate
        {
            get
            {
                return chocolate;
            }
            set
            {
                chocolate = value;
            }
        }
        public int Number
        {
            get
            {
                return date_post.Day;
            }
            set
            {
                date_post.Day = value;
            }
        }
        public Icecream()
        {
            name = "IceBerg";
            massa = 400;
            milk = 300;
            expiration_date = 120;
            chocolate = 0;
            country = "Germany";
            this.date_post = new Date();
        }
        public Icecream(String nazv)
        {
            name = nazv;
            massa = 400;
            milk = 300;
            expiration_date = 120;
            chocolate = 0;
            country = "Germany";
            this.date_post = new Date();
        }
        public Icecream(String nazv, int mas, int sod_milk, int ex_date, int ch, String countr, int x, int y, int k)
        {
            name = nazv;
            massa = mas;
            milk = sod_milk;
            expiration_date = ex_date;
            chocolate = ch;
            this.date_post = new Date(x, y, k);
            country = countr;
        }

        int check_string(string str)
        {

            for (int i = 0; i < str.Length; ++i)
            {
                if ((int)str[i] < 'A' || ((int)str[i] > 'Z' && (int)str[i] < 'a') || (int)str[i] > 'z')
                {
                    return 1;
                }
                ++i;
            }
            return 0;
        }

        public void Init__icecream_in()
        {
            int flag = 1;
            while (flag == 1)
                try
                {
                    Console.WriteLine("Введите название");
                    name = Console.ReadLine();
                    if (check_string(name) == 1)
                        throw new Exception("В названии не должно быть других символов,кроме букв!");
                    Console.WriteLine("Введите страну производства");
                    country = Console.ReadLine();
                    if (check_string(country) == 1)
                        throw new Exception("В стране не должно быть других символов,кроме букв!");
                    Console.WriteLine("Введите массу");
                    string massa_string;
                    massa_string = Console.ReadLine();
                    if (!Int32.TryParse(massa_string, out massa))
                        throw new Exception("Масса должна быть числом!");
                    Console.WriteLine("Введите количество молока в мл");
                    string milk_string;
                    milk_string = Console.ReadLine();
                    if (!Int32.TryParse(milk_string, out milk))
                        throw new Exception("Молоко должно быть числом!");
                    Console.WriteLine("Введите срок годности в днях");
                    string ex_string;
                    ex_string = Console.ReadLine();
                    if (!Int32.TryParse(ex_string, out expiration_date))
                        throw new Exception("Срок годности должен быть числом!");
                    Console.WriteLine("Введите наличие шоколада: 1 - есть, 0 - нет");
                    string ch_string;
                    ch_string = Console.ReadLine();
                    if (!Int32.TryParse(ch_string, out chocolate))
                        throw new Exception("Наличие шоколада должно быть целым числом должен быть числом!");
                    
                    int year = 0, month = 0, day = 0;
                    Console.WriteLine("Введите день поставки (1 - 31)");
                    string d_string;
                    d_string = Console.ReadLine();
                    if (!Int32.TryParse(d_string, out day))
                        throw new Exception("День поставки должен быть числом!");
                    Console.WriteLine("Введите месяц поставки (1 - 12)");
                    string m_string;
                    m_string = Console.ReadLine();
                    if (!Int32.TryParse(m_string, out month))
                        throw new Exception("Месяц поставки должен быть числом!");
                    Console.WriteLine("Введите год поставки");
                    string y_string;
                    y_string = Console.ReadLine();
                    if (!Int32.TryParse(y_string, out year))
                        throw new Exception("Год поставки должен быть числом!");
                    this.date_post = new Date(day, month, year);

                    flag = 0;

                }
                catch (Exception e)
                {
                    Console.WriteLine($"Ошибка: {e.Message}");
                    flag = 1;
                }
        }

            public String Read_String()
        {
            String str = Console.ReadLine();
            return str;
        }
        public int Read_Int()
        {
            int n = Convert.ToInt32(Console.ReadLine());
            return n;
        }
        public void Display()
        {
            Console.WriteLine($"Name: {name} ");
            Console.WriteLine($"Massa: {massa} ");
            Console.WriteLine($"milk: {milk} ");
            Console.WriteLine($"expiration_date: {expiration_date} ");
            Console.WriteLine($"chocolate: {chocolate} ");
            date_post.Display();
            Console.WriteLine($"Country: {country} ");
        }
        public int Add(Icecream ice1, Icecream ice2)
        {
            Icecream ice3 = new Icecream();
            ice3.massa = ice1.massa + ice2.massa;
            return ice3.massa;
        }
        public void output_date_postavk()
        {
            date_post.output_date_postavk();
        }
        public void Country_output()
        {
            Console.WriteLine($"Country: {country}");
        }
        public int one(Icecream icecream)
        {
            return icecream.massa + 100;
        }
        public int two()
        {
            return one(this);
        }
        //перегрузка оператора + с помощью свойства Massa
        public static Icecream operator +(Icecream ice1, Icecream ice2)
        {
            return new Icecream { Massa = ice1.massa + ice2.massa };
        }

        //перегрузка оператора ++ с помощью свойства Massa
        public static Icecream operator ++(Icecream ice1)
        {
            return new Icecream { Massa = ice1.massa + 1 };
        }

        //создание уникального ID с помощью статической переменной id_generator
        public int get_id()
        {
            id = id_gener++;
            return id;
        }
        //статический метод для получения значения текущего ID без создания объекта класса
        public static int get_id_now()
        {
            return id_gener;
        }
    }
}
