/*R_IOPORT_PinWrite（）用于设置IO高低电平
 *传入参数有三个
 *参数一：
    *固定为&g_ioport_ctrl
 *参数二：
    *指定IO口，比如我们需要控制P502，就输入BSP_IO_PORT_05_PIN_02。如果是控制P411，就输入BSP_IO_PORT_04_PIN_11
 *参数三：
    *指定输出的电平，BSP_IO_LEVEL_LOW输出低电平，BSP_IO_LEVEL_HIGH输出高电平
 */
/*R_BSP_SoftwareDelay（）用于设置延时时间
 *参数一：
    *设置延时时间长短，是32bit的数据，所以只能输入0-4294967296（正常人应该都不会超过。。）
 *参数二：
    *设置延时单位，BSP_DELAY_UNITS_SECONDS表示单位为秒，BSP_DELAY_UNITS_MILLISECONDS表示ms，BSP_DELAY_UNITS_MICROSECONDS是us
 */

while (1)
{
    //将P501设置为低电平,P502设置为高电平。
    R_IOPORT_PinWrite (&g_ioport_ctrl, BSP_IO_PORT_05_PIN_01, BSP_IO_LEVEL_LOW);
    R_IOPORT_PinWrite (&g_ioport_ctrl, BSP_IO_PORT_05_PIN_02, BSP_IO_LEVEL_HIGH);
    //延时0.5s
    R_BSP_SoftwareDelay (500, BSP_DELAY_UNITS_MILLISECONDS);
    //将P501设置为高电平,P502设置为低电平。
    R_IOPORT_PinWrite (&g_ioport_ctrl, BSP_IO_PORT_05_PIN_01, BSP_IO_LEVEL_HIGH);
    R_IOPORT_PinWrite (&g_ioport_ctrl, BSP_IO_PORT_05_PIN_02, BSP_IO_LEVEL_LOW);
    //延时0.5s
    R_BSP_SoftwareDelay (500, BSP_DELAY_UNITS_MILLISECONDS);
}
