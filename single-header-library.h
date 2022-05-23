/*
#########################################################
#
#   > Single header library
#
# #########################################################
# vim: sw=4 ts=4 ft=cpp noexpandtab:
*/

#include <QDateTime>

QString getValueFromSingleHeaderLibrary() {
    return QDateTime::currentDateTime().toString();
}
