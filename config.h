/* user and group to drop privileges to */
static const char *user  = "arnas";
static const char *group = "arnas";

static const char *colorname[NUMCOLS] = {
    [INIT] =   "black",     /* after initialization */
    [INPUT] =  "blue",   /* during input */
    [FAILED] = "red",   /* wrong password */
    [CAPS] = "yellow",         /* CapsLock on */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
