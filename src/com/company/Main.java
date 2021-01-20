package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        String str_1 = "Slastena";
        String str_2 = "Russia";
        int m = 250;
        int mil = 100;
        int ex = 60;
        int ch = 1;
        int x = 12;
        int y = 10;
        int k = 2020;

        /*Icecream ice1 = new Icecream();
        ice1.Init_icecream_in();
        ice1.Display();*/
        int choice;
        System.out.println("Работа с одномерным массивом объектов класса");
        Icecream[] ice_array = new Icecream[3];
        for (int i = 0; i < 3; ++i)
        {
            System.out.println("Напишите номер варианта действия:");
            System.out.println("1. Ввести новые данные о мороженом");
            System.out.println("2. Вывести существующие данные");
            System.out.println("3. Вывести дату поставки существующего мороженого");
            Scanner scanner = new Scanner(System.in);
            choice=scanner.nextInt();

            switch (choice)
            {
                case 1:
                    ice_array[i] = new Icecream();
                    ice_array[i].Init_icecream_in();
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
                    System.out.println("Введите либо 1, 2 или 3");
                    break;
            }
        }
        System.out.println("Работа с двумерным массивом объектов класса");
        Icecream[][]ice_array_2 = new Icecream[3][2];
        for (int i = 0; i < 3; ++i)
            for (int j = 0; j < 2; ++j)
            {
                System.out.println("Напишите номер варианта действия:");
                System.out.println("1. Ввести новые данные о мороженом");
                System.out.println("2. Вывести существующие данные");
                System.out.println("3. Вывести дату поставки существующего мороженого");
                Scanner scanner = new Scanner(System.in);
                choice=scanner.nextInt();

                switch (choice)
                {
                    case 1:
                        ice_array[i] = new Icecream();
                        ice_array[i].Init_icecream_in();
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
                        System.out.println("Введите либо 1, 2 или 3");
                        break;
                }
            }
    }
}
