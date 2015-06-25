
#include "traitement.h"
#include <math.h>

#define PI 3.14159265


QVector<double>*  traitement(QVector<double>* s)
{
    QVector<double>* buffer = NULL;

    unsigned int taille = s->size();


    buffer = s;

    double *data = s->data();



    double *data_buff = buffer->data();


    double max_A = 0;
    double min_A = 0;

    double Gain = 0;


    double *dataNorm;
    dataNorm = new double[taille];

    double *dataNormAcos;
    dataNormAcos = new double[taille];

    double *diffDataNormAcos;
    diffDataNormAcos = new double[taille];


    /*double *diffDataMod;
    diffDataMod = new double[taille];

    double *vectDiffDataMod;
    vectDiffDataMod = new double[taille];

    double *frange;
    frange = new double[taille];

    double *reconstitution;
    reconstitution = new double[taille];

    double *signal;
    signal = new double[taille];


    double *signalReconstruit;
    signalReconstruit = new double[taille];

    double *signalPB;
    signalPB = new double[taille];

    double *signalPH;
    signalPH = new double[taille];*/


    
    // //////////////////////////////////////////////////// //
    // Detection du min et du max du signal pour normaliser //
    // //////////////////////////////////////////////////// //

    min_A = data[0];
    max_A = data[0];

    for (unsigned int i=1; i<taille; i++)
    {
        if(data[i] > data[i-1])
        {
            if(max_A < data[i])
            {
                max_A = data[i];
            }
        }

        else if(data[i] < data[i-1])
        {
            if(min_A > data[i])
            {
                min_A = data[i];
            }
        }
    }

    Gain = 2/(max_A-min_A); // Amplitude entre -1 et 1

    for (unsigned int i=0; i<taille; i++)
    {
        dataNorm[i] = Gain * data[i];
    }

    // //////////////////////////////////////////////////// //
    // //////////////////////////////////////////////////// //



    // //////////////////////////////////////////////////// //
    // //// Arccosinus --> estimation de la phase [pi] //// //
    // //////////////////////////////////////////////////// //

    diffDataNormAcos[0] = diffDataNormAcos[1];
    data_buff[0] = data_buff[1];

    for (unsigned int i=1; i<taille; i++)
    {
        dataNormAcos[i] = acos(dataNorm[i]);

        diffDataNormAcos[i] = dataNormAcos[i] - dataNormAcos[i-1];

        data_buff[i] = 4 * diffDataNormAcos[i];
    }

    // //////////////////////////////////////////////////// //
    // //////////////////////////////////////////////////// //



































    /*unsigned int dt = 20;
    double gain = 2;

    for (unsigned int i=1+dt; i<taille-(dt+1); i++)
    {
        diffDataMod[i] = data[i+dt]-data[i];


        if(diffDataMod[i]>diffDataMod[i-dt] && diffDataMod[i]>diffDataMod[i+dt])
        {
            vectDiffDataMod[i] = gain*diffDataMod[i];
        }

        else if(diffDataMod[i]<diffDataMod[i-dt] && diffDataMod[i]<diffDataMod[i+dt])
        {
            vectDiffDataMod[i] = gain*diffDataMod[i];
        }

        else
        {
            vectDiffDataMod[i] = 0;
        }

        //data_buff[i]=vectDiffDataMod[i];
    }


    double seuil = 1;
    int flag_down = 0;
    int flag_up = 0;


    for (unsigned int i=1; i<taille-2; i++)
    {
        if(vectDiffDataMod[i]<(-1)*seuil && flag_up == 0)
        {
            frange[i] = 1;
            flag_up = 1;
        }

        else if(vectDiffDataMod[i]>seuil && flag_down == 0)
        {
            frange[i] = -1;
            flag_down = 1;
        }

        else
        {

            if(vectDiffDataMod[i]>=(-1)*seuil && flag_up == 1)
                flag_up = 0;

            if(vectDiffDataMod[i]<=seuil && flag_down == 1)
                flag_down = 0;

            frange[i]=0;
        }




         //data_buff[i] = frange[i];
     }

    double moy = 0;


    for (unsigned int i=1; i<taille-2; i++)
    {
        if(frange[i] == 1)
        {
            reconstitution[i]=reconstitution[i-1]+0.5;
        }

        else if(frange[i] == -1)
        {
            reconstitution[i]=reconstitution[i-1]-0.5;
        }

        else
            reconstitution[i]=reconstitution[i-1];

        signal[i] = reconstitution[i] + data_mod[i];

        moy = moy + signal[i];

    }


    for (unsigned int i=1; i<taille-2; i++)
    {
        signalReconstruit[i] = signal[i] - signal[i-1];

        signalPB[i] = signalReconstruit[i] + signalReconstruit[i-1];
        signalPH[i] = signalReconstruit[i] - signalPB[i];
    }*/





    return buffer;

}



