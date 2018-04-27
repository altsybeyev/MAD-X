#ifndef MAD_MAIN_H
#define MAD_MAIN_H

// readonly information about program's command line arguments and stack base
extern int                const mad_argc;
extern const char* const* const mad_argv;
extern const void* const        mad_stck;

// public interface to run MADX as a library
void mad_init(int argc, char **);
void mad_fini(void);
void mad_run (void);

int
mad_start(int argc, char *argv[]);


#endif // MAD_MAIN_H

