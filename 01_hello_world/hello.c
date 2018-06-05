/* hello.c generated by valac 0.40.6, the Vala compiler
 * generated from hello.vala, do not modify */



#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


#define DEMO_TYPE_HELLO_WORLD (demo_hello_world_get_type ())
#define DEMO_HELLO_WORLD(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DEMO_TYPE_HELLO_WORLD, DemoHelloWorld))
#define DEMO_HELLO_WORLD_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DEMO_TYPE_HELLO_WORLD, DemoHelloWorldClass))
#define DEMO_IS_HELLO_WORLD(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DEMO_TYPE_HELLO_WORLD))
#define DEMO_IS_HELLO_WORLD_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DEMO_TYPE_HELLO_WORLD))
#define DEMO_HELLO_WORLD_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DEMO_TYPE_HELLO_WORLD, DemoHelloWorldClass))

typedef struct _DemoHelloWorld DemoHelloWorld;
typedef struct _DemoHelloWorldClass DemoHelloWorldClass;
typedef struct _DemoHelloWorldPrivate DemoHelloWorldPrivate;
enum  {
	DEMO_HELLO_WORLD_0_PROPERTY,
	DEMO_HELLO_WORLD_NUM_PROPERTIES
};
static GParamSpec* demo_hello_world_properties[DEMO_HELLO_WORLD_NUM_PROPERTIES];

struct _DemoHelloWorld {
	GObject parent_instance;
	DemoHelloWorldPrivate * priv;
};

struct _DemoHelloWorldClass {
	GObjectClass parent_class;
};


static gpointer demo_hello_world_parent_class = NULL;

GType demo_hello_world_get_type (void) G_GNUC_CONST;
gint demo_hello_world_main (gchar** args,
                            int args_length1);
DemoHelloWorld* demo_hello_world_new (void);
DemoHelloWorld* demo_hello_world_construct (GType object_type);


gint
demo_hello_world_main (gchar** args,
                       int args_length1)
{
	gint result = 0;
	FILE* _tmp0_;
	_tmp0_ = stdout;
	fprintf (_tmp0_, "Hello, World\n");
	result = 0;
	return result;
}


int
main (int argc,
      char ** argv)
{
	return demo_hello_world_main (argv, argc);
}


DemoHelloWorld*
demo_hello_world_construct (GType object_type)
{
	DemoHelloWorld * self = NULL;
	self = (DemoHelloWorld*) g_object_new (object_type, NULL);
	return self;
}


DemoHelloWorld*
demo_hello_world_new (void)
{
	return demo_hello_world_construct (DEMO_TYPE_HELLO_WORLD);
}


static void
demo_hello_world_class_init (DemoHelloWorldClass * klass)
{
	demo_hello_world_parent_class = g_type_class_peek_parent (klass);
}


static void
demo_hello_world_instance_init (DemoHelloWorld * self)
{
}


GType
demo_hello_world_get_type (void)
{
	static volatile gsize demo_hello_world_type_id__volatile = 0;
	if (g_once_init_enter (&demo_hello_world_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (DemoHelloWorldClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) demo_hello_world_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (DemoHelloWorld), 0, (GInstanceInitFunc) demo_hello_world_instance_init, NULL };
		GType demo_hello_world_type_id;
		demo_hello_world_type_id = g_type_register_static (G_TYPE_OBJECT, "DemoHelloWorld", &g_define_type_info, 0);
		g_once_init_leave (&demo_hello_world_type_id__volatile, demo_hello_world_type_id);
	}
	return demo_hello_world_type_id__volatile;
}



