using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace OOP_laba10_cs
{
    class Program
    {
        static void Main(string[] args)
        {
            string str_1 = "Slastena";
            string str_2 = "Russia";
            int m = 250;
            int mil = 100;
            int ex = 60;
            int ch = 1;
            int x = 12;
            int y = 10;
            int k = 2020;

            /* Icecream ice1 = new Icecream();
             ice1.Init__icecream_in();
             ice1.Display();*/

            int choice;
            Console.WriteLine("Работа с одномерным массивом объектов класса");
            Icecream[] ice_array = new Icecream[3];
            for (int i = 0; i < 3; ++i)
            {
                Console.WriteLine("Напишите номер варианта действия:");
                Console.WriteLine("1. Ввести новые данные о мороженом");
                Console.WriteLine("2. Вывести существующие данные");
                Console.WriteLine("3. Вывести дату поставки существующего мороженого");
                choice = Convert.ToInt32(Console.ReadLine());
                switch (choice)
                {
                    case 1:
                        ice_array[i] = new Icecream();
                        ice_array[i].Init__icecream_in();
                        ice_array[i].Display();
                        break;
                    case 2:
                        ice_array[i] = new Icecream();
                        ice_array[i].Display();
                        break;
                    case 3:
                        ice_array[i] = new Icecream();
                        ice_array[i].output_date_postavk();
                        break;
                    default:
                        Console.WriteLine("Введите либо 1, 2 или 3");
                        break;
                }
            }
                Console.WriteLine("Работа с двумерным массивом объектов класса");
                Icecream[,] ice_array_2 = new Icecream[3, 2];
                for (int i = 0; i < 3; ++i)
                    for (int j = 0; j < 2; ++j)
                    {
                        Console.WriteLine("Напишите номер варианта действия:");
                        Console.WriteLine("1. Ввести новые данные о мороженом");
                        Console.WriteLine("2. Вывести существующие данные");
                        Console.WriteLine("3. Вывести дату поставки существующего мороженого");
                        choice = Convert.ToInt32(Console.ReadLine());
                        switch (choice)
                        {
                            case 1:
                                ice_array[i] = new Icecream();
                                ice_array[i].Init__icecream_in();
                                ice_array[i].Display();
                                break;
                            case 2:
                                ice_array[i] = new Icecream();
                                ice_array[i].Display();
                                break;
                            case 3:
                                ice_array[i] = new Icecream();
                                ice_array[i].output_date_postavk();
                                break;
                            default:
                                Console.WriteLine("Введите либо 1, 2 или 3");
                                break;
                        }
                    }
                Console.ReadKey();
            



        }
                
        }
    }

