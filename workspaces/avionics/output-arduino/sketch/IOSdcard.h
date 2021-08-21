#line 1 "/home/asimpoptani/work/yar-software/workspaces/avionics/esp32avonics/IOSdcard.h"
#include "FS.h"
#include "SD.h"
#include "SPI.h"
#include "vfs_api.h"
#include "sd_diskio.h"
#include "ff.h"
void listDir(fs::FS &fs, const char * dirname, uint8_t levels);
void createDir(fs::FS &fs, const char * path);
void removeDir(fs::FS &fs, const char * path);
void readFile(fs::FS &fs, const char * path);
void writeFile(fs::FS &fs, const char * path, const char * message);
void appendFile(fs::FS &fs, const char * path, const char * message);
void renameFile(fs::FS &fs, const char * path1, const char * path2);
void deleteFile(fs::FS &fs, const char * path);
void testFileIO(fs::FS &fs, const char * path);