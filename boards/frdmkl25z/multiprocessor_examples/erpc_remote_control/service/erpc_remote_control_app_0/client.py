#
# Generated by erpcgen 1.4.0 on Fri Jan 20 08:45:15 2017.
#
# AUTOGENERATED - DO NOT EDIT
#

import erpc
from . import common, interface

# Client for remote_control_app_0
class remote_control_app_0Client(interface.Iremote_control_app_0):
    def __init__(self, manager):
        super(remote_control_app_0Client, self).__init__()
        self._clientManager = manager

    def get_board_config(self, config):
        assert type(config) is erpc.Reference, "out parameter must be a Reference object"

        # Build remote function invocation message.
        request = self._clientManager.create_request()
        codec = request.codec
        codec.start_write_message(erpc.codec.MessageInfo(
                type=erpc.codec.MessageType.kInvocationMessage,
                service=self.SERVICE_ID,
                request=self.GET_BOARD_CONFIG_ID,
                sequence=request.sequence))
        codec.end_write_message()

        # Send request and process reply.
        self._clientManager.perform_request(request)
        config.value = common.BoardConfig()._read(codec)
        codec.end_read_message()

    def get_adc_config(self, config):
        assert type(config) is erpc.Reference, "out parameter must be a Reference object"

        # Build remote function invocation message.
        request = self._clientManager.create_request()
        codec = request.codec
        codec.start_write_message(erpc.codec.MessageInfo(
                type=erpc.codec.MessageType.kInvocationMessage,
                service=self.SERVICE_ID,
                request=self.GET_ADC_CONFIG_ID,
                sequence=request.sequence))
        codec.end_write_message()

        # Send request and process reply.
        self._clientManager.perform_request(request)
        config.value = common.AdcConfig()._read(codec)
        codec.end_read_message()

    def convert_dac_adc(self, numberToConvert, result):
        assert type(result) is erpc.Reference, "out parameter must be a Reference object"

        # Build remote function invocation message.
        request = self._clientManager.create_request()
        codec = request.codec
        codec.start_write_message(erpc.codec.MessageInfo(
                type=erpc.codec.MessageType.kInvocationMessage,
                service=self.SERVICE_ID,
                request=self.CONVERT_DAC_ADC_ID,
                sequence=request.sequence))
        if numberToConvert is None:
            raise ValueError("numberToConvert is None")
        codec.write_uint32(numberToConvert)
        codec.end_write_message()

        # Send request and process reply.
        self._clientManager.perform_request(request)
        result.value = codec.read_uint32()
        codec.end_read_message()

    def read_mag_accel(self, results, status):
        assert type(results) is erpc.Reference, "out parameter must be a Reference object"
        assert type(status) is erpc.Reference, "out parameter must be a Reference object"

        # Build remote function invocation message.
        request = self._clientManager.create_request()
        codec = request.codec
        codec.start_write_message(erpc.codec.MessageInfo(
                type=erpc.codec.MessageType.kInvocationMessage,
                service=self.SERVICE_ID,
                request=self.READ_MAG_ACCEL_ID,
                sequence=request.sequence))
        codec.end_write_message()

        # Send request and process reply.
        self._clientManager.perform_request(request)
        results.value = common.Vector()._read(codec)
        status.value = codec.read_bool()
        codec.end_read_message()

    def set_led(self, whichLed):
        # Build remote function invocation message.
        request = self._clientManager.create_request(isOneway=True)
        codec = request.codec
        codec.start_write_message(erpc.codec.MessageInfo(
                type=erpc.codec.MessageType.kOnewayMessage,
                service=self.SERVICE_ID,
                request=self.SET_LED_ID,
                sequence=request.sequence))
        if whichLed is None:
            raise ValueError("whichLed is None")
        codec.write_uint8(whichLed)
        codec.end_write_message()

        # Send request.
        self._clientManager.perform_request(request)



