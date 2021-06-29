/* ROM function interface esp32c6.rom.newlib.ld for esp32c6
 *
 *
 * Generated from ./interface-esp32c6.yml md5sum e7196719ebc959e6dd2f61dec2db53e0
 *
 * Compatible with ROM where ECO version equal or greater to 0.
 *
 * THIS FILE WAS AUTOMATICALLY GENERATED. DO NOT EDIT.
 */

/***************************************
 Group newlib
 ***************************************/

/* Functions */
esp_rom_newlib_init_common_mutexes = 0x4000034c;
memset = 0x40000350;
memcpy = 0x40000354;
memmove = 0x40000358;
memcmp = 0x4000035c;
strcpy = 0x40000360;
strncpy = 0x40000364;
strcmp = 0x40000368;
strncmp = 0x4000036c;
strlen = 0x40000370;
strstr = 0x40000374;
bzero = 0x40000378;
_isatty_r = 0x4000037c;
sbrk = 0x40000380;
isalnum = 0x40000384;
isalpha = 0x40000388;
isascii = 0x4000038c;
isblank = 0x40000390;
iscntrl = 0x40000394;
isdigit = 0x40000398;
islower = 0x4000039c;
isgraph = 0x400003a0;
isprint = 0x400003a4;
ispunct = 0x400003a8;
isspace = 0x400003ac;
isupper = 0x400003b0;
toupper = 0x400003b4;
tolower = 0x400003b8;
toascii = 0x400003bc;
memccpy = 0x400003c0;
memchr = 0x400003c4;
memrchr = 0x400003c8;
strcasecmp = 0x400003cc;
strcasestr = 0x400003d0;
strcat = 0x400003d4;
strdup = 0x400003d8;
strchr = 0x400003dc;
strcspn = 0x400003e0;
strcoll = 0x400003e4;
strlcat = 0x400003e8;
strlcpy = 0x400003ec;
strlwr = 0x400003f0;
strncasecmp = 0x400003f4;
strncat = 0x400003f8;
strndup = 0x400003fc;
strnlen = 0x40000400;
strrchr = 0x40000404;
strsep = 0x40000408;
strspn = 0x4000040c;
strtok_r = 0x40000410;
strupr = 0x40000414;
longjmp = 0x40000418;
setjmp = 0x4000041c;
abs = 0x40000420;
div = 0x40000424;
labs = 0x40000428;
ldiv = 0x4000042c;
qsort = 0x40000430;
rand_r = 0x40000434;
rand = 0x40000438;
srand = 0x4000043c;
utoa = 0x40000440;
itoa = 0x40000444;
atoi = 0x40000448;
atol = 0x4000044c;
strtol = 0x40000450;
strtoul = 0x40000454;
PROVIDE( fflush = 0x40000458 );
PROVIDE( _fflush_r = 0x4000045c );
PROVIDE( _fwalk = 0x40000460 );
PROVIDE( _fwalk_reent = 0x40000464 );
PROVIDE( __smakebuf_r = 0x40000468 );
PROVIDE( __swhatbuf_r = 0x4000046c );
PROVIDE( __swbuf_r = 0x40000470 );
__swbuf = 0x40000474;
PROVIDE( __swsetup_r = 0x40000478 );
/* Data (.data, .bss, .rodata) */
syscall_table_ptr = 0x3fcdffe0;
_global_impure_ptr = 0x3fcdffdc;
