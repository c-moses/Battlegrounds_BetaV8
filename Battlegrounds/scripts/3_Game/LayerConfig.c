class LayerConfig
{
    string LayerMode; // "Layer1", "Layer2", "Layer3", etc
    float CaptureTime;
}

class LayerConfigLoader
{
    static bool LoadConfig(string filename, out LayerConfig config)
    {
        if (FileExist(filename))
        {
            JsonFileLoader<LayerConfig>.JsonLoadFile(filename, config);
            return true;
        }
        return false;
    }

    static void CreateDefaultConfig(string filename)
    {
        LayerConfig config = new LayerConfig();
        config.LayerMode = "Layer1";
        config.CaptureTime = 480.0;
        JsonFileLoader<LayerConfig>.JsonSaveFile(filename, config);
    }
}