#ifndef LOGGING_H
#define LOGGING_H
#include <QDebug>
#include "../settings.h"
#include <QFile>
#include <QTime>


namespace logger {
#if (LOGS_NEEDED == 1)
    static void log(QString text) {
        #if LOGS_PRINT_NEEDED
            qDebug () << QTime::currentTime().toString() + ":   " + text;
        #endif // LOGS_PRINT_NEEDED


        #if LOGS_FILE_SAVE
            static QFile file(LOGS_OUTPUT_FILE_NAME);
            if (!file.isOpen())
                file.open(QIODevice::WriteOnly);

            file.write(QString(QTime::currentTime().toString() + ":   " + text + "\n").toStdString().c_str());
        #endif // LOGS_FILE_SAVE
    }
#endif // LOGS_NEEDED


#if (LOGS_NEEDED == 0)
   static void log(QString text) {
        Q_UNUSED(text);
        return;
    }
#endif // LOGS_NEEDED
}

#endif // LOGGING_H
