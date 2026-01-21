# Kompilace oracle objektu do C struktur
ott userid=mikular/xxxx@M24CZDEV.WORLD intype=demoin.typ outtype=demoout.typ code=c hfile=navdemo1.h

# Obsah souboru demoin.typ.  type: databázové objekty
```
case=lower
type location
type budoka
type customer
type db2inst1.co_mena
```

#Výstup demoout.typ. Obsahuje mapovani objektu na struktury
```
CASE = LOWER

TYPE MIKULAR.LOCATION AS location
  VERSION = "$8.0"
  HFILE = navdemo1.h

TYPE MIKULAR.BUDOKA AS budoka
  VERSION = "$8.0"
  HFILE = navdemo1.h

TYPE MIKULAR.CUSTOMER AS customer
  VERSION = "$8.0"
  HFILE = navdemo1.h

TYPE DB2INST1.CO_MENA AS co_mena
  VERSION = "$8.0"
  HFILE = navdemo1.h
```

## Duležité !!!
Je potřeba demoout.typ zahrnout do proc kompilace: 
```
proc INTYPE=navdemo.typ
```
