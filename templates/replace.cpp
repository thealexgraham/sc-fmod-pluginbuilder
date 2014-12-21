### ITERATE_START ###
	%%%PARAM_ENUMS%%%
	FMOD_OTHER_PARAM_^^param_name^^,
### ITERATE_END ###

### SINGLE_START ###
%%%TOP_ROUTE%%%
define TOP_ROUTE "/^synth_name^"
### SINGLE_END ###

### ITERATE_START ###
	%%%STATIC_PARAM_DESC%%%
static FMOD_DSP_PARAMETER_DESC p_^param_name^;
### ITERATE_END ###

### ITERATE_START ###
	%%%PARAM_DESC_POINTERS%%%
	&p_^param_name^, 
### ITERATE_END ###

### SINGLE_START ###
	%%%DESC_NAME%%%
    "SuperCollider ^synth_name^",
### SINGLE_END ###

### ITERATE_START ###
	%%%PARAM_DESCRIPTIONS%%%
	FMOD_DSP_INIT_PARAMDESC_FLOAT(p_^param_name^, "^param_name^", "f", "Adjusts ^param_name^", ^min^, ^max^, ^default^);
### ITERATE_END ###

### ITERATE_START ###
	%%%PARAM_CLASS_DECS%%%
	void set^^param_name^(float); 
	float ^param_name^() const { return m_^param_name^; }  
### ITERATE_END ###

### ITERATE_START ###
	%%%PARAM_PRIVATE_DECS%%%
	float m_^param_name^; 
### ITERATE_END ###

### ITERATE_START ###
%%%PARAM_CLASS_FUNCTIONS%%%
void FMODOtherState::set^^param_name^(float value) { 
	m_^param_name^ = value;
}
### ITERATE_END ###

### ITERATE_START ###
	%%%SET_PARAM_FLOAT%%%
	case FMOD_OTHER_PARAM_^^param_name^^:
		state->set^^param_name^(value);
		state->sendParam("/^param_name^", value);
		return FMOD_OK;
### ITERATE_END ###

### ITERATE_START ###
	%%%GET_PARAM_FLOAT%%%
	case FMOD_OTHER_PARAM_^^param_name^^:
		*value = state->^param_name^();
		if (valuestr) sprintf(valuestr, "% fl", state->^param_name^());
		return FMOD_OK;
### ITERATE_END ###