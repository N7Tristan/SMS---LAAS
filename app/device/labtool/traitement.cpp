
#include "traitement.h"

QVector<double>*  traitement(QVector<double>* s)
{
    QVector<double>* buffer = NULL;

    unsigned int taille = s->size();


    buffer = s;

    double *data = s->data();

    double *data_mod;
    data_mod = new double[taille];

    double *data_buff = buffer->data();



    double max_A = -1;
    double min_A = 1;
    double min1 = 1;
    double min2 = 1;
    double max1 = -1;
    double max2 = -1;


    double cpt_max=0;
    double cpt_min=0;


    double *frange;
    frange = new double[taille];

    double *reconstitution;
    reconstitution = new double[taille];


    double sens = 0;
    double sens_precedent = 0;

    double seuil = 0.05;

    double Amplitude = 0;
    double Gain = 1;

    double moy=0;

    double mrf=0;
    double C=0;

    double *Cvect;
    Cvect = new double[taille];




    for (unsigned int i=1; i<taille-2; i++)
    {
        data_mod[i] = Gain * data[i];

        if(data_mod[i] > data_mod[i-1])
        {
            if(max_A < data_mod[i])
            {
                max_A = data_mod[i];
            }
        }

        else if(data_mod[i] < data_mod[i-1])
        {
            if(min_A > data_mod[i])
            {
                min_A = data_mod[i];
            }
        }




        if(i%6400 == 0)
        {
            Amplitude=(max_A-min_A)/Gain;
            Gain=1/Amplitude;

            mrf = min1 - min2;

            C=2.9*mrf+1.46;

            max_A=-1;
            min_A=1;

            min1=1;
            min2=1;

            max1=-1;
            max2=-1;
        }

        Cvect[i]=C;

        if(data_mod[i]-data_mod[i-1] > seuil)
        {
            frange[i]=-1;

            if(min2>data_mod[i-1])
                min2=data_mod[i-1];
        }

        else if(data_mod[i]-data_mod[i-1] < (-1)*seuil)
        {
            frange[i]=1;

            if(min1>data_mod[i])
                min1=data_mod[i];
        }

        else
            frange[i]=0;




        if(frange[i]==-1)
            sens=-1;
        else if(frange[i]==1)
            sens=1;
        else
            sens=sens_precedent;


        if(frange[i-1]==-1 && frange[i]==0 && i > 6400)
        {
            cpt_min=cpt_min+1;
            reconstitution[i]=cpt_max-cpt_min;
        }
        else if(frange[i-1]==1 && frange[i]==0 && i > 6400)
        {
            cpt_max=cpt_max+1;
            reconstitution[i]=cpt_max-cpt_min;
        }


        else if(i > 6400)
            reconstitution[i]=reconstitution[i-1];

        else
            reconstitution[i]=0;


        moy = (moy + reconstitution[i])/i;

        if(i>6400)
            reconstitution[i]=reconstitution[i]-moy;


        sens_precedent=sens;

        data_buff[i] = reconstitution[i]+data_mod[i];

    }



    /*for (unsigned int i=1; i<taille-2; i++)
    {
        data_mod[i] = Gain * data[i];

        if(data_mod[i] > data_mod[i-1])
        {
            if(max_A < data_mod[i])
            {
                max_A = data_mod[i];
            }
        }

        else if(data_mod[i] < data_mod[i-1])
        {
            if(min_A > data_mod[i])
            {
                min_A = data_mod[i];
            }
        }


        if(data_mod[i] - data_mod[i-1] > seuil)
        {
            frange[i]=-1;

            if(min2>data_mod[i-1])
                min2=data_mod[i-1];
        }

        else if(data_mod[i] - data_mod[i-1] < (-1)*seuil)
        {
            frange[i]=1;

            if(min1>data_mod[i])
                min1=data_mod[i];
        }

        else
            frange[i]=0;



        if(frange[i]==-1)
            sens=-1;
        else if(frange[i]==1)
            sens=1;
        else
            sens=sens_precedent;


        if(frange[i-1]==-1 && frange[i]==0 && i > 3200)
        {
            cpt_min=cpt_min+1;
            reconstitution[i]=cpt_max-cpt_min;
        }
        else if(frange[i-1]==1 && frange[i]==0 && i > 3200)
        {
            cpt_max=cpt_max+1;
            reconstitution[i]=cpt_max-cpt_min;
        }

        else if(i > 3200)
            reconstitution[i]=reconstitution[i-1];

        else
            reconstitution[i]=0;


        moy = (moy + reconstitution[i])/i;

        reconstitution[i]=reconstitution[i]-moy;




        sens_precedent=sens;

        data_buff[i] = reconstitution[i];

    }




    for (unsigned int i=0; i<taille; i++)
    {
        moy = moy + reconstitution[i];
    }

    moy = moy / taille;




    for (unsigned int i=6401; i<taille; i++)
    {
        reconstitution[i]=reconstitution[i]-moy;
        data_buff[i] = reconstitution[i]+data[i];


    }*/





    delete[] frange;
    delete[] reconstitution;


    return buffer;

}

