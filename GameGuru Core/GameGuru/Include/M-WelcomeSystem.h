//----------------------------------------------------
//--- GAMEGURU - Welcome System
//----------------------------------------------------

// Includes
#include "cstr.h"

// Defines
#define WELCOME_SERIALCODE 1
#define WELCOME_WHATYOUGET 2
#define WELCOME_CHANGELOG 3
#define WELCOME_MAIN 4
#define WELCOME_PLAY 5
#define WELCOME_EXITAPP 6
#define WELCOME_FREEINTROAPP 7
#define WELCOME_ANNOUNCEMENTS 8
#define WELCOME_SAVESTANDALONE 9
#define WELCOME_FREETRIALINTROAPP 10
#define WELCOME_FREETRIALEXITAPP 11

// Functions
void welcome_init ( int iLoadingPart );
void welcome_free ( void );
void welcome_waitfornoinput ( void );
void welcome_animbackdrop ( void );
void welcome_staticbackdrop ( void );
void welcome_updatebackdrop ( char* pText );
bool welcome_setuppage ( int iPageIndex );
void welcome_runloop ( int iPageIndex );
void welcome_show ( int iPageIndex );

