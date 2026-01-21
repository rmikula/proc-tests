#ifndef NAVDEMO1_ORACLE
# define NAVDEMO1_ORACLE

#ifndef OCI_ORACLE
# include <oci.h>
#endif

typedef OCIRef location_ref;
typedef OCIRef budoka_ref;
typedef OCIRef customer_ref;
typedef OCIRef co_mena_ref;

struct location
{
   OCINumber num;
   OCIString * street;
   OCIString * city;
   OCIString * state;
   OCIString * zip;
};
typedef struct location location;

struct location_ind
{
   OCIInd _atomic;
   OCIInd num;
   OCIInd street;
   OCIInd city;
   OCIInd state;
   OCIInd zip;
};
typedef struct location_ind location_ind;

struct budoka
{
   OCIString * lastname;
   OCIString * firstname;
   OCIDate birthdate;
   OCINumber age;
   struct location addr;
};
typedef struct budoka budoka;

struct budoka_ind
{
   OCIInd _atomic;
   OCIInd lastname;
   OCIInd firstname;
   OCIInd birthdate;
   OCIInd age;
   struct location_ind addr;
};
typedef struct budoka_ind budoka_ind;

struct customer
{
   OCIString * account_number;
   budoka_ref * aperson;
};
typedef struct customer customer;

struct customer_ind
{
   OCIInd _atomic;
   OCIInd account_number;
   OCIInd aperson;
};
typedef struct customer_ind customer_ind;

struct co_mena
{
   OCINumber id_ciselniky;
   OCIString * kod;
   OCINumber id_central;
};
typedef struct co_mena co_mena;

struct co_mena_ind
{
   OCIInd _atomic;
   OCIInd id_ciselniky;
   OCIInd kod;
   OCIInd id_central;
};
typedef struct co_mena_ind co_mena_ind;

#endif
