package com.company;

public class Data {
    private int year;
    private int month;
    private int day;

    public Data()
    {
        day = 31;
        month = 12;
        year = 2020;
    }
    public Data(int year)
    {
        this.year = year;
        month = 12;
        day = 31;
    }
    public Data(int day, int month, int year)
    {
        this.day = day;
        this.month = month;
        this.year = year;
    }
    public void Display(){
        String out="Day:"+day;
        System.out.println(out);
        out="Month:"+month;
        System.out.println(out);
        out="Year:"+year;
        System.out.println(out);
    }
    public int Add(Data d1,Data d2){
        Data d3 = new Data();
        d3.year=d1.year+d2.year;
        return d3.year;
    }
    public void output_date_postavk(){
        String out=day+" "+month+" "+year;
        System.out.println(out);
    }
}
