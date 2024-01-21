params ["_dog", "_tone"];

private _sound = format ["a3\sounds_f\ambient\animals\%1", _tone select 0];
private _pitch = _tone select 1;

if (_dog getVariable ["k9IsBarking", false] isEqualTo false) then {
	_dog setVariable ["k9IsBarking", true, true];
	playSound3D [_sound, _dog, false, getPosASL _dog, 3, _pitch, 250];
	sleep 5;
	_dog setVariable ["k9IsBarking", true, true];
};