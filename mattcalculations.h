#ifndef MATTCALCULATIONS
#define MATTCALCULATIONS

#define VERSION_OF_MATTCALCULATIONS "1.2.11" //5/2/2018
/*
 *
 *
 * build 10
 *
 * added isALetter()
 * String to milliseconds returns -1 if conversion fails.
 * 9 cleaned up some warnings
 * changed millisecondsToHoursMinsSec to take in an unsigned int
 */

#define MILLISECONDS_PER_SEC 1000
#define MILLISECONDS_PER_10SEC 10000
#define MILLISECONDS_PER_MIN 60000
#define MILLISECONDS_PER_10MIN 600000
#define MILLISECONDS_PER_HOUR 3600000
#define MILLISECONDS_PER_10HOUR 36000000
#define MILLISECONDS_PER_12HOUR 43200000

#include <qstring.h>
#include <qlocale.h>
#include <QDate>
#include <random>
#include <stdlib.h>
#include <qmath.h>
#include <QTime>
#include <qglobal.h>
#include <qdebug.h>
#include <qmessagebox.h>

enum curency{
    US_DOLLARS = 0,
};
enum dayOfWeek{
    MONDAY = 1,
    TUESDAY = 2,
    WEDNESDAY = 3,
    THURSDAY = 4,
    FRIDAY = 5,
    SATURDAY = 6,
    SUNDAY = 7

};
enum feetInchesFormat{
    WORDS = 0,
    MARKS = 1
};

bool doubleIsEqual (double x, double y, unsigned int nNumberOfDecimalPlaces);

double  usDollarsStringToDouble(QString qstrDollars);
QString doubleToCurrency (double dInput, unsigned int nNumOfDecimalPoints, unsigned int nCurrency);
QString millisecondsToHoursMinsSec (unsigned int nMilliseconds);
int stringToMilliseconds (QString strTime);

bool  isBusinessDay(QDate dtDayToTest, QString &strReason);
bool  isNationalHoliday(QDate dtDayToTest, QString &strHolidayName);
void  dayOfWeekStats(QDate dtDay, int &nDayOfWeek, int &nHowManyOfDayOfWeekInMonth, int &occuranceOfDayOfWeekInMonth);
QDate dateBusinessDaysAway(QDate dtInputDate, int nNumOfBusinessDays, QString &strListOfDaysOff);
int   numOfBusinessDaysBetween(QDate dtStartDate, QDate dtEndDate, QString &strListOfDaysOff);

QString createFeetInchesString(int nInputSixteenths, unsigned int nFormat, bool &ok);
QString makeFractionString(int nHalf, int nQuarters, int nEighths, int nSixteens );
bool convertSixteenthsToFeetInchesSixteenths(int inputSixteeths, int &nFeet, int &nInches, int &nSixteenths);
bool reduceSixteethsFractions(int inputSixteenths, int &nHalf, int &nQuarters, int &nEighths, int &nSixteens );
int convertFeetInchestSixteenthsToSixteenths(int nFeet, int nInches, int nSixteenths);

int randomInt (int nBegining, int nEnd);

//-----------------------------------------------------------------------------

double roundDoubleToPoints(double dInput, unsigned int nNumberOfDecimalPlaces );
QString splitString(QString CSVLine);
QString intToLetters(int nInputNum);

QString addCommasToDouble(double dInput, unsigned int nNumberOfDecimalPlaces);
QString addCommasToString (QString strInput);
QString addDecimalPoint (QString strInput, unsigned int nNumberOfDecimalPlaces);
QString reverseQString(QString strInput);
void swapChar(QChar &cA, QChar &cB);

QString drawLine();
QString drawLine(int nLength, char chCharToUse);

QString spaceOut(QString strInput);
QString spaceOut(QString strInput, int nNumOfChars, int chCharToUse);
QString removeAllLettersFromString(QString strInputString);

bool isALetter(QChar chInput);

#endif // MATTCALCULATIONS

