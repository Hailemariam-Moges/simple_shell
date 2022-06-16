#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

#define BUFFER_SIZE 256
#define ENV_SEPARATOR "="
#define ESCAPE_SEPARATOR "#"
#define PATH_SEPARATOR ":"
#define COMMAND_SEPARATOR ";\n"
#define SEPARATORS " \n"
#define PROMPT "$ "

extern char **environ;

/**
 * struct environment_s - environment variable
 *
 * @name: environment name
 * @value: environment value
 * @global: global
 * @next: points to the next node
 */
typedef struct environment_s
{
	char *name;   /* ex: PATH */
	char *value;  /* ex: /bin:/usr/bin */
	char *global; /* PATH=/bin:/usr/bin */
	struct environment_s *next;
} environment_t;

/**
 * struct aData_s - data variable
 *
 * @arguments: argument's array
 * @buffer: buffer
 * @commandName: command name
 * @commandList: command list
 * @history: history
 * @programName: program name
 * @env: env
 */
typedef struct aData_s
{
	char **arguments;
	char *buffer;
	char *commandName;
	char **commandList;
	char **history;
	char *programName;
	environment_t *env;
} aData_t;

/**
 * struct errorMessage_s - An structure for each error message
 *
 * @code: error code
 * @msg: pointer to error message
 */
typedef struct errorMessage_s
{
	int code;
	char *msg;
} errorMessage_t;

/**
 * struct customCommand_s - struct conversion to function
 *
 * @commandName: flag string
 * @func: pointer to func
 */
typedef struct customCommand_s
{
	char *commandName;
	void (*func)(aData_t *);
} customCommand_t;

environment_t *_addEnvNodeEnd(
	environment_t **pHeadNode,
	char *pGlobal
);
void _addWord(char *pWord, int *pIndex, char **pArray);
int _atoi(char *pString);
void *_calloc(unsigned int pNumber, unsigned int pSize);
void _cdHelp(void);
void _changeDirectory(aData_t *pData);
void _changeToAnyDirectory(aData_t *pData, char *pCurrentDirectory);
void _changeToHomeDirectory(aData_t *pData, char *pCurrentDirectory);
void _changeToPreviousDirectory(aData_t *pData, char *pCurrentDirectory);
int _checkEndCharacter(char *pString);
int _checkEscapeSeparators(char pChar, char *pEscapeSeparators);
int _checkSeparators(char pChar, char *pSeparators);
char *_cleanString(char *pString);
environment_t *_createEnvNode(char *pGlobal);
void _ctrlC(int pSignal);
void _defaultHelp(char *pCommand);
int _deleteEnvNode(environment_t *pHead, char *pName);
void _prompt(void);
void _env(aData_t *pData);
void _envHelp(void);
void _errorHandler(aData_t *pData, int messageCode);
void _execCommand(aData_t *pData);
void _exitStatus(aData_t *pData);
void _exitHelp(void);
void _freeAppData(aData_t *pData);
void _freeCharDoublePointer(char **pPtr);
void _freeEnvList(environment_t *pHeadNode);
char *_generateAbsolutePath(char *pPath, char *pCommandName);
char *_generateEnvGlobal(char *pName, char *pValue);
void (*_getCustomFunction(char *pCommand))(aData_t *);
environment_t *_getenv(environment_t *pEnviron, char *pName);
char *_getenvname(char *pVariable);
char *_getenvvalue(char *pVariable);
int _getEnvIndex(environment_t *pHead, char *pName);
environment_t *_getEnvNodeAtIndex(
	environment_t *pHead,
	unsigned int pIndex
);
environment_t *_getLastEnvNode(environment_t *pHeadNode);
void _getline(aData_t *pData);
char *_getword(char *pGlobal, int pOffset, int pSize);
void _help(aData_t *pData);
void _helpHelp(void);
int _array(char pChar, char *pArray);
appData_t *_initData(char **pArgv);
void _initEnvData(aData_t *pData);
int _isdigit(char pChar);
int _isNumber(char *s);
char *_itoa(int pNumber);
int _listEnvLen(environment_t *pHead);
char *_memcpy(char *pDest, char *pSrc, unsigned int pLimit);
char *_memset(char *pString, char pCharacter, unsigned int pLimit);
int _nbrLen(int pNumber);
char **_parsingPathEnvironment(aData_t *pData);
void _printenv(environment_t *pEnviron);
int _putchar(char pChar);
int _puts(char *pStr);
void *_realloc(void *pPtr, unsigned int pOldSize, unsigned int pNewSize);
void _setenv(environment_t *pEnviron, char *pName,
		char *pValue, int pOverwrite);
void _setenvHelp(void);
void _setEnvironment(aData_t *pData);
char *_strcat(char *pDest, char *pSrc);
int _strcmp(char *pString1, char *pString2);
char *_strcpy(char *pDest, char *pSrc);
char *_strconcat(char *pString1, char *pString2);
char *_strncpy(char *pDest, char *pSrc, int pLimit);
unsigned int _strcspn(char *pString, char *pDeny);
char *_strdup(char *pString);
int _strlen(char *pStr);
char *_strstr(char *pHaystack, char *pNeedle, int pBegin);
char **_strtow(char *pString, char *pSeparators, char *pEscapeSeparators);
void _unsetenv(aData_t *pData, char *pName);
void _unsetenvHelp(void);
void _unsetEnvironment(aData_t *pData);
char *_which(aData_t *pData);
int _wordNumber(char *pString, char *pSeparators);

#endif
