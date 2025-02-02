#ifndef SETTINGSMGR_H
#define SETTINGSMGR_H

// #include <QObject>
#include <QSettings>
#include <QString>
#include <optional>

class SettingsMgr
{
public:
    static SettingsMgr& instance();
    std::optional<QString> getDbPath();
    //color theme
    //

private:
    SettingsMgr();
    SettingsMgr(const SettingsMgr&) = delete;
    SettingsMgr& operator = (const SettingsMgr&) = delete;

    QSettings _settings;
};

#endif // SETTINGSMGR_H
