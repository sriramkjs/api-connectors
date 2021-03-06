/**
 * BitMEX API
 * ## REST API for the BitMEX Trading Platform  [View Changelog](/app/apiChangelog)  -  #### Getting Started  Base URI: [https://www.bitmex.com/api/v1](/api/v1)  ##### Fetching Data  All REST endpoints are documented below. You can try out any query right from this interface.  Most table queries accept `count`, `start`, and `reverse` params. Set `reverse=true` to get rows newest-first.  Additional documentation regarding filters, timestamps, and authentication is available in [the main API documentation](/app/restAPI).  _All_ table data is available via the [Websocket](/app/wsAPI). We highly recommend using the socket if you want to have the quickest possible data without being subject to ratelimits.  ##### Return Types  By default, all data is returned as JSON. Send `?_format=csv` to get CSV data or `?_format=xml` to get XML data.  ##### Trade Data Queries  _This is only a small subset of what is available, to get you started._  Fill in the parameters and click the `Try it out!` button to try any of these queries.  - [Pricing Data](#!/Quote/Quote_get)  - [Trade Data](#!/Trade/Trade_get)  - [OrderBook Data](#!/OrderBook/OrderBook_getL2)  - [Settlement Data](#!/Settlement/Settlement_get)  - [Exchange Statistics](#!/Stats/Stats_history)  Every function of the BitMEX.com platform is exposed here and documented. Many more functions are available.  ##### Swagger Specification  [⇩ Download Swagger JSON](swagger.json)  -  ## All API Endpoints  Click to expand a section. 
 *
 * OpenAPI spec version: 1.2.0
 * Contact: support@bitmex.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGOrder.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

SWGOrder::SWGOrder(QString json) {
    init();
    this->fromJson(json);
}

SWGOrder::SWGOrder() {
    init();
}

SWGOrder::~SWGOrder() {
    this->cleanup();
}

void
SWGOrder::init() {
    order_id = new QString("");
    m_order_id_isSet = false;
    cl_ord_id = new QString("");
    m_cl_ord_id_isSet = false;
    cl_ord_link_id = new QString("");
    m_cl_ord_link_id_isSet = false;
    account = 0.0;
    m_account_isSet = false;
    symbol = new QString("");
    m_symbol_isSet = false;
    side = new QString("");
    m_side_isSet = false;
    simple_order_qty = 0.0;
    m_simple_order_qty_isSet = false;
    order_qty = 0.0;
    m_order_qty_isSet = false;
    price = 0.0;
    m_price_isSet = false;
    display_qty = 0.0;
    m_display_qty_isSet = false;
    stop_px = 0.0;
    m_stop_px_isSet = false;
    peg_offset_value = 0.0;
    m_peg_offset_value_isSet = false;
    peg_price_type = new QString("");
    m_peg_price_type_isSet = false;
    currency = new QString("");
    m_currency_isSet = false;
    settl_currency = new QString("");
    m_settl_currency_isSet = false;
    ord_type = new QString("");
    m_ord_type_isSet = false;
    time_in_force = new QString("");
    m_time_in_force_isSet = false;
    exec_inst = new QString("");
    m_exec_inst_isSet = false;
    contingency_type = new QString("");
    m_contingency_type_isSet = false;
    ex_destination = new QString("");
    m_ex_destination_isSet = false;
    ord_status = new QString("");
    m_ord_status_isSet = false;
    triggered = new QString("");
    m_triggered_isSet = false;
    working_indicator = false;
    m_working_indicator_isSet = false;
    ord_rej_reason = new QString("");
    m_ord_rej_reason_isSet = false;
    simple_leaves_qty = 0.0;
    m_simple_leaves_qty_isSet = false;
    leaves_qty = 0.0;
    m_leaves_qty_isSet = false;
    simple_cum_qty = 0.0;
    m_simple_cum_qty_isSet = false;
    cum_qty = 0.0;
    m_cum_qty_isSet = false;
    avg_px = 0.0;
    m_avg_px_isSet = false;
    multi_leg_reporting_type = new QString("");
    m_multi_leg_reporting_type_isSet = false;
    text = new QString("");
    m_text_isSet = false;
    transact_time = NULL;
    m_transact_time_isSet = false;
    timestamp = NULL;
    m_timestamp_isSet = false;
}

void
SWGOrder::cleanup() {
    if(order_id != nullptr) { 
        delete order_id;
    }
    if(cl_ord_id != nullptr) { 
        delete cl_ord_id;
    }
    if(cl_ord_link_id != nullptr) { 
        delete cl_ord_link_id;
    }
    if(account != nullptr) { 
        delete account;
    }
    if(symbol != nullptr) { 
        delete symbol;
    }
    if(side != nullptr) { 
        delete side;
    }

    if(order_qty != nullptr) { 
        delete order_qty;
    }

    if(display_qty != nullptr) { 
        delete display_qty;
    }


    if(peg_price_type != nullptr) { 
        delete peg_price_type;
    }
    if(currency != nullptr) { 
        delete currency;
    }
    if(settl_currency != nullptr) { 
        delete settl_currency;
    }
    if(ord_type != nullptr) { 
        delete ord_type;
    }
    if(time_in_force != nullptr) { 
        delete time_in_force;
    }
    if(exec_inst != nullptr) { 
        delete exec_inst;
    }
    if(contingency_type != nullptr) { 
        delete contingency_type;
    }
    if(ex_destination != nullptr) { 
        delete ex_destination;
    }
    if(ord_status != nullptr) { 
        delete ord_status;
    }
    if(triggered != nullptr) { 
        delete triggered;
    }

    if(ord_rej_reason != nullptr) { 
        delete ord_rej_reason;
    }

    if(leaves_qty != nullptr) { 
        delete leaves_qty;
    }

    if(cum_qty != nullptr) { 
        delete cum_qty;
    }

    if(multi_leg_reporting_type != nullptr) { 
        delete multi_leg_reporting_type;
    }
    if(text != nullptr) { 
        delete text;
    }
    if(transact_time != nullptr) { 
        delete transact_time;
    }
    if(timestamp != nullptr) { 
        delete timestamp;
    }
}

SWGOrder*
SWGOrder::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGOrder::fromJsonObject(QJsonObject pJson) {
    ::Swagger::setValue(&order_id, pJson["orderID"], "QString", "QString");
    
    ::Swagger::setValue(&cl_ord_id, pJson["clOrdID"], "QString", "QString");
    
    ::Swagger::setValue(&cl_ord_link_id, pJson["clOrdLinkID"], "QString", "QString");
    
    ::Swagger::setValue(&account, pJson["account"], "SWGNumber", "SWGNumber");
    
    ::Swagger::setValue(&symbol, pJson["symbol"], "QString", "QString");
    
    ::Swagger::setValue(&side, pJson["side"], "QString", "QString");
    
    ::Swagger::setValue(&simple_order_qty, pJson["simpleOrderQty"], "double", "");
    
    ::Swagger::setValue(&order_qty, pJson["orderQty"], "SWGNumber", "SWGNumber");
    
    ::Swagger::setValue(&price, pJson["price"], "double", "");
    
    ::Swagger::setValue(&display_qty, pJson["displayQty"], "SWGNumber", "SWGNumber");
    
    ::Swagger::setValue(&stop_px, pJson["stopPx"], "double", "");
    
    ::Swagger::setValue(&peg_offset_value, pJson["pegOffsetValue"], "double", "");
    
    ::Swagger::setValue(&peg_price_type, pJson["pegPriceType"], "QString", "QString");
    
    ::Swagger::setValue(&currency, pJson["currency"], "QString", "QString");
    
    ::Swagger::setValue(&settl_currency, pJson["settlCurrency"], "QString", "QString");
    
    ::Swagger::setValue(&ord_type, pJson["ordType"], "QString", "QString");
    
    ::Swagger::setValue(&time_in_force, pJson["timeInForce"], "QString", "QString");
    
    ::Swagger::setValue(&exec_inst, pJson["execInst"], "QString", "QString");
    
    ::Swagger::setValue(&contingency_type, pJson["contingencyType"], "QString", "QString");
    
    ::Swagger::setValue(&ex_destination, pJson["exDestination"], "QString", "QString");
    
    ::Swagger::setValue(&ord_status, pJson["ordStatus"], "QString", "QString");
    
    ::Swagger::setValue(&triggered, pJson["triggered"], "QString", "QString");
    
    ::Swagger::setValue(&working_indicator, pJson["workingIndicator"], "bool", "");
    
    ::Swagger::setValue(&ord_rej_reason, pJson["ordRejReason"], "QString", "QString");
    
    ::Swagger::setValue(&simple_leaves_qty, pJson["simpleLeavesQty"], "double", "");
    
    ::Swagger::setValue(&leaves_qty, pJson["leavesQty"], "SWGNumber", "SWGNumber");
    
    ::Swagger::setValue(&simple_cum_qty, pJson["simpleCumQty"], "double", "");
    
    ::Swagger::setValue(&cum_qty, pJson["cumQty"], "SWGNumber", "SWGNumber");
    
    ::Swagger::setValue(&avg_px, pJson["avgPx"], "double", "");
    
    ::Swagger::setValue(&multi_leg_reporting_type, pJson["multiLegReportingType"], "QString", "QString");
    
    ::Swagger::setValue(&text, pJson["text"], "QString", "QString");
    
    ::Swagger::setValue(&transact_time, pJson["transactTime"], "QDateTime", "QDateTime");
    
    ::Swagger::setValue(&timestamp, pJson["timestamp"], "QDateTime", "QDateTime");
    
}

QString
SWGOrder::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
SWGOrder::asJsonObject() {
    QJsonObject obj;
    if(order_id != nullptr && *order_id != QString("")){
        toJsonValue(QString("orderID"), order_id, obj, QString("QString"));
    }
    if(cl_ord_id != nullptr && *cl_ord_id != QString("")){
        toJsonValue(QString("clOrdID"), cl_ord_id, obj, QString("QString"));
    }
    if(cl_ord_link_id != nullptr && *cl_ord_link_id != QString("")){
        toJsonValue(QString("clOrdLinkID"), cl_ord_link_id, obj, QString("QString"));
    }
    if((account != nullptr) && (account->isSet())){
        toJsonValue(QString("account"), account, obj, QString("SWGNumber"));
    }
    if(symbol != nullptr && *symbol != QString("")){
        toJsonValue(QString("symbol"), symbol, obj, QString("QString"));
    }
    if(side != nullptr && *side != QString("")){
        toJsonValue(QString("side"), side, obj, QString("QString"));
    }
    if(m_simple_order_qty_isSet){
        obj.insert("simpleOrderQty", QJsonValue(simple_order_qty));
    }
    if((order_qty != nullptr) && (order_qty->isSet())){
        toJsonValue(QString("orderQty"), order_qty, obj, QString("SWGNumber"));
    }
    if(m_price_isSet){
        obj.insert("price", QJsonValue(price));
    }
    if((display_qty != nullptr) && (display_qty->isSet())){
        toJsonValue(QString("displayQty"), display_qty, obj, QString("SWGNumber"));
    }
    if(m_stop_px_isSet){
        obj.insert("stopPx", QJsonValue(stop_px));
    }
    if(m_peg_offset_value_isSet){
        obj.insert("pegOffsetValue", QJsonValue(peg_offset_value));
    }
    if(peg_price_type != nullptr && *peg_price_type != QString("")){
        toJsonValue(QString("pegPriceType"), peg_price_type, obj, QString("QString"));
    }
    if(currency != nullptr && *currency != QString("")){
        toJsonValue(QString("currency"), currency, obj, QString("QString"));
    }
    if(settl_currency != nullptr && *settl_currency != QString("")){
        toJsonValue(QString("settlCurrency"), settl_currency, obj, QString("QString"));
    }
    if(ord_type != nullptr && *ord_type != QString("")){
        toJsonValue(QString("ordType"), ord_type, obj, QString("QString"));
    }
    if(time_in_force != nullptr && *time_in_force != QString("")){
        toJsonValue(QString("timeInForce"), time_in_force, obj, QString("QString"));
    }
    if(exec_inst != nullptr && *exec_inst != QString("")){
        toJsonValue(QString("execInst"), exec_inst, obj, QString("QString"));
    }
    if(contingency_type != nullptr && *contingency_type != QString("")){
        toJsonValue(QString("contingencyType"), contingency_type, obj, QString("QString"));
    }
    if(ex_destination != nullptr && *ex_destination != QString("")){
        toJsonValue(QString("exDestination"), ex_destination, obj, QString("QString"));
    }
    if(ord_status != nullptr && *ord_status != QString("")){
        toJsonValue(QString("ordStatus"), ord_status, obj, QString("QString"));
    }
    if(triggered != nullptr && *triggered != QString("")){
        toJsonValue(QString("triggered"), triggered, obj, QString("QString"));
    }
    if(m_working_indicator_isSet){
        obj.insert("workingIndicator", QJsonValue(working_indicator));
    }
    if(ord_rej_reason != nullptr && *ord_rej_reason != QString("")){
        toJsonValue(QString("ordRejReason"), ord_rej_reason, obj, QString("QString"));
    }
    if(m_simple_leaves_qty_isSet){
        obj.insert("simpleLeavesQty", QJsonValue(simple_leaves_qty));
    }
    if((leaves_qty != nullptr) && (leaves_qty->isSet())){
        toJsonValue(QString("leavesQty"), leaves_qty, obj, QString("SWGNumber"));
    }
    if(m_simple_cum_qty_isSet){
        obj.insert("simpleCumQty", QJsonValue(simple_cum_qty));
    }
    if((cum_qty != nullptr) && (cum_qty->isSet())){
        toJsonValue(QString("cumQty"), cum_qty, obj, QString("SWGNumber"));
    }
    if(m_avg_px_isSet){
        obj.insert("avgPx", QJsonValue(avg_px));
    }
    if(multi_leg_reporting_type != nullptr && *multi_leg_reporting_type != QString("")){
        toJsonValue(QString("multiLegReportingType"), multi_leg_reporting_type, obj, QString("QString"));
    }
    if(text != nullptr && *text != QString("")){
        toJsonValue(QString("text"), text, obj, QString("QString"));
    }
    if(transact_time != nullptr) { 
        toJsonValue(QString("transactTime"), transact_time, obj, QString("QDateTime"));
    }
    if(timestamp != nullptr) { 
        toJsonValue(QString("timestamp"), timestamp, obj, QString("QDateTime"));
    }

    return obj;
}

QString*
SWGOrder::getOrderId() {
    return order_id;
}
void
SWGOrder::setOrderId(QString* order_id) {
    this->order_id = order_id;
    this->m_order_id_isSet = true;
}

QString*
SWGOrder::getClOrdId() {
    return cl_ord_id;
}
void
SWGOrder::setClOrdId(QString* cl_ord_id) {
    this->cl_ord_id = cl_ord_id;
    this->m_cl_ord_id_isSet = true;
}

QString*
SWGOrder::getClOrdLinkId() {
    return cl_ord_link_id;
}
void
SWGOrder::setClOrdLinkId(QString* cl_ord_link_id) {
    this->cl_ord_link_id = cl_ord_link_id;
    this->m_cl_ord_link_id_isSet = true;
}

SWGNumber*
SWGOrder::getAccount() {
    return account;
}
void
SWGOrder::setAccount(SWGNumber* account) {
    this->account = account;
    this->m_account_isSet = true;
}

QString*
SWGOrder::getSymbol() {
    return symbol;
}
void
SWGOrder::setSymbol(QString* symbol) {
    this->symbol = symbol;
    this->m_symbol_isSet = true;
}

QString*
SWGOrder::getSide() {
    return side;
}
void
SWGOrder::setSide(QString* side) {
    this->side = side;
    this->m_side_isSet = true;
}

double
SWGOrder::getSimpleOrderQty() {
    return simple_order_qty;
}
void
SWGOrder::setSimpleOrderQty(double simple_order_qty) {
    this->simple_order_qty = simple_order_qty;
    this->m_simple_order_qty_isSet = true;
}

SWGNumber*
SWGOrder::getOrderQty() {
    return order_qty;
}
void
SWGOrder::setOrderQty(SWGNumber* order_qty) {
    this->order_qty = order_qty;
    this->m_order_qty_isSet = true;
}

double
SWGOrder::getPrice() {
    return price;
}
void
SWGOrder::setPrice(double price) {
    this->price = price;
    this->m_price_isSet = true;
}

SWGNumber*
SWGOrder::getDisplayQty() {
    return display_qty;
}
void
SWGOrder::setDisplayQty(SWGNumber* display_qty) {
    this->display_qty = display_qty;
    this->m_display_qty_isSet = true;
}

double
SWGOrder::getStopPx() {
    return stop_px;
}
void
SWGOrder::setStopPx(double stop_px) {
    this->stop_px = stop_px;
    this->m_stop_px_isSet = true;
}

double
SWGOrder::getPegOffsetValue() {
    return peg_offset_value;
}
void
SWGOrder::setPegOffsetValue(double peg_offset_value) {
    this->peg_offset_value = peg_offset_value;
    this->m_peg_offset_value_isSet = true;
}

QString*
SWGOrder::getPegPriceType() {
    return peg_price_type;
}
void
SWGOrder::setPegPriceType(QString* peg_price_type) {
    this->peg_price_type = peg_price_type;
    this->m_peg_price_type_isSet = true;
}

QString*
SWGOrder::getCurrency() {
    return currency;
}
void
SWGOrder::setCurrency(QString* currency) {
    this->currency = currency;
    this->m_currency_isSet = true;
}

QString*
SWGOrder::getSettlCurrency() {
    return settl_currency;
}
void
SWGOrder::setSettlCurrency(QString* settl_currency) {
    this->settl_currency = settl_currency;
    this->m_settl_currency_isSet = true;
}

QString*
SWGOrder::getOrdType() {
    return ord_type;
}
void
SWGOrder::setOrdType(QString* ord_type) {
    this->ord_type = ord_type;
    this->m_ord_type_isSet = true;
}

QString*
SWGOrder::getTimeInForce() {
    return time_in_force;
}
void
SWGOrder::setTimeInForce(QString* time_in_force) {
    this->time_in_force = time_in_force;
    this->m_time_in_force_isSet = true;
}

QString*
SWGOrder::getExecInst() {
    return exec_inst;
}
void
SWGOrder::setExecInst(QString* exec_inst) {
    this->exec_inst = exec_inst;
    this->m_exec_inst_isSet = true;
}

QString*
SWGOrder::getContingencyType() {
    return contingency_type;
}
void
SWGOrder::setContingencyType(QString* contingency_type) {
    this->contingency_type = contingency_type;
    this->m_contingency_type_isSet = true;
}

QString*
SWGOrder::getExDestination() {
    return ex_destination;
}
void
SWGOrder::setExDestination(QString* ex_destination) {
    this->ex_destination = ex_destination;
    this->m_ex_destination_isSet = true;
}

QString*
SWGOrder::getOrdStatus() {
    return ord_status;
}
void
SWGOrder::setOrdStatus(QString* ord_status) {
    this->ord_status = ord_status;
    this->m_ord_status_isSet = true;
}

QString*
SWGOrder::getTriggered() {
    return triggered;
}
void
SWGOrder::setTriggered(QString* triggered) {
    this->triggered = triggered;
    this->m_triggered_isSet = true;
}

bool
SWGOrder::isWorkingIndicator() {
    return working_indicator;
}
void
SWGOrder::setWorkingIndicator(bool working_indicator) {
    this->working_indicator = working_indicator;
    this->m_working_indicator_isSet = true;
}

QString*
SWGOrder::getOrdRejReason() {
    return ord_rej_reason;
}
void
SWGOrder::setOrdRejReason(QString* ord_rej_reason) {
    this->ord_rej_reason = ord_rej_reason;
    this->m_ord_rej_reason_isSet = true;
}

double
SWGOrder::getSimpleLeavesQty() {
    return simple_leaves_qty;
}
void
SWGOrder::setSimpleLeavesQty(double simple_leaves_qty) {
    this->simple_leaves_qty = simple_leaves_qty;
    this->m_simple_leaves_qty_isSet = true;
}

SWGNumber*
SWGOrder::getLeavesQty() {
    return leaves_qty;
}
void
SWGOrder::setLeavesQty(SWGNumber* leaves_qty) {
    this->leaves_qty = leaves_qty;
    this->m_leaves_qty_isSet = true;
}

double
SWGOrder::getSimpleCumQty() {
    return simple_cum_qty;
}
void
SWGOrder::setSimpleCumQty(double simple_cum_qty) {
    this->simple_cum_qty = simple_cum_qty;
    this->m_simple_cum_qty_isSet = true;
}

SWGNumber*
SWGOrder::getCumQty() {
    return cum_qty;
}
void
SWGOrder::setCumQty(SWGNumber* cum_qty) {
    this->cum_qty = cum_qty;
    this->m_cum_qty_isSet = true;
}

double
SWGOrder::getAvgPx() {
    return avg_px;
}
void
SWGOrder::setAvgPx(double avg_px) {
    this->avg_px = avg_px;
    this->m_avg_px_isSet = true;
}

QString*
SWGOrder::getMultiLegReportingType() {
    return multi_leg_reporting_type;
}
void
SWGOrder::setMultiLegReportingType(QString* multi_leg_reporting_type) {
    this->multi_leg_reporting_type = multi_leg_reporting_type;
    this->m_multi_leg_reporting_type_isSet = true;
}

QString*
SWGOrder::getText() {
    return text;
}
void
SWGOrder::setText(QString* text) {
    this->text = text;
    this->m_text_isSet = true;
}

QDateTime*
SWGOrder::getTransactTime() {
    return transact_time;
}
void
SWGOrder::setTransactTime(QDateTime* transact_time) {
    this->transact_time = transact_time;
    this->m_transact_time_isSet = true;
}

QDateTime*
SWGOrder::getTimestamp() {
    return timestamp;
}
void
SWGOrder::setTimestamp(QDateTime* timestamp) {
    this->timestamp = timestamp;
    this->m_timestamp_isSet = true;
}


bool
SWGOrder::isSet(){
    bool isObjectUpdated = false;
    do{
        if(order_id != nullptr && *order_id != QString("")){ isObjectUpdated = true; break;}
        if(cl_ord_id != nullptr && *cl_ord_id != QString("")){ isObjectUpdated = true; break;}
        if(cl_ord_link_id != nullptr && *cl_ord_link_id != QString("")){ isObjectUpdated = true; break;}
        if(account != nullptr && account->isSet()){ isObjectUpdated = true; break;}
        if(symbol != nullptr && *symbol != QString("")){ isObjectUpdated = true; break;}
        if(side != nullptr && *side != QString("")){ isObjectUpdated = true; break;}
        if(m_simple_order_qty_isSet){ isObjectUpdated = true; break;}
        if(order_qty != nullptr && order_qty->isSet()){ isObjectUpdated = true; break;}
        if(m_price_isSet){ isObjectUpdated = true; break;}
        if(display_qty != nullptr && display_qty->isSet()){ isObjectUpdated = true; break;}
        if(m_stop_px_isSet){ isObjectUpdated = true; break;}
        if(m_peg_offset_value_isSet){ isObjectUpdated = true; break;}
        if(peg_price_type != nullptr && *peg_price_type != QString("")){ isObjectUpdated = true; break;}
        if(currency != nullptr && *currency != QString("")){ isObjectUpdated = true; break;}
        if(settl_currency != nullptr && *settl_currency != QString("")){ isObjectUpdated = true; break;}
        if(ord_type != nullptr && *ord_type != QString("")){ isObjectUpdated = true; break;}
        if(time_in_force != nullptr && *time_in_force != QString("")){ isObjectUpdated = true; break;}
        if(exec_inst != nullptr && *exec_inst != QString("")){ isObjectUpdated = true; break;}
        if(contingency_type != nullptr && *contingency_type != QString("")){ isObjectUpdated = true; break;}
        if(ex_destination != nullptr && *ex_destination != QString("")){ isObjectUpdated = true; break;}
        if(ord_status != nullptr && *ord_status != QString("")){ isObjectUpdated = true; break;}
        if(triggered != nullptr && *triggered != QString("")){ isObjectUpdated = true; break;}
        if(m_working_indicator_isSet){ isObjectUpdated = true; break;}
        if(ord_rej_reason != nullptr && *ord_rej_reason != QString("")){ isObjectUpdated = true; break;}
        if(m_simple_leaves_qty_isSet){ isObjectUpdated = true; break;}
        if(leaves_qty != nullptr && leaves_qty->isSet()){ isObjectUpdated = true; break;}
        if(m_simple_cum_qty_isSet){ isObjectUpdated = true; break;}
        if(cum_qty != nullptr && cum_qty->isSet()){ isObjectUpdated = true; break;}
        if(m_avg_px_isSet){ isObjectUpdated = true; break;}
        if(multi_leg_reporting_type != nullptr && *multi_leg_reporting_type != QString("")){ isObjectUpdated = true; break;}
        if(text != nullptr && *text != QString("")){ isObjectUpdated = true; break;}
        
        
    }while(false);
    return isObjectUpdated;
}
}

