/*****
 * This file is automatically generated by findsym.pl
 * Changes will be overwritten.
 *****/

// If the ADDSYMBOL macro is not already defined, define it with the default
// purpose of referring to an external pre-translated symbol, such that
// SYM(name) also refers to that symbol.
#ifndef ADDSYMBOL
    #define ADDSYMBOL(name) extern symbol *PRETRANSLATED_SYMBOL_##name
    #ifdef PRESYM
        #define SYM(name) PRETRANSLATED_SYMBOL_##name
    #else
        #define SYM(name) symbol::trans(#name)
    #endif
#endif

ADDSYMBOL(a);
ADDSYMBOL(append);
ADDSYMBOL(atLeast);
ADDSYMBOL(b);
ADDSYMBOL(csv);
ADDSYMBOL(cyclic);
ADDSYMBOL(delete);
ADDSYMBOL(dimension);
ADDSYMBOL(i);
ADDSYMBOL(in);
ADDSYMBOL(initialized);
ADDSYMBOL(insert);
ADDSYMBOL(j);
ADDSYMBOL(keys);
ADDSYMBOL(length);
ADDSYMBOL(line);
ADDSYMBOL(mode);
ADDSYMBOL(name);
ADDSYMBOL(nx);
ADDSYMBOL(ny);
ADDSYMBOL(nz);
ADDSYMBOL(out);
ADDSYMBOL(pop);
ADDSYMBOL(push);
ADDSYMBOL(read);
ADDSYMBOL(side);
ADDSYMBOL(signedint);
ADDSYMBOL(singleint);
ADDSYMBOL(singlereal);
ADDSYMBOL(value);
ADDSYMBOL(word);
ADDSYMBOL(x);
ADDSYMBOL(xx);
ADDSYMBOL(xy);
ADDSYMBOL(y);
ADDSYMBOL(yx);
ADDSYMBOL(yy);
ADDSYMBOL(z);
