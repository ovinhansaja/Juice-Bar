#include<iostream>

using namespace std;

class User
{
public:
    void login()
    {
        string user;
        int password;

        cout<<"\n\tUsername     : "; cin>>user;
        cout<<"\tPassword     : ";    cin>>password;

        if(user=="admin")
        {
            if(password==1234)
            {
                cout<<"************************************************"<<endl;
                cout<<"\tLOGIN SUCCESSFUL"<<endl;
                cout<<"************************************************\n"<<endl;
            }
            else
            {
                cout<<"************************************************"<<endl;
                cout<<"\tWRONG PASSWORD"<<endl;
                cout<<"\t\tTRY AGEIN"<<endl;
                cout<<"************************************************\n"<<endl;
                login();
            }
        }
        else if(user=="customer")
        {
            if(password==0000)
            {
                cout<<"************************************************"<<endl;
                cout<<"\tLOGIN SUCCESSFUL"<<endl;
                cout<<"************************************************\n"<<endl;
            }
            else
            {
                cout<<"************************************************"<<endl;
                cout<<"\tWRONG PASSWORD"<<endl;
                cout<<"\t\tTRY AGEIN"<<endl;
                cout<<"************************************************\n"<<endl;
                login();
            }
        }
        else
        {
            cout<<"************************************************"<<endl;
            cout<<"\tWRONG USERNAME"<<endl;
            cout<<"\t\tTRY AGEIN"<<endl;
            cout<<"************************************************\n"<<endl;
            login();
        }
    }
};
class Juice:public User
{
    string juice;
    float price;
public:
    void setjuice(string j)
    {
        juice=j;
    }
    string getjuice()
    {
        return juice;
    }
    void setprice(float p)
    {
        price=p;
    }
    float getprice()
    {
        return price;
    }
};
class Bill:public Juice
{
public:
    int code,qty;
    float mtot,atot,mftot,ltot,otot,watot,wotot,pitot,ptot,avtot,fstot,vmstot,cmstot,smstot,wtot;
    float all,cash,bal;

    void billing()
    {
        cout<<"#";  cin>>code;

        if(code==000)
        {
            total();
        }
        else if(code==001)
        {
            float mp=150.00;
            cout<<"\tMango Juice\t\t"<<mp<<"\tx";           cin>>qty;
            mtot=mp*qty;
            cout<<"\t\t\t\t\t"<<mtot<<endl;
            billing();
        }
        else if(code==002)
        {
            float ap=200.00;
            cout<<"\tApple Juice\t\t"<<ap<<"\tx";           cin>>qty;
            atot=ap*qty;
            cout<<"\t\t\t\t\t"<<atot<<endl;
            billing();
        }
        else if(code==003)
        {
            float mfp=150.00;
            cout<<"\tMixfruit Juice\t\t"<<mfp<<"\tx";       cin>>qty;
            mftot=mfp*qty;
            cout<<"\t\t\t\t\t"<<mftot<<endl;
            billing();
        }
        else if(code==004)
        {
            float lp=100.00;
            cout<<"\tLime Juice\t\t"<<lp<<"\tx";            cin>>qty;
            ltot=lp*qty;
            cout<<"\t\t\t\t\t"<<ltot<<endl;
            billing();
        }
        else if(code==005)
        {
            float op=100.00;
            cout<<"\tOrange Juice\t\t"<<op<<"\tx";          cin>>qty;
            otot=op*qty;
            cout<<"\t\t\t\t\t"<<otot<<endl;
            billing();
        }
        else if(code==006)
        {
            float wap=150.00;
            cout<<"\tWatermelon Juice\t"<<wap<<"\tx";       cin>>qty;
            watot=wap*qty;
            cout<<"\t\t\t\t\t"<<watot<<endl;
            billing();
        }
        else if(code==007)
        {
            float wop=180.00;
            cout<<"\tWoodapple Juice\t\t"<<wop<<"\tx";      cin>>qty;
            wotot=wop*qty;
            cout<<"\t\t\t\t\t"<<wotot<<endl;
            billing();
        }
        else if(code==010)
        {
            float pip=200.00;
            cout<<"\tPineapple Juice\t\t"<<pip<<"tx";       cin>>qty;
            pitot=pip*qty;
            cout<<"\t\t\t\t\t"<<pitot<<endl;
            billing();
        }
        else if(code==011)
        {
            float pp=150.00;
            cout<<"\tPapaya Juice\t\t"<<pp<<"\tx";          cin>>qty;
            ptot=pp*qty;
            cout<<"\t\t\t\t\t"<<ptot<<endl;
            billing();
        }
        else if(code==012)
        {
            float avp=180.00;
            cout<<"\tAvocado Juice\t\t"<<avp<<"\tx";        cin>>qty;
            avtot=avp*qty;
            cout<<"\t\t\t\t\t"<<avtot<<endl;
            billing();
        }
        else if(code==013)
        {
            float fsp=250.00;
            cout<<"\tFruit Salad\t\t"<<fsp<<"\tx";          cin>>qty;
            fstot=fsp*qty;
            cout<<"\t\t\t\t\t"<<fstot<<endl;
            billing();
        }
        else if(code==014)
        {
            float vmsp=250.00;
            cout<<"\tVanila MilkShake\t"<<vmsp<<"\tx";      cin>>qty;
            vmstot=vmsp*qty;
            cout<<"\t\t\t\t\t"<<vmstot<<endl;
            billing();
        }
        else if(code==015)
        {
            float cmsp=300.00;
            cout<<"\tChocolate MilkShake\t"<<cmsp<<"\tx";   cin>>qty;
            cmstot=cmsp*qty;
            cout<<"\t\t\t\t\t"<<cmstot<<endl;
            billing();
        }
        else if(code==016)
        {
            float smsp=300.00;
            cout<<"\tStrawberry MilkShake\t"<<smsp<<"\tx";  cin>>qty;
            smstot=smsp*qty;
            cout<<"\t\t\t\t\t"<<smstot<<endl;
            billing();
        }
        else if(code==017)
        {
            float wp=80.00;
            cout<<"\tWater\t\t\t "<<wp<<"\tx";              cin>>qty;
            wtot=wp*qty;
            cout<<"\t\t\t\t\t"<<wtot<<endl;
            billing();
        }
        else
        {
            cout<<"\tWrong source code!\n"<<endl;
            billing();
        }
    }
    void total()
    {
        all=mtot+atot+mftot+ltot+otot+watot+wotot+pitot+ptot+avtot+fstot+vmstot+cmstot+smstot+wtot;

        cout<<"\n_______________________________________________"<<endl;
        cout<<"Total\t\t\t\t\t"<<all<<endl;
        cout<<"Cash\t\t\t\t\t"; cin>>cash;

        bal=cash-all;

        cout<<"_______________________________________________"<<endl;
        cout<<"Balance\t\t\t\t\t"<<bal<<endl;
    }
};
int main()
{
    User user;
    user.login();

    cout<<"************************************************\n"<<endl;
    cout<<"\t~WELCOME TO COOLSPOT~\n"<<endl;
    cout<<"Tel:0117368382\t\tEmail:coolspot@bar.com"<<endl;
    cout<<"\n************************************************\n"<<endl;

    cout<<"*******************JUICE LIST*******************\n"<<endl;

    Juice mango;
    mango.setjuice("Mango Juice");              mango.setprice(150.00);
    cout<<"#001\t"<<mango.getjuice()<<"\t\t\t"<<mango.getprice()<<endl;
    Juice apple;
    apple.setjuice("Apple Juice");              apple.setprice(200.00);
    cout<<"#002\t"<<apple.getjuice()<<"\t\t\t"<<apple.getprice()<<endl;
    Juice mix;
    mix.setjuice("Mixfruit Juice");             mix.setprice(150.00);
    cout<<"#003\t"<<mix.getjuice()<<"\t\t\t"<<mix.getprice()<<endl;
    Juice lime;
    lime.setjuice("Lime Juice");                lime.setprice(100.00);
    cout<<"#004\t"<<lime.getjuice()<<"\t\t\t"<<lime.getprice()<<endl;
    Juice orange;
    orange.setjuice("Orange Juice");            orange.setprice(100.00);
    cout<<"#005\t"<<orange.getjuice()<<"\t\t\t"<<orange.getprice()<<endl;
    Juice watermelon;
    watermelon.setjuice("Watermelon Juice");    watermelon.setprice(150.00);
    cout<<"#006\t"<<watermelon.getjuice()<<"\t\t"<<watermelon.getprice()<<endl;
    Juice woodapple;
    woodapple.setjuice("Woodapple Juice");      woodapple.setprice(180.00);
    cout<<"#007\t"<<woodapple.getjuice()<<"\t\t\t"<<woodapple.getprice()<<endl;
    Juice pineapple;
    pineapple.setjuice("Pineapple Juice");      pineapple.setprice(200.00);
    cout<<"#008\t"<<pineapple.getjuice()<<"\t\t\t"<<pineapple.getprice()<<endl;
    Juice papaya;
    papaya.setjuice("Papaya Juice");            papaya.setprice(150.00);
    cout<<"#009\t"<<papaya.getjuice()<<"\t\t\t"<<papaya.getprice()<<endl;
    Juice avocado;
    avocado.setjuice("Avocado Juice");          avocado.setprice(180.00);
    cout<<"#010\t"<<avocado.getjuice()<<"\t\t\t"<<avocado.getprice()<<endl;
    Juice salad;
    salad.setjuice("Fruit Salad");              salad.setprice(250.00);
    cout<<"#011\t"<<salad.getjuice()<<"\t\t\t"<<salad.getprice()<<endl;
    Juice vmshake;
    vmshake.setjuice("Vanila MilkShake");      vmshake.setprice(250.00);
    cout<<"#012\t"<<vmshake.getjuice()<<"\t\t"<<vmshake.getprice()<<endl;
    Juice cmshake;
    cmshake.setjuice("Chocolate MilkShake");   cmshake.setprice(300.00);
    cout<<"#013\t"<<cmshake.getjuice()<<"\t\t"<<cmshake.getprice()<<endl;
    Juice smshake;
    smshake.setjuice("Strawberry MilkShake");  smshake.setprice(300.00);
    cout<<"#014\t"<<smshake.getjuice()<<"\t\t"<<smshake.getprice()<<endl;
    Juice water;
    water.setjuice("Water");                    water.setprice(80.00);
    cout<<"#015\t"<<water.getjuice()<<"\t\t\t\t "<<water.getprice()<<endl;

    cout<<"\n_____________________ORDER_____________________\n"<<endl;

    Bill count;
    count.billing();

    cout<<"\n************************************************"<<endl;
    cout<<"\tTHANK YOU!!!"<<endl;
    cout<<"************************************************\n"<<endl;

    string nl;

    cout<<"Press (n) to Next\nPress (l) to Logout\nPress anykey to Exit"<<endl;    cin>>nl;

    if(nl=="n")
    {
        cout<<"\n************************************************"<<endl;
        cout<<"\tNEXT CUSTOMER PLEASE"<<endl;
        cout<<"************************************************\n"<<endl;

        count.billing();
    }
    else if(nl=="l")
    {
        cout<<"\n************************************************"<<endl;
        cout<<"\tLOGOUT SUCCESSFUL"<<endl;
        cout<<"************************************************\n"<<endl;

        user.login();
    }
    else
    {
        cout<<"\n************************************************"<<endl;
        cout<<"\t\tBYE"<<endl;
        cout<<"************************************************\n\n\n"<<endl;
    }
}
