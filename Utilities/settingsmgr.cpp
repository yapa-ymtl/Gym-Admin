#include "settingsmgr.h"
#include <optional>

SettingsMgr::SettingsMgr():_settings("openSource", "GymAdmin"){}

SettingsMgr& SettingsMgr::instance()
{
    static SettingsMgr instance;
    return instance;
}

std::optional<QString> SettingsMgr::getDbPath()
{
    return _settings.value("db/local_path", QString()).toString();
}
