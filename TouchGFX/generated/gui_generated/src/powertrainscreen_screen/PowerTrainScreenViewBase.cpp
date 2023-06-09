/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/powertrainscreen_screen/PowerTrainScreenViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>

PowerTrainScreenViewBase::PowerTrainScreenViewBase() :
    frameCountUpdatePowerTrainDataInterval(0)
{
    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    background.setPosition(0, 0, 480, 272);
    background.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    add(background);

    tbRPM.setPosition(10, 10, 85, 20);
    tbRPM.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    tbRPM.setLinespacing(0);
    Unicode::snprintf(tbRPMBuffer, TBRPM_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_RUJ6).getText());
    tbRPM.setWildcard(tbRPMBuffer);
    tbRPM.setTypedText(touchgfx::TypedText(T___SINGLEUSE_O2N1));
    add(tbRPM);

    tbTPS.setPosition(10, 30, 85, 20);
    tbTPS.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    tbTPS.setLinespacing(0);
    Unicode::snprintf(tbTPSBuffer, TBTPS_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_XFUA).getText());
    tbTPS.setWildcard(tbTPSBuffer);
    tbTPS.setTypedText(touchgfx::TypedText(T___SINGLEUSE_B9QI));
    add(tbTPS);

    tbIAT.setPosition(10, 50, 78, 20);
    tbIAT.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    tbIAT.setLinespacing(0);
    Unicode::snprintf(tbIATBuffer, TBIAT_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_Z9O1).getText());
    tbIAT.setWildcard(tbIATBuffer);
    tbIAT.setTypedText(touchgfx::TypedText(T___SINGLEUSE_BY52));
    add(tbIAT);

    tbMAP.setPosition(10, 70, 90, 20);
    tbMAP.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    tbMAP.setLinespacing(0);
    Unicode::snprintf(tbMAPBuffer, TBMAP_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_SMC0).getText());
    tbMAP.setWildcard(tbMAPBuffer);
    tbMAP.setTypedText(touchgfx::TypedText(T___SINGLEUSE_UDSF));
    add(tbMAP);

    tbINJPW.setPosition(10, 90, 140, 20);
    tbINJPW.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    tbINJPW.setLinespacing(0);
    Unicode::snprintf(tbINJPWBuffer, TBINJPW_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_5ELO).getText());
    tbINJPW.setWildcard(tbINJPWBuffer);
    tbINJPW.setTypedText(touchgfx::TypedText(T___SINGLEUSE_BXVC));
    add(tbINJPW);

    tbVSPD.setPosition(10, 110, 120, 20);
    tbVSPD.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    tbVSPD.setLinespacing(0);
    Unicode::snprintf(tbVSPDBuffer, TBVSPD_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_GKOR).getText());
    tbVSPD.setWildcard(tbVSPDBuffer);
    tbVSPD.setTypedText(touchgfx::TypedText(T___SINGLEUSE_0OCE));
    add(tbVSPD);

    tbBaro.setPosition(10, 130, 100, 20);
    tbBaro.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    tbBaro.setLinespacing(0);
    Unicode::snprintf(tbBaroBuffer, TBBARO_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_0S8I).getText());
    tbBaro.setWildcard(tbBaroBuffer);
    tbBaro.setTypedText(touchgfx::TypedText(T___SINGLEUSE_GDWZ));
    add(tbBaro);

    tbOilTemp.setPosition(10, 150, 130, 20);
    tbOilTemp.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    tbOilTemp.setLinespacing(0);
    Unicode::snprintf(tbOilTempBuffer, TBOILTEMP_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_BDOZ).getText());
    tbOilTemp.setWildcard(tbOilTempBuffer);
    tbOilTemp.setTypedText(touchgfx::TypedText(T___SINGLEUSE_V8PO));
    add(tbOilTemp);

    tbOilPres.setPosition(10, 170, 130, 20);
    tbOilPres.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    tbOilPres.setLinespacing(0);
    Unicode::snprintf(tbOilPresBuffer, TBOILPRES_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_USE6).getText());
    tbOilPres.setWildcard(tbOilPresBuffer);
    tbOilPres.setTypedText(touchgfx::TypedText(T___SINGLEUSE_60H9));
    add(tbOilPres);

    tbFuelPres.setPosition(10, 190, 150, 20);
    tbFuelPres.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    tbFuelPres.setLinespacing(0);
    Unicode::snprintf(tbFuelPresBuffer, TBFUELPRES_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_6JUK).getText());
    tbFuelPres.setWildcard(tbFuelPresBuffer);
    tbFuelPres.setTypedText(touchgfx::TypedText(T___SINGLEUSE_MRBL));
    add(tbFuelPres);

    tbFuelTemp.setPosition(10, 210, 140, 20);
    tbFuelTemp.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    tbFuelTemp.setLinespacing(0);
    Unicode::snprintf(tbFuelTempBuffer, TBFUELTEMP_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_ZNAS).getText());
    tbFuelTemp.setWildcard(tbFuelTempBuffer);
    tbFuelTemp.setTypedText(touchgfx::TypedText(T___SINGLEUSE_YB8O));
    add(tbFuelTemp);

    tbIGNANG.setPosition(160, 10, 130, 20);
    tbIGNANG.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    tbIGNANG.setLinespacing(0);
    Unicode::snprintf(tbIGNANGBuffer, TBIGNANG_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_Z7MX).getText());
    tbIGNANG.setWildcard(tbIGNANGBuffer);
    tbIGNANG.setTypedText(touchgfx::TypedText(T___SINGLEUSE_YNQ7));
    add(tbIGNANG);

    tbDwell.setPosition(160, 30, 110, 20);
    tbDwell.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    tbDwell.setLinespacing(0);
    Unicode::snprintf(tbDwellBuffer, TBDWELL_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_CO7Y).getText());
    tbDwell.setWildcard(tbDwellBuffer);
    tbDwell.setTypedText(touchgfx::TypedText(T___SINGLEUSE_ANIQ));
    add(tbDwell);

    tbLambda.setPosition(160, 50, 130, 20);
    tbLambda.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    tbLambda.setLinespacing(0);
    Unicode::snprintf(tbLambdaBuffer, TBLAMBDA_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_QXLL).getText());
    tbLambda.setWildcard(tbLambdaBuffer);
    tbLambda.setTypedText(touchgfx::TypedText(T___SINGLEUSE_90MI));
    add(tbLambda);

    tbLambCorr.setPosition(160, 70, 140, 20);
    tbLambCorr.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    tbLambCorr.setLinespacing(0);
    Unicode::snprintf(tbLambCorrBuffer, TBLAMBCORR_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_E9AS).getText());
    tbLambCorr.setWildcard(tbLambCorrBuffer);
    tbLambCorr.setTypedText(touchgfx::TypedText(T___SINGLEUSE_OEZA));
    add(tbLambCorr);

    tbEGT1.setPosition(160, 90, 100, 20);
    tbEGT1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    tbEGT1.setLinespacing(0);
    Unicode::snprintf(tbEGT1Buffer, TBEGT1_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_BHGP).getText());
    tbEGT1.setWildcard(tbEGT1Buffer);
    tbEGT1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_ZYKH));
    add(tbEGT1);

    tbEGT2.setPosition(160, 110, 100, 20);
    tbEGT2.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    tbEGT2.setLinespacing(0);
    Unicode::snprintf(tbEGT2Buffer, TBEGT2_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_M2FN).getText());
    tbEGT2.setWildcard(tbEGT2Buffer);
    tbEGT2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_6JGL));
    add(tbEGT2);

    tbEGT3.setPosition(160, 130, 100, 20);
    tbEGT3.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    tbEGT3.setLinespacing(0);
    Unicode::snprintf(tbEGT3Buffer, TBEGT3_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_XAXJ).getText());
    tbEGT3.setWildcard(tbEGT3Buffer);
    tbEGT3.setTypedText(touchgfx::TypedText(T___SINGLEUSE_XYPD));
    add(tbEGT3);

    tbEGT4.setPosition(160, 150, 100, 20);
    tbEGT4.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    tbEGT4.setLinespacing(0);
    Unicode::snprintf(tbEGT4Buffer, TBEGT4_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_PXRL).getText());
    tbEGT4.setWildcard(tbEGT4Buffer);
    tbEGT4.setTypedText(touchgfx::TypedText(T___SINGLEUSE_4HX2));
    add(tbEGT4);

    tbGear.setPosition(160, 170, 130, 20);
    tbGear.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    tbGear.setLinespacing(0);
    Unicode::snprintf(tbGearBuffer, TBGEAR_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_ADHJ).getText());
    tbGear.setWildcard(tbGearBuffer);
    tbGear.setTypedText(touchgfx::TypedText(T___SINGLEUSE_EOKT));
    add(tbGear);

    tbECUTemp.setPosition(160, 190, 130, 20);
    tbECUTemp.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    tbECUTemp.setLinespacing(0);
    Unicode::snprintf(tbECUTempBuffer, TBECUTEMP_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_A1CB).getText());
    tbECUTemp.setWildcard(tbECUTempBuffer);
    tbECUTemp.setTypedText(touchgfx::TypedText(T___SINGLEUSE_DKP8));
    add(tbECUTemp);

    tbBatt.setPosition(160, 210, 130, 20);
    tbBatt.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    tbBatt.setLinespacing(0);
    Unicode::snprintf(tbBattBuffer, TBBATT_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_HMSA).getText());
    tbBatt.setWildcard(tbBattBuffer);
    tbBatt.setTypedText(touchgfx::TypedText(T___SINGLEUSE_BFSU));
    add(tbBatt);

    tbCoolantTemp.setPosition(340, 10, 100, 20);
    tbCoolantTemp.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    tbCoolantTemp.setLinespacing(0);
    Unicode::snprintf(tbCoolantTempBuffer, TBCOOLANTTEMP_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_U1C7).getText());
    tbCoolantTemp.setWildcard(tbCoolantTempBuffer);
    tbCoolantTemp.setTypedText(touchgfx::TypedText(T___SINGLEUSE_H324));
    add(tbCoolantTemp);
}

PowerTrainScreenViewBase::~PowerTrainScreenViewBase()
{

}

void PowerTrainScreenViewBase::setupScreen()
{

}

void PowerTrainScreenViewBase::handleKeyEvent(uint8_t key)
{
    if(0 == key)
    {
        //ChangeToSuspensionScreen
        //When hardware button 0 clicked change screen to SuspensionScreen
        //Go to SuspensionScreen with no screen transition
        application().gotoSuspensionScreenScreenNoTransition();
    
    }
}

void PowerTrainScreenViewBase::handleTickEvent()
{
    frameCountUpdatePowerTrainDataInterval++;
    if(frameCountUpdatePowerTrainDataInterval == TICK_UPDATEPOWERTRAINDATA_INTERVAL)
    {
        //UpdatePowerTrainData
        //When every N tick call virtual function
        //Call UpdatePowerTrainScreen
        UpdatePowerTrainScreen();
        frameCountUpdatePowerTrainDataInterval = 0;
    }
}
