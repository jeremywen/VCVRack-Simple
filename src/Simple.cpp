#include "Simple.hpp"

#include "ClockWidget.hpp"

rack::Plugin* plugin;

void init(rack::Plugin *p)
{
	plugin = p;
	plugin->slug = "IO-Simple";

#ifdef VERSION
	p->version = TOSTRING(VERSION);
#endif
	p->addModel(rack::createModel<ButtonTriggerWidget>("Simple", "IO-ButtonTrigger", "Button Trigger", rack::CLOCK_TAG));
	p->addModel(rack::createModel<ClockDividerWidget>("Simple", "IO-ClockDivider", "Clock Divider", rack::CLOCK_TAG));
	p->addModel(rack::createModel<RecorderWidget>("Simple", "IO-Recorder", "Recorder", rack::CLOCK_TAG));
//	p->addModel(rack::createModel<ClockWidget>("IO-Simple", "IO-Clock", "Clock"));
}
