/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube    ---   Limitations and specifcities:    * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 5.0.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGPresetGroup.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGPresetGroup::SWGPresetGroup(QString* json) {
    init();
    this->fromJson(*json);
}

SWGPresetGroup::SWGPresetGroup() {
    group_name = nullptr;
    m_group_name_isSet = false;
    nb_presets = 0;
    m_nb_presets_isSet = false;
    presets = nullptr;
    m_presets_isSet = false;
}

SWGPresetGroup::~SWGPresetGroup() {
    this->cleanup();
}

void
SWGPresetGroup::init() {
    group_name = new QString("");
    m_group_name_isSet = false;
    nb_presets = 0;
    m_nb_presets_isSet = false;
    presets = new QList<SWGPresetItem*>();
    m_presets_isSet = false;
}

void
SWGPresetGroup::cleanup() {
    if(group_name != nullptr) { 
        delete group_name;
    }

    if(presets != nullptr) { 
        auto arr = presets;
        for(auto o: *arr) { 
            delete o;
        }
        delete presets;
    }
}

SWGPresetGroup*
SWGPresetGroup::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGPresetGroup::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&group_name, pJson["groupName"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&nb_presets, pJson["nbPresets"], "qint32", "");
    
    
    ::SWGSDRangel::setValue(&presets, pJson["presets"], "QList", "SWGPresetItem");
}

QString
SWGPresetGroup::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGPresetGroup::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(group_name != nullptr && *group_name != QString("")){
        toJsonValue(QString("groupName"), group_name, obj, QString("QString"));
    }
    if(m_nb_presets_isSet){
        obj->insert("nbPresets", QJsonValue(nb_presets));
    }
    if(presets && presets->size() > 0){
        toJsonArray((QList<void*>*)presets, obj, "presets", "SWGPresetItem");
    }

    return obj;
}

QString*
SWGPresetGroup::getGroupName() {
    return group_name;
}
void
SWGPresetGroup::setGroupName(QString* group_name) {
    this->group_name = group_name;
    this->m_group_name_isSet = true;
}

qint32
SWGPresetGroup::getNbPresets() {
    return nb_presets;
}
void
SWGPresetGroup::setNbPresets(qint32 nb_presets) {
    this->nb_presets = nb_presets;
    this->m_nb_presets_isSet = true;
}

QList<SWGPresetItem*>*
SWGPresetGroup::getPresets() {
    return presets;
}
void
SWGPresetGroup::setPresets(QList<SWGPresetItem*>* presets) {
    this->presets = presets;
    this->m_presets_isSet = true;
}


bool
SWGPresetGroup::isSet(){
    bool isObjectUpdated = false;
    do{
        if(group_name && *group_name != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_nb_presets_isSet){
            isObjectUpdated = true; break;
        }
        if(presets && (presets->size() > 0)){
            isObjectUpdated = true; break;
        }
    }while(false);
    return isObjectUpdated;
}
}

