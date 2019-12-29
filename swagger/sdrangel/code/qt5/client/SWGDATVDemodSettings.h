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

/*
 * SWGDATVDemodSettings.h
 *
 * DATVDemod
 */

#ifndef SWGDATVDemodSettings_H_
#define SWGDATVDemodSettings_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"
#include "export.h"

namespace SWGSDRangel {

class SWG_API SWGDATVDemodSettings: public SWGObject {
public:
    SWGDATVDemodSettings();
    SWGDATVDemodSettings(QString* json);
    virtual ~SWGDATVDemodSettings();
    void init();
    void cleanup();

    virtual QString asJson () override;
    virtual QJsonObject* asJsonObject() override;
    virtual void fromJsonObject(QJsonObject &json) override;
    virtual SWGDATVDemodSettings* fromJson(QString &jsonString) override;

    qint32 getRgbColor();
    void setRgbColor(qint32 rgb_color);

    QString* getTitle();
    void setTitle(QString* title);

    qint32 getRfBandwidth();
    void setRfBandwidth(qint32 rf_bandwidth);

    qint32 getCenterFrequency();
    void setCenterFrequency(qint32 center_frequency);

    qint32 getStandard();
    void setStandard(qint32 standard);

    qint32 getModulation();
    void setModulation(qint32 modulation);

    qint32 getFec();
    void setFec(qint32 fec);

    qint32 getAudioMute();
    void setAudioMute(qint32 audio_mute);

    QString* getAudioDeviceName();
    void setAudioDeviceName(QString* audio_device_name);

    qint32 getSymbolRate();
    void setSymbolRate(qint32 symbol_rate);

    qint32 getNotchFilters();
    void setNotchFilters(qint32 notch_filters);

    qint32 getAllowDrift();
    void setAllowDrift(qint32 allow_drift);

    qint32 getFastLock();
    void setFastLock(qint32 fast_lock);

    qint32 getFilter();
    void setFilter(qint32 filter);

    qint32 getHardMetric();
    void setHardMetric(qint32 hard_metric);

    float getRollOff();
    void setRollOff(float roll_off);

    qint32 getViterbi();
    void setViterbi(qint32 viterbi);

    qint32 getExcursion();
    void setExcursion(qint32 excursion);

    qint32 getAudioVolume();
    void setAudioVolume(qint32 audio_volume);

    qint32 getVideoMute();
    void setVideoMute(qint32 video_mute);

    QString* getUdpTsAddress();
    void setUdpTsAddress(QString* udp_ts_address);

    qint32 getUdpTsPort();
    void setUdpTsPort(qint32 udp_ts_port);

    qint32 getUdpTs();
    void setUdpTs(qint32 udp_ts);


    virtual bool isSet() override;

private:
    qint32 rgb_color;
    bool m_rgb_color_isSet;

    QString* title;
    bool m_title_isSet;

    qint32 rf_bandwidth;
    bool m_rf_bandwidth_isSet;

    qint32 center_frequency;
    bool m_center_frequency_isSet;

    qint32 standard;
    bool m_standard_isSet;

    qint32 modulation;
    bool m_modulation_isSet;

    qint32 fec;
    bool m_fec_isSet;

    qint32 audio_mute;
    bool m_audio_mute_isSet;

    QString* audio_device_name;
    bool m_audio_device_name_isSet;

    qint32 symbol_rate;
    bool m_symbol_rate_isSet;

    qint32 notch_filters;
    bool m_notch_filters_isSet;

    qint32 allow_drift;
    bool m_allow_drift_isSet;

    qint32 fast_lock;
    bool m_fast_lock_isSet;

    qint32 filter;
    bool m_filter_isSet;

    qint32 hard_metric;
    bool m_hard_metric_isSet;

    float roll_off;
    bool m_roll_off_isSet;

    qint32 viterbi;
    bool m_viterbi_isSet;

    qint32 excursion;
    bool m_excursion_isSet;

    qint32 audio_volume;
    bool m_audio_volume_isSet;

    qint32 video_mute;
    bool m_video_mute_isSet;

    QString* udp_ts_address;
    bool m_udp_ts_address_isSet;

    qint32 udp_ts_port;
    bool m_udp_ts_port_isSet;

    qint32 udp_ts;
    bool m_udp_ts_isSet;

};

}

#endif /* SWGDATVDemodSettings_H_ */
