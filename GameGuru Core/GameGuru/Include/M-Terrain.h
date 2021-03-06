//----------------------------------------------------
//--- GAMEGURU - M-Terrain
//----------------------------------------------------

#include "cstr.h"

void terrain_initstyles ( void );
void terrain_initstyles_reset ( void );
void terrain_setupedit ( void );
int terrain_loadcustomtexture ( LPSTR pDestPathAndFile, int iTextureSlot );
cstr terrain_getterrainfolder ( void );
void terrain_resetfornewlevel ( void );
void terrain_paintselector_hide ( void );
void terrain_deletesupertexturepalette ( void );
int terrain_createnewterraintexture ( LPSTR pDestTerrainTextureFile, int iWhichTextureOver, LPSTR pTexFileToLoad, int iSeamlessMode, int iCompressIt );
void terrain_loadlatesttexture ( void );
void terrain_changestyle ( void );
void terrain_changevegstyle ( void );
void terrain_getpaintmode ( void );
void terrain_loop ( void );
void terrain_terraintexturesystempainterentry ( void );
void terrain_detectendofterraintexturesystempainter ( void );
void terrain_editcontrol ( void );
void terrain_recordbuffer ( void );
void terrain_undo ( void );
void terrain_redo ( void );
void terrain_editcontrol_auxiliary ( void );
void terrain_paintterrain ( void );
void terrain_cursor ( void );
void terrain_cursor_nograsscolor ( void );
void terrain_cursor_off ( void );
void terrain_renderonly ( void );
void terrain_update ( void );
void terrain_clearterraindirtyregion ( void );
void terrain_cleargrassdirtyregion ( void );
void terrain_cleardirtyregion ( void );
void terrain_waterineditor ( void );
void terrain_assignnewshader ( void );
void terrain_applyshader ( void );
void terrain_createactualterrain ( void );
void terrain_make ( void );
void terrain_load ( void );
void terrain_save ( void );
void terrain_savetextures ( void );
void terrain_generatevegandmask_grab ( void );
void terrain_generatevegandmaskfromterrain ( void );
void terrain_generateblanktextures ( void );
void terrain_loaddata ( void );
void terrain_delete ( void );
void terrain_shadowupdate ( void );
void terrain_updaterealheights ( void );
void terrain_randomiseorflattenterrain ( void );
void terrain_flattenterrain ( void );
void terrain_randomiseterrain ( void );
void terrain_refreshterrainmatrix ( void );
void terrain_skipifnowaterexposed ( void );
void terrain_updatewatermask ( void );
void terrain_updatewatermask_new ( void );
void terrain_whitewashwatermask ( void );
void terrain_createheightmapfromheightdata ( void );
void terrain_quickupdateheightmapfromheightdata ( void );
void terrain_generatetextureselect ( void );
void terrain_generatesupertexture ( bool bForceRecalcOfPalette );
void terrain_generateshadows ( void );
void generate_terrain ( int seed, int scale, int mchunk_size );
void DiamondSquare(unsigned x1, unsigned y1, unsigned x2, unsigned y2, float range, unsigned level) ;
void terrain_start_play ( void );
void terrain_stop_play ( void );
void terrain_setfog ( void );
void terrain_parsed_getstring ( void );
void terrain_parsed_getvalues ( void );
void sky_init ( void );
void terrain_skyspec_init ( void );
void terrain_sky_hide ( void );
void terrain_sky_show ( void );
void terrain_sky_free ( void );
void terrain_sky_loop ( void );
void terrain_water_init ( void );
void terrain_water_free ( void );
void terrain_updatewatermechanism ( void );
void terrain_updatewaterphysics ( void );
void terrain_water_setfog ( void );
void terrain_water_loop ( void );
void terrain_fastveg_init ( void );
void terrain_fastveg_assignnewshader ( void );
void terrain_fastveg_applyshader ( void );
void terrain_fastveg_setgrassimage ( void );
void terrain_fastveg_setgrassgridandfade ( void );
void terrain_fastveg_loop ( void );
void terrain_fastveg_clearregion ( void );
void terrain_fastveg_updatedirtyregionfast ( void );
void terrain_fastveg_clamptomemblockres ( void );
void terrain_fastveg_updategrassfrombitmap ( void );
void terrain_fastveg_loadgrass ( void );
void terrain_fastveg_savegrass ( void );
void terrain_fastveg_buildblankgrass ( void );
void terrain_fastveg_buildblankgrass_fornew ( void );
void terrain_fastveg_free ( void );
