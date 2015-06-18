
#include "traitement.h"

QVector<double>*  traitement(QVector<double>* s) {

    QVector<double>* buffer = NULL;

    double moy=0;

    buffer = s;


    int taille = s->size();


    double *data = s->data();
    double *data_mod;
        data_mod = new double[taille];
    double *data_buff = buffer->data();


    double max_A = -1;
    double min_A = 1;
    double Gain = 1;

    double min1 = 1;
    double min2 = 1;
    double min1_memoire1=1;
    double min2_memoire1=1;
    double min1_memoire2=1;
    double min2_memoire2=1;

    double max1=-1;
    double max2=-1;
    int j=0;

    double cpt_max=0;
    double cpt_min=0;


    double *reconstitution;
        reconstitution = new double[taille];

    double *frange;
        frange = new double[taille];

    double sens_precedent = 0;

    double seuil = 0.1;

    double sens;
    double Amplitude;
    double mrf;

    double *amplitude;
        amplitude = new double[taille];

    double *gain;
        gain = new double[taille];

    double *mrff;
        mrff = new double[taille];


    double *max11;
        max11 = new double[taille];
    double *min11;
        min11 = new double[taille];
    double *min11_memoire1;
        min11_memoire1 = new double[taille];
    double *min11_memoire2;
        min11_memoire2 = new double[taille];
    double *min22_memoire1;
        min22_memoire1 = new double[taille];
    double *min22_memoire2;
        min22_memoire2 = new double[taille];
    double *min22;
        min22 = new double[taille];
    double *max22;
        max22 = new double[taille];


    for (int i=1; i<taille-2; i++)
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
                    amplitude[i]=Amplitude;
                    Gain=1/Amplitude;
                    gain[i]=Gain;
                    seuil=0.1;
                    mrf=min1-min2;
                    j=j+1;
                    mrff[j]=mrf;
                    max_A=-1;
                    min_A=1;
                    min1=1;
                    min2=1;
                    max1=-1;
                    max2=-1;
                }


        if(data_mod[i] - data_mod[i-1] > seuil)
                {
                    frange[i]=-1;

                    if(min2>data_mod[i-1])
                    {
                        min2=data_mod[i-1];
                    }
                }

                else if(data_mod[i] - data_mod[i-1] < (-1)*seuil)
                {
                    frange[i]=1;

                    if(min1>data_mod[i])
                    {
                        min1=data_mod[i];
                    }
                }

                else
                {
                    frange[i]=0;
                }


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


                max11[i]=max1;
                min11[i]=min1;
                min11_memoire1[i]=min1_memoire1;
                min11_memoire2[i]=min1_memoire2;
                min22_memoire1[i]=min2_memoire1;
                min22_memoire2[i]=min2_memoire2;
                min22[i]=min2;
                max22[i]=max2;

                sens_precedent=sens;

                data_buff[i] = reconstitution[i];

            }



    for (int i=1; i<taille-2; i++)
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
                    {
                        min2=data_mod[i-1];
                    }
                }

                else if(data_mod[i] - data_mod[i-1] < (-1)*seuil)
                {
                    frange[i]=1;

                    if(min1>data_mod[i])
                    {
                        min1=data_mod[i];
                    }
                }

                else
                {
                    frange[i]=0;
                }


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


                max11[i]=max1;
                min11[i]=min1;
                min11_memoire1[i]=min1_memoire1;
                min11_memoire2[i]=min1_memoire2;
                min22_memoire1[i]=min2_memoire1;
                min22_memoire2[i]=min2_memoire2;
                min22[i]=min2;
                max22[i]=max2;

                sens_precedent=sens;

                data_buff[i] = reconstitution[i];

            }




for (int i=0; i<taille; i++)
{
    moy = moy + reconstitution[i];
}

moy = moy / taille;




for (int i=0; i<taille; i++)
{
    reconstitution[i]=reconstitution[i]-moy;
    data_buff[i] = reconstitution[i]+data_mod[i];


}






    delete[] amplitude;
    delete[] gain;
    delete[] mrff;
    delete[] frange;
    delete[] reconstitution;
    delete[] max11;
    delete[] min11;
    delete[] min11_memoire1;
    delete[] min11_memoire2;
    delete[] min22_memoire1;
    delete[] min22_memoire2;
    delete[] min22;
    delete[] max22;

 return buffer;

}

