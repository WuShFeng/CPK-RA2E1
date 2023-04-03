while (1)
{
    R_IOPORT_PinRead (&g_ioport_ctrl, BSP_IO_PORT_00_PIN_04, &S1);
    if (S1 == BSP_IO_LEVEL_LOW)
    {
        R_BSP_SoftwareDelay (20, BSP_DELAY_UNITS_MILLISECONDS);
        R_IOPORT_PinRead (&g_ioport_ctrl, BSP_IO_PORT_00_PIN_04, &S1);
        while (S1 == BSP_IO_LEVEL_LOW)
        {
            R_BSP_SoftwareDelay (10, BSP_DELAY_UNITS_MILLISECONDS);
            R_IOPORT_PinRead (&g_ioport_ctrl, BSP_IO_PORT_00_PIN_04, &S1);
        }
        i = !i;
    }
    R_IOPORT_PinWrite (&g_ioport_ctrl, BSP_IO_PORT_05_PIN_01, i);
    R_IOPORT_PinWrite (&g_ioport_ctrl, BSP_IO_PORT_05_PIN_02, !i);
}
